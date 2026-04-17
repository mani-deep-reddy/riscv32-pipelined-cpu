module ex_mem_reg_tb;

    import pipeline_pkg::*;

    logic clk;
    logic reset;
    logic stall;
    logic flush;

    logic [31:0] alu_result_in, rs2_value_in, pc_plus4_in, branch_target_in;
    logic [4:0] rd_in;
    logic branch_taken_in;
    logic reg_write_in, mem_read_in, mem_write_in;
    result_src_t result_src_in;

    logic [31:0] alu_result, rs2_value, pc_plus4, branch_target;
    logic [4:0] rd;
    logic branch_taken;
    logic reg_write, mem_read, mem_write;
    result_src_t result_src;

    int errors;

    ex_mem_reg dut (
        .clk(clk), .reset(reset), .stall(stall), .flush(flush),
        .alu_result_in(alu_result_in), .rs2_value_in(rs2_value_in),
        .rd_in(rd_in), .pc_plus4_in(pc_plus4_in),
        .branch_target_in(branch_target_in), .branch_taken_in(branch_taken_in),
        .reg_write_in(reg_write_in), .mem_read_in(mem_read_in),
        .mem_write_in(mem_write_in), .result_src_in(result_src_in),
        .alu_result(alu_result), .rs2_value(rs2_value),
        .rd(rd), .pc_plus4(pc_plus4),
        .branch_target(branch_target), .branch_taken(branch_taken),
        .reg_write(reg_write), .mem_read(mem_read),
        .mem_write(mem_write), .result_src(result_src)
    );

    always #5 clk <= ~clk;

    initial begin
        $dumpfile("sim/block_sim/pipeline/ex_mem_reg.vcd");
        $dumpvars(0, ex_mem_reg_tb);

        clk = 0; reset = 0; stall = 0; flush = 0;
        alu_result_in = 0; rs2_value_in = 0; rd_in = 0;
        pc_plus4_in = 0; branch_target_in = 0; branch_taken_in = 0;
        reg_write_in = 0; mem_read_in = 0; mem_write_in = 0;
        result_src_in = RESULT_ALU;
        errors = 0;

        #10; reset = 1; #10; reset = 0;

        alu_result_in = 32'h1000; rs2_value_in = 32'h20;
        rd_in = 5'd10; pc_plus4_in = 32'h104;
        branch_target_in = 32'h200; branch_taken_in = 1;
        reg_write_in = 1; mem_write_in = 1;
        result_src_in = RESULT_MEM;
        #10;

        if (alu_result !== 32'h1000 || rd !== 5'd10 || branch_taken !== 1) begin
            $display("ERROR: Normal pass failed");
            errors++;
        end

        flush = 1; #10;
        if (alu_result !== 32'h0 || branch_taken !== 0) begin
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
