module id_ex_reg_tb;

    import pipeline_pkg::*;

    logic clk;
    logic reset;
    logic stall;
    logic flush;

    logic [31:0] rs1_value_in, rs2_value_in, immediate_in, pc_in, pc_plus4_in;
    logic [4:0] rd_in;
    logic [2:0] funct3_in;
    logic reg_write_in, mem_read_in, mem_write_in, alu_src_in, branch_in, jump_in;
    result_src_t result_src_in;
    alu_op_src_t alu_op_in;

    logic [31:0] rs1_value, rs2_value, immediate, pc, pc_plus4;
    logic [4:0] rd;
    logic [2:0] funct3;
    logic reg_write, mem_read, mem_write, alu_src, branch, jump;
    result_src_t result_src;
    alu_op_src_t alu_op;

    int errors;

    id_ex_reg dut (
        .clk(clk), .reset(reset), .stall(stall), .flush(flush),
        .rs1_value_in(rs1_value_in), .rs2_value_in(rs2_value_in),
        .immediate_in(immediate_in), .rd_in(rd_in), .funct3_in(funct3_in),
        .pc_in(pc_in), .pc_plus4_in(pc_plus4_in),
        .reg_write_in(reg_write_in), .mem_read_in(mem_read_in),
        .mem_write_in(mem_write_in), .alu_src_in(alu_src_in),
        .branch_in(branch_in), .jump_in(jump_in),
        .result_src_in(result_src_in), .alu_op_in(alu_op_in),
        .rs1_value(rs1_value), .rs2_value(rs2_value),
        .immediate(immediate), .rd(rd), .funct3(funct3),
        .pc(pc), .pc_plus4(pc_plus4),
        .reg_write(reg_write), .mem_read(mem_read),
        .mem_write(mem_write), .alu_src(alu_src),
        .branch(branch), .jump(jump),
        .result_src(result_src), .alu_op(alu_op)
    );

    always #5 clk <= ~clk;

    initial begin
        $dumpfile("sim/block_sim/pipeline/id_ex_reg.vcd");
        $dumpvars(0, id_ex_reg_tb);

        clk = 0; reset = 0; stall = 0; flush = 0;
        rs1_value_in = 0; rs2_value_in = 0; immediate_in = 0;
        rd_in = 0; funct3_in = 0; pc_in = 0; pc_plus4_in = 0;
        reg_write_in = 0; mem_read_in = 0; mem_write_in = 0;
        alu_src_in = 0; branch_in = 0; jump_in = 0;
        result_src_in = RESULT_ALU; alu_op_in = ALU_SRC_ADD;
        errors = 0;

        #10; reset = 1; #10; reset = 0;

        rs1_value_in = 32'hAAAA; rs2_value_in = 32'hBBBB;
        immediate_in = 32'h10; rd_in = 5'd5; funct3_in = 3'b010;
        pc_in = 32'h100; pc_plus4_in = 32'h104;
        reg_write_in = 1; alu_src_in = 1;
        result_src_in = RESULT_MEM; alu_op_in = ALU_SRC_RTYPE;
        #10;

        if (rs1_value !== 32'hAAAA || rd !== 5'd5 || reg_write !== 1 || alu_src !== 1) begin
            $display("ERROR: Normal pass failed");
            errors++;
        end

        flush = 1; #10;
        if (rs1_value !== 32'h0 || rd !== 5'd0 || reg_write !== 0) begin
            $display("ERROR: Flush failed");
            errors++;
        end

        if (errors == 0)
            $display("PASS");
        else
            $display("FAIL: %0d errors", errors);

        $finish;
    end

endmodule
