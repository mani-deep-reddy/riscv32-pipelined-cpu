module mux2 #(
    parameter int WIDTH = 32
)(
    input  logic [WIDTH-1:0] a,
    input  logic [WIDTH-1:0] b,
    input  logic sel,
    output logic [WIDTH-1:0] y
);

    always_comb begin
        if (sel)
            y = b;
        else
            y = a;
    end

endmodule
