module pipeline_reg_tb;

    parameter WIDTH = 32;

    logic clk;
    logic reset;
    logic stall;
    logic flush;

    logic [WIDTH-1:0] d;
    logic [WIDTH-1:0] q;
    logic [WIDTH-1:0] expected;

    int errors = 0;

    // coverage flags
    bit seen_reset  = 0;
    bit seen_flush  = 0;
    bit seen_stall  = 0;
    bit seen_normal = 0;

    // DUT
    pipeline_reg #(.WIDTH(WIDTH)) dut (
        .clk(clk),
        .reset(reset),
        .stall(stall),
        .flush(flush),
        .d(d),
        .q(q)
    );

    // clock
    always #5 clk <= ~clk;

    initial begin
        clk = 0;

        $dumpfile("sim/block_sim/utils/pipeline_reg.vcd");
        $dumpvars(0, pipeline_reg_tb);

        d = 32'hDEADBEEF;
        expected = '0;

        repeat (60) begin
            @(posedge clk);

            // randomize controls
            reset = bit'($urandom);
            stall = bit'($urandom);
            flush = bit'($urandom);

            // expected behavior
            if (reset) begin
                expected = '0;
                seen_reset = 1;
            end
            else if (flush) begin
                expected = '0;
                seen_flush = 1;
            end
            else if (stall) begin
                expected = expected;
                seen_stall = 1;
            end
            else begin
                expected = d;
                seen_normal = 1;
            end

            #1;

            if (q !== expected) begin
                $display("ERROR: reset=%b stall=%b flush=%b q=%h expected=%h",
                         reset, stall, flush, q, expected);
                errors++;
            end
        end

        $display("Coverage:");
        $display(" reset  seen = %0d", seen_reset);
        $display(" flush  seen = %0d", seen_flush);
        $display(" stall  seen = %0d", seen_stall);
        $display(" normal seen = %0d", seen_normal);

        if (errors == 0)
            $display("PASS: pipeline_reg test successful");
        else
            $display("FAIL: %0d errors detected", errors);

        $finish;
    end

endmodule
