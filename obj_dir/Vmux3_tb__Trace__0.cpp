// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux3_tb__Syms.h"


void Vmux3_tb___024root__trace_chg_0_sub_0(Vmux3_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmux3_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux3_tb___024root__trace_chg_0\n"); );
    // Init
    Vmux3_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux3_tb___024root*>(voidSelf);
    Vmux3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmux3_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmux3_tb___024root__trace_chg_0_sub_0(Vmux3_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux3_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->mux3_tb__DOT__a),32);
        bufp->chgIData(oldp+1,(vlSelf->mux3_tb__DOT__b),32);
        bufp->chgIData(oldp+2,(vlSelf->mux3_tb__DOT__c),32);
        bufp->chgCData(oldp+3,(vlSelf->mux3_tb__DOT__sel),2);
        bufp->chgIData(oldp+4,(((0U == (IData)(vlSelf->mux3_tb__DOT__sel))
                                 ? vlSelf->mux3_tb__DOT__a
                                 : ((1U == (IData)(vlSelf->mux3_tb__DOT__sel))
                                     ? vlSelf->mux3_tb__DOT__b
                                     : ((2U == (IData)(vlSelf->mux3_tb__DOT__sel))
                                         ? vlSelf->mux3_tb__DOT__c
                                         : vlSelf->mux3_tb__DOT__a)))),32);
        bufp->chgIData(oldp+5,(vlSelf->mux3_tb__DOT__expected),32);
        bufp->chgIData(oldp+6,(vlSelf->mux3_tb__DOT__errors),32);
    }
    bufp->chgBit(oldp+7,(vlSelf->mux3_tb__DOT__clk));
}

void Vmux3_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux3_tb___024root__trace_cleanup\n"); );
    // Init
    Vmux3_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux3_tb___024root*>(voidSelf);
    Vmux3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
