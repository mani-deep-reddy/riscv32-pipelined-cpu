import cpu_params::*;
import riscv_pkg::*;
import pipeline_pkg::*;

module cpu_top (
    input  logic clk,
    input  logic reset,
    output logic [31:0] pc_debug
);

    wire [31:0] pc_current;
    wire [31:0] pc_next;
    wire [31:0] pc_plus4;
    wire [31:0] instruction;

    wire [31:0] if_id_instruction;
    wire [31:0] if_id_pc;
    wire [31:0] if_id_pc_plus4;

    wire [6:0] decoder_opcode;
    wire [4:0] decoder_rd;
    wire [2:0] decoder_funct3;
    wire [4:0] decoder_rs1;
    wire [4:0] decoder_rs2;
    wire [6:0] decoder_funct7;

    wire [31:0] regfile_rs1_value;
    wire [31:0] regfile_rs2_value;

    logic [2:0] imm_type;
    wire [31:0] immediate;

    wire        ctrl_reg_write;
    wire        ctrl_mem_read;
    wire        ctrl_mem_write;
    wire        ctrl_alu_src;
    wire        ctrl_branch;
    wire        ctrl_jump;
    result_src_t ctrl_result_src;
    alu_op_src_t ctrl_alu_op;

    wire [31:0] id_ex_rs1_value;
    wire [31:0] id_ex_rs2_value;
    wire [4:0]  id_ex_rs1;
    wire [4:0]  id_ex_rs2;
    wire [31:0] id_ex_immediate;
    wire [4:0]  id_ex_rd;
    wire [2:0]  id_ex_funct3;
    wire [6:0]  id_ex_funct7;
    wire [31:0] id_ex_pc;
    wire [31:0] id_ex_pc_plus4;
    wire        id_ex_reg_write;
    wire        id_ex_mem_read;
    wire        id_ex_mem_write;
    wire        id_ex_alu_src;
    wire        id_ex_branch;
    wire        id_ex_jump;
    result_src_t id_ex_result_src;
    alu_op_src_t id_ex_alu_op;

    wire [31:0] operand_a;
    wire [31:0] operand_b;
    wire [31:0] operand_b_final;

    alu_op_t    alu_operation;
    wire [31:0] alu_result;
    wire        alu_zero;

    wire [31:0] branch_target;

    wire        branch_taken;

    wire [31:0] ex_mem_alu_result;
    wire [31:0] ex_mem_rs2_value;
    wire [4:0]  ex_mem_rd;
    wire [31:0] ex_mem_pc_plus4;
    wire [31:0] ex_mem_branch_target;
    wire        ex_mem_branch_taken;
    wire        ex_mem_reg_write;
    wire        ex_mem_mem_read;
    wire        ex_mem_mem_write;
    result_src_t ex_mem_result_src;

    wire [31:0] dmem_read_data;

    wire [31:0] mem_wb_alu_result;
    wire [31:0] mem_wb_mem_read_data;
    wire [4:0]  mem_wb_rd;
    wire [31:0] mem_wb_pc_plus4;
    wire        mem_wb_reg_write;
    result_src_t mem_wb_result_src;

    wire [31:0] writeback_data;

    wire        stall;
    wire        flush;

    forward_sel_t hazard_forward_a;
    forward_sel_t hazard_forward_b;

    wire [1:0] pc_mux_sel;

    wire [31:0] jump_target;

    assign pc_plus4 = pc_current + 32'd4;
    assign pc_debug = pc_current;

    assign pc_mux_sel = {ctrl_jump, ctrl_branch};

    assign jump_target = id_ex_pc + id_ex_immediate;

    always_comb begin
        case (pc_mux_sel)
            2'b00: pc_next = pc_plus4;
            2'b01: pc_next = branch_target;
            2'b10: pc_next = jump_target;
            default: pc_next = pc_plus4;
        endcase
    end

    pc u_pc (
        .pc_next(pc_next),
        .clk(clk),
        .reset(reset),
        .pc_write(!stall),
        .pc(pc_current)
    );

    imem u_imem (
        .pc(pc_current),
        .instruction(instruction)
    );

    if_id_reg u_if_id (
        .clk(clk),
        .reset(reset),
        .stall(stall),
        .flush(flush),
        .instruction_in(instruction),
        .pc_in(pc_current),
        .pc_plus4_in(pc_plus4),
        .instruction(if_id_instruction),
        .pc(if_id_pc),
        .pc_plus4(if_id_pc_plus4)
    );

    decoder u_decoder (
        .instruction(if_id_instruction),
        .opcode(decoder_opcode),
        .rd(decoder_rd),
        .funct3(decoder_funct3),
        .rs1(decoder_rs1),
        .rs2(decoder_rs2),
        .funct7(decoder_funct7)
    );

    register_file u_regfile (
        .clk(clk),
        .reset(reset),
        .rs1(decoder_rs1),
        .rs2(decoder_rs2),
        .rd(mem_wb_rd),
        .write_data(writeback_data),
        .reg_write(mem_wb_reg_write),
        .rs1_value(regfile_rs1_value),
        .rs2_value(regfile_rs2_value)
    );

    always_comb begin
        case (decoder_opcode)
            OPCODE_OP_IMM, OPCODE_LOAD, OPCODE_LUI: imm_type = IMM_I;
            OPCODE_STORE: imm_type = IMM_S;
            OPCODE_BRANCH: imm_type = IMM_B;
            OPCODE_JAL: imm_type = IMM_J;
            default: imm_type = IMM_NONE;
        endcase
    end

    immediate_generator u_imm_gen (
        .instruction(if_id_instruction),
        .imm_type(imm_type),
        .imm(immediate)
    );

    main_control u_main_control (
        .opcode(decoder_opcode),
        .reg_write(ctrl_reg_write),
        .mem_read(ctrl_mem_read),
        .mem_write(ctrl_mem_write),
        .alu_src(ctrl_alu_src),
        .branch(ctrl_branch),
        .jump(ctrl_jump),
        .result_src(ctrl_result_src),
        .alu_op(ctrl_alu_op)
    );

    hazard_unit u_hazard_unit (
        .ID_EX_rd(id_ex_rd),
        .ID_EX_mem_read(id_ex_mem_read),
        .IF_ID_rs1(decoder_rs1),
        .IF_ID_rs2(decoder_rs2),
        .ID_EX_rs1(id_ex_rs1),
        .ID_EX_rs2(id_ex_rs2),
        .EX_MEM_rd(ex_mem_rd),
        .MEM_WB_rd(mem_wb_rd),
        .EX_MEM_reg_write(ex_mem_reg_write),
        .MEM_WB_reg_write(mem_wb_reg_write),
        .branch_taken(branch_taken),
        .stall(stall),
        .flush(flush),
        .ForwardA(hazard_forward_a),
        .ForwardB(hazard_forward_b)
    );

    id_ex_reg u_id_ex (
        .clk(clk),
        .reset(reset),
        .stall(1'b0),
        .flush(flush),
        .rs1_value_in(regfile_rs1_value),
        .rs2_value_in(regfile_rs2_value),
        .rs1_in(decoder_rs1),
        .rs2_in(decoder_rs2),
        .immediate_in(immediate),
        .rd_in(decoder_rd),
        .funct3_in(decoder_funct3),
        .funct7_in(decoder_funct7),
        .pc_in(if_id_pc),
        .pc_plus4_in(if_id_pc_plus4),
        .reg_write_in(ctrl_reg_write),
        .mem_read_in(ctrl_mem_read),
        .mem_write_in(ctrl_mem_write),
        .alu_src_in(ctrl_alu_src),
        .branch_in(ctrl_branch),
        .jump_in(ctrl_jump),
        .result_src_in(ctrl_result_src),
        .alu_op_in(ctrl_alu_op),
        .rs1_value(id_ex_rs1_value),
        .rs2_value(id_ex_rs2_value),
        .rs1(id_ex_rs1),
        .rs2(id_ex_rs2),
        .immediate(id_ex_immediate),
        .rd(id_ex_rd),
        .funct3(id_ex_funct3),
        .funct7(id_ex_funct7),
        .pc(id_ex_pc),
        .pc_plus4(id_ex_pc_plus4),
        .reg_write(id_ex_reg_write),
        .mem_read(id_ex_mem_read),
        .mem_write(id_ex_mem_write),
        .alu_src(id_ex_alu_src),
        .branch(id_ex_branch),
        .jump(id_ex_jump),
        .result_src(id_ex_result_src),
        .alu_op(id_ex_alu_op)
    );

    mux3 #(.WIDTH(32)) u_forward_a_mux (
        .a(id_ex_rs1_value),
        .b(ex_mem_alu_result),
        .c(writeback_data),
        .sel(hazard_forward_a),
        .y(operand_a)
    );

    mux3 #(.WIDTH(32)) u_forward_b_mux (
        .a(id_ex_rs2_value),
        .b(ex_mem_alu_result),
        .c(writeback_data),
        .sel(hazard_forward_b),
        .y(operand_b)
    );

    mux2 #(.WIDTH(32)) u_alu_src_mux (
        .a(operand_b),
        .b(id_ex_immediate),
        .sel(id_ex_alu_src),
        .y(operand_b_final)
    );

    alu_control u_alu_control (
        .ALUOp(id_ex_alu_op),
        .funct3(id_ex_funct3),
        .funct7(id_ex_funct7),
        .alu_operation(alu_operation)
    );

    alu u_alu (
        .operand_a(operand_a),
        .operand_b(operand_b_final),
        .alu_operation(alu_operation),
        .result(alu_result),
        .zero(alu_zero)
    );

    address_calculator u_addr_calc (
        .pc(id_ex_pc),
        .immediate(id_ex_immediate),
        .branch_target(branch_target)
    );

    branch_unit u_branch_unit (
        .rs1(operand_a),
        .rs2(operand_b_final),
        .funct3(id_ex_funct3),
        .branch(id_ex_branch),
        .branch_taken(branch_taken)
    );

    ex_mem_reg u_ex_mem (
        .clk(clk),
        .reset(reset),
        .stall(1'b0),
        .flush(1'b0),
        .alu_result_in(alu_result),
        .rs2_value_in(id_ex_rs2_value),
        .rd_in(id_ex_rd),
        .pc_plus4_in(id_ex_pc_plus4),
        .branch_target_in(branch_target),
        .branch_taken_in(branch_taken),
        .reg_write_in(id_ex_reg_write),
        .mem_read_in(id_ex_mem_read),
        .mem_write_in(id_ex_mem_write),
        .result_src_in(id_ex_result_src),
        .alu_result(ex_mem_alu_result),
        .rs2_value(ex_mem_rs2_value),
        .rd(ex_mem_rd),
        .pc_plus4(ex_mem_pc_plus4),
        .branch_target(ex_mem_branch_target),
        .branch_taken(ex_mem_branch_taken),
        .reg_write(ex_mem_reg_write),
        .mem_read(ex_mem_mem_read),
        .mem_write(ex_mem_mem_write),
        .result_src(ex_mem_result_src)
    );

    data_memory u_dmem (
        .clk(clk),
        .reset(reset),
        .address(ex_mem_alu_result),
        .write_data(ex_mem_rs2_value),
        .mem_read(ex_mem_mem_read),
        .mem_write(ex_mem_mem_write),
        .read_data(dmem_read_data)
    );

    mem_wb_reg u_mem_wb (
        .clk(clk),
        .reset(reset),
        .stall(1'b0),
        .flush(1'b0),
        .alu_result_in(ex_mem_alu_result),
        .mem_read_data_in(dmem_read_data),
        .rd_in(ex_mem_rd),
        .pc_plus4_in(ex_mem_pc_plus4),
        .reg_write_in(ex_mem_reg_write),
        .result_src_in(ex_mem_result_src),
        .alu_result(mem_wb_alu_result),
        .mem_read_data(mem_wb_mem_read_data),
        .rd(mem_wb_rd),
        .pc_plus4(mem_wb_pc_plus4),
        .reg_write(mem_wb_reg_write),
        .result_src(mem_wb_result_src)
    );

    wb_mux u_wb_mux (
        .alu_result(mem_wb_alu_result),
        .mem_data(mem_wb_mem_read_data),
        .pc_plus4(mem_wb_pc_plus4),
        .result_src(mem_wb_result_src),
        .writeback_data(writeback_data)
    );

endmodule
