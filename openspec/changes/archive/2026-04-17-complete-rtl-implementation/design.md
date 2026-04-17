# Design: Complete RTL Implementation

## Context

The RISC-V 32-bit pipelined CPU implements a subset of RV32I with a classic 5-stage pipeline (IF→ID→EX→MEM→WB). The project already has:
- Core packages defining types, opcodes, and parameters
- Utility modules (mux2, mux3, pipeline_reg)
- Fetch stage modules (pc, pc_mux, imem)
- Decode stage modules (decoder, register_file, immediate_generator)

This design documents how to implement the remaining 14 modules that form the complete processor.

### Design Constraints

1. **RTL Style**: SystemVerilog with `logic` type, synchronous always_ff blocks
2. **Pipeline Convention**: Registers update on clock edge, flush sets to 0, stall holds current value
3. **Memory Timing**: Synchronous read (output registered) and write (on clock edge)
4. **Reset**: Active-high synchronous reset
5. **No x-prop**: All signals initialized, default cases handled

## Goals / Non-Goals

**Goals:**
- Complete all 14 RTL modules for a fully functional processor
- Follow existing code conventions and naming patterns
- Enable simulation with Verilator
- Support all RV32I instructions in scope (ADD, SUB, AND, OR, SLT, ADDI, ANDI, ORI, LW, SW, BEQ, BNE, LUI, JAL)

**Non-Goals:**
- Performance optimization (this is educational/architectural)
- Cache implementation
- Exception/interrupt handling
- Multi-cycle hazard detection beyond basic forwarding
- Timing closure / FPGA synthesis

## Decisions

### 1. ALU Design

**Decision**: Use a simple case-based ALU with a single output port.

```
Inputs: operand_a[31:0], operand_b[31:0], alu_op[3:0]
Output: result[31:0], zero
```

**Operations:**
| alu_op | Operation | Result |
|--------|-----------|--------|
| ALU_ADD | operand_a + operand_b | result |
| ALU_SUB | operand_a - operand_b | result |
| ALU_AND | operand_a & operand_b | result |
| ALU_OR | operand_a \| operand_b | result |
| ALU_SLT | operand_a < operand_b (signed) | result[0]=1 : 0 |
| ALU_PASS | operand_b | result = operand_b |

**Rationale**: Simple, synthesizable, matches existing alu_op_t enum. ALU_PASS used for LUI where immediate flows directly.

### 2. ALU Control Decoding

**Decision**: Two-level decoding - Main Control sets ALUOp, ALU Control refines to exact operation.

```
Input: ALUOp[1:0], funct3[2:0], funct7[6:0]
Output: alu_op[3:0]

ALUOp encoding:
- 00: ADD (loads/stores - always ADD)
- 01: Branch (SUB for comparison)
- 10: R-type (funct3/funct7 determines operation)
- 11: LUI (PASS immediate through)
```

**Rationale**: Standard MIPS-style two-level decode. Keeps main_control simple by not needing funct fields.

### 3. Branch Resolution Timing

**Decision**: Branch comparison happens in EX stage using forwarded values.

```
branch_unit inputs:
- rs1_value (after ForwardA mux)
- rs2_value (after ForwardB mux)
- funct3[2:0]
- branch signal

Outputs:
- branch_taken: 1 if branch should be taken
```

**Comparison by funct3:**
| funct3 | Comparison | Condition |
|--------|------------|-----------|
| 000 | BEQ | rs1 == rs2 |
| 001 | BNE | rs1 != rs2 |

**Rationale**: Classic single-cycle branch penalty. Branch target computed in EX, redirect PC next cycle.

### 4. Forwarding Unit Logic

**Decision**: Simple forwarding from EX/MEM and MEM/WB pipeline registers.

```
ForwardA (2-bit):
- 00: Use rs1_value from ID/EX (no hazard)
- 01: Use ALU_result from EX/MEM (EX hazard)
- 10: Use writeback_data from MEM/WB (MEM hazard)

ForwardB (2-bit):
- Same encoding for operand B
```

**Forwarding Rules:**
```
EX/MEM Forward (if EX/MEM.RegWrite and EX/MEM.rd != 0 and EX/MEM.rd == rs1/rs2):
    Forward from EX/MEM.ALU_result

MEM/WB Forward (if MEM/WB.RegWrite and MEM/WB.rd != 0 and MEM/WB.rd == rs1/rs2
                and not overriding EX/MEM):
    Forward from MEM/WB.writeback_data
```

