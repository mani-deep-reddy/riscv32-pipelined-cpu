// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc_tb.h for the primary calling header

#include "Vpc_tb__pch.h"
#include "Vpc_tb___024root.h"

VL_ATTR_COLD void Vpc_tb___024root___eval_static(Vpc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vpc_tb___024root___eval_final(Vpc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vpc_tb___024root___eval_settle(Vpc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc_tb___024root___dump_triggers__act(Vpc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge pc_tb.clk or posedge pc_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge pc_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc_tb___024root___dump_triggers__nba(Vpc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge pc_tb.clk or posedge pc_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge pc_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpc_tb___024root___ctor_var_reset(Vpc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->pc_tb__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->pc_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->pc_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->pc_tb__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->pc_tb__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->pc_tb__DOT__expected = VL_RAND_RESET_I(32);
    vlSelf->pc_tb__DOT__errors = 0;
    vlSelf->__Vdlyvval__pc_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__pc_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__pc_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__pc_tb__DOT__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
