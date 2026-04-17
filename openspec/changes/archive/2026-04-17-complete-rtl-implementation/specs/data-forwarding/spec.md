# Data Forwarding Specification

## ADDED Requirements

### Requirement: No forwarding when no hazard
When the source register equals zero (x0) or when no earlier instruction writes to the source register, the forwarding unit SHALL select FWD_NONE.

#### Scenario: No forwarding from register x0
- **WHEN** rs1 = 00000, rs2 = 00001
- **THEN** ForwardA SHALL equal FWD_NONE

#### Scenario: No forwarding when no pending write
- **WHEN** rs1 = 00010, EX_MEM_rd = 00011, MEM_WB_rd = 00100
- **THEN** ForwardA SHALL equal FWD_NONE

### Requirement: Forward from EX/MEM when destination matches
When the EX/MEM pipeline register has RegWrite enabled and its rd matches the source register (and is not x0), the forwarding unit SHALL select FWD_EX_MEM.

#### Scenario: Forward ALU result from EX/MEM for rs1
- **WHEN** rs1 = 00101, EX_MEM_rd = 00101, EX_MEM_reg_write = 1, MEM_WB_rd != 00101
- **THEN** ForwardA SHALL equal FWD_EX_MEM

#### Scenario: Forward ALU result from EX/MEM for rs2
- **WHEN** rs2 = 00110, EX_MEM_rd = 00110, EX_MEM_reg_write = 1
- **THEN** ForwardB SHALL equal FWD_EX_MEM

### Requirement: Forward from MEM/WB when destination matches
When the MEM/WB pipeline register has RegWrite enabled and its rd matches the source register (and is not x0), and EX/MEM forwarding does not apply, the forwarding unit SHALL select FWD_MEM_WB.

#### Scenario: Forward writeback data from MEM/WB
- **WHEN** rs1 = 00111, EX_MEM_rd = 00000 (x0, no write), MEM_WB_rd = 00111, MEM_WB_reg_write = 1
- **THEN** ForwardA SHALL equal FWD_MEM_WB

### Requirement: EX/MEM forwarding has priority over MEM/WB
When both EX/MEM and MEM/WB have valid forwarding candidates for the same register, EX/MEM forwarding SHALL take priority.

#### Scenario: EX/MEM priority over MEM/WB
- **WHEN** rs1 = 01000, EX_MEM_rd = 01000, EX_MEM_reg_write = 1, MEM_WB_rd = 01000, MEM_WB_reg_write = 1
- **THEN** ForwardA SHALL equal FWD_EX_MEM

### Requirement: Do not forward to x0
The forwarding unit SHALL NOT select any forwarding source when the destination register is x0.

#### Scenario: No forwarding to x0
- **WHEN** rs1 = 00000, EX_MEM_rd = 00001, MEM_WB_rd = 00001
- **THEN** ForwardA SHALL equal FWD_NONE
