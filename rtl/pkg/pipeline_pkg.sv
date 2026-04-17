package pipeline_pkg;

    // Immediate formats

    typedef enum logic [2:0] {
        IMM_NONE,
        IMM_I,
        IMM_S,
        IMM_B,
        IMM_U,
        IMM_J
    } imm_type_t;

    // Writeback result source

    typedef enum logic [1:0] {
        RESULT_ALU,
        RESULT_MEM,
        RESULT_PC4
    } result_src_t;

    // Forwarding selections

    typedef enum logic [1:0] {
        FWD_NONE,
        FWD_EX_MEM,
        FWD_MEM_WB
    } forward_sel_t;

    // ALU operation source from main control
    typedef enum logic [1:0] {
        ALU_SRC_ADD,
        ALU_SRC_SUB,
        ALU_SRC_RTYPE,
        ALU_SRC_LUI
    } alu_op_src_t;

endpackage
