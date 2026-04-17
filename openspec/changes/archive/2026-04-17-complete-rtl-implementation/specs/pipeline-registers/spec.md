# Pipeline Registers Specification

## ADDED Requirements

### Requirement: IF/ID register passes instruction and PC data
The IF/ID pipeline register SHALL pass instruction, pc, and pc_plus4 from IF stage to ID stage.

#### Scenario: Normal pipeline flow
- **WHEN** stall = 0, flush = 0, instruction_in = 0x123456, pc_in = 0x1000, pc_plus4_in = 0x1004
- **THEN** instruction_out = 0x123456, pc_out = 0x1000, pc_plus4_out = 0x1004

### Requirement: IF/ID register holds on stall
When stall is asserted, the IF/ID register SHALL hold its current values.

#### Scenario: Stall holds values
- **WHEN** stall = 1, q contains 0x123456
- **THEN** q SHALL remain 0x123456

### Requirement: IF/ID register flushes on control hazard
When flush is asserted, the IF/ID register SHALL be cleared to zero.

#### Scenario: Flush clears IF/ID
- **WHEN** flush = 1
- **THEN** q SHALL equal 0

### Requirement: ID/EX register passes execute stage data
The ID/EX pipeline register SHALL pass rs1_value, rs2_value, immediate, rd, funct3, pc, pc_plus4, and all control signals.

#### Scenario: ID/EX normal transfer
- **WHEN** stall = 0, flush = 0, rs1_value_in = 0x10, rs2_value_in = 0x20, imm_in = 0x100, rd_in = 5
- **THEN** rs1_value_out = 0x10, rs2_value_out = 0x20, imm_out = 0x100, rd_out = 5

### Requirement: EX/MEM register passes memory stage data
The EX/MEM pipeline register SHALL pass alu_result, rs2_value, rd, pc_plus4, branch_target, branch_taken, and control signals.

#### Scenario: EX/MEM normal transfer
- **WHEN** stall = 0, flush = 0, alu_result_in = 0x200, rs2_value_in = 0x40
- **THEN** alu_result_out = 0x200, rs2_value_out = 0x40

### Requirement: MEM/WB register passes writeback stage data
The MEM/WB pipeline register SHALL pass alu_result, mem_read_data, rd, pc_plus4, and control signals.

#### Scenario: MEM/WB normal transfer
- **WHEN** stall = 0, alu_result_in = 0x300, mem_read_data_in = 0xAABBCCDD
- **THEN** alu_result_out = 0x300, mem_read_data_out = 0xAABBCCDD

### Requirement: All pipeline registers reset to zero
On reset, all pipeline registers SHALL be cleared to zero.

#### Scenario: Pipeline reset
- **WHEN** reset = 1
- **THEN** all pipeline register outputs SHALL equal 0

### Requirement: Stall takes priority over flush
When both stall and flush are asserted, the stall behavior SHALL take priority.

#### Scenario: Stall priority
- **WHEN** stall = 1, flush = 1
- **THEN** register SHALL hold current value (stall behavior)
