module immediate_generator_tb;

    logic [31:0] instruction;
    imm_type_t   imm_type;

    logic [31:0] imm;
    logic [31:0] expected;

    int errors;

    // DUT
    immediate_generator dut (
        .instruction(instruction),
        .imm_type(imm_type),
        .imm(imm)
    );

    initial begin

        $dumpfile("sim/block_sim/decode/immediate_generator.vcd");
        $dumpvars(0, immediate_generator_tb);

        errors = 0;

        repeat (100) begin

            instruction = $urandom;
            imm_type    = imm_type_t'($urandom_range(0,5));

            #1;

            compute_expected();

            if (imm !== expected) begin
                $display("ERROR:");
                $display("instr=%h imm_type=%0d", instruction, imm_type);
                $display("imm=%h expected=%h", imm, expected);
                errors++;
            end

        end

        if (errors == 0)
            $display("PASS");
        else
            $display("FAIL: %0d errors", errors);

        $finish;
    end

    task compute_expected;
        logic sign;
        begin
            sign = instruction[31];

            case (imm_type)

                IMM_I: begin
                    expected = {{20{sign}}, instruction[31:20]};
                end

                IMM_S: begin
                    expected = {{20{sign}},
                                instruction[31:25],
                                instruction[11:7]};
                end

                IMM_B: begin
                    expected = {{19{sign}},
                                instruction[31],
                                instruction[7],
                                instruction[30:25],
                                instruction[11:8],
                                1'b0};
                end

                IMM_U: begin
                    expected = {instruction[31:12], 12'b0};
                end

                IMM_J: begin
                    expected = {{11{sign}},
                                instruction[31],
                                instruction[19:12],
                                instruction[20],
                                instruction[30:21],
                                1'b0};
                end

                IMM_NONE: begin
                    expected = 32'b0;
                end

                default: begin
                    expected = 32'b0;
                end

            endcase
        end
    endtask

endmodule
