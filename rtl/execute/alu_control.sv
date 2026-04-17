import riscv_pkg::*;
import pipeline_pkg::*;

module alu_control (
    input  alu_op_src_t ALUOp,
    input  logic [2:0] funct3,
    input  logic [6:0] funct7,
    output alu_op_t     alu_operation
);

    always_comb begin
        alu_operation = ALU_ADD;
        case (ALUOp)
            ALU_SRC_ADD:  alu_operation = ALU_ADD;
            ALU_SRC_SUB:  alu_operation = ALU_SUB;
            ALU_SRC_LUI:  alu_operation = ALU_PASS;
            ALU_SRC_RTYPE: begin
                case ({funct7, funct3})
                    {7'b0000000, 3'b000}: alu_operation = ALU_ADD;
                    {7'b0100000, 3'b000}: alu_operation = ALU_SUB;
                    {7'b0000000, 3'b111}: alu_operation = ALU_AND;
                    {7'b0000000, 3'b110}: alu_operation = ALU_OR;
                    {7'b0000000, 3'b010}: alu_operation = ALU_SLT;
                    default:              alu_operation = ALU_ADD;
                endcase
            end
            default: alu_operation = ALU_ADD;
        endcase
    end

endmodule
