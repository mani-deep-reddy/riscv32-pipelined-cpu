module pc_mux_tb;

    logic [31:0] pc_plus4;
    logic [31:0] branch_target;
    logic [31:0] jump_target;

    logic branch;
    logic jump;

    logic [31:0] pc_next;
    logic [31:0] expected;

    int errors;

    // DUT
    pc_mux dut (
        .pc_plus4(pc_plus4),
        .branch_target(branch_target),
        .jump_target(jump_target),
        .branch(branch),
        .jump(jump),
        .pc_next(pc_next)
    );

    initial begin
        $dumpfile("sim/block_sim/fetch/pc_mux.vcd");
        $dumpvars(0, pc_mux_tb);

        errors = 0;

        repeat (100) begin

            pc_plus4      = $urandom;
            branch_target = $urandom;
            jump_target   = $urandom;

            branch = bit'($urandom);
            jump   = bit'($urandom);

            // expected logic
            if (branch && jump)
                expected = pc_plus4;
            else if (jump)
                expected = jump_target;
            else if (branch)
                expected = branch_target;
            else
                expected = pc_plus4;

            #1;

            if (pc_next !== expected) begin
                $display("ERROR: pc_next=%h expected=%h branch=%b jump=%b",
                          pc_next, expected, branch, jump);
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