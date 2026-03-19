// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file_tb.h for the primary calling header

#include "Vregister_file_tb__pch.h"
#include "Vregister_file_tb___024root.h"

VL_ATTR_COLD void Vregister_file_tb___024root___eval_static(Vregister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vregister_file_tb___024root___eval_final(Vregister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__stl(Vregister_file_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vregister_file_tb___024root___eval_phase__stl(Vregister_file_tb___024root* vlSelf);

VL_ATTR_COLD void Vregister_file_tb___024root___eval_settle(Vregister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_settle\n"); );
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
            Vregister_file_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/block_tests/decode/register_file_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vregister_file_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__stl(Vregister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vregister_file_tb___024root___act_comb__TOP__0(Vregister_file_tb___024root* vlSelf);

VL_ATTR_COLD void Vregister_file_tb___024root___eval_stl(Vregister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vregister_file_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vregister_file_tb___024root___eval_triggers__stl(Vregister_file_tb___024root* vlSelf);

VL_ATTR_COLD bool Vregister_file_tb___024root___eval_phase__stl(Vregister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vregister_file_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vregister_file_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__act(Vregister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge register_file_tb.clk or posedge register_file_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge register_file_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__nba(Vregister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge register_file_tb.clk or posedge register_file_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge register_file_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregister_file_tb___024root___ctor_var_reset(Vregister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->register_file_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->register_file_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->register_file_tb__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->register_file_tb__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->register_file_tb__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->register_file_tb__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->register_file_tb__DOT__rs1_value = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT__rs2_value = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT__errors = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->register_file_tb__DOT__dut__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->register_file_tb__DOT__dut__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__register_file_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__register_file_tb__DOT__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
