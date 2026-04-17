# Writeback Multiplexer Specification

## ADDED Requirements

### Requirement: Select ALU result when result_src = ALU
When result_src indicates ALU result (result_src = RESULT_ALU), the writeback multiplexer SHALL output alu_result.

#### Scenario: ALU result selection
- **WHEN** alu_result = 0x12345678, mem_data = 0x87654321, pc_plus4 = 0x00000000, result_src = RESULT_ALU
- **THEN** writeback_data SHALL equal 0x12345678

### Requirement: Select memory data when result_src = MEM
When result_src indicates memory data (result_src = RESULT_MEM), the writeback multiplexer SHALL output mem_read_data.

#### Scenario: Memory data selection
- **WHEN** alu_result = 0x00000000, mem_data = 0x87654321, pc_plus4 = 0x00000000, result_src = RESULT_MEM
- **THEN** writeback_data SHALL equal 0x87654321

### Requirement: Select PC+4 when result_src = PC4
When result_src indicates PC+4 (result_src = RESULT_PC4), the writeback multiplexer SHALL output pc_plus4.

#### Scenario: PC+4 selection for JAL
- **WHEN** alu_result = 0x00000000, mem_data = 0x00000000, pc_plus4 = 0x00000010, result_src = RESULT_PC4
- **THEN** writeback_data SHALL equal 0x00000010

### Requirement: Writeback data width is 32 bits
The writeback multiplexer SHALL always output a 32-bit value.

#### Scenario: Full width output
- **WHEN** result_src = RESULT_ALU, alu_result = 32-bit value
- **THEN** writeback_data SHALL be 32 bits wide
