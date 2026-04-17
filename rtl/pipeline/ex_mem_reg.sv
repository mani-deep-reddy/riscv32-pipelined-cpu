import pipeline_pkg::*;

module ex_mem_reg (
    input  logic        clk,
    input  logic        reset,
    input  logic        stall,
    input  logic        flush,

    input  logic [31:0] alu_result_in,
    input  logic [31:0] rs2_value_in,
    input  logic [4:0]  rd_in,
    input  logic [31:0] pc_plus4_in,
    input  logic [31:0] branch_target_in,
    input  logic        branch_taken_in,

    input  logic        reg_write_in,
    input  logic        mem_read_in,
    input  logic        mem_write_in,
    input  result_src_t result_src_in,

    output logic [31:0] alu_result,
    output logic [31:0] rs2_value,
    output logic [4:0]  rd,
    output logic [31:0] pc_plus4,
    output logic [31:0] branch_target,
    output logic        branch_taken,

    output logic        reg_write,
    output logic        mem_read,
    output logic        mem_write,
    output result_src_t result_src
);

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            alu_result   <= '0;
            rs2_value    <= '0;
            rd            <= '0;
            pc_plus4      <= '0;
            branch_target <= '0;
            branch_taken  <= '0;
            reg_write     <= '0;
            mem_read      <= '0;
            mem_write     <= '0;
            result_src    <= RESULT_ALU;
        end
        else if (flush) begin
            alu_result   <= '0;
            rs2_value    <= '0;
            rd            <= '0;
            pc_plus4      <= '0;
            branch_target <= '0;
            branch_taken  <= '0;
            reg_write     <= '0;
            mem_read      <= '0;
            mem_write     <= '0;
            result_src    <= RESULT_ALU;
        end
        else if (stall) begin
            alu_result   <= alu_result;
            rs2_value    <= rs2_value;
            rd            <= rd;
            pc_plus4      <= pc_plus4;
            branch_target <= branch_target;
            branch_taken  <= branch_taken;
            reg_write     <= reg_write;
            mem_read      <= mem_read;
            mem_write     <= mem_write;
            result_src    <= result_src;
        end
        else begin
            alu_result   <= alu_result_in;
            rs2_value    <= rs2_value_in;
            rd            <= rd_in;
            pc_plus4      <= pc_plus4_in;
            branch_target <= branch_target_in;
            branch_taken  <= branch_taken_in;
            reg_write     <= reg_write_in;
            mem_read      <= mem_read_in;
            mem_write     <= mem_write_in;
            result_src    <= result_src_in;
        end
    end

endmodule
