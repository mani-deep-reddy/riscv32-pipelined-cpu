module cpu_top_tb;

    logic clk;
    logic reset;
    logic [31:0] pc_debug;

    int errors;

    cpu_top dut (
        .clk(clk),
        .reset(reset),
        .pc_debug(pc_debug)
    );

    always #5 clk <= ~clk;

    initial begin
        $dumpfile("sim/block_sim/cpu_top.vcd");
        $dumpvars(0, cpu_top_tb);

        clk = 0;
        reset = 1;
        errors = 0;

        #20;
        reset = 0;

        #100;

        if (errors == 0)
            $display("PASS");
        else
            $display("FAIL: %0d errors", errors);

        $finish;
    end

endmodule