**Rationale**: Standard pipeline forwarding. EX/MEM has priority over MEM/WB (more recent result).

### 5. Load-Use Hazard Detection

**Decision**: Detect in ID stage, stall IF/ID and ID/EX.

```
Condition:
    ID/EX.MemRead AND
    (ID/EX.rd == IF/ID.rs1 OR ID/EX.rd == IF/ID.rs2) AND
    (ID/EX.rd != 0)

Action:
    Stall = 1 (PC doesn't update, IF/ID holds)
    Flush = 0 (ID/EX keeps current instruction)
```

**Rationale**: Classic load-use stall. Load result not available until MEM stage, so we must wait one cycle.

### 6. Pipeline Register Design

**Decision**: Specialized pipeline registers with explicit fields per stage, following the generic `pipeline_reg` pattern.

Each register has:
- Synchronous reset: sets all fields to 0
- Flush: sets all fields to 0 (used for branch mispredict)
- Stall: holds current values (used for load-use hazard)
- Normal: passes data through

**IF/ID Register Fields:**
```
{instruction[31:0], pc[31:0], pc_plus4[31:0]}
Width: 96 bits
```

**ID/EX Register Fields:**
```
{
    rs1_value[31:0],     // register value
    rs2_value[31:0],     // register value
    immediate[31:0],     // sign-extended
    rd[4:0],             // destination register
    funct3[2:0],         // function field
    pc[31:0],           // PC of this instruction
    pc_plus4[31:0],     // PC + 4
    // Control signals
    reg_write,
    mem_read,
    mem_write,
    alu_src,            // 0=rs2, 1=immediate
    branch,
    jump,
    result_src[1:0],    // 00=ALU, 01=MEM, 10=PC+4
    alu_op[1:0]         // 00=ADD, 01=SUB, 10=R-type, 11=LUI
}
Width: ~75 bits
```

**EX/MEM Register Fields:**
```
{
    alu_result[31:0],
    rs2_value[31:0],     // for store
    rd[4:0],
    pc_plus4[31:0],
    branch_target[31:0],
    branch_taken,
    // Control signals
    reg_write,
    mem_read,
    mem_write,
    result_src[1:0]
}
Width: ~140 bits
```

**MEM/WB Register Fields:**
```
{
    alu_result[31:0],
    mem_read_data[31:0],
    rd[4:0],
    pc_plus4[31:0],
    // Control signals
    reg_write,
    result_src[1:0]
}
Width: ~130 bits
```

### 7. Data Memory Design

**Decision**: Synchronous RAM, byte-addressable but word-aligned accesses.

```
Inputs:
- clk, reset
- address[31:0] (word-aligned)
- write_data[31:0]
- mem_read, mem_write
Outputs:
- read_data[31:0]

Memory: logic [31:0] mem [0:DMEM_DEPTH-1]

Read: synchronous, read_data registered on clock edge
Write: synchronous, on clock edge when mem_write=1
```

**Bounds checking:** Warn if address out of range, return 0 on read, ignore write.

### 8. Writeback Mux

**Decision**: 3-to-1 mux based on result_src.

```
Inputs:
- alu_result (32-bit)
- mem_read_data (32-bit)
- pc_plus4 (32-bit)
- result_src[1:0]
Output:
- writeback_data (32-bit)

result_src encoding:
- RESULT_ALU (00): alu_result
- RESULT_MEM (01): mem_read_data
- RESULT_PC4 (10): pc_plus4
```

### 9. Main Control Decoding

**Decision**: Combinational decode based on opcode only.

```
opcode → control signals

OPCODE_OP (R-type):   RegWrite=1, ALUSrc=0, ResultSrc=ALU, ALUOp=R_TYPE
OPCODE_OP_IMM (I-type): RegWrite=1, ALUSrc=1, ResultSrc=ALU, ALUOp=ADD
OPCODE_LOAD:         RegWrite=1, ALUSrc=1, MemRead=1, ResultSrc=MEM, ALUOp=ADD
OPCODE_STORE:        RegWrite=0, ALUSrc=1, MemWrite=1, ALUOp=ADD
OPCODE_BRANCH:       Branch=1, ALUOp=SUB
OPCODE_LUI:          RegWrite=1, ALUSrc=1, ResultSrc=ALU, ALUOp=LUI
OPCODE_JAL:          RegWrite=1, Jump=1, ResultSrc=PC4, ALUOp=X
```

### 10. CPU Top-Level Integration

