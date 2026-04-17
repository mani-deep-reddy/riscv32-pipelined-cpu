module branch_unit_tb;

    logic clk;
    logic [31:0] rs1;
    logic [31:0] rs2;
    logic [2:0] funct3;
    logic branch;
    logic branch_taken;

    logic branch_taken_d1;
    int errors;
    int cycle;

    branch_unit dut (
        .rs1(rs1),
        .rs2(rs2),
        .funct3(funct3),
        .branch(branch),
        .branch_taken(branch_taken)
    );

    always #5 clk <= ~clk;

    always @(posedge clk) begin
        branch_taken_d1 <= branch_taken;
    end

    initial begin
        clk = 0;
        errors = 0;
        cycle = 0;

        cycle = 1; rs1 = 32'd5; rs2 = 32'd5; funct3 = 3'b000; branch = 1'b1; #10;
        check(1'b1, "BEQ equal");

        cycle = 2; rs1 = 32'd5; rs2 = 32'd3; funct3 = 3'b000; branch = 1'b1; #10;
        check(1'b0, "BEQ not equal");

        cycle = 3; rs1 = 32'd5; rs2 = 32'd5; funct3 = 3'b001; branch = 1'b1; #10;
        check(1'b0, "BNE equal");

        cycle = 4; rs1 = 32'd5; rs2 = 32'd3; funct3 = 3'b001; branch = 1'b1; #10;
        check(1'b1, "BNE not equal");

        cycle = 5; rs1 = 32'd5; rs2 = 32'd5; funct3 = 3'b000; branch = 1'b0; #10;
        check(1'b0, "branch=0 BEQ");

        cycle = 6; rs1 = 32'd5; rs2 = 32'd5; funct3 = 3'b001; branch = 1'b0; #10;
        check(1'b0, "branch=0 BNE");

        if (errors == 0)
            $display("PASS");
        else
            $display("FAIL: %0d errors", errors);

        $finish;
    end

    task check(input exp, input [8*16:1] name);
        if (branch_taken_d1 !== exp) begin
            $display("ERROR [cycle %0d %s]: got=%b exp=%b", cycle, name, branch_taken_d1, exp);
            errors++;
        end
    endtask

endmodule
