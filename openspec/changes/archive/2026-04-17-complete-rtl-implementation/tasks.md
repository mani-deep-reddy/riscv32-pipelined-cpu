# Tasks: Complete RTL Implementation

## 1. Bug Fixes

- [x] 1.1 Fix syntax error in `fetch/imem.sv` - remove orphaned `else if` on line 12

## 2. Execute Stage - ALU

- [x] 2.1 Create `execute/alu.sv` with inputs: operand_a[31:0], operand_b[31:0], alu_operation(alu_op_t)
- [x] 2.2 Implement ADD operation: result = operand_a + operand_b
- [x] 2.3 Implement SUB operation: result = operand_a - operand_b
- [x] 2.4 Implement AND operation: result = operand_a & operand_b
- [x] 2.5 Implement OR operation: result = operand_a | operand_b
- [x] 2.6 Implement SLT operation: result[0] = (operand_a < operand_b) for signed
- [x] 2.7 Implement PASS operation: result = operand_b
- [x] 2.8 Add zero flag output: zero = (result == 0)
- [x] 2.9 Create `execute/alu_tb.sv` testbench

## 3. Execute Stage - ALU Control

- [x] 3.1 Create `execute/alu_control.sv` with inputs: ALUOp(alu_op_src_t), funct3[2:0], funct7[6:0]
- [x] 3.2 Implement decoding: ALUOp=ADD → ALU_ADD
- [x] 3.3 Implement decoding: ALUOp=SUB → ALU_SUB
- [x] 3.4 Implement decoding: ALUOp=R_TYPE with funct3/funct7 → ALU_ADD/SUB/AND/OR/SLT
- [x] 3.5 Implement decoding: ALUOp=LUI → ALU_PASS
- [x] 3.6 Create `execute/alu_control_tb.sv` testbench

## 4. Execute Stage - Address Calculator

- [x] 4.1 Create `execute/address_calculator.sv` with inputs: pc[31:0], immediate[31:0]
- [x] 4.2 Implement: branch_target = pc + immediate
- [x] 4.3 Create `execute/address_calculator_tb.sv` testbench

## 5. Execute Stage - Branch Unit

- [x] 5.1 Create `execute/branch_unit.sv` with inputs: rs1[31:0], rs2[31:0], funct3[2:0], branch
- [x] 5.2 Implement BEQ (funct3=000): branch_taken = branch && (rs1 == rs2)
- [x] 5.3 Implement BNE (funct3=001): branch_taken = branch && (rs1 != rs2)
- [x] 5.4 Create `execute/branch_unit_tb.sv` testbench

## 6. Execute Stage - Forwarding Unit

- [x] 6.1 Create `execute/forwarding_unit.sv` with inputs: rs1[4:0], rs2[4:0], EX_MEM_rd[4:0], EX_MEM_reg_write, MEM_WB_rd[4:0], MEM_WB_reg_write
- [x] 6.2 Implement ForwardA: 00=rs1_value, 01=EX_MEM ALU, 10=MEM_WB writeback
- [x] 6.3 Implement ForwardB: same encoding as ForwardA
- [x] 6.4 Add priority: EX/MEM forwarding overrides MEM/WB
- [x] 6.5 Add check: don't forward to rd=0

## 7. Memory Stage - Data Memory

- [x] 7.1 Create `memory/data_memory.sv` with inputs: clk, reset, address[31:0], write_data[31:0], mem_read, mem_write
- [x] 7.2 Implement synchronous read: read_data registered on clock edge
- [x] 7.3 Implement synchronous write: memory[address>>2] = write_data on clock edge
- [x] 7.4 Add bounds checking for address beyond DMEM_DEPTH
- [x] 7.5 Create `memory/data_memory_tb.sv` testbench

## 8. Writeback Stage - WB Mux

- [x] 8.1 Create `writeback/wb_mux.sv` with inputs: alu_result[31:0], mem_data[31:0], pc_plus4[31:0], result_src(result_src_t)
- [x] 8.2 Implement: RESULT_ALU → alu_result, RESULT_MEM → mem_data, RESULT_PC4 → pc_plus4
- [x] 8.3 Create `writeback/wb_mux_tb.sv` testbench

## 9. Control Unit - Main Control

