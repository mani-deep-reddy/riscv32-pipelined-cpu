// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc_mux_tb.h for the primary calling header

#include "Vpc_mux_tb__pch.h"
#include "Vpc_mux_tb___024root.h"

VlCoroutine Vpc_mux_tb___024root___eval_initial__TOP__Vtiming__0(Vpc_mux_tb___024root* vlSelf);

void Vpc_mux_tb___024root___eval_initial(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vpc_mux_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT void Vpc_mux_tb___024root___act_sequent__TOP__0(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->pc_mux_tb__DOT__dut__DOT__sel = (((IData)(vlSelf->pc_mux_tb__DOT__jump) 
                                              << 1U) 
                                             | (IData)(vlSelf->pc_mux_tb__DOT__branch));
    vlSelf->pc_mux_tb__DOT__pc_next = ((0U == (IData)(vlSelf->pc_mux_tb__DOT__dut__DOT__sel))
                                        ? vlSelf->pc_mux_tb__DOT__pc_plus4
                                        : ((1U == (IData)(vlSelf->pc_mux_tb__DOT__dut__DOT__sel))
                                            ? vlSelf->pc_mux_tb__DOT__branch_target
                                            : ((2U 
                                                == (IData)(vlSelf->pc_mux_tb__DOT__dut__DOT__sel))
                                                ? vlSelf->pc_mux_tb__DOT__jump_target
                                                : vlSelf->pc_mux_tb__DOT__pc_plus4)));
}

void Vpc_mux_tb___024root___eval_act(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vpc_mux_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vpc_mux_tb___024root___eval_nba(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpc_mux_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vpc_mux_tb___024root___timing_resume(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vpc_mux_tb___024root___eval_triggers__act(Vpc_mux_tb___024root* vlSelf);

bool Vpc_mux_tb___024root___eval_phase__act(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpc_mux_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vpc_mux_tb___024root___timing_resume(vlSelf);
        Vpc_mux_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpc_mux_tb___024root___eval_phase__nba(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpc_mux_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc_mux_tb___024root___dump_triggers__nba(Vpc_mux_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc_mux_tb___024root___dump_triggers__act(Vpc_mux_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vpc_mux_tb___024root___eval(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpc_mux_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/block_tests/fetch/pc_mux_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vpc_mux_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/block_tests/fetch/pc_mux_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vpc_mux_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vpc_mux_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpc_mux_tb___024root___eval_debug_assertions(Vpc_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
