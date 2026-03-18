import cpu_params::*;

module pc_mux (
    input  logic [XLEN-1:0] pc_plus4,
    input  logic [XLEN-1:0] branch_target,
    input  logic [XLEN-1:0] jump_target,
    input  logic branch,
    input  logic jump,
    output logic [XLEN-1:0] pc_next
);

    logic [1:0] sel;

    // ============================================================
    // CONTROL ENCODING (CRITICAL - DO NOT CHANGE ORDER)
    // sel = {jump, branch}
    //
    // sel[1] = jump
    // sel[0] = branch
    //
    // Mapping:
    // 00 → pc_plus4
    // 01 → branch_target
    // 10 → jump_target
    // 11 → default (pc_plus4)
    //
    // If you swap order → branch and jump get swapped → CPU breaks
    // ============================================================

    assign sel = {jump, branch};

    mux3 #(.WIDTH(XLEN)) u_mux3 (
        .a(pc_plus4),
        .b(branch_target),
        .c(jump_target),
        .sel(sel),
        .y(pc_next)
    );

endmodule