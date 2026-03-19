// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder_tb.h for the primary calling header

#include "Vdecoder_tb__pch.h"
#include "Vdecoder_tb__Syms.h"
#include "Vdecoder_tb___024root.h"

extern const VlWide<8>/*255:0*/ Vdecoder_tb__ConstPool__CONST_hbb504a60_0;

VL_INLINE_OPT VlCoroutine Vdecoder_tb___024root___eval_initial__TOP__Vtiming__0(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ decoder_tb__DOT____Vrepeat0;
    decoder_tb__DOT____Vrepeat0 = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(8, Vdecoder_tb__ConstPool__CONST_hbb504a60_0));
    vlSymsp->_traceDumpOpen();
    vlSelf->decoder_tb__DOT__errors = 0U;
    vlSelf->decoder_tb__DOT__instruction = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/decoder_tb.sv", 
                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->decoder_tb__DOT__expected_opcode = (0x7fU 
                                                & vlSelf->decoder_tb__DOT__instruction);
    vlSelf->decoder_tb__DOT__expected_rd = (0x1fU & 
                                            (vlSelf->decoder_tb__DOT__instruction 
                                             >> 7U));
    vlSelf->decoder_tb__DOT__expected_funct3 = (7U 
                                                & (vlSelf->decoder_tb__DOT__instruction 
                                                   >> 0xcU));
    vlSelf->decoder_tb__DOT__expected_rs1 = (0x1fU 
                                             & (vlSelf->decoder_tb__DOT__instruction 
                                                >> 0xfU));
    vlSelf->decoder_tb__DOT__expected_rs2 = (0x1fU 
                                             & (vlSelf->decoder_tb__DOT__instruction 
                                                >> 0x14U));
    vlSelf->decoder_tb__DOT__expected_funct7 = (vlSelf->decoder_tb__DOT__instruction 
                                                >> 0x19U);
    if (VL_UNLIKELY((((((((IData)(vlSelf->decoder_tb__DOT__opcode) 
                          != (IData)(vlSelf->decoder_tb__DOT__expected_opcode)) 
                         | ((IData)(vlSelf->decoder_tb__DOT__rd) 
                            != (IData)(vlSelf->decoder_tb__DOT__expected_rd))) 
                        | ((IData)(vlSelf->decoder_tb__DOT__funct3) 
                           != (IData)(vlSelf->decoder_tb__DOT__expected_funct3))) 
                       | ((IData)(vlSelf->decoder_tb__DOT__rs1) 
                          != (IData)(vlSelf->decoder_tb__DOT__expected_rs1))) 
                      | ((IData)(vlSelf->decoder_tb__DOT__rs2) 
                         != (IData)(vlSelf->decoder_tb__DOT__expected_rs2))) 
                     | ((IData)(vlSelf->decoder_tb__DOT__funct7) 
                        != (IData)(vlSelf->decoder_tb__DOT__expected_funct7))))) {
        VL_WRITEF("ERROR:\ninstr=%x\nopcode=%x exp=%x\nrd=%x exp=%x\nfunct3=%x exp=%x\nrs1=%x exp=%x\nrs2=%x exp=%x\nfunct7=%x exp=%x\n",
                  32,vlSelf->decoder_tb__DOT__instruction,
                  7,(IData)(vlSelf->decoder_tb__DOT__opcode),
                  7,vlSelf->decoder_tb__DOT__expected_opcode,
                  5,(IData)(vlSelf->decoder_tb__DOT__rd),
                  5,vlSelf->decoder_tb__DOT__expected_rd,
                  3,(IData)(vlSelf->decoder_tb__DOT__funct3),
                  3,vlSelf->decoder_tb__DOT__expected_funct3,
                  5,(IData)(vlSelf->decoder_tb__DOT__rs1),
                  5,vlSelf->decoder_tb__DOT__expected_rs1,
                  5,(IData)(vlSelf->decoder_tb__DOT__rs2),
                  5,vlSelf->decoder_tb__DOT__expected_rs2,
                  7,(IData)(vlSelf->decoder_tb__DOT__funct7),
                  7,vlSelf->decoder_tb__DOT__expected_funct7);
        vlSelf->decoder_tb__DOT__errors = ((IData)(1U) 
                                           + vlSelf->decoder_tb__DOT__errors);
    }
    vlSelf->decoder_tb__DOT__instruction = 0xffffffffU;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/decoder_tb.sv", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->decoder_tb__DOT__expected_opcode = (0x7fU 
                                                & vlSelf->decoder_tb__DOT__instruction);
    vlSelf->decoder_tb__DOT__expected_rd = (0x1fU & 
                                            (vlSelf->decoder_tb__DOT__instruction 
                                             >> 7U));
    vlSelf->decoder_tb__DOT__expected_funct3 = (7U 
                                                & (vlSelf->decoder_tb__DOT__instruction 
                                                   >> 0xcU));
    vlSelf->decoder_tb__DOT__expected_rs1 = (0x1fU 
                                             & (vlSelf->decoder_tb__DOT__instruction 
                                                >> 0xfU));
    vlSelf->decoder_tb__DOT__expected_rs2 = (0x1fU 
                                             & (vlSelf->decoder_tb__DOT__instruction 
                                                >> 0x14U));
    vlSelf->decoder_tb__DOT__expected_funct7 = (vlSelf->decoder_tb__DOT__instruction 
                                                >> 0x19U);
    if (VL_UNLIKELY((((((((IData)(vlSelf->decoder_tb__DOT__opcode) 
                          != (IData)(vlSelf->decoder_tb__DOT__expected_opcode)) 
                         | ((IData)(vlSelf->decoder_tb__DOT__rd) 
                            != (IData)(vlSelf->decoder_tb__DOT__expected_rd))) 
                        | ((IData)(vlSelf->decoder_tb__DOT__funct3) 
                           != (IData)(vlSelf->decoder_tb__DOT__expected_funct3))) 
                       | ((IData)(vlSelf->decoder_tb__DOT__rs1) 
                          != (IData)(vlSelf->decoder_tb__DOT__expected_rs1))) 
                      | ((IData)(vlSelf->decoder_tb__DOT__rs2) 
                         != (IData)(vlSelf->decoder_tb__DOT__expected_rs2))) 
                     | ((IData)(vlSelf->decoder_tb__DOT__funct7) 
                        != (IData)(vlSelf->decoder_tb__DOT__expected_funct7))))) {
        VL_WRITEF("ERROR:\ninstr=%x\nopcode=%x exp=%x\nrd=%x exp=%x\nfunct3=%x exp=%x\nrs1=%x exp=%x\nrs2=%x exp=%x\nfunct7=%x exp=%x\n",
                  32,vlSelf->decoder_tb__DOT__instruction,
                  7,(IData)(vlSelf->decoder_tb__DOT__opcode),
                  7,vlSelf->decoder_tb__DOT__expected_opcode,
                  5,(IData)(vlSelf->decoder_tb__DOT__rd),
                  5,vlSelf->decoder_tb__DOT__expected_rd,
                  3,(IData)(vlSelf->decoder_tb__DOT__funct3),
                  3,vlSelf->decoder_tb__DOT__expected_funct3,
                  5,(IData)(vlSelf->decoder_tb__DOT__rs1),
                  5,vlSelf->decoder_tb__DOT__expected_rs1,
                  5,(IData)(vlSelf->decoder_tb__DOT__rs2),
                  5,vlSelf->decoder_tb__DOT__expected_rs2,
                  7,(IData)(vlSelf->decoder_tb__DOT__funct7),
                  7,vlSelf->decoder_tb__DOT__expected_funct7);
        vlSelf->decoder_tb__DOT__errors = ((IData)(1U) 
                                           + vlSelf->decoder_tb__DOT__errors);
    }
    decoder_tb__DOT____Vrepeat0 = 0x64U;
    while (VL_LTS_III(32, 0U, decoder_tb__DOT____Vrepeat0)) {
        vlSelf->decoder_tb__DOT__instruction = VL_RANDOM_I();
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tb/block_tests/decode/decoder_tb.sv", 
                                           49);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->decoder_tb__DOT__expected_opcode = 
            (0x7fU & vlSelf->decoder_tb__DOT__instruction);
        vlSelf->decoder_tb__DOT__expected_rd = (0x1fU 
                                                & (vlSelf->decoder_tb__DOT__instruction 
                                                   >> 7U));
        vlSelf->decoder_tb__DOT__expected_funct3 = 
            (7U & (vlSelf->decoder_tb__DOT__instruction 
                   >> 0xcU));
        vlSelf->decoder_tb__DOT__expected_rs1 = (0x1fU 
                                                 & (vlSelf->decoder_tb__DOT__instruction 
                                                    >> 0xfU));
        vlSelf->decoder_tb__DOT__expected_rs2 = (0x1fU 
                                                 & (vlSelf->decoder_tb__DOT__instruction 
                                                    >> 0x14U));
        vlSelf->decoder_tb__DOT__expected_funct7 = 
            (vlSelf->decoder_tb__DOT__instruction >> 0x19U);
        if (VL_UNLIKELY((((((((IData)(vlSelf->decoder_tb__DOT__opcode) 
                              != (IData)(vlSelf->decoder_tb__DOT__expected_opcode)) 
                             | ((IData)(vlSelf->decoder_tb__DOT__rd) 
                                != (IData)(vlSelf->decoder_tb__DOT__expected_rd))) 
                            | ((IData)(vlSelf->decoder_tb__DOT__funct3) 
                               != (IData)(vlSelf->decoder_tb__DOT__expected_funct3))) 
                           | ((IData)(vlSelf->decoder_tb__DOT__rs1) 
                              != (IData)(vlSelf->decoder_tb__DOT__expected_rs1))) 
                          | ((IData)(vlSelf->decoder_tb__DOT__rs2) 
                             != (IData)(vlSelf->decoder_tb__DOT__expected_rs2))) 
                         | ((IData)(vlSelf->decoder_tb__DOT__funct7) 
                            != (IData)(vlSelf->decoder_tb__DOT__expected_funct7))))) {
            VL_WRITEF("ERROR:\ninstr=%x\nopcode=%x exp=%x\nrd=%x exp=%x\nfunct3=%x exp=%x\nrs1=%x exp=%x\nrs2=%x exp=%x\nfunct7=%x exp=%x\n",
                      32,vlSelf->decoder_tb__DOT__instruction,
                      7,(IData)(vlSelf->decoder_tb__DOT__opcode),
                      7,vlSelf->decoder_tb__DOT__expected_opcode,
                      5,(IData)(vlSelf->decoder_tb__DOT__rd),
                      5,vlSelf->decoder_tb__DOT__expected_rd,
                      3,(IData)(vlSelf->decoder_tb__DOT__funct3),
                      3,vlSelf->decoder_tb__DOT__expected_funct3,
                      5,(IData)(vlSelf->decoder_tb__DOT__rs1),
                      5,vlSelf->decoder_tb__DOT__expected_rs1,
                      5,(IData)(vlSelf->decoder_tb__DOT__rs2),
                      5,vlSelf->decoder_tb__DOT__expected_rs2,
                      7,(IData)(vlSelf->decoder_tb__DOT__funct7),
                      7,vlSelf->decoder_tb__DOT__expected_funct7);
            vlSelf->decoder_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelf->decoder_tb__DOT__errors);
        }
        decoder_tb__DOT____Vrepeat0 = (decoder_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((0U == vlSelf->decoder_tb__DOT__errors)) {
        VL_WRITEF("PASS\n");
    } else {
        VL_WRITEF("FAIL: %0d errors\n",32,vlSelf->decoder_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/block_tests/decode/decoder_tb.sv", 58, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_tb___024root___dump_triggers__act(Vdecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdecoder_tb___024root___eval_triggers__act(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecoder_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
