import riscv_pkg::*;

module alu (
    input  logic [31:0] operand_a,
    input  logic [31:0] operand_b,
    input  alu_op_t     alu_operation,
    output logic [31:0] result,
    output logic        zero
);

    always_comb begin
        result = 32'b0;
        case (alu_operation)
            ALU_ADD:  result = operand_a + operand_b;
            ALU_SUB:  result = operand_a - operand_b;
            ALU_AND:  result = operand_a & operand_b;
            ALU_OR:   result = operand_a | operand_b;
            ALU_SLT:  result = {31'b0, $signed(operand_a) < $signed(operand_b)};
            ALU_PASS: result = operand_b;
            default:  result = 32'b0;
        endcase
    end

    assign zero = (result == 32'b0);

endmodule
