// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc_mux_tb.h for the primary calling header

#include "Vpc_mux_tb__pch.h"
#include "Vpc_mux_tb___024root.h"

VL_ATTR_COLD void Vpc_mux_tb___024root___eval_static(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vpc_mux_tb___024root___eval_final(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc_mux_tb___024root___dump_triggers__stl(Vpc_mux_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpc_mux_tb___024root___eval_phase__stl(Vpc_mux_tb___024root* vlSelf);

VL_ATTR_COLD void Vpc_mux_tb___024root___eval_settle(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vpc_mux_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/block_tests/fetch/pc_mux_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vpc_mux_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc_mux_tb___024root___dump_triggers__stl(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vpc_mux_tb___024root___act_sequent__TOP__0(Vpc_mux_tb___024root* vlSelf);

VL_ATTR_COLD void Vpc_mux_tb___024root___eval_stl(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vpc_mux_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vpc_mux_tb___024root___eval_triggers__stl(Vpc_mux_tb___024root* vlSelf);

VL_ATTR_COLD bool Vpc_mux_tb___024root___eval_phase__stl(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpc_mux_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vpc_mux_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc_mux_tb___024root___dump_triggers__act(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc_mux_tb___024root___dump_triggers__nba(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpc_mux_tb___024root___ctor_var_reset(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->pc_mux_tb__DOT__pc_plus4 = VL_RAND_RESET_I(32);
    vlSelf->pc_mux_tb__DOT__branch_target = VL_RAND_RESET_I(32);
    vlSelf->pc_mux_tb__DOT__jump_target = VL_RAND_RESET_I(32);
    vlSelf->pc_mux_tb__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->pc_mux_tb__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->pc_mux_tb__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->pc_mux_tb__DOT__expected = VL_RAND_RESET_I(32);
    vlSelf->pc_mux_tb__DOT__errors = 0;
    vlSelf->pc_mux_tb__DOT__dut__DOT__sel = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
