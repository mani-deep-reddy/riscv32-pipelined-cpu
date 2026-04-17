module address_calculator_tb;

    logic clk;
    logic [31:0] pc;
    logic [31:0] immediate;
    logic [31:0] branch_target;

    logic [31:0] branch_target_d1;
    int errors;
    int cycle;

    address_calculator dut (
        .pc(pc),
        .immediate(immediate),
        .branch_target(branch_target)
    );

    always #5 clk <= ~clk;

    always @(posedge clk) begin
        branch_target_d1 <= branch_target;
    end

    initial begin
        clk = 0;
        errors = 0;
        cycle = 0;

        cycle = 1; pc = 32'h00000000; immediate = 32'h00000004; #10;
        check(32'h00000004, "pc+imm_4");

        cycle = 2; pc = 32'h00000100; immediate = 32'hFFFFFFF4; #10;
        check(32'h000000F4, "pc+negative_imm");

        cycle = 3; pc = 32'h00001000; immediate = 32'h00001000; #10;
        check(32'h00002000, "pc+imm_8k");

        if (errors == 0)
            $display("PASS");
        else
            $display("FAIL: %0d errors", errors);

        $finish;
    end

    task check(input [31:0] exp, input [8*16:1] name);
        if (branch_target_d1 !== exp) begin
            $display("ERROR [cycle %0d %s]: got=%h exp=%h", cycle, name, branch_target_d1, exp);
            errors++;
        end
    endtask

endmodule
