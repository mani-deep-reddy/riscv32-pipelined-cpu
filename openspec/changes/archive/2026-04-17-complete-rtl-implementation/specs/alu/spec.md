# ALU Specification

## ADDED Requirements

### Requirement: ALU performs addition
The ALU SHALL compute the sum of two 32-bit operands when the ALU operation is ADD.

#### Scenario: Addition operation
- **WHEN** operand_a = 0x00000005, operand_b = 0x00000003, alu_operation = ALU_ADD
- **THEN** result SHALL equal 0x00000008

#### Scenario: Addition with carry propagation
- **WHEN** operand_a = 0x7FFFFFFF, operand_b = 0x00000001, alu_operation = ALU_ADD
- **THEN** result SHALL equal 0x80000000

### Requirement: ALU performs subtraction
The ALU SHALL compute the difference of two 32-bit operands when the ALU operation is SUB.

#### Scenario: Subtraction operation
- **WHEN** operand_a = 0x00000010, operand_b = 0x00000003, alu_operation = ALU_SUB
- **THEN** result SHALL equal 0x0000000D

#### Scenario: Subtraction resulting in zero
- **WHEN** operand_a = 0x00000005, operand_b = 0x00000005, alu_operation = ALU_SUB
- **THEN** result SHALL equal 0x00000000

### Requirement: ALU performs bitwise AND
The ALU SHALL compute the bitwise AND of two 32-bit operands when the ALU operation is AND.

#### Scenario: AND operation
- **WHEN** operand_a = 0xAAAAAAAA, operand_b = 0x55555555, alu_operation = ALU_AND
- **THEN** result SHALL equal 0x00000000

#### Scenario: AND with mask
- **WHEN** operand_a = 0xFFFFFFFF, operand_b = 0x0000FFFF, alu_operation = ALU_AND
- **THEN** result SHALL equal 0x0000FFFF

### Requirement: ALU performs bitwise OR
The ALU SHALL compute the bitwise OR of two 32-bit operands when the ALU operation is OR.

#### Scenario: OR operation
- **WHEN** operand_a = 0xAAAAAAAA, operand_b = 0x55555555, alu_operation = ALU_OR
- **THEN** result SHALL equal 0xFFFFFFFF

#### Scenario: OR with zero
- **WHEN** operand_a = 0x12340000, operand_b = 0x00000000, alu_operation = ALU_OR
- **THEN** result SHALL equal 0x12340000

### Requirement: ALU performs set less than (signed)
The ALU SHALL set result[0] to 1 when operand_a is less than operand_b (signed comparison), and 0 otherwise, when the ALU operation is SLT.

#### Scenario: SLT when a < b
- **WHEN** operand_a = 0xFFFFFFFF (signed -1), operand_b = 0x00000001, alu_operation = ALU_SLT
- **THEN** result[0] SHALL equal 1

#### Scenario: SLT when a >= b
- **WHEN** operand_a = 0x00000005, operand_b = 0x00000003, alu_operation = ALU_SLT
- **THEN** result[0] SHALL equal 0

### Requirement: ALU passes operand B through
The ALU SHALL output operand_b directly when the ALU operation is ALU_PASS.

#### Scenario: Pass operation for LUI
- **WHEN** operand_a = 0x12345000, operand_b = 0x00012345, alu_operation = ALU_PASS
- **THEN** result SHALL equal operand_b

### Requirement: ALU sets zero flag
The ALU SHALL set the zero output to 1 when the result is zero, and 0 otherwise.

#### Scenario: Zero flag on zero result
- **WHEN** result = 0x00000000
- **THEN** zero SHALL equal 1

#### Scenario: Zero flag on non-zero result
- **WHEN** result = 0x00000001
- **THEN** zero SHALL equal 0
