import cpu_params::*;

module imem (
    input  logic        clk,
    input  logic        reset,
    input  logic [XLEN-1:0] pc,
    input  logic        write_enable,
    input  logic [XLEN-1:0] write_addr,
    input  logic [31:0]    write_data,
    output logic [31:0] instruction
);

    logic [31:0] mem [0:IMEM_DEPTH-1];

    logic [XLEN-1:0] index;

    assign index = pc >> 2;

    always_comb begin
        if (index < IMEM_DEPTH)
            instruction = mem[index];
        else begin
            instruction = 32'h00000013;
            $warning("IMEM: PC out of bounds: %h", pc);
        end
    end

    always_ff @(posedge clk) begin
        if (!reset && write_enable) begin
            if (write_addr[31:2] < IMEM_DEPTH)
                mem[write_addr[31:2]] <= write_data;
            else
                $warning("IMEM: Write out of bounds: %h", write_addr);
        end
    end

endmodule