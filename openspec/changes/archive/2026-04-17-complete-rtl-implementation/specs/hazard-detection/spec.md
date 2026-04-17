# Hazard Detection Specification

## ADDED Requirements

### Requirement: Detect load-use hazard
The hazard unit SHALL detect when a load instruction in the ID/EX stage has its destination register matching a source register in the IF/ID stage, and SHALL assert stall.

#### Scenario: Load-use hazard with rs1
- **WHEN** ID_EX_mem_read = 1, ID_EX_rd = 00101, IF_ID_rs1 = 00101
- **THEN** stall SHALL equal 1

#### Scenario: Load-use hazard with rs2
- **WHEN** ID_EX_mem_read = 1, ID_EX_rd = 00110, IF_ID_rs2 = 00110
- **THEN** stall SHALL equal 1

#### Scenario: No load-use hazard when registers don't match
- **WHEN** ID_EX_mem_read = 1, ID_EX_rd = 00101, IF_ID_rs1 = 00110
- **THEN** stall SHALL equal 0

#### Scenario: No load-use hazard with x0
- **WHEN** ID_EX_mem_read = 1, ID_EX_rd = 00000
- **THEN** stall SHALL equal 0

### Requirement: Stall disables PC and IF/ID update
When stall is asserted, the PC and IF/ID pipeline register SHALL NOT update.

#### Scenario: Stall output behavior
- **WHEN** load-use hazard detected
- **THEN** stall = 1, which connects to PC.pc_write and if_id_reg.stall

### Requirement: Flush IF/ID on branch taken
When a branch is taken, the hazard unit SHALL assert flush to clear the IF/ID pipeline register.

#### Scenario: Branch taken flush
- **WHEN** branch_taken = 1
- **THEN** flush SHALL equal 1

#### Scenario: Branch not taken no flush
- **WHEN** branch_taken = 0
- **THEN** flush SHALL equal 0

### Requirement: Load-use hazard takes priority over branch
When both a load-use hazard is detected and a branch is taken, stall SHALL be asserted and flush SHALL be deasserted.

#### Scenario: Stall overrides flush
- **WHEN** branch_taken = 1, load_use_hazard = 1
- **THEN** stall = 1, flush = 0

### Requirement: Forwarding signals for ALU inputs
The hazard unit SHALL output ForwardA and ForwardB signals to select the correct operand sources for the ALU.

#### Scenario: No hazard forwarding
- **WHEN** no EX/MEM or MEM/WB hazard
- **THEN** ForwardA = FWD_NONE, ForwardB = FWD_NONE
