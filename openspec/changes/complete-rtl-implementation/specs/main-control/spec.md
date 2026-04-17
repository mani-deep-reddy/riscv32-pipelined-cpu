# Main Control Specification

## ADDED Requirements

### Requirement: R-type instructions generate correct control signals
When the opcode is OPCODE_OP (R-type), the main control SHALL generate: RegWrite=1, ALUSrc=0, ResultSrc=ALU, ALUOp=R_TYPE.

#### Scenario: R-type control signals
- **WHEN** opcode = OPCODE_OP (0110011)
- **THEN** RegWrite = 1, MemRead = 0, MemWrite = 0, ALUSrc = 0, Branch = 0, Jump = 0, ResultSrc = RESULT_ALU, ALUOp = R_TYPE

### Requirement: I-type immediate instructions generate correct control signals
When the opcode is OPCODE_OP_IMM (I-type), the main control SHALL generate: RegWrite=1, ALUSrc=1, ResultSrc=ALU, ALUOp=ADD.

#### Scenario: I-type control signals
- **WHEN** opcode = OPCODE_OP_IMM (0010011)
- **THEN** RegWrite = 1, MemRead = 0, MemWrite = 0, ALUSrc = 1, Branch = 0, Jump = 0, ResultSrc = RESULT_ALU, ALUOp = ADD

### Requirement: Load instructions generate correct control signals
When the opcode is OPCODE_LOAD, the main control SHALL generate: RegWrite=1, MemRead=1, ALUSrc=1, ResultSrc=MEM, ALUOp=ADD.

#### Scenario: LW control signals
- **WHEN** opcode = OPCODE_LOAD (0000011)
- **THEN** RegWrite = 1, MemRead = 1, MemWrite = 0, ALUSrc = 1, Branch = 0, Jump = 0, ResultSrc = RESULT_MEM, ALUOp = ADD

### Requirement: Store instructions generate correct control signals
When the opcode is OPCODE_STORE, the main control SHALL generate: RegWrite=0, MemWrite=1, ALUSrc=1, ALUOp=ADD.

#### Scenario: SW control signals
- **WHEN** opcode = OPCODE_STORE (0100011)
- **THEN** RegWrite = 0, MemRead = 0, MemWrite = 1, ALUSrc = 1, Branch = 0, Jump = 0, ALUOp = ADD

### Requirement: Branch instructions generate correct control signals
When the opcode is OPCODE_BRANCH, the main control SHALL generate: Branch=1, ALUOp=SUB.

#### Scenario: BEQ control signals
- **WHEN** opcode = OPCODE_BRANCH (1100011)
- **THEN** RegWrite = 0, MemRead = 0, MemWrite = 0, ALUSrc = 0, Branch = 1, Jump = 0, ALUOp = SUB

### Requirement: LUI instruction generates correct control signals
When the opcode is OPCODE_LUI, the main control SHALL generate: RegWrite=1, ALUSrc=1, ResultSrc=ALU, ALUOp=LUI.

#### Scenario: LUI control signals
- **WHEN** opcode = OPCODE_LUI (0110111)
- **THEN** RegWrite = 1, MemRead = 0, MemWrite = 0, ALUSrc = 1, Branch = 0, Jump = 0, ResultSrc = RESULT_ALU, ALUOp = LUI

### Requirement: JAL instruction generates correct control signals
When the opcode is OPCODE_JAL, the main control SHALL generate: RegWrite=1, Jump=1, ResultSrc=PC4.

#### Scenario: JAL control signals
- **WHEN** opcode = OPCODE_JAL (1101111)
- **THEN** RegWrite = 1, MemRead = 0, MemWrite = 0, Branch = 0, Jump = 1, ResultSrc = RESULT_PC4
