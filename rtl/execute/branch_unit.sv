module branch_unit (
    input  logic [31:0] rs1,
    input  logic [31:0] rs2,
    input  logic [2:0]  funct3,
    input  logic        branch,
    output logic        branch_taken
);

    always_comb begin
        branch_taken = 1'b0;
        if (branch) begin
            case (funct3)
                3'b000: branch_taken = (rs1 == rs2);
                3'b001: branch_taken = (rs1 != rs2);
                default: branch_taken = 1'b0;
            endcase
        end
    end

endmodule
