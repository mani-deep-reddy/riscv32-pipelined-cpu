module pipeline_reg #(
    parameter int WIDTH
    )(
        input logic clk,
        input logic reset,
        input logic stall,
        input logic flush,
        input logic [WIDTH-1:0] d,
        output logic [WIDTH-1:0] q
    );
    always_ff @(posedge clk or posedge reset) begin
        if (reset)
        q <= '0;
        else if (flush)
        q <= '0;
        else if (stall)
        q <= q;
        else 
        q <= d;
    end
endmodule
