import pipeline_pkg::*;

module wb_mux (
    input  logic [31:0]  alu_result,
    input  logic [31:0]  mem_data,
    input  logic [31:0]  pc_plus4,
    input  result_src_t  result_src,
    output logic [31:0] writeback_data
);

    always_comb begin
        case (result_src)
            RESULT_ALU: writeback_data = alu_result;
            RESULT_MEM: writeback_data = mem_data;
            RESULT_PC4: writeback_data = pc_plus4;
            default:    writeback_data = alu_result;
        endcase
    end

endmodule
