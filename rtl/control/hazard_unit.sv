import pipeline_pkg::*;

module hazard_unit (
    input  logic [4:0] ID_EX_rd,
    input  logic       ID_EX_mem_read,
    input  logic [4:0] IF_ID_rs1,
    input  logic [4:0] IF_ID_rs2,
    input  logic [4:0] ID_EX_rs1,
    input  logic [4:0] ID_EX_rs2,
    input  logic [4:0] EX_MEM_rd,
    input  logic [4:0] MEM_WB_rd,
    input  logic       EX_MEM_reg_write,
    input  logic       MEM_WB_reg_write,
    input  logic       branch_taken,

    output logic       stall,
    output logic       flush,
    output forward_sel_t ForwardA,
    output forward_sel_t ForwardB
);

    logic load_use_hazard;

    assign load_use_hazard = ID_EX_mem_read &&
                              (ID_EX_rd != 5'd0) &&
                              ((ID_EX_rd == IF_ID_rs1) ||
                               (ID_EX_rd == IF_ID_rs2));

    assign stall = load_use_hazard;
    assign flush = branch_taken && !stall;

    always_comb begin
        ForwardA = FWD_NONE;
        if (EX_MEM_reg_write && (EX_MEM_rd != 5'd0) && (EX_MEM_rd == ID_EX_rs1))
            ForwardA = FWD_EX_MEM;
        else if (MEM_WB_reg_write && (MEM_WB_rd != 5'd0) && (MEM_WB_rd == ID_EX_rs1))
            ForwardA = FWD_MEM_WB;
    end

    always_comb begin
        ForwardB = FWD_NONE;
        if (EX_MEM_reg_write && (EX_MEM_rd != 5'd0) && (EX_MEM_rd == ID_EX_rs2))
            ForwardB = FWD_EX_MEM;
        else if (MEM_WB_reg_write && (MEM_WB_rd != 5'd0) && (MEM_WB_rd == ID_EX_rs2))
            ForwardB = FWD_MEM_WB;
    end

endmodule
