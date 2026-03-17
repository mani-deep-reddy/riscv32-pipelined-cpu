import cpu_params::*;

module pc_tb;

    logic [XLEN-1:0] pc_next;
    logic clk;
    logic reset;
    logic pc_write;

    logic [XLEN-1:0] pc;
    logic [XLEN-1:0] expected;

    int errors;

    // DUT
    pc dut(
        .pc_next(pc_next),
        .clk(clk),
        .reset(reset),
        .pc_write(pc_write),
        .pc(pc)
    );

    // clock
    always #5 clk <= ~clk;

    initial begin

        $dumpfile("sim/block_sim/fetch/pc.vcd");
        $dumpvars(0, pc_tb);

        clk = 0;
        errors = 0;
        expected = '0;

        // initial reset
        reset = 1;
        pc_write = 0;
        @(posedge clk);
        reset = 0;

        repeat(60) begin

            @(posedge clk);

            pc_next  = $urandom;
            reset    = bit'($urandom);
            pc_write = bit'($urandom);

            if (reset)
                expected = PC_RESET;
            else if (pc_write)
                expected = pc_next;
            else
                expected = expected;

            #1;

            if (pc !== expected) begin
                $display("ERROR: pc=%h expected=%h reset=%b write=%b",
                          pc, expected, reset, pc_write);
                errors++;
            end
        end

        if (errors == 0)
            $display("PASS");
        else
            $display("FAIL: %0d errors", errors);

        $finish;
    end

endmodule
