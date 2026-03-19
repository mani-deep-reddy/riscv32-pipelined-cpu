module register_file_tb;

    logic clk;
    logic reset;

    logic [4:0] rs1, rs2, rd;
    logic [31:0] write_data;
    logic reg_write;

    logic [31:0] rs1_value, rs2_value;

    int errors;

    // DUT
    register_file dut (
        .clk(clk),
        .reset(reset),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .write_data(write_data),
        .reg_write(reg_write),
        .rs1_value(rs1_value),
        .rs2_value(rs2_value)
    );

    // clock
    always #5 clk = ~clk;

    initial begin
        $dumpfile("sim/block_sim/decode/register_file.vcd");
        $dumpvars(0, register_file_tb);

        clk = 0;
        errors = 0;

        // -------------------------
        // Reset
        // -------------------------
        reset = 1;
        reg_write = 0;
        @(posedge clk);
        reset = 0;

        // -------------------------
        // Test 1: simple write + read
        // -------------------------
        rd = 5'd5;
        write_data = 32'd123;
        reg_write = 1;

        @(posedge clk); // write happens here

        rs1 = 5'd5;
        rs2 = 5'd0;

        #1;
        check(32'd123, 32'd0);

        // -------------------------
        // Test 2: x0 should always be 0
        // -------------------------
        rd = 5'd0;
        write_data = 32'd999;
        reg_write = 1;

        @(posedge clk);

        rs1 = 5'd0;
        rs2 = 5'd0;

        #1;
        check(32'd0, 32'd0);

        // -------------------------
        // Test 3: no write when reg_write = 0
        // -------------------------
        rd = 5'd6;
        write_data = 32'd555;
        reg_write = 0;

        @(posedge clk);

        rs1 = 5'd6;

        #1;
        check(32'd0, rs2_value);

        // -------------------------
        // Test 4: random writes
        // -------------------------
        repeat (50) begin
            rd = $urandom_range(1,31); // avoid x0
            write_data = $urandom;
            reg_write = 1;

            @(posedge clk);

            rs1 = rd;

            #1;
            if (rs1_value !== write_data) begin
                $display("ERROR: write/read mismatch rd=%0d data=%h got=%h",
                          rd, write_data, rs1_value);
                errors++;
            end
        end

        // -------------------------
        // Final result
        // -------------------------
        if (errors == 0)
            $display("PASS");
        else
            $display("FAIL: %0d errors", errors);

        $finish;
    end

    // -------------------------
    // CHECK TASK
    // -------------------------
    task check(input [31:0] exp1, input [31:0] exp2);
        begin
            if (rs1_value !== exp1 || rs2_value !== exp2) begin
                $display("ERROR:");
                $display("rs1_val=%h expected=%h", rs1_value, exp1);
                $display("rs2_val=%h expected=%h", rs2_value, exp2);
                errors++;
            end
        end
    endtask

endmodule
