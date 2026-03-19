// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimmediate_generator_tb.h for the primary calling header

#include "Vimmediate_generator_tb__pch.h"
#include "Vimmediate_generator_tb__Syms.h"
#include "Vimmediate_generator_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmediate_generator_tb___024root___dump_triggers__stl(Vimmediate_generator_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vimmediate_generator_tb___024root___eval_triggers__stl(Vimmediate_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vimmediate_generator_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