- [x] 9.1 Create `control/main_control.sv` with input: opcode[6:0]
- [x] 9.2 Implement R-type (OPCODE_OP): RegWrite=1, ALUSrc=0, ResultSrc=ALU, ALUOp=R_TYPE
- [x] 9.3 Implement I-type (OPCODE_OP_IMM): RegWrite=1, ALUSrc=1, ResultSrc=ALU, ALUOp=ADD
- [x] 9.4 Implement LOAD (OPCODE_LOAD): RegWrite=1, MemRead=1, ALUSrc=1, ResultSrc=MEM, ALUOp=ADD
- [x] 9.5 Implement STORE (OPCODE_STORE): RegWrite=0, ALUSrc=1, MemWrite=1, ALUOp=ADD
- [x] 9.6 Implement BRANCH (OPCODE_BRANCH): Branch=1, ALUOp=SUB
- [x] 9.7 Implement LUI (OPCODE_LUI): RegWrite=1, ALUSrc=1, ResultSrc=ALU, ALUOp=LUI
- [x] 9.8 Implement JAL (OPCODE_JAL): RegWrite=1, Jump=1, ResultSrc=PC4
- [x] 9.9 Create `control/main_control_tb.sv` testbench

## 10. Control Unit - Hazard Unit

- [x] 10.1 Create `control/hazard_unit.sv` with inputs: ID_EX_rs1, ID_EX_rs2, ID_EX_mem_read, IF_ID_rs1, IF_ID_rs2, EX_MEM_rd, MEM_WB_rd, EX_MEM_reg_write, MEM_WB_reg_write, branch_taken
- [x] 10.2 Implement load-use hazard detection: stall when ID_EX_mem_read && (rd matches rs1/rs2)
- [x] 10.3 Implement stall output: PC and IF/ID should not update
- [x] 10.4 Implement flush output: flush IF/ID on branch_taken
- [x] 10.5 Connect forwarding outputs (ForwardA, ForwardB)

## 11. Pipeline Registers

- [x] 11.1 Create `pipeline/if_id_reg.sv` with fields: instruction[31:0], pc[31:0], pc_plus4[31:0]
- [x] 11.2 Create `pipeline/id_ex_reg.sv` with fields: rs1_value, rs2_value, immediate, rd[4:0], funct3[2:0], pc, pc_plus4, and control signals
- [x] 11.3 Create `pipeline/ex_mem_reg.sv` with fields: alu_result, rs2_value, rd, pc_plus4, branch_target, branch_taken, and control signals
- [x] 11.4 Create `pipeline/mem_wb_reg.sv` with fields: alu_result, mem_read_data, rd, pc_plus4, and control signals
- [x] 11.5 Add testbenches for each pipeline register

## 12. Top-Level Integration

- [x] 12.1 Create `cpu_top.sv` module with clk, reset inputs
- [x] 12.2 Instantiate PC, PC mux, instruction memory
- [x] 12.3 Instantiate IF/ID pipeline register
- [x] 12.4 Instantiate decoder, register file, immediate generator
- [x] 12.5 Instantiate main control
- [x] 12.6 Instantiate ID/EX pipeline register
- [x] 12.7 Instantiate forwarding unit and forward muxes
- [x] 12.8 Instantiate ALU, ALU control
- [x] 12.9 Instantiate address calculator, branch unit
- [x] 12.10 Instantiate EX/MEM pipeline register
- [x] 12.11 Instantiate data memory
- [x] 12.12 Instantiate MEM/WB pipeline register
- [x] 12.13 Instantiate WB mux, connect to register file
- [x] 12.14 Instantiate hazard unit, connect stall/flush/forward signals
- [x] 12.15 Create `cpu_top_tb.sv` integration testbench

## 13. Testing and Verification

- [x] 13.1 Compile all modules with Verilator
- [x] 13.2 Fix any syntax or connection errors
- [x] 13.3 Run ALU tests - verify all operations
- [x] 13.4 Run ALU control tests - verify all decodings
- [ ] 13.5 Run address calculator tests
- [ ] 13.6 Run branch unit tests
- [ ] 13.7 Run data memory tests
- [ ] 13.8 Run WB mux tests
- [ ] 13.9 Run main control tests
- [ ] 13.10 Run pipeline register tests
- [ ] 13.11 Run CPU top integration test
- [ ] 13.12 Generate waveforms for debugging
- [ ] 13.13 Verify RV32I instruction execution
