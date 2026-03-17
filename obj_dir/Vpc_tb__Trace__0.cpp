// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpc_tb__Syms.h"


void Vpc_tb___024root__trace_chg_0_sub_0(Vpc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpc_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_tb___024root__trace_chg_0\n"); );
    // Init
    Vpc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpc_tb___024root*>(voidSelf);
    Vpc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpc_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpc_tb___024root__trace_chg_0_sub_0(Vpc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->pc_tb__DOT__pc_next),32);
        bufp->chgBit(oldp+1,(vlSelf->pc_tb__DOT__reset));
        bufp->chgBit(oldp+2,(vlSelf->pc_tb__DOT__pc_write));
        bufp->chgIData(oldp+3,(vlSelf->pc_tb__DOT__expected),32);
        bufp->chgIData(oldp+4,(vlSelf->pc_tb__DOT__errors),32);
    }
    bufp->chgBit(oldp+5,(vlSelf->pc_tb__DOT__clk));
    bufp->chgIData(oldp+6,(vlSelf->pc_tb__DOT__pc),32);
}

void Vpc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_tb___024root__trace_cleanup\n"); );
    // Init
    Vpc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpc_tb___024root*>(voidSelf);
    Vpc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
