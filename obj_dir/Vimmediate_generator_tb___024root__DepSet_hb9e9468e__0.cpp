// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimmediate_generator_tb.h for the primary calling header

#include "Vimmediate_generator_tb__pch.h"
#include "Vimmediate_generator_tb__Syms.h"
#include "Vimmediate_generator_tb___024root.h"

extern const VlWide<11>/*351:0*/ Vimmediate_generator_tb__ConstPool__CONST_hf3b817a2_0;

VL_INLINE_OPT VlCoroutine Vimmediate_generator_tb___024root___eval_initial__TOP__Vtiming__0(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ immediate_generator_tb__DOT____Vrepeat0;
    immediate_generator_tb__DOT____Vrepeat0 = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(11, Vimmediate_generator_tb__ConstPool__CONST_hf3b817a2_0));
    vlSymsp->_traceDumpOpen();
    vlSelf->immediate_generator_tb__DOT__errors = 0U;
    immediate_generator_tb__DOT____Vrepeat0 = 0x64U;
    while (VL_LTS_III(32, 0U, immediate_generator_tb__DOT____Vrepeat0)) {
        vlSelf->immediate_generator_tb__DOT__instruction 
            = VL_RANDOM_I();
        vlSelf->immediate_generator_tb__DOT__imm_type 
            = (7U & VL_URANDOM_RANGE_I(0U, 5U));
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tb/block_tests/decode/immediate_generator_tb.sv", 
                                           30);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->immediate_generator_tb__DOT__compute_expected__Vstatic__sign 
            = (vlSelf->immediate_generator_tb__DOT__instruction 
               >> 0x1fU);
        vlSelf->immediate_generator_tb__DOT__expected 
            = ((4U & (IData)(vlSelf->immediate_generator_tb__DOT__imm_type))
                ? ((2U & (IData)(vlSelf->immediate_generator_tb__DOT__imm_type))
                    ? 0U : ((1U & (IData)(vlSelf->immediate_generator_tb__DOT__imm_type))
                             ? (((- (IData)((IData)(vlSelf->immediate_generator_tb__DOT__compute_expected__Vstatic__sign))) 
                                 << 0x15U) | ((0x100000U 
                                               & (vlSelf->immediate_generator_tb__DOT__instruction 
                                                  >> 0xbU)) 
                                              | ((0xff000U 
                                                  & vlSelf->immediate_generator_tb__DOT__instruction) 
                                                 | ((0x800U 
                                                     & (vlSelf->immediate_generator_tb__DOT__instruction 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->immediate_generator_tb__DOT__instruction 
                                                          >> 0x14U))))))
                             : (0xfffff000U & vlSelf->immediate_generator_tb__DOT__instruction)))
                : ((2U & (IData)(vlSelf->immediate_generator_tb__DOT__imm_type))
                    ? ((1U & (IData)(vlSelf->immediate_generator_tb__DOT__imm_type))
                        ? (((- (IData)((IData)(vlSelf->immediate_generator_tb__DOT__compute_expected__Vstatic__sign))) 
                            << 0xdU) | ((0x1000U & 
                                         (vlSelf->immediate_generator_tb__DOT__instruction 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->immediate_generator_tb__DOT__instruction 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->immediate_generator_tb__DOT__instruction 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->immediate_generator_tb__DOT__instruction 
                                                    >> 7U))))))
                        : (((- (IData)((IData)(vlSelf->immediate_generator_tb__DOT__compute_expected__Vstatic__sign))) 
                            << 0xcU) | ((0xfe0U & (vlSelf->immediate_generator_tb__DOT__instruction 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->immediate_generator_tb__DOT__instruction 
                                            >> 7U)))))
                    : ((1U & (IData)(vlSelf->immediate_generator_tb__DOT__imm_type))
                        ? (((- (IData)((IData)(vlSelf->immediate_generator_tb__DOT__compute_expected__Vstatic__sign))) 
                            << 0xcU) | (vlSelf->immediate_generator_tb__DOT__instruction 
                                        >> 0x14U)) : 0U)));
        if (VL_UNLIKELY((vlSelf->immediate_generator_tb__DOT__imm 
                         != vlSelf->immediate_generator_tb__DOT__expected))) {
            VL_WRITEF("ERROR:\ninstr=%x imm_type=%0#\nimm=%x expected=%x\n",
                      32,vlSelf->immediate_generator_tb__DOT__instruction,
                      3,(IData)(vlSelf->immediate_generator_tb__DOT__imm_type),
                      32,vlSelf->immediate_generator_tb__DOT__imm,
                      32,vlSelf->immediate_generator_tb__DOT__expected);
            vlSelf->immediate_generator_tb__DOT__errors 
                = ((IData)(1U) + vlSelf->immediate_generator_tb__DOT__errors);
        }
        immediate_generator_tb__DOT____Vrepeat0 = (immediate_generator_tb__DOT____Vrepeat0 
                                                   - (IData)(1U));
    }
    if ((0U == vlSelf->immediate_generator_tb__DOT__errors)) {
        VL_WRITEF("PASS\n");
    } else {
        VL_WRITEF("FAIL: %0d errors\n",32,vlSelf->immediate_generator_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/block_tests/decode/immediate_generator_tb.sv", 48, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmediate_generator_tb___024root___dump_triggers__act(Vimmediate_generator_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vimmediate_generator_tb___024root___eval_triggers__act(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vimmediate_generator_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
