import cpu_params::*;

module register_file (
    input  logic clk,
    input  logic reset,

    input  logic [4:0] rs1,
    input  logic [4:0] rs2,
    input  logic [4:0] rd,

    input  logic [XLEN-1:0] write_data,
    input  logic reg_write,

    output logic [XLEN-1:0] rs1_value,
    output logic [XLEN-1:0] rs2_value
);

    logic [XLEN-1:0] regs [0:31];

    // ---------------------------
    // READ (combinational)
    // ---------------------------
    assign rs1_value = (rs1 == 5'd0) ? '0 : regs[rs1];
    assign rs2_value = (rs2 == 5'd0) ? '0 : regs[rs2];

    // ---------------------------
    // WRITE (sequential)
    // ---------------------------
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            // optional: clear registers
            integer i;
            for (i = 0; i < 32; i++) begin
                regs[i] <= '0;
            end
        end
        else begin
            if (reg_write && (rd != 5'd0)) begin
                regs[rd] <= write_data;
            end
        end
    end

endmodule


