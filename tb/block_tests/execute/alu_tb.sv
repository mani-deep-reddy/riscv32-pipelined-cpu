module alu_tb;

    import riscv_pkg::*;

    logic clk;
    logic [31:0] operand_a;
    logic [31:0] operand_b;
    alu_op_t alu_operation;
    logic [31:0] result;
    logic zero;

    logic [31:0] result_d1;
    logic zero_d1;

    int errors;
    int cycle;

    alu dut (
        .operand_a(operand_a),
        .operand_b(operand_b),
        .alu_operation(alu_operation),
        .result(result),
        .zero(zero)
    );

    always #5 clk = ~clk;

    always @(posedge clk) begin
        result_d1 <= result;
        zero_d1 <= zero;
    end

    initial begin
        clk = 0;
        operand_a = 0;
        operand_b = 0;
        alu_operation = ALU_ADD;
        errors = 0;
        cycle = 0;

        #10;

        cycle = 1; operand_a = 32'd5; operand_b = 32'd3; alu_operation = ALU_ADD; #10; check(result_d1, zero_d1, "ADD");
        cycle = 2; alu_operation = ALU_SUB; #10; check(result_d1, zero_d1, "SUB");
        cycle = 3; alu_operation = ALU_AND; #10; check(result_d1, zero_d1, "AND");
        cycle = 4; alu_operation = ALU_OR; #10; check(result_d1, zero_d1, "OR");
        cycle = 5; alu_operation = ALU_SLT; #10; check(result_d1, zero_d1, "SLT a<b");
        cycle = 6; operand_a = 32'd10; operand_b = 32'd3; #10; check(result_d1, zero_d1, "SLT a>=b");
        cycle = 7; operand_a = 32'd5; operand_b = 32'd8; alu_operation = ALU_PASS; #10; check(result_d1, zero_d1, "PASS");
        cycle = 8; alu_operation = ALU_ADD; #10; check(result_d1, zero_d1, "zero flag");

        if (errors == 0)
            $display("PASS");
        else
            $display("FAIL: %0d errors", errors);

        $finish;
    end

    task check(input [31:0] exp_r, input exp_z, input [8*12:1] name);
        if (result_d1 !== exp_r || zero_d1 !== exp_z) begin
            $display("ERROR [cycle %0d %s]: result=%h exp=%h zero=%b exp=%b",
                     cycle, name, result_d1, exp_r, zero_d1, exp_z);
            errors++;
        end
    endtask

endmodule
