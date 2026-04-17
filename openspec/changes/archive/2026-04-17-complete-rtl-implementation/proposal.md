# Proposal: Complete RTL Implementation

## Why

The RISC-V 32-bit pipelined CPU project has established its architecture, specifications, and core utilities, but approximately 14 essential modules remain unimplemented. These modules form the computational heart of the processor: the Execute stage (ALU, address calculation, branching), Memory stage, Writeback stage, Control logic, Hazard management, and all pipeline registers. Completing these modules will enable a fully functional processor core that can execute RV32I instructions through a 5-stage pipeline.

## What Changes

### New Modules to Implement

**Execute Stage (5 modules)**
- `alu.sv` - Arithmetic Logic Unit supporting ADD, SUB, AND, OR, SLT operations
- `alu_control.sv` - ALU operation decoder converting ALUOp + funct3/funct7 to alu_op_t
- `address_calculator.sv` - Branch target computation (PC + immediate)
- `branch_unit.sv` - Branch decision logic based on funct3 comparison types
- `forwarding_unit.sv` - Data hazard resolution through operand forwarding

**Memory Stage (1 module)**
- `data_memory.sv` - Synchronous RAM for load/store operations

**Writeback Stage (1 module)**
- `wb_mux.sv` - 3-to-1 multiplexer selecting ALU result, memory data, or PC+4

**Control Unit (2 modules)**
- `main_control.sv` - Instruction decoder producing RegWrite, MemRead, MemWrite, ALUSrc, Branch, Jump, ResultSrc, ALUOp
- `hazard_unit.sv` - Load-use hazard detection and control hazard handling

**Pipeline Registers (4 modules)**
- `if_id_reg.sv` - IF/ID pipeline register (instruction, pc, pc4)
- `id_ex_reg.sv` - ID/EX pipeline register (rs1_value, rs2_value, immediate, rd, funct3, pc, pc4, control signals)
- `ex_mem_reg.sv` - EX/MEM pipeline register (alu_result, rs2_value, rd, branch_target, control signals)
- `mem_wb_reg.sv` - MEM/WB pipeline register (alu_result, memory_read_data, rd, pc4, control signals)

**Top-Level Integration (1 module)**
- `cpu_top.sv` - Processor top-level integrating all stages with proper signal routing

### Bug Fix
- `fetch/imem.sv` line 12 - Remove orphaned `else if` statement (syntax error)

### Testbench Additions
- Unit testbenches for each new module following existing testbench conventions

## Capabilities

### New Capabilities

- `alu`: Arithmetic Logic Unit performing core computational operations (ADD, SUB, AND, OR, SLT)
- `alu-control`: ALU operation decoder mapping instruction fields to ALU operations
- `address-calculation`: Branch target address computation for control flow instructions
- `branch-resolution`: Conditional branch decision logic based on register comparison
- `data-forwarding`: Operand forwarding to resolve data hazards without pipeline stalls
- `data-memory`: Load/store memory interface for data access operations
- `writeback-multiplexer`: Result source selection for register file writes
- `main-control`: Instruction opcode decoder generating all pipeline control signals
- `hazard-detection`: Load-use hazard detection and control hazard management
- `pipeline-registers`: Four pipeline registers (IF/ID, ID/EX, EX/MEM, MEM/WB) isolating pipeline stages
- `cpu-top`: Top-level processor integration connecting all pipeline stages

### Modified Capabilities

*(None - this is implementing the original architecture specification)*

## Impact

**RTL Modules**: 14 new SystemVerilog modules across execute, memory, writeback, control, and pipeline directories

**Testbench**: 11 new testbenches (one per new module, excluding hazard_unit and forwarding_unit which require integrated testing)

**Existing Files Modified**: `fetch/imem.sv` (syntax fix)

**Dependencies**: None - uses existing packages (cpu_params, riscv_pkg, pipeline_pkg) and utility modules (mux2, mux3, pipeline_reg)

**No External Dependencies**: Project is self-contained with Verilator simulation
