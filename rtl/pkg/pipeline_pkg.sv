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

endpackage