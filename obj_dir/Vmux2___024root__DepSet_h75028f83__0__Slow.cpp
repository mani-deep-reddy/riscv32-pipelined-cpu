// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux2.h for the primary calling header

#include "Vmux2__pch.h"
#include "Vmux2___024root.h"

VL_ATTR_COLD void Vmux2___024root___eval_static__TOP(Vmux2___024root* vlSelf);

VL_ATTR_COLD void Vmux2___024root___eval_static(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval_static\n"); );
    // Body
    Vmux2___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vmux2___024root___eval_static__TOP(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->mux2_tb__DOT__errors = 0U;
}

VL_ATTR_COLD void Vmux2___024root___eval_final(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux2___024root___dump_triggers__stl(Vmux2___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmux2___024root___eval_phase__stl(Vmux2___024root* vlSelf);

VL_ATTR_COLD void Vmux2___024root___eval_settle(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval_settle\n"); );
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
            Vmux2___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/block_tests/utils/mux2_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmux2___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux2___024root___dump_triggers__stl(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmux2___024root___act_comb__TOP__0(Vmux2___024root* vlSelf);

VL_ATTR_COLD void Vmux2___024root___eval_stl(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vmux2___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmux2___024root___eval_triggers__stl(Vmux2___024root* vlSelf);

VL_ATTR_COLD bool Vmux2___024root___eval_phase__stl(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmux2___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vmux2___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux2___024root___dump_triggers__act(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge mux2_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux2___024root___dump_triggers__nba(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge mux2_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmux2___024root___ctor_var_reset(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->mux2_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->mux2_tb__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->mux2_tb__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->mux2_tb__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->mux2_tb__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->mux2_tb__DOT__errors = 0;
    vlSelf->__Vdlyvval__mux2_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__mux2_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__mux2_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
