import cpu_params::*;
import pipeline_pkg::*;
import riscv_pkg::*;

module pc (
        input logic [XLEN-1:0] pc_next,
        input logic clk,
        input logic reset,
        input logic pc_write,
        output logic [XLEN-1:0] pc
    );

    always_ff @(posedge clk or posedge reset) begin

        if (reset)
            pc<=PC_RESET;
        else if (pc_write)
            pc<=pc_next;
        else
            pc<=pc; 

    end

endmodule
