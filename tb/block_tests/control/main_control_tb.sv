module main_control_tb;

    import riscv_pkg::*;
    import pipeline_pkg::*;

    logic clk;
    logic [6:0] opcode;

    logic        reg_write_d1, mem_read_d1, mem_write_d1, alu_src_d1, branch_d1, jump_d1;
    result_src_t result_src_d1;
    alu_op_src_t alu_op_d1;
    int errors;
    int cycle;

    main_control dut (
        .opcode(opcode),
        .reg_write(reg_write_d1),
        .mem_read(mem_read_d1),
        .mem_write(mem_write_d1),
        .alu_src(alu_src_d1),
        .branch(branch_d1),
        .jump(jump_d1),
        .result_src(result_src_d1),
        .alu_op(alu_op_d1)
    );

    always #5 clk <= ~clk;

    initial begin
        clk = 0;
        errors = 0;
        cycle = 0;

        cycle = 1; opcode = OPCODE_OP; #10;
        check_opcode(1'b1, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, RESULT_ALU, ALU_SRC_RTYPE);

        cycle = 2; opcode = OPCODE_OP_IMM; #10;
        check_opcode(1'b1, 1'b0, 1'b0, 1'b1, 1'b0, 1'b0, RESULT_ALU, ALU_SRC_ADD);

        cycle = 3; opcode = OPCODE_LOAD; #10;
        check_opcode(1'b1, 1'b1, 1'b0, 1'b1, 1'b0, 1'b0, RESULT_MEM, ALU_SRC_ADD);

        cycle = 4; opcode = OPCODE_STORE; #10;
        check_opcode(1'b0, 1'b0, 1'b1, 1'b1, 1'b0, 1'b0, RESULT_ALU, ALU_SRC_ADD);

        cycle = 5; opcode = OPCODE_BRANCH; #10;
        check_opcode(1'b0, 1'b0, 1'b0, 1'b0, 1'b1, 1'b0, RESULT_ALU, ALU_SRC_SUB);

        cycle = 6; opcode = OPCODE_LUI; #10;
        check_opcode(1'b1, 1'b0, 1'b0, 1'b1, 1'b0, 1'b0, RESULT_ALU, ALU_SRC_LUI);

        cycle = 7; opcode = OPCODE_JAL; #10;
        check_opcode(1'b1, 1'b0, 1'b0, 1'b0, 1'b0, 1'b1, RESULT_PC4, ALU_SRC_ADD);

        cycle = 8; opcode = 7'b0000000; #10;
        check_opcode(1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, RESULT_ALU, ALU_SRC_ADD);

        if (errors == 0)
            $display("PASS");
        else
            $display("FAIL: %0d errors", errors);

        $finish;
    end

    task check_opcode(
        input exp_reg_write, exp_mem_read, exp_mem_write, exp_alu_src,
        input exp_branch, exp_jump,
        input result_src_t exp_result_src,
        input alu_op_src_t exp_alu_op
    );
        if (reg_write_d1 !== exp_reg_write || mem_read_d1 !== exp_mem_read ||
            mem_write_d1 !== exp_mem_write || alu_src_d1 !== exp_alu_src ||
            branch_d1 !== exp_branch || jump_d1 !== exp_jump ||
            result_src_d1 !== exp_result_src || alu_op_d1 !== exp_alu_op) begin
            $display("ERROR [cycle %0d]: control signals mismatch", cycle);
            errors++;
        end
    endtask

endmodule
