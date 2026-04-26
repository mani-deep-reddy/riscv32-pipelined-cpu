module program_tb;

    import cpu_params::*;
    import riscv_pkg::*;

    logic clk;
    logic reset;
    logic imem_we;
    logic [31:0] imem_waddr;
    logic [31:0] imem_wdata;
    logic [31:0] pc_debug;

    int errors;
    int cycle_count;
    int num_instr;

    real cpi;

    cpu_top dut (
        .clk(clk),
        .reset(reset),
        .imem_we(imem_we),
        .imem_waddr(imem_waddr),
        .imem_wdata(imem_wdata),
        .pc_debug(pc_debug)
    );

    always #5 clk <= ~clk;

    initial begin
        $dumpfile("sim/block_sim/cpu/program.vcd");
        $dumpvars(0, program_tb);

        clk = 0;
        reset = 1;
        imem_we = 0;
        errors = 0;
        cycle_count = 0;
        num_instr = 4;

        imem_waddr = 32'h00000000; imem_wdata = 32'h00000193; imem_we = 1; #10; imem_we = 0;
        imem_waddr = 32'h00000004; imem_wdata = 32'h00000213; imem_we = 1; #10; imem_we = 0;
        imem_waddr = 32'h00000008; imem_wdata = 32'h00208833; imem_we = 1; #10; imem_we = 0;
        imem_waddr = 32'h0000000c; imem_wdata = 32'h00000013; imem_we = 1; #10; imem_we = 0;

        #20;
        reset = 0;

        forever begin
            #10;
            cycle_count++;
            if (pc_debug >= 32'h00000010) begin
                repeat(5) begin
                    #10;
                    cycle_count++;
                end
                cpi = real'(cycle_count) / real'(num_instr);
                $display("Cycles: %0d, Instructions: %0d, CPI: %0f", cycle_count, num_instr, cpi);
                if (errors == 0)
                    $display("PASS");
                else
                    $display("FAIL: %0d errors", errors);
                break;
            end
            if (cycle_count >= 100) begin
                $display("ERROR: Timeout, PC stuck at %h", pc_debug);
                errors++;
                break;
            end
        end

        $finish;
    end

endmodule