module mux2_tb;

    parameter WIDTH = 32;

    logic clk;
    logic [WIDTH-1:0] a;
    logic [WIDTH-1:0] b;
    logic sel;

    logic [WIDTH-1:0] y;
    logic [WIDTH-1:0] expected;

    int errors = 0;

    // DUT
    mux2 #(.WIDTH(WIDTH)) dut (
        .a(a),
        .b(b),
        .sel(sel),
        .y(y)
    );

    // Clock generator
    always #5 clk <= ~clk;

    initial begin
        clk = 0;

        $dumpfile("sim/block_sim/utils/mux2.vcd");
        $dumpvars(0, mux2_tb);

        repeat (50) begin
            @(posedge clk);

            a   = $urandom;
            b   = $urandom;
            sel = bit'($urandom);

            expected = sel ? b : a;

            #1;

            if (y !== expected) begin
                $display("ERROR: a=%h b=%h sel=%b y=%h expected=%h",
                         a, b, sel, y, expected);
                errors++;
            end
        end

        if (errors == 0)
            $display("PASS: mux2 test successful");
        else
            $display("FAIL: %0d errors detected", errors);

        $finish;
    end

endmodule
