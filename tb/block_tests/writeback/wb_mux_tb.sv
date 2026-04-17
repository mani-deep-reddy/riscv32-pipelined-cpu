module wb_mux_tb;

    import pipeline_pkg::*;

    logic clk;
    logic [31:0] alu_result;
    logic [31:0] mem_data;
    logic [31:0] pc_plus4;
    result_src_t result_src;
    logic [31:0] writeback_data;

    logic [31:0] writeback_data_d1;
    logic [1:0] result_src_d1;
    int errors;
    int cycle;

    wb_mux dut (
        .alu_result(alu_result),
        .mem_data(mem_data),
        .pc_plus4(pc_plus4),
        .result_src(result_src),
        .writeback_data(writeback_data)
    );

    always #5 clk <= ~clk;

    always @(posedge clk) begin
        writeback_data_d1 <= writeback_data;
    end

    initial begin
        clk = 0;
        errors = 0;
        cycle = 0;

        alu_result = 32'hA5A5A5A5;
        mem_data = 32'hDEADBEEF;
        pc_plus4 = 32'h00000100;

        cycle = 1; result_src = RESULT_ALU; #10;
        check(32'hA5A5A5A5, "RESULT_ALU");

        cycle = 2; result_src = RESULT_MEM; #10;
        check(32'hDEADBEEF, "RESULT_MEM");

        cycle = 3; result_src = RESULT_PC4; #10;
        check(32'h00000100, "RESULT_PC4");

        if (errors == 0)
            $display("PASS");
        else
            $display("FAIL: %0d errors", errors);

        $finish;
    end

    task check(input [31:0] exp, input [8*12:1] name);
        if (writeback_data_d1 !== exp) begin
            $display("ERROR [cycle %0d %s]: got=%h exp=%h", cycle, name, writeback_data_d1, exp);
            errors++;
        end
    endtask

endmodule
