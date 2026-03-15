// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux2_tb__Syms.h"


void Vmux2_tb___024root__trace_chg_0_sub_0(Vmux2_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmux2_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_tb___024root__trace_chg_0\n"); );
    // Init
    Vmux2_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2_tb___024root*>(voidSelf);
    Vmux2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmux2_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmux2_tb___024root__trace_chg_0_sub_0(Vmux2_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->mux2_tb__DOT__a),32);
        bufp->chgIData(oldp+1,(vlSelf->mux2_tb__DOT__b),32);
        bufp->chgBit(oldp+2,(vlSelf->mux2_tb__DOT__sel));
        bufp->chgIData(oldp+3,(((IData)(vlSelf->mux2_tb__DOT__sel)
                                 ? vlSelf->mux2_tb__DOT__b
                                 : vlSelf->mux2_tb__DOT__a)),32);
        bufp->chgIData(oldp+4,(vlSelf->mux2_tb__DOT__expected),32);
        bufp->chgIData(oldp+5,(vlSelf->mux2_tb__DOT__errors),32);
    }
    bufp->chgBit(oldp+6,(vlSelf->mux2_tb__DOT__clk));
}

void Vmux2_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_tb___024root__trace_cleanup\n"); );
    // Init
    Vmux2_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2_tb___024root*>(voidSelf);
    Vmux2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
