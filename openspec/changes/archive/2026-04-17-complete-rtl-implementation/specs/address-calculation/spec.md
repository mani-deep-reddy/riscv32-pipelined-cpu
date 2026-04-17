# Address Calculation Specification

## ADDED Requirements

### Requirement: Branch target computation
The address calculator SHALL compute the branch target address as PC plus the sign-extended immediate offset.

#### Scenario: Forward branch
- **WHEN** pc = 0x00000100, immediate = 0x00000020 (32)
- **THEN** branch_target SHALL equal 0x00000124

#### Scenario: Backward branch (negative offset)
- **WHEN** pc = 0x00000100, immediate = 0xFFFFFFE0 (sign-extended -32)
- **THEN** branch_target SHALL equal 0x000000E0

#### Scenario: Branch at page boundary
- **WHEN** pc = 0x00000FFC, immediate = 0x00000010
- **THEN** branch_target SHALL equal 0x0000100C

### Requirement: PC-relative addressing
The branch target SHALL use PC-relative addressing, meaning the immediate is added to the current PC value.

#### Scenario: PC-relative calculation
- **WHEN** pc = 0x00001000, immediate = 0x00000008
- **THEN** branch_target SHALL equal 0x00001008 (pc + 8, NOT pc + 4 + 8)
