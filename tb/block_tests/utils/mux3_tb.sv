module mux3_tb;

    parameter WIDTH = 32;

    logic clk;
    logic [WIDTH-1:0] a;
    logic [WIDTH-1:0] b;
    logic [WIDTH-1:0] c;
    logic [1:0] sel;

    logic [WIDTH-1:0] y;
    logic [WIDTH-1:0] expected;

    int errors = 0;

    //DUT
    mux3 #(.WIDTH(WIDTH)) dut(
        .a(a),
        .b(b),
        .c(c),
        .sel(sel),
        .y(y)
    );

    //clock
    always #5 clk <= ~clk;

    initial begin
        clk = 0;

        $dumpfile("sim/block_sim/utils/mux3.vcd");
        $dumpvars(0, mux3_tb);

        repeat(50) begin
            
            @(posedge clk);

            a = $urandom;
            b = $urandom;
            c = $urandom;
            sel[0] = bit'($urandom);
            sel[1] = bit'($urandom);

            case (sel)
                2'b00: expected = a;
                2'b01: expected = b;
                2'b10: expected = c;
                default: expected = a; //handles 2'b11
            endcase

            #1;

            if (y !== expected) begin
                $display("ERROR: a = %h b = %h c = %h sel = %b y = %h expected = %h",
                        a, b, c, sel, y, expected);
                    errors++;
            end
        end


        if (errors == 0) 
            $display("PASS: mux3 test successful");
        else 
            $display("FAIL: errors detected: %0d",errors);
           
        $finish;
    end

endmodule

