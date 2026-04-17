# ALU Control Specification

## ADDED Requirements

### Requirement: ALUOp ADD decodes to ALU_ADD
When ALUOp indicates immediate-type operations (ALUOp = 00), the ALU control SHALL output ALU_ADD.

#### Scenario: I-type immediate addition
- **WHEN** ALUOp = ADD, funct3 = 000, funct7 = any
- **THEN** alu_operation SHALL equal ALU_ADD

### Requirement: ALUOp SUB for branch comparison
When ALUOp indicates branch operations (ALUOp = 01), the ALU control SHALL output ALU_SUB.

#### Scenario: Branch comparison
- **WHEN** ALUOp = SUB, funct3 = 000 (BEQ), funct7 = any
- **THEN** alu_operation SHALL equal ALU_SUB

### Requirement: R-type ALU operations from funct3/funct7
When ALUOp indicates R-type operations (ALUOp = 10), the ALU control SHALL decode funct3 and funct7 to determine the operation.

#### Scenario: R-type ADD
- **WHEN** ALUOp = R_TYPE, funct3 = 000, funct7 = 0000000
- **THEN** alu_operation SHALL equal ALU_ADD

#### Scenario: R-type SUB
- **WHEN** ALUOp = R_TYPE, funct3 = 000, funct7 = 0100000
- **THEN** alu_operation SHALL equal ALU_SUB

#### Scenario: R-type AND
- **WHEN** ALUOp = R_TYPE, funct3 = 111, funct7 = 0000000
- **THEN** alu_operation SHALL equal ALU_AND

#### Scenario: R-type OR
- **WHEN** ALUOp = R_TYPE, funct3 = 110, funct7 = 0000000
- **THEN** alu_operation SHALL equal ALU_OR

#### Scenario: R-type SLT
- **WHEN** ALUOp = R_TYPE, funct3 = 010, funct7 = 0000000
- **THEN** alu_operation SHALL equal ALU_SLT

### Requirement: ALUOp LUI decodes to ALU_PASS
When ALUOp indicates LUI operations (ALUOp = 11), the ALU control SHALL output ALU_PASS.

#### Scenario: LUI pass immediate
- **WHEN** ALUOp = LUI
- **THEN** alu_operation SHALL equal ALU_PASS
