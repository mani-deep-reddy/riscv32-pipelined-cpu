// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimmediate_generator_tb.h for the primary calling header

#include "Vimmediate_generator_tb__pch.h"
#include "Vimmediate_generator_tb___024root.h"

VL_ATTR_COLD void Vimmediate_generator_tb___024root___eval_static(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vimmediate_generator_tb___024root___eval_final(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmediate_generator_tb___024root___dump_triggers__stl(Vimmediate_generator_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vimmediate_generator_tb___024root___eval_phase__stl(Vimmediate_generator_tb___024root* vlSelf);

VL_ATTR_COLD void Vimmediate_generator_tb___024root___eval_settle(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___eval_settle\n"); );
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
            Vimmediate_generator_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/block_tests/decode/immediate_generator_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vimmediate_generator_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmediate_generator_tb___024root___dump_triggers__stl(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vimmediate_generator_tb___024root___act_sequent__TOP__0(Vimmediate_generator_tb___024root* vlSelf);

VL_ATTR_COLD void Vimmediate_generator_tb___024root___eval_stl(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vimmediate_generator_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vimmediate_generator_tb___024root___eval_triggers__stl(Vimmediate_generator_tb___024root* vlSelf);

VL_ATTR_COLD bool Vimmediate_generator_tb___024root___eval_phase__stl(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vimmediate_generator_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vimmediate_generator_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmediate_generator_tb___024root___dump_triggers__act(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vimmediate_generator_tb___024root___dump_triggers__nba(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vimmediate_generator_tb___024root___ctor_var_reset(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->immediate_generator_tb__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->immediate_generator_tb__DOT__imm_type = VL_RAND_RESET_I(3);
    vlSelf->immediate_generator_tb__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->immediate_generator_tb__DOT__expected = VL_RAND_RESET_I(32);
    vlSelf->immediate_generator_tb__DOT__errors = 0;
    vlSelf->immediate_generator_tb__DOT__compute_expected__Vstatic__sign = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
