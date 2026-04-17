# CPU Top-Level Integration Specification

## ADDED Requirements

### Requirement: CPU top module instantiates all stages
The CPU top-level module SHALL instantiate and connect the IF, ID, EX, MEM, and WB stages along with pipeline registers and control units.

#### Scenario: Module instantiation
- **WHEN** cpu_top is compiled
- **THEN** all stage modules SHALL be instantiated with proper signal connections

### Requirement: Clock and reset propagate to all components
The cpu_top SHALL connect clk and reset signals to all sequential elements (PC, register file, data memory, pipeline registers).

#### Scenario: Clock connectivity
- **WHEN** clk toggles
- **THEN** PC, register file, data memory, and all pipeline registers SHALL receive clock transitions

### Requirement: PC update path
The cpu_top SHALL implement the PC update path: PC → imem → IF/ID → ID/EX → EX/MEM → MEM/WB.

#### Scenario: PC flows through pipeline
- **WHEN** PC = 0x0000, no stall, no branch
- **THEN** instruction at address 0x0000 is fetched, decoded, executed in subsequent cycles

### Requirement: Control signal path
The cpu_top SHALL route control signals from main_control through pipeline registers to affect datapath operations.

#### Scenario: Control signal propagation
- **WHEN** instruction is LOAD
- **THEN** MemRead signal flows through ID/EX, EX/MEM, MEM/WB to enable memory read

### Requirement: Writeback to register file
The cpu_top SHALL connect the writeback data path from MEM/WB to the register file write port.

#### Scenario: Register write
- **WHEN** MEM/WB.reg_write = 1, MEM/WB.rd = 5, MEM/WB.writeback_data = 0x12345678
- **THEN** register file[5] = 0x12345678 on next clock edge

### Requirement: Branch mispredict handling
When branch_taken is asserted, the cpu_top SHALL redirect PC to branch_target and flush IF/ID.

#### Scenario: Taken branch
- **WHEN** BEQ instruction, rs1 == rs2, branch_taken = 1, branch_target = 0x2000
- **THEN** PC = 0x2000, IF/ID flushed

### Requirement: Jump handling
When jump is asserted, the cpu_top SHALL redirect PC to jump_target.

#### Scenario: JAL jump
- **WHEN** JAL instruction, jump_target = 0x3000
- **THEN** PC = 0x3000

### Requirement: Forwarding path
The cpu_top SHALL implement forwarding muxes in EX stage to select operands from register file, EX/MEM, or MEM/WB.

#### Scenario: Forward from EX/MEM
- **WHEN** ForwardA = FWD_EX_MEM
- **THEN** ALU operand_a = EX/MEM.alu_result

### Requirement: Hazard detection integration
The hazard unit SHALL receive inputs from pipeline registers and output stall/flush to appropriate stages.

#### Scenario: Load-use stall
- **WHEN** load-use hazard detected
- **THEN** PC.pc_write = 0, IF/ID.stall = 1, preventing pipeline advance
