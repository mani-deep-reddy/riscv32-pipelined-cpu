# RISC-V 32-bit Pipelined CPU

## Project Type

SystemVerilog RTL with Verilator simulation. No build system (Makefile) exists—use Verilator directly.

## Tool Setup

- **Simulator**: Verilator 5.x (`verilator --version`)
- **Waveform viewer**: GTKWave (for `.vcd` files)

## Key Commands

### Run pre-built test
```bash
./obj_dir/<test_name>   # e.g., ./obj_dir/Vdecoder_tb
```

### Compile and run from source
```bash
# Compile testbench with RTL
verilator --cc --exe --build \
    --top-module <tb_module> \
    tb/block_tests/<path>/<tb>.sv \
    rtl/*.sv rtl/*/*.sv rtl/*/*/*.sv

# Build (from obj_dir)
make -f obj_dir/V<tb>_tb.mk

# Run
./obj_dir/V<tb>
```

### View waveforms
```bash
gtkwave sim/block_sim/<path>/<module>.vcd &
```

## Directory Structure

| Path | Purpose |
|------|---------|
| `rtl/` | SystemVerilog RTL modules (CPU design) |
| `rtl/pkg/` | Parameter packages: `cpu_params`, `riscv_pkg`, `pipeline_pkg` |
| `rtl/fetch/` | PC, PC mux, instruction memory |
| `rtl/decode/` | Decoder, register file, immediate generator |
| `tb/block_tests/` | Block-level testbenches |
| `sim/block_sim/` | VCD waveform outputs |
| `obj_dir/` | Verilator-generated C++ (generated code, not source) |

## Package Dependencies

RTL modules must import these packages:
```systemverilog
import cpu_params::*;    // XLEN=32, REG_COUNT=32, etc.
import riscv_pkg::*;     // Opcode/funct3 constants, alu_op_t enum
import pipeline_pkg::*;  // imm_type_t, result_src_t, forward_sel_t enums
```

## Architecture Notes

- 5-stage pipeline: IF → ID → EX → MEM → WB
- Pipeline registers in `rtl/pipeline/` (if_id_reg, id_ex_reg, ex_mem_reg, mem_wb_reg)
- Supported RV32I subset: R-type (ADD/SUB/AND/OR/SLT), I-type (ADDI/ANDI/ORI/LW), S-type (SW), B-type (BEQ/BNE), U-type (LUI), J-type (JAL)

## Testbench Conventions

- Testbenches output VCD to `sim/block_sim/<category>/<module>.vcd`
- Test pass/fail via `$display("PASS")` / `$display("FAIL: %0d errors", errors)`
- Clock generation: `always #5 clk <= ~clk;`
- Simulation ends with `$finish`
