module forwarding_unit_tb;

    import pipeline_pkg::*;

    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [4:0] EX_MEM_rd;
    logic       EX_MEM_reg_write;
    logic [4:0] MEM_WB_rd;
    logic       MEM_WB_reg_write;
    forward_sel_t ForwardA;
    forward_sel_t ForwardB;

    int errors;

    forwarding_unit dut (
        .rs1(rs1),
        .rs2(rs2),
        .EX_MEM_rd(EX_MEM_rd),
        .EX_MEM_reg_write(EX_MEM_reg_write),
        .MEM_WB_rd(MEM_WB_rd),
        .MEM_WB_reg_write(MEM_WB_reg_write),
        .ForwardA(ForwardA),
        .ForwardB(ForwardB)
    );

    initial begin
        $dumpfile("sim/block_sim/execute/forwarding_unit.vcd");
        $dumpvars(0, forwarding_unit_tb);

        errors = 0;

        rs1 = 0; rs2 = 0;
        EX_MEM_rd = 0; EX_MEM_reg_write = 0;
        MEM_WB_rd = 0; MEM_WB_reg_write = 0;
        #1;
        check("none", FWD_NONE, FWD_NONE);

        rs1 = 5; rs2 = 3;
        EX_MEM_reg_write = 1; EX_MEM_rd = 5;
        MEM_WB_reg_write = 0;
        #1;
        check("EX_MEM fwd rs1", FWD_EX_MEM, FWD_NONE);

        rs1 = 5; rs2 = 5;
        EX_MEM_reg_write = 1; EX_MEM_rd = 5;
        #1;
        check("EX_MEM fwd both", FWD_EX_MEM, FWD_EX_MEM);

        rs1 = 5; rs2 = 7;
        EX_MEM_reg_write = 1; EX_MEM_rd = 5;
        MEM_WB_reg_write = 1; MEM_WB_rd = 7;
        #1;
        check("EX+MEM fwd", FWD_EX_MEM, FWD_MEM_WB);

        rs1 = 5; rs2 = 7;
        EX_MEM_reg_write = 0;
        MEM_WB_reg_write = 1; MEM_WB_rd = 7;
        #1;
        check("MEM_WB fwd", FWD_NONE, FWD_MEM_WB);

        rs1 = 5; rs2 = 7;
        EX_MEM_reg_write = 0;
        MEM_WB_reg_write = 1; MEM_WB_rd = 5;
        #1;
        check("MEM_WB rs1", FWD_MEM_WB, FWD_NONE);

        rs1 = 0; rs2 = 0;
        EX_MEM_reg_write = 1; EX_MEM_rd = 0;
        #1;
        check("x0 skip", FWD_NONE, FWD_NONE);

        if (errors == 0)
            $display("PASS");
        else
            $display("FAIL: %0d errors", errors);

        $finish;
    end

    task check(input [8*20:1] name, input forward_sel_t exp_a, input forward_sel_t exp_b);
        if (ForwardA !== exp_a || ForwardB !== exp_b) begin
            $display("ERROR [%s]: ForwardA=%b exp=%b ForwardB=%b exp=%b",
                   name, ForwardA, exp_a, ForwardB, exp_b);
            errors++;
        end
    endtask

endmodule