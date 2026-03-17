package riscv_pkg;

    // Opcode field values (instr[6:0])

    parameter logic [6:0] OPCODE_OP       = 7'b0110011; // R-type
    parameter logic [6:0] OPCODE_OP_IMM   = 7'b0010011; // I-type ALU
    parameter logic [6:0] OPCODE_LOAD     = 7'b0000011; // LW
    parameter logic [6:0] OPCODE_STORE    = 7'b0100011; // SW
    parameter logic [6:0] OPCODE_BRANCH   = 7'b1100011; // BEQ BNE
    parameter logic [6:0] OPCODE_LUI      = 7'b0110111;
    parameter logic [6:0] OPCODE_JAL      = 7'b1101111;

    // funct3 field values (instr[14:12])

    parameter logic [2:0] FUNCT3_ADD_SUB  = 3'b000;
    parameter logic [2:0] FUNCT3_AND      = 3'b111;
    parameter logic [2:0] FUNCT3_OR       = 3'b110;
    parameter logic [2:0] FUNCT3_SLT      = 3'b010;

    parameter logic [2:0] FUNCT3_ADDI     = 3'b000;
    parameter logic [2:0] FUNCT3_ANDI     = 3'b111;
    parameter logic [2:0] FUNCT3_ORI      = 3'b110;

    parameter logic [2:0] FUNCT3_LW       = 3'b010;
    parameter logic [2:0] FUNCT3_SW       = 3'b010;

    parameter logic [2:0] FUNCT3_BEQ      = 3'b000;
    parameter logic [2:0] FUNCT3_BNE      = 3'b001;

    // funct7 values (instr[31:25])

    parameter logic [6:0] FUNCT7_ADD = 7'b0000000;
    parameter logic [6:0] FUNCT7_SUB = 7'b0100000;

    // ALU operation encoding

    typedef enum logic [3:0] {
        ALU_ADD,
        ALU_SUB,
        ALU_AND,
        ALU_OR,
        ALU_SLT,
        ALU_PASS
    } alu_op_t;

endpackage
