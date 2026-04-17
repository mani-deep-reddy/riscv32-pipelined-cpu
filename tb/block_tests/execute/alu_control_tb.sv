module alu_control_tb;

    import riscv_pkg::*;
    import pipeline_pkg::*;

    logic clk;
    alu_op_src_t ALUOp;
    logic [2:0] funct3;
    logic [6:0] funct7;
    alu_op_t alu_operation;

    logic alu_operation_d1;
    int errors;
    int cycle;

    alu_control dut (
        .ALUOp(ALUOp),
        .funct3(funct3),
        .funct7(funct7),
        .alu_operation(alu_operation)
    );

    always #5 clk <= ~clk;

    always @(posedge clk) begin
        alu_operation_d1 <= alu_operation;
    end

    initial begin
        clk = 0;
        errors = 0;
        cycle = 0;

        ALUOp = ALU_SRC_ADD; funct3 = 3'b000; funct7 = 7'b0;
        cycle = 1; #10; check(ALU_ADD, "ALU_SRC_ADD");

        ALUOp = ALU_SRC_SUB; funct3 = 3'b000; funct7 = 7'b0;
        cycle = 2; #10; check(ALU_SUB, "ALU_SRC_SUB");

        ALUOp = ALU_SRC_LUI; funct3 = 3'b000; funct7 = 7'b0;
        cycle = 3; #10; check(ALU_PASS, "ALU_SRC_LUI");

        ALUOp = ALU_SRC_RTYPE; funct3 = 3'b000; funct7 = 7'b0000000;
        cycle = 4; #10; check(ALU_ADD, "RTYPE ADD");

        ALUOp = ALU_SRC_RTYPE; funct3 = 3'b000; funct7 = 7'b0100000;
        cycle = 5; #10; check(ALU_SUB, "RTYPE SUB");

        ALUOp = ALU_SRC_RTYPE; funct3 = 3'b111; funct7 = 7'b0000000;
        cycle = 6; #10; check(ALU_AND, "RTYPE AND");

        ALUOp = ALU_SRC_RTYPE; funct3 = 3'b110; funct7 = 7'b0000000;
        cycle = 7; #10; check(ALU_OR, "RTYPE OR");

        ALUOp = ALU_SRC_RTYPE; funct3 = 3'b010; funct7 = 7'b0000000;
        cycle = 8; #10; check(ALU_SLT, "RTYPE SLT");

        if (errors == 0)
            $display("PASS");
        else
            $display("FAIL: %0d errors", errors);

        $finish;
    end

    task check(alu_op_t exp, input [8*12:1] name);
        if (alu_operation_d1 !== exp) begin
            $display("ERROR [cycle %0d %s]: got=%p exp=%p", cycle, name, alu_operation_d1, exp);
            errors++;
        end
    endtask

endmodule
