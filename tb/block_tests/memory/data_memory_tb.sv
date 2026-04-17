module data_memory_tb;

    logic clk;
    logic reset;
    logic [31:0] address;
    logic [31:0] write_data;
    logic mem_read;
    logic mem_write;
    logic [31:0] read_data;

    logic [31:0] read_data_d1;
    int errors;
    int cycle;

    data_memory dut (
        .clk(clk),
        .reset(reset),
        .address(address),
        .write_data(write_data),
        .mem_read(mem_read),
        .mem_write(mem_write),
        .read_data(read_data)
    );

    always #5 clk <= ~clk;

    always @(posedge clk) begin
        read_data_d1 <= read_data;
    end

    initial begin
        clk = 0;
        reset = 1;
        address = 0;
        write_data = 0;
        mem_read = 0;
        mem_write = 0;
        errors = 0;
        cycle = 0;

        #10;
        reset = 0;
        #10;

        cycle = 1; address = 32'h00000000; write_data = 32'hDEADBEEF; mem_write = 1; #10;
        mem_write = 0; #10;

        cycle = 2; address = 32'h00000000; mem_read = 1; #10;
        if (read_data_d1 !== 32'hDEADBEEF) begin
            $display("ERROR [cycle %0d]: Read mismatch got=%h exp=%h", cycle, read_data_d1, 32'hDEADBEEF);
            errors++;
        end
        mem_read = 0;
        #10;

        cycle = 3; address = 32'h00000004; write_data = 32'h12345678; mem_write = 1; #10;
        mem_write = 0; #10;

        cycle = 4; address = 32'h00000004; mem_read = 1; #10;
        if (read_data_d1 !== 32'h12345678) begin
            $display("ERROR [cycle %0d]: Read mismatch got=%h exp=%h", cycle, read_data_d1, 32'h12345678);
            errors++;
        end

        if (errors == 0)
            $display("PASS");
        else
            $display("FAIL: %0d errors", errors);

        $finish;
    end

endmodule
