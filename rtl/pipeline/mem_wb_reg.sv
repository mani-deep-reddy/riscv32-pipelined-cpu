import pipeline_pkg::*;

module mem_wb_reg (
    input  logic        clk,
    input  logic        reset,
    input  logic        stall,
    input  logic        flush,

    input  logic [31:0] alu_result_in,
    input  logic [31:0] mem_read_data_in,
    input  logic [4:0]  rd_in,
    input  logic [31:0] pc_plus4_in,

    input  logic        reg_write_in,
    input  result_src_t result_src_in,

    output logic [31:0] alu_result,
    output logic [31:0] mem_read_data,
    output logic [4:0]  rd,
    output logic [31:0] pc_plus4,

    output logic        reg_write,
    output result_src_t result_src
);

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            alu_result    <= '0;
            mem_read_data <= '0;
            rd            <= '0;
            pc_plus4      <= '0;
            reg_write     <= '0;
            result_src    <= RESULT_ALU;
        end
        else if (flush) begin
            alu_result    <= '0;
            mem_read_data <= '0;
            rd            <= '0;
            pc_plus4      <= '0;
            reg_write     <= '0;
            result_src    <= RESULT_ALU;
        end
        else if (stall) begin
            alu_result    <= alu_result;
            mem_read_data <= mem_read_data;
            rd            <= rd;
            pc_plus4      <= pc_plus4;
            reg_write     <= reg_write;
            result_src    <= result_src;
        end
        else begin
            alu_result    <= alu_result_in;
            mem_read_data <= mem_read_data_in;
            rd            <= rd_in;
            pc_plus4      <= pc_plus4_in;
            reg_write     <= reg_write_in;
            result_src    <= result_src_in;
        end
    end

endmodule
