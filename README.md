# riscv32-pipelined-cpu

**RV32I 5-Stage Pipelined Processor** — a modular SystemVerilog RTL implementation of a subset of the RISC-V RV32I base instruction set, built on a classic 5-stage pipeline with Harvard memory architecture.

> **Simulation-only design.** Not yet synthesised or targeted at a specific FPGA. Intended for architectural study, experimentation, and as a teaching reference for pipelined processor design.

---

## Pipeline Architecture

The CPU implements the classic 5-stage RISC pipeline from Patterson & Hennessy:

| Stage | Purpose |
|-------|---------|
| **IF** | Instruction Fetch — PC + instruction memory |
| **ID** | Instruction Decode — decoder, register file read, immediate generation, main control |
| **EX** | Execute — ALU, ALU control, branch unit, address calculation, forwarding muxes |
| **MEM** | Memory access — data memory (load/store) |
| **WB** | Writeback — result selection mux (ALU result / memory data / PC+4) |

```
        ┌──────┐   ┌──────┐   ┌──────┐   ┌──────┐   ┌──────┐
  PC ──▶│  IF  │──▶│  ID  │──▶│  EX  │──▶│ MEM  │──▶│  WB  │──▶ RegFile
        └──────┘   └──────┘   └──────┘   └──────┘   └──────┘
        ┌──────┐   ┌──────┐   ┌──────┐   ┌──────┐
        │IF/ID │──▶│ID/EX │──▶│EX/MEM│──▶│MEM/WB│
        └──────┘   └──────┘   └──────┘   └──────┘
```

Pipeline registers isolate each stage and carry both data and control signals forward. The `hazard_unit` manages forwarding, stalling, and flushing to resolve data and control hazards.

---

## Hazard Handling

Three hazard mechanisms work together:

| Hazard Type | Mechanism | Implementation |
|---|---|---|
| **ALU data hazard** | Forwarding | EX/MEM or MEM/WB result forwarded to ALU inputs via 3:1 muxes |
| **Load-use hazard** | Stall + forward | `hazard_unit` detects `LW` with dependent consumer, stalls IF/ID and PC for one cycle, then forwards |
| **Branch hazard** | Flush | When branch is taken, the IF/ID register is flushed (control hazard — 1 cycle penalty) |

```
                  Forwarding paths
                  ────────────────

     ID/EX ──────▶ ALU ◀──────── EX/MEM
                      ▲              │
                      │              │
                      └──── MEM/WB ──┘
```

The forwarding unit checks register addresses (skipping `x0`) and prioritises EX/MEM over MEM/WB for the most recent result.

---

## Supported Instructions

The processor implements a clean subset of RV32I covering all major instruction formats:

### R-Type (Register–Register)
```
ADD   SUB   AND   OR   SLT
```

### I-Type (Immediate / Load)
```
ADDI   ANDI   ORI   LW
```

### S-Type (Store)
```
SW
```

### B-Type (Branch)
```
BEQ   BNE
```

### U-Type
```
LUI
```

### J-Type
```
JAL
```

---

## Project Structure

