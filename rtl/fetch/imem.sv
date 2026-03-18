import cpu_params::*;

module imem (
    input  logic [XLEN-1:0] pc,
    output logic [31:0] instruction
);

    // instruction memory
    logic [31:0] mem [0:IMEM_DEPTH-1];
    
    // debug safety
        else if (pc[1:0] != 2'b00)
            $warning("IMEM: Unaligned PC: %h", pc);

    logic [XLEN-1:0] index;

    // convert byte address → word index
    assign index = pc >> 2;

    always_comb begin
        if (index < IMEM_DEPTH)
            instruction = mem[index];
        else begin
            instruction = 32'h00000013; // NoOp (ADDI x0, x0, 0)
            $warning("IMEM: PC out of bounds: %h", pc);
        end
    end

endmodule