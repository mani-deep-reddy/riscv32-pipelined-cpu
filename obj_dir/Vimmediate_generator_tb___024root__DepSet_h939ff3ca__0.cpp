// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimmediate_generator_tb.h for the primary calling header

#include "Vimmediate_generator_tb__pch.h"
#include "Vimmediate_generator_tb___024root.h"

VlCoroutine Vimmediate_generator_tb___024root___eval_initial__TOP__Vtiming__0(Vimmediate_generator_tb___024root* vlSelf);

void Vimmediate_generator_tb___024root___eval_initial(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vimmediate_generator_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT void Vimmediate_generator_tb___024root___act_sequent__TOP__0(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->immediate_generator_tb__DOT__imm = ((4U 
                                                 & (IData)(vlSelf->immediate_generator_tb__DOT__imm_type))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->immediate_generator_tb__DOT__imm_type))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->immediate_generator_tb__DOT__imm_type))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->immediate_generator_tb__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & (vlSelf->immediate_generator_tb__DOT__instruction 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & vlSelf->immediate_generator_tb__DOT__instruction) 
                                                         | ((0x800U 
                                                             & (vlSelf->immediate_generator_tb__DOT__instruction 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSelf->immediate_generator_tb__DOT__instruction 
                                                                  >> 0x14U))))))
                                                   : 
                                                  (0xfffff000U 
                                                   & vlSelf->immediate_generator_tb__DOT__instruction)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->immediate_generator_tb__DOT__imm_type))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->immediate_generator_tb__DOT__imm_type))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->immediate_generator_tb__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xdU) 
                                                   | ((0x1000U 
                                                       & (vlSelf->immediate_generator_tb__DOT__instruction 
                                                          >> 0x13U)) 
                                                      | ((0x800U 
                                                          & (vlSelf->immediate_generator_tb__DOT__instruction 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->immediate_generator_tb__DOT__instruction 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelf->immediate_generator_tb__DOT__instruction 
                                                                  >> 7U))))))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->immediate_generator_tb__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelf->immediate_generator_tb__DOT__instruction 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->immediate_generator_tb__DOT__instruction 
                                                            >> 7U)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->immediate_generator_tb__DOT__imm_type))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->immediate_generator_tb__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->immediate_generator_tb__DOT__instruction 
                                                      >> 0x14U))
                                                   : 0U)));
}

void Vimmediate_generator_tb___024root___eval_act(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vimmediate_generator_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vimmediate_generator_tb___024root___eval_nba(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimmediate_generator_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vimmediate_generator_tb___024root___timing_resume(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vimmediate_generator_tb___024root___eval_triggers__act(Vimmediate_generator_tb___024root* vlSelf);

bool Vimmediate_generator_tb___024root___eval_phase__act(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vimmediate_generator_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vimmediate_generator_tb___024root___timing_resume(vlSelf);
        Vimmediate_generator_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vimmediate_generator_tb___024root___eval_phase__nba(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vimmediate_generator_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmediate_generator_tb___024root___dump_triggers__nba(Vimmediate_generator_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmediate_generator_tb___024root___dump_triggers__act(Vimmediate_generator_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vimmediate_generator_tb___024root___eval(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vimmediate_generator_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/block_tests/decode/immediate_generator_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vimmediate_generator_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/block_tests/decode/immediate_generator_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vimmediate_generator_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vimmediate_generator_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vimmediate_generator_tb___024root___eval_debug_assertions(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
