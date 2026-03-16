// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline_reg_tb.h for the primary calling header

#include "Vpipeline_reg_tb__pch.h"
#include "Vpipeline_reg_tb___024root.h"

VlCoroutine Vpipeline_reg_tb___024root___eval_initial__TOP__Vtiming__0(Vpipeline_reg_tb___024root* vlSelf);
VlCoroutine Vpipeline_reg_tb___024root___eval_initial__TOP__Vtiming__1(Vpipeline_reg_tb___024root* vlSelf);

void Vpipeline_reg_tb___024root___eval_initial(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vpipeline_reg_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vpipeline_reg_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__pipeline_reg_tb__DOT__clk__0 
        = vlSelf->pipeline_reg_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__pipeline_reg_tb__DOT__reset__0 
        = vlSelf->pipeline_reg_tb__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vpipeline_reg_tb___024root___eval_initial__TOP__Vtiming__1(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                           33);
        vlSelf->__Vdlyvval__pipeline_reg_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->pipeline_reg_tb__DOT__clk)));
        vlSelf->__Vdlyvset__pipeline_reg_tb__DOT__clk__v0 = 1U;
    }
}

void Vpipeline_reg_tb___024root___eval_act(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vpipeline_reg_tb___024root___nba_sequent__TOP__0(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->pipeline_reg_tb__DOT__q = ((IData)(vlSelf->pipeline_reg_tb__DOT__reset)
                                        ? 0U : ((IData)(vlSelf->pipeline_reg_tb__DOT__flush)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->pipeline_reg_tb__DOT__stall)
                                                  ? vlSelf->pipeline_reg_tb__DOT__q
                                                  : vlSelf->pipeline_reg_tb__DOT__d)));
}

VL_INLINE_OPT void Vpipeline_reg_tb___024root___nba_sequent__TOP__1(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__pipeline_reg_tb__DOT__clk__v0) {
        vlSelf->pipeline_reg_tb__DOT__clk = vlSelf->__Vdlyvval__pipeline_reg_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__pipeline_reg_tb__DOT__clk__v0 = 0U;
    }
}

void Vpipeline_reg_tb___024root___eval_nba(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpipeline_reg_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpipeline_reg_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vpipeline_reg_tb___024root___timing_resume(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hbc4618ef__0.resume("@(posedge pipeline_reg_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vpipeline_reg_tb___024root___timing_commit(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hbc4618ef__0.commit("@(posedge pipeline_reg_tb.clk)");
    }
}

void Vpipeline_reg_tb___024root___eval_triggers__act(Vpipeline_reg_tb___024root* vlSelf);

bool Vpipeline_reg_tb___024root___eval_phase__act(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpipeline_reg_tb___024root___eval_triggers__act(vlSelf);
    Vpipeline_reg_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vpipeline_reg_tb___024root___timing_resume(vlSelf);
        Vpipeline_reg_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpipeline_reg_tb___024root___eval_phase__nba(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpipeline_reg_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline_reg_tb___024root___dump_triggers__nba(Vpipeline_reg_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline_reg_tb___024root___dump_triggers__act(Vpipeline_reg_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vpipeline_reg_tb___024root___eval(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpipeline_reg_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/block_tests/utils/pipeline_reg_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vpipeline_reg_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/block_tests/utils/pipeline_reg_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vpipeline_reg_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vpipeline_reg_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpipeline_reg_tb___024root___eval_debug_assertions(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
