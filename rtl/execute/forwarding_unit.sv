import pipeline_pkg::*;

module forwarding_unit (
    input  logic [4:0] rs1,
    input  logic [4:0] rs2,
    input  logic [4:0] EX_MEM_rd,
    input  logic       EX_MEM_reg_write,
    input  logic [4:0] MEM_WB_rd,
    input  logic       MEM_WB_reg_write,
    output forward_sel_t ForwardA,
    output forward_sel_t ForwardB
);

    always_comb begin
        ForwardA = FWD_NONE;
        if (EX_MEM_reg_write && (EX_MEM_rd != 5'd0) && (EX_MEM_rd == rs1))
            ForwardA = FWD_EX_MEM;
        else if (MEM_WB_reg_write && (MEM_WB_rd != 5'd0) && (MEM_WB_rd == rs1))
            ForwardA = FWD_MEM_WB;
    end

    always_comb begin
        ForwardB = FWD_NONE;
        if (EX_MEM_reg_write && (EX_MEM_rd != 5'd0) && (EX_MEM_rd == rs2))
            ForwardB = FWD_EX_MEM;
        else if (MEM_WB_reg_write && (MEM_WB_rd != 5'd0) && (MEM_WB_rd == rs2))
            ForwardB = FWD_MEM_WB;
    end

endmodule
