import riscv_pkg::*;
import pipeline_pkg::*;

module main_control (
    input  logic [6:0] opcode,

    output logic        reg_write,
    output logic        mem_read,
    output logic        mem_write,
    output logic        alu_src,
    output logic        branch,
    output logic        jump,
    output result_src_t result_src,
    output alu_op_src_t alu_op
);

    always_comb begin
        reg_write = 1'b0;
        mem_read  = 1'b0;
        mem_write = 1'b0;
        alu_src   = 1'b0;
        branch    = 1'b0;
        jump      = 1'b0;
        result_src = RESULT_ALU;
        alu_op    = ALU_SRC_ADD;

        case (opcode)
            OPCODE_OP: begin
                reg_write = 1'b1;
                alu_src   = 1'b0;
                result_src = RESULT_ALU;
                alu_op    = ALU_SRC_RTYPE;
            end

            OPCODE_OP_IMM: begin
                reg_write = 1'b1;
                alu_src   = 1'b1;
                result_src = RESULT_ALU;
                alu_op    = ALU_SRC_ADD;
            end

            OPCODE_LOAD: begin
                reg_write = 1'b1;
                mem_read  = 1'b1;
                alu_src   = 1'b1;
                result_src = RESULT_MEM;
                alu_op    = ALU_SRC_ADD;
            end

            OPCODE_STORE: begin
                mem_write = 1'b1;
                alu_src   = 1'b1;
                alu_op    = ALU_SRC_ADD;
            end

            OPCODE_BRANCH: begin
                branch = 1'b1;
                alu_op = ALU_SRC_SUB;
            end

            OPCODE_LUI: begin
                reg_write = 1'b1;
                alu_src   = 1'b1;
                result_src = RESULT_ALU;
                alu_op    = ALU_SRC_LUI;
            end

            OPCODE_JAL: begin
                reg_write = 1'b1;
                jump      = 1'b1;
                result_src = RESULT_PC4;
            end

            default: begin
                reg_write = 1'b0;
                mem_read  = 1'b0;
                mem_write = 1'b0;
                alu_src   = 1'b0;
                branch    = 1'b0;
                jump      = 1'b0;
                result_src = RESULT_ALU;
                alu_op    = ALU_SRC_ADD;
            end
        endcase
    end

endmodule
