// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux2.h for the primary calling header

#include "Vmux2__pch.h"
#include "Vmux2___024root.h"

VlCoroutine Vmux2___024root___eval_initial__TOP__Vtiming__0(Vmux2___024root* vlSelf);
VlCoroutine Vmux2___024root___eval_initial__TOP__Vtiming__1(Vmux2___024root* vlSelf);

void Vmux2___024root___eval_initial(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval_initial\n"); );
    // Body
    Vmux2___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vmux2___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__mux2_tb__DOT__clk__0 
        = vlSelf->mux2_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vmux2___024root___eval_initial__TOP__Vtiming__1(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb/block_tests/utils/mux2_tb.sv", 
                                           24);
        vlSelf->__Vdlyvval__mux2_tb__DOT__clk__v0 = 
            (1U & (~ (IData)(vlSelf->mux2_tb__DOT__clk)));
        vlSelf->__Vdlyvset__mux2_tb__DOT__clk__v0 = 1U;
    }
}

VL_INLINE_OPT void Vmux2___024root___act_comb__TOP__0(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->mux2_tb__DOT__y = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                ? vlSelf->mux2_tb__DOT__b
                                : vlSelf->mux2_tb__DOT__a);
}

void Vmux2___024root___eval_act(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmux2___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmux2___024root___nba_sequent__TOP__0(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->__Vdlyvset__mux2_tb__DOT__clk__v0) {
        vlSelf->mux2_tb__DOT__clk = vlSelf->__Vdlyvval__mux2_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__mux2_tb__DOT__clk__v0 = 0U;
    }
}

void Vmux2___024root___eval_nba(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval_nba\n"); );
    // Body
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmux2___024root___act_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmux2___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vmux2___024root___timing_resume(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h7a3b2523__0.resume("@(posedge mux2_tb.clk)");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vmux2___024root___timing_commit(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h7a3b2523__0.commit("@(posedge mux2_tb.clk)");
    }
}

void Vmux2___024root___eval_triggers__act(Vmux2___024root* vlSelf);

bool Vmux2___024root___eval_phase__act(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmux2___024root___eval_triggers__act(vlSelf);
    Vmux2___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vmux2___024root___timing_resume(vlSelf);
        Vmux2___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmux2___024root___eval_phase__nba(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmux2___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux2___024root___dump_triggers__nba(Vmux2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux2___024root___dump_triggers__act(Vmux2___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux2___024root___eval(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmux2___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/block_tests/utils/mux2_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vmux2___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/block_tests/utils/mux2_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vmux2___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vmux2___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmux2___024root___eval_debug_assertions(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
