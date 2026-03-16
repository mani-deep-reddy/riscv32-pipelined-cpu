// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline_reg_tb.h for the primary calling header

#include "Vpipeline_reg_tb__pch.h"
#include "Vpipeline_reg_tb___024root.h"

VL_ATTR_COLD void Vpipeline_reg_tb___024root___eval_static__TOP(Vpipeline_reg_tb___024root* vlSelf);

VL_ATTR_COLD void Vpipeline_reg_tb___024root___eval_static(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___eval_static\n"); );
    // Body
    Vpipeline_reg_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vpipeline_reg_tb___024root___eval_static__TOP(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->pipeline_reg_tb__DOT__errors = 0U;
    vlSelf->pipeline_reg_tb__DOT__seen_reset = 0U;
    vlSelf->pipeline_reg_tb__DOT__seen_flush = 0U;
    vlSelf->pipeline_reg_tb__DOT__seen_stall = 0U;
    vlSelf->pipeline_reg_tb__DOT__seen_normal = 0U;
}

VL_ATTR_COLD void Vpipeline_reg_tb___024root___eval_final(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vpipeline_reg_tb___024root___eval_settle(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline_reg_tb___024root___dump_triggers__act(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge pipeline_reg_tb.clk or posedge pipeline_reg_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge pipeline_reg_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline_reg_tb___024root___dump_triggers__nba(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge pipeline_reg_tb.clk or posedge pipeline_reg_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge pipeline_reg_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpipeline_reg_tb___024root___ctor_var_reset(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->pipeline_reg_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->pipeline_reg_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->pipeline_reg_tb__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->pipeline_reg_tb__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->pipeline_reg_tb__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->pipeline_reg_tb__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->pipeline_reg_tb__DOT__expected = VL_RAND_RESET_I(32);
    vlSelf->pipeline_reg_tb__DOT__errors = 0;
    vlSelf->pipeline_reg_tb__DOT__seen_reset = 0;
    vlSelf->pipeline_reg_tb__DOT__seen_flush = 0;
    vlSelf->pipeline_reg_tb__DOT__seen_stall = 0;
    vlSelf->pipeline_reg_tb__DOT__seen_normal = 0;
    vlSelf->__Vdlyvval__pipeline_reg_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__pipeline_reg_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__pipeline_reg_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__pipeline_reg_tb__DOT__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
