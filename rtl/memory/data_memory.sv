import cpu_params::*;

module data_memory (
    input  logic        clk,
    input  logic        reset,
    input  logic [31:0] address,
    input  logic [31:0] write_data,
    input  logic        mem_read,
    input  logic        mem_write,
    output logic [31:0] read_data
);

    logic [31:0] mem [0:DMEM_DEPTH-1];

    always_ff @(posedge clk) begin
        if (reset) begin
            read_data <= 32'b0;
        end else begin
            if (mem_read) begin
                if (address[31:2] < DMEM_DEPTH)
                    read_data <= mem[address[31:2]];
                else begin
                    read_data <= 32'b0;
                    $warning("DMEM: Read out of bounds: %h", address);
                end
            end else begin
                read_data <= 32'b0;
            end
        end
    end

    always_ff @(posedge clk) begin
        if (!reset && mem_write) begin
            if (address[31:2] < DMEM_DEPTH)
                mem[address[31:2]] <= write_data;
            else
                $warning("DMEM: Write out of bounds: %h", address);
        end
    end

endmodule
