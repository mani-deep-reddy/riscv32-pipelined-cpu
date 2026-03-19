import cpu_params::*;
import pipeline_pkg::*;

module immediate_generator (
    input  logic [31:0] instruction,
    input  imm_type_t   imm_type,
    output logic [XLEN-1:0] imm
);

    always_comb begin
        case (imm_type)

            IMM_I: begin
                imm = {{20{instruction[31]}}, instruction[31:20]};
            end

            IMM_S: begin
                imm = {{20{instruction[31]}},
                       instruction[31:25],
                       instruction[11:7]};
            end

            IMM_B: begin
                imm = {{19{instruction[31]}},
                       instruction[31],
                       instruction[7],
                       instruction[30:25],
                       instruction[11:8],
                       1'b0};
            end

            IMM_U: begin
                imm = {instruction[31:12], 12'b0};
            end

            IMM_J: begin
                imm = {{11{instruction[31]}},
                       instruction[31],
                       instruction[19:12],
                       instruction[20],
                       instruction[30:21],
                       1'b0};
            end

            IMM_NONE: begin
                imm = '0;
            end

            default: begin
                imm = '0;
            end

        endcase
    end

endmodule
