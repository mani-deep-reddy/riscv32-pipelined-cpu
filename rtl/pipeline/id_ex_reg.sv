import pipeline_pkg::*;

module id_ex_reg (
    input  logic        clk,
    input  logic        reset,
    input  logic        stall,
    input  logic        flush,

    input  logic [31:0] rs1_value_in,
    input  logic [31:0] rs2_value_in,
    input  logic [31:0] immediate_in,
    input  logic [4:0]  rd_in,
    input  logic [2:0]  funct3_in,
    input  logic [31:0] pc_in,
    input  logic [31:0] pc_plus4_in,

    input  logic        reg_write_in,
    input  logic        mem_read_in,
    input  logic        mem_write_in,
    input  logic        alu_src_in,
    input  logic        branch_in,
    input  logic        jump_in,
    input  result_src_t result_src_in,
    input  alu_op_src_t alu_op_in,

    output logic [31:0] rs1_value,
    output logic [31:0] rs2_value,
    output logic [31:0] immediate,
    output logic [4:0]  rd,
    output logic [2:0]  funct3,
    output logic [31:0] pc,
    output logic [31:0] pc_plus4,

    output logic        reg_write,
    output logic        mem_read,
    output logic        mem_write,
    output logic        alu_src,
    output logic        branch,
    output logic        jump,
    output result_src_t result_src,
    output alu_op_src_t alu_op
);

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            rs1_value   <= '0;
            rs2_value   <= '0;
            immediate   <= '0;
            rd          <= '0;
            funct3      <= '0;
            pc          <= '0;
            pc_plus4    <= '0;
            reg_write   <= '0;
            mem_read    <= '0;
            mem_write   <= '0;
            alu_src     <= '0;
            branch      <= '0;
            jump        <= '0;
            result_src  <= RESULT_ALU;
            alu_op      <= ALU_SRC_ADD;
        end
        else if (flush) begin
            rs1_value   <= '0;
            rs2_value   <= '0;
            immediate   <= '0;
            rd          <= '0;
            funct3      <= '0;
            pc          <= '0;
            pc_plus4    <= '0;
            reg_write   <= '0;
            mem_read    <= '0;
            mem_write   <= '0;
            alu_src     <= '0;
            branch      <= '0;
            jump        <= '0;
            result_src  <= RESULT_ALU;
            alu_op      <= ALU_SRC_ADD;
        end
        else if (stall) begin
            rs1_value   <= rs1_value;
            rs2_value   <= rs2_value;
            immediate   <= immediate;
            rd          <= rd;
            funct3      <= funct3;
            pc          <= pc;
            pc_plus4    <= pc_plus4;
            reg_write   <= reg_write;
            mem_read    <= mem_read;
            mem_write   <= mem_write;
            alu_src     <= alu_src;
            branch      <= branch;
            jump        <= jump;
            result_src  <= result_src;
            alu_op      <= alu_op;
        end
        else begin
            rs1_value   <= rs1_value_in;
            rs2_value   <= rs2_value_in;
            immediate   <= immediate_in;
            rd          <= rd_in;
            funct3      <= funct3_in;
            pc          <= pc_in;
            pc_plus4    <= pc_plus4_in;
            reg_write   <= reg_write_in;
            mem_read    <= mem_read_in;
            mem_write   <= mem_write_in;
            alu_src     <= alu_src_in;
            branch      <= branch_in;
            jump        <= jump_in;
            result_src  <= result_src_in;
            alu_op      <= alu_op_in;
        end
    end

endmodule
