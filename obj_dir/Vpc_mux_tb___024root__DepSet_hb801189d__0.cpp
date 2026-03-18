// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc_mux_tb.h for the primary calling header

#include "Vpc_mux_tb__pch.h"
#include "Vpc_mux_tb__Syms.h"
#include "Vpc_mux_tb___024root.h"

extern const VlWide<8>/*255:0*/ Vpc_mux_tb__ConstPool__CONST_h848dac75_0;

VL_INLINE_OPT VlCoroutine Vpc_mux_tb___024root___eval_initial__TOP__Vtiming__0(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ pc_mux_tb__DOT____Vrepeat0;
    pc_mux_tb__DOT____Vrepeat0 = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(8, Vpc_mux_tb__ConstPool__CONST_h848dac75_0));
    vlSymsp->_traceDumpOpen();
    vlSelf->pc_mux_tb__DOT__errors = 0U;
    pc_mux_tb__DOT____Vrepeat0 = 0x64U;
    while (VL_LTS_III(32, 0U, pc_mux_tb__DOT____Vrepeat0)) {
        vlSelf->pc_mux_tb__DOT__pc_plus4 = VL_RANDOM_I();
        vlSelf->pc_mux_tb__DOT__branch_target = VL_RANDOM_I();
        vlSelf->pc_mux_tb__DOT__jump_target = VL_RANDOM_I();
        vlSelf->pc_mux_tb__DOT__branch = (1U & VL_RANDOM_I());
        vlSelf->pc_mux_tb__DOT__jump = (1U & VL_RANDOM_I());
        vlSelf->pc_mux_tb__DOT__expected = (((IData)(vlSelf->pc_mux_tb__DOT__branch) 
                                             & (IData)(vlSelf->pc_mux_tb__DOT__jump))
                                             ? vlSelf->pc_mux_tb__DOT__pc_plus4
                                             : ((IData)(vlSelf->pc_mux_tb__DOT__jump)
                                                 ? vlSelf->pc_mux_tb__DOT__jump_target
                                                 : 
                                                ((IData)(vlSelf->pc_mux_tb__DOT__branch)
                                                  ? vlSelf->pc_mux_tb__DOT__branch_target
                                                  : vlSelf->pc_mux_tb__DOT__pc_plus4)));
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tb/block_tests/fetch/pc_mux_tb.sv", 
                                           50);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((vlSelf->pc_mux_tb__DOT__pc_next 
                         != vlSelf->pc_mux_tb__DOT__expected))) {
            VL_WRITEF("ERROR: pc_next=%x expected=%x branch=%b jump=%b\n",
                      32,vlSelf->pc_mux_tb__DOT__pc_next,
                      32,vlSelf->pc_mux_tb__DOT__expected,
                      1,(IData)(vlSelf->pc_mux_tb__DOT__branch),
                      1,vlSelf->pc_mux_tb__DOT__jump);
            vlSelf->pc_mux_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->pc_mux_tb__DOT__errors);
        }
        pc_mux_tb__DOT____Vrepeat0 = (pc_mux_tb__DOT____Vrepeat0 
                                      - (IData)(1U));
    }
    if ((0U == vlSelf->pc_mux_tb__DOT__errors)) {
        VL_WRITEF("PASS\n");
    } else {
        VL_WRITEF("FAIL: %0d errors\n",32,vlSelf->pc_mux_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/block_tests/fetch/pc_mux_tb.sv", 64, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc_mux_tb___024root___dump_triggers__act(Vpc_mux_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vpc_mux_tb___024root___eval_triggers__act(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpc_mux_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