```
rtl/
├── cpu_top.sv                     # Top-level integration of all stages
├── pkg/
│   ├── cpu_params.sv              # XLEN, register count, memory sizes, reset vector
│   ├── riscv_pkg.sv              # Opcodes, funct3/funct7 constants, alu_op_t enum
│   └── pipeline_pkg.sv           # imm_type_t, result_src_t, forward_sel_t, alu_op_src_t
├── fetch/
│   ├── pc.sv                     # Program counter register (with write-enable for stalls)
│   ├── pc_mux.sv                 # PC source select: PC+4 / branch target / jump target
│   └── imem.sv                   # Instruction memory (1024 words, read-combinational)
├── decode/
│   ├── decoder.sv                # Instruction field extraction (opcode, rd, rs1, rs2, etc.)
│   ├── register_file.sv          # 32×32 register file, x0 hardwired to 0
│   └── immediate_generator.sv    # Sign-extends immediate for I/S/B/U/J formats
├── execute/
│   ├── alu.sv                    # Arithmetic/logic unit: ADD, SUB, AND, OR, SLT, PASS
│   ├── alu_control.sv            # Decodes ALUOp + funct3/funct7 into alu_op_t
│   ├── branch_unit.sv            # Evaluates branch conditions (BEQ/BNE)
│   ├── address_calculator.sv     # Computes branch target = PC + immediate
│   └── forwarding_unit.sv        # Forwarding select logic (standalone; not currently used)
├── control/
│   ├── main_control.sv           # Decodes opcode → control signals (RegWrite, MemRead, etc.)
│   └── hazard_unit.sv           # Forwarding, stall, and flush logic (currently in use)
├── memory/
│   └── data_memory.sv            # Data memory (1024 words, sequential read/write)
├── pipeline/
│   ├── if_id_reg.sv              # IF/ID pipeline register
│   ├── id_ex_reg.sv              # ID/EX pipeline register (carries control signals)
│   ├── ex_mem_reg.sv             # EX/MEM pipeline register
│   └── mem_wb_reg.sv             # MEM/WB pipeline register
├── writeback/
│   └── wb_mux.sv                 # Result source mux: ALU / memory / PC+4
└── utils/
    ├── mux2.sv                   # 2:1 multiplexer (parameterised width)
    ├── mux3.sv                   # 3:1 multiplexer (parameterised width)
    └── pipeline_reg.sv           # Generic pipeline register with stall/flush

tb/
├── block_tests/                   # 22 block-level testbenches
│   ├── fetch/          pc_tb.sv, pc_mux_tb.sv, imem_tb.sv
│   ├── decode/         decoder_tb.sv, register_file_tb.sv, immediate_generator_tb.sv
│   ├── execute/        alu_tb.sv, alu_control_tb.sv, branch_unit_tb.sv,
│   │                   address_calculator_tb.sv, forwarding_unit_tb.sv
│   ├── control/        main_control_tb.sv
│   ├── memory/         data_memory_tb.sv
│   ├── pipeline/       if_id_reg_tb.sv, id_ex_reg_tb.sv, ex_mem_reg_tb.sv, mem_wb_reg_tb.sv
│   ├── writeback/      wb_mux_tb.sv
│   └── utils/          mux2_tb.sv, mux3_tb.sv, pipeline_reg_tb.sv
│   └── cpu/            program_tb.sv          # Integration test (simple program)
├── cpu_top_tb.sv          # Alternative top-level testbench

docs/                           # Architecture diagrams and stage specifications
├── pipeline_architecture.png
├── Control_Unit/               # Control unit block diagram, signal table, specs
└── pipeline-stages/            # Per-stage specs and diagrams (IF, ID, EX, MEM, WB)

scripts/
├── run_tests.sh                # Automated test runner (runs all 22 block tests)

sim/
└── block_sim/                  # VCD waveform output directory
```

---

## Quick Start

### Prerequisites

- **Verilator 5.x** (`verilator --version`)
- **GTKWave** (for viewing `.vcd` waveforms)
- **make** (Verilator uses it internally)

### Run all block-level tests

```bash
./scripts/run_tests.sh
```

This compiles and runs all 22 individual module testbenches, printing PASS/FAIL per test.

### Run the program integration test

```bash
verilator --cc --exe --build \
    --top-module program_tb \
    tb/block_tests/cpu/program_tb.sv \
    rtl/*.sv rtl/*/*.sv rtl/*/*/*.sv

./obj_dir/Vprogram_tb
```

The program testbench loads a small test program into instruction memory:

```assembly
addi x1, x0, 5    # x1 = 5
addi x2, x0, 3    # x2 = 3
add  x3, x1, x2   # x3 = 8
nop
```

Results: `x1 = 5`, `x2 = 3`, `x3 = 8`.

### View waveforms

```bash
gtkwave sim/block_sim/cpu/program.vcd &
```

---

## Adding an Instruction

The modular design makes adding a new instruction straightforward. Here is a walkthrough for adding `XOR` (R-type, `funct3=100`, `funct7=0000000`):

| Step | File | Change |
|---|---|---|
| 1 | `rtl/pkg/riscv_pkg.sv` | Add `FUNCT3_XOR = 3'b100` parameter |
| 2 | `rtl/execute/alu.sv` | Add `ALU_XOR` to the `alu_op_t` enum and case |
| 3 | `rtl/execute/alu_control.sv` | Add `{7'b0000000, 3'b100}: alu_operation = ALU_XOR;` |
| 4 | `tb/block_tests/execute/alu_tb.sv` | Add a test case for the new operation |
| 5 | `scripts/run_tests.sh` | No change — test is auto-discovered |

For a new **instruction format** (e.g., `JALR`), additionally modify `main_control.sv` for control signals and `immediate_generator.sv` if the immediate encoding is already supported (I-type covers `JALR`).

---

## Performance

Measured against Spike (the official RISC-V ISA simulator) on the 4-instruction test program:

| Metric | This CPU | Spike (Ideal) | Notes |
|--------|----------|---------------|-------|
| CPI | 2.25 | 1.0 | Pipeline fill + flush overhead |
| Cycles (4 instr) | 9 | 4 | 5-stage pipeline with no branch prediction |
| IPC | 0.44 | 1.0 | Baseline implementation, no branch prediction |
| Pipeline Depth | 5 | 1 (in-order) | Classic scalar pipeline |

---

## Documentation

Additional design documentation lives in `docs/`:

- **Pipeline architecture diagram** — `docs/pipeline_architecture.png`
- **Per-stage specifications** — `docs/pipeline-stages/<stage>/`
- **Control unit specs and signal table** — `docs/Control_Unit/`