**Decision**: Flat instantiation with all signals explicitly connected.

```
cpu_top.sv ports:
Inputs:
- clk
- reset
Outputs:
- [optional: pc_debug[31:0]]
```

Internal wiring follows the pipeline flow diagram. All control signals pass through pipeline registers.

## Module Interface Summary

```
rtl/
├── execute/
│   ├── alu.sv
│   │   ├── input  logic [31:0] operand_a
│   │   ├── input  logic [31:0] operand_b
│   │   ├── input  alu_op_t alu_operation
│   │   ├── output logic [31:0] result
│   │   └── output logic zero
│   │
│   ├── alu_control.sv
│   │   ├── input  alu_op_src_t ALUOp
│   │   ├── input  logic [2:0] funct3
│   │   ├── input  logic [6:0] funct7
│   │   └── output alu_op_t alu_operation
│   │
│   ├── address_calculator.sv
│   │   ├── input  logic [31:0] pc
│   │   ├── input  logic [31:0] immediate
│   │   └── output logic [31:0] branch_target
│   │
│   ├── branch_unit.sv
│   │   ├── input  logic [31:0] rs1
│   │   ├── input  logic [31:0] rs2
│   │   ├── input  logic [2:0] funct3
│   │   ├── input  logic branch
│   │   └── output logic branch_taken
│   │
│   └── forwarding_unit.sv
│       ├── input  logic [4:0] rs1
│       ├── input  logic [4:0] rs2
│       ├── input  logic [4:0] EX_MEM_rd
│       ├── input  logic EX_MEM_reg_write
│       ├── input  logic [4:0] MEM_WB_rd
│       ├── input  logic MEM_WB_reg_write
│       ├── output forward_sel_t ForwardA
│       └── output forward_sel_t ForwardB
│
├── memory/
│   └── data_memory.sv
│       ├── input  clk, reset
│       ├── input  logic [31:0] address
│       ├── input  logic [31:0] write_data
│       ├── input  logic mem_read, mem_write
│       └── output logic [31:0] read_data
│
├── writeback/
│   └── wb_mux.sv
│       ├── input  logic [31:0] alu_result
│       ├── input  logic [31:0] mem_data
│       ├── input  logic [31:0] pc_plus4
│       ├── input  result_src_t result_src
│       └── output logic [31:0] writeback_data
│
├── control/
│   ├── main_control.sv
│   │   ├── input  logic [6:0] opcode
│   │   └── output reg_write, mem_read, mem_write, alu_src,
│   │            branch, jump, result_src, alu_op
│   │
│   └── hazard_unit.sv
│       ├── input  logic [4:0] ID_EX_rs1, ID_EX_rs2
│       ├── input  logic ID_EX_mem_read
│       ├── input  logic [4:0] IF_ID_rs1, IF_ID_rs2
│       ├── input  logic [4:0] EX_MEM_rd, MEM_WB_rd
│       ├── input  logic EX_MEM_reg_write, MEM_WB_reg_write
│       ├── input  logic branch_taken
│       └── output stall, flush, ForwardA, ForwardB
│
├── pipeline/
│   ├── if_id_reg.sv      (specialized fields)
│   ├── id_ex_reg.sv      (specialized fields)
│   ├── ex_mem_reg.sv     (specialized fields)
│   └── mem_wb_reg.sv     (specialized fields)
│
└── cpu_top.sv            (integration)
```

## Risks / Trade-offs

| Risk | Impact | Mitigation |
|------|--------|------------|
| Forwarding doesn't cover all cases | Data hazard could cause wrong result | Document limitation; advanced cases need stalls |
| Branch mispredict penalty is 1 cycle | Performance | Acceptable for educational design |
| No load-use forwarding (LW use needs stall) | Performance | Can optimize later |
| Memory is single-cycle | May limit clock frequency | Acceptable for simulation |

## Open Questions

1. **Should JAL use the same PC+imm calculation as branches?**
   - Currently: Jump target = PC + immediate (same as branches)
   - Alternative: Jump target = immediate only (J-format absolute)
   - Decision needed: Most RISC-V use PC-relative for JAL

2. **LUI bypass**: Should LUI write immediate directly to ALU_result without going through ALU?
   - Current design: ALU_PASS operation
   - Alternative: Special path in ID/EX register
   - Recommendation: Use ALU_PASS (simpler)

3. **Test strategy**: Block-level unit tests or integration test first?
   - Recommendation: Unit tests first, then integration
