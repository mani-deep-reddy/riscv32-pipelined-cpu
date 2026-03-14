package cpu_params;

    // Processor Configuration

    parameter int XLEN = 32;
    parameter int INSTR_WIDTH = 32;
-
    // Register File

    parameter int REG_COUNT  = 32;
    parameter int REG_ADDR_W = 5;   // log2(32)

    // Addressing

    parameter int ADDR_WIDTH = 32;

    // Memory Configuration

    parameter int IMEM_DEPTH = 1024;
    parameter int DMEM_DEPTH = 1024;

    // Constants

    parameter int WORD_BYTES = 4;

    // Reset Vector

    parameter logic [ADDR_WIDTH-1:0] PC_RESET = 32'h00000000;

endpackage