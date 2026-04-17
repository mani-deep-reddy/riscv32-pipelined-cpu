module mem_wb_reg_tb;

    import pipeline_pkg::*;

    logic clk;
    logic reset;
    logic stall;
    logic flush;

    logic [31:0] alu_result_in, mem_read_data_in, pc_plus4_in;
    logic [4:0] rd_in;
    logic reg_write_in;
    result_src_t result_src_in;

    logic [31:0] alu_result, mem_read_data, pc_plus4;
    logic [4:0] rd;
    logic reg_write;
    result_src_t result_src;

    int errors;

    mem_wb_reg dut (
        .clk(clk), .reset(reset), .stall(stall), .flush(flush),
        .alu_result_in(alu_result_in), .mem_read_data_in(mem_read_data_in),
        .rd_in(rd_in), .pc_plus4_in(pc_plus4_in),
        .reg_write_in(reg_write_in), .result_src_in(result_src_in),
        .alu_result(alu_result), .mem_read_data(mem_read_data),
        .rd(rd), .pc_plus4(pc_plus4),
        .reg_write(reg_write), .result_src(result_src)
    );

    always #5 clk <= ~clk;

    initial begin
        $dumpfile("sim/block_sim/pipeline/mem_wb_reg.vcd");
        $dumpvars(0, mem_wb_reg_tb);

        clk = 0; reset = 0; stall = 0; flush = 0;
        alu_result_in = 0; mem_read_data_in = 0; rd_in = 0;
        pc_plus4_in = 0; reg_write_in = 0; result_src_in = RESULT_ALU;
        errors = 0;

        #10; reset = 1; #10; reset = 0;

        alu_result_in = 32'h2000; mem_read_data_in = 32'hDEAD;
        rd_in = 5'd15; pc_plus4_in = 32'h108;
        reg_write_in = 1; result_src_in = RESULT_PC4;
        #10;

        if (alu_result !== 32'h2000 || mem_read_data !== 32'hDEAD || rd !== 5'd15 || result_src !== RESULT_PC4) begin
            $display("ERROR: Normal pass failed");
            errors++;
        end

        flush = 1; #10;
        if (alu_result !== 32'h0 || rd !== 5'd0 || reg_write !== 0) begin
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
