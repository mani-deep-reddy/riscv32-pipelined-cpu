module if_id_reg (
    input  logic        clk,
    input  logic        reset,
    input  logic        stall,
    input  logic        flush,

    input  logic [31:0] instruction_in,
    input  logic [31:0] pc_in,
    input  logic [31:0] pc_plus4_in,

    output logic [31:0] instruction,
    output logic [31:0] pc,
    output logic [31:0] pc_plus4
);

    always_ff @(posedge clk or posedge reset) begin
        if (reset)
            {instruction, pc, pc_plus4} <= '0;
        else if (flush)
            {instruction, pc, pc_plus4} <= '0;
        else if (stall)
            {instruction, pc, pc_plus4} <= {instruction, pc, pc_plus4};
        else
            {instruction, pc, pc_plus4} <= {instruction_in, pc_in, pc_plus4_in};
    end

endmodule
