module imem_tb;

    import cpu_params::*;
    import riscv_pkg::*;

    logic [XLEN-1:0] pc;
    logic [31:0] instruction;

    int errors;

    imem dut (
        .clk(1'b0),
        .reset(1'b0),
        .pc(pc),
        .write_enable(1'b0),
        .write_addr(32'h0),
        .write_data(32'h0),
        .instruction(instruction)
    );

    initial begin
        $dumpfile("sim/block_sim/fetch/imem.vcd");
        $dumpvars(0, imem_tb);

        errors = 0;

        dut.mem[0] = 32'h00000093;
        dut.mem[1] = 32'h00100113;
        dut.mem[2] = 32'h00200193;
        dut.mem[10] = 32'h023FFF33;

        #1;

        pc = 32'h00000000; #1;
        if (instruction !== 32'h00000093) begin
            $display("ERROR: addr 0: got %h exp %h", instruction, 32'h00000093);
            errors++;
        end

        pc = 32'h00000004; #1;
        if (instruction !== 32'h00100113) begin
            $display("ERROR: addr 4: got %h exp %h", instruction, 32'h00100113);
            errors++;
        end

        pc = 32'h00000008; #1;
        if (instruction !== 32'h00200193) begin
            $display("ERROR: addr 8: got %h exp %h", instruction, 32'h00200193);
            errors++;
        end

        pc = 32'h00000028; #1;
        if (instruction !== 32'h023FFF33) begin
            $display("ERROR: addr 40: got %h exp %h", instruction, 32'h023FFF33);
            errors++;
        end

        pc = 32'h00001000; #1;
        if (instruction !== 32'h00000013) begin
            $display("ERROR: OOB: got %h exp %h", instruction, 32'h00000013);
            errors++;
        end

        if (errors == 0)
            $display("PASS");
        else
            $display("FAIL: %0d errors", errors);

        $finish;
    end

endmodule