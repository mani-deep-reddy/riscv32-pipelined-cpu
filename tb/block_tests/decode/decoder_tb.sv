module decoder_tb;

    logic [31:0] instruction;

    logic [6:0] opcode;
    logic [4:0] rd;
    logic [2:0] funct3;
    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [6:0] funct7;

    logic [6:0] expected_opcode;
    logic [4:0] expected_rd;
    logic [2:0] expected_funct3;
    logic [4:0] expected_rs1;
    logic [4:0] expected_rs2;
    logic [6:0] expected_funct7;

    int errors;

    // DUT
    decoder dut (
        .instruction(instruction),
        .opcode(opcode),
        .rd(rd),
        .funct3(funct3),
        .rs1(rs1),
        .rs2(rs2),
        .funct7(funct7)
    );

    initial begin

        $dumpfile("sim/block_sim/decode/decoder.vcd");
        $dumpvars(0, decoder_tb);

        errors = 0;

        // directed tests (sanity)
        instruction = 32'h00000000; #1;
        check();

        instruction = 32'hFFFFFFFF; #1;
        check();

        // random tests
        repeat (100) begin
            instruction = $urandom;
            #1;
            check();
        end

        if (errors == 0)
            $display("PASS");
        else
            $display("FAIL: %0d errors", errors);

        $finish;
    end

    task check;
        begin
            // expected values
            expected_opcode = instruction[6:0];
            expected_rd     = instruction[11:7];
            expected_funct3 = instruction[14:12];
            expected_rs1    = instruction[19:15];
            expected_rs2    = instruction[24:20];
            expected_funct7 = instruction[31:25];

            if (opcode !== expected_opcode ||
                rd     !== expected_rd     ||
                funct3 !== expected_funct3 ||
                rs1    !== expected_rs1    ||
                rs2    !== expected_rs2    ||
                funct7 !== expected_funct7) begin

                $display("ERROR:");
                $display("instr=%h", instruction);
                $display("opcode=%h exp=%h", opcode, expected_opcode);
                $display("rd=%h exp=%h", rd, expected_rd);
                $display("funct3=%h exp=%h", funct3, expected_funct3);
                $display("rs1=%h exp=%h", rs1, expected_rs1);
                $display("rs2=%h exp=%h", rs2, expected_rs2);
                $display("funct7=%h exp=%h", funct7, expected_funct7);

                errors++;
            end
        end
    endtask

endmodule
