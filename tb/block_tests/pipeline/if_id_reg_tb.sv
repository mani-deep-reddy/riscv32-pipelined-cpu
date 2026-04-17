module if_id_reg_tb;

    logic clk;
    logic reset;
    logic stall;
    logic flush;

    logic [31:0] instruction_in;
    logic [31:0] pc_in;
    logic [31:0] pc_plus4_in;

    logic [31:0] instruction;
    logic [31:0] pc;
    logic [31:0] pc_plus4;

    int errors;

    if_id_reg dut (
        .clk(clk), .reset(reset), .stall(stall), .flush(flush),
        .instruction_in(instruction_in), .pc_in(pc_in), .pc_plus4_in(pc_plus4_in),
        .instruction(instruction), .pc(pc), .pc_plus4(pc_plus4)
    );

    always #5 clk <= ~clk;

    initial begin
        $dumpfile("sim/block_sim/pipeline/if_id_reg.vcd");
        $dumpvars(0, if_id_reg_tb);

        clk = 0; reset = 0; stall = 0; flush = 0;
        instruction_in = 0; pc_in = 0; pc_plus4_in = 0;
        errors = 0;

        #10; reset = 1; #10; reset = 0;

        instruction_in = 32'h12345678; pc_in = 32'h00000100; pc_plus4_in = 32'h00000104;
        #10;

        if (instruction !== 32'h12345678 || pc !== 32'h00000100 || pc_plus4 !== 32'h00000104) begin
            $display("ERROR: Normal pass failed");
            errors++;
        end

        flush = 1; #10;
        if (instruction !== 32'h0 || pc !== 32'h0 || pc_plus4 !== 32'h0) begin
            $display("ERROR: Flush failed");
            errors++;
        end

        instruction_in = 32'hAABBCCDD; pc_in = 32'h00000200; pc_plus4_in = 32'h00000204;
        flush = 0; stall = 1; #10;
        if (instruction !== 32'hAABBCCDD || pc !== 32'h00000200) begin
            $display("ERROR: Stall hold failed");
            errors++;
        end

        instruction_in = 32'h11111111; pc_in = 32'h00000300; pc_plus4_in = 32'h00000304;
        stall = 0; #10;
        if (instruction !== 32'h11111111 || pc !== 32'h00000300) begin
            $display("ERROR: Normal after stall failed");
            errors++;
        end

        if (errors == 0)
            $display("PASS");
        else
            $display("FAIL: %0d errors", errors);

        $finish;
    end

endmodule
