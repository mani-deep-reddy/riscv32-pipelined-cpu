# Branch Resolution Specification

## ADDED Requirements

### Requirement: Branch decision only when branch signal is active
The branch unit SHALL only assert branch_taken when the branch control signal is 1.

#### Scenario: Branch signal inactive
- **WHEN** branch = 0, rs1 = 5, rs2 = 10, funct3 = 000
- **THEN** branch_taken SHALL equal 0

### Requirement: BEQ takes branch when registers equal
When branch = 1 and funct3 = 000 (BEQ), the branch unit SHALL assert branch_taken when rs1 equals rs2.

#### Scenario: BEQ branch taken
- **WHEN** branch = 1, rs1 = 0x00001000, rs2 = 0x00001000, funct3 = 000
- **THEN** branch_taken SHALL equal 1

#### Scenario: BEQ branch not taken
- **WHEN** branch = 1, rs1 = 0x00001000, rs2 = 0x00001001, funct3 = 000
- **THEN** branch_taken SHALL equal 0

### Requirement: BNE takes branch when registers not equal
When branch = 1 and funct3 = 001 (BNE), the branch unit SHALL assert branch_taken when rs1 does not equal rs2.

#### Scenario: BNE branch taken
- **WHEN** branch = 1, rs1 = 0x00001000, rs2 = 0x00000000, funct3 = 001
- **THEN** branch_taken SHALL equal 1

#### Scenario: BNE branch not taken
- **WHEN** branch = 1, rs1 = 0xFFFFFFFF, rs2 = 0xFFFFFFFF, funct3 = 001
- **THEN** branch_taken SHALL equal 0

### Requirement: Comparison uses forwarded values
The branch unit SHALL receive operands after forwarding muxes have selected the correct values.

#### Scenario: Branch with forwarded EX/MEM value
- **WHEN** rs1 forwarded = 0x12345678, rs2 forwarded = 0x12345678, funct3 = 000
- **THEN** comparison SHALL use forwarded values
