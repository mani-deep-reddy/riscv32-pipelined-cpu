// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpc_mux_tb__Syms.h"


void Vpc_mux_tb___024root__trace_chg_0_sub_0(Vpc_mux_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpc_mux_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root__trace_chg_0\n"); );
    // Init
    Vpc_mux_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpc_mux_tb___024root*>(voidSelf);
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpc_mux_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpc_mux_tb___024root__trace_chg_0_sub_0(Vpc_mux_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->pc_mux_tb__DOT__pc_plus4),32);
        bufp->chgIData(oldp+1,(vlSelf->pc_mux_tb__DOT__branch_target),32);
        bufp->chgIData(oldp+2,(vlSelf->pc_mux_tb__DOT__jump_target),32);
        bufp->chgBit(oldp+3,(vlSelf->pc_mux_tb__DOT__branch));
        bufp->chgBit(oldp+4,(vlSelf->pc_mux_tb__DOT__jump));
        bufp->chgIData(oldp+5,(vlSelf->pc_mux_tb__DOT__expected),32);
        bufp->chgIData(oldp+6,(vlSelf->pc_mux_tb__DOT__errors),32);
    }
    bufp->chgIData(oldp+7,(((0U == (IData)(vlSelf->pc_mux_tb__DOT__dut__DOT__sel))
                             ? vlSelf->pc_mux_tb__DOT__pc_plus4
                             : ((1U == (IData)(vlSelf->pc_mux_tb__DOT__dut__DOT__sel))
                                 ? vlSelf->pc_mux_tb__DOT__branch_target
                                 : ((2U == (IData)(vlSelf->pc_mux_tb__DOT__dut__DOT__sel))
                                     ? vlSelf->pc_mux_tb__DOT__jump_target
                                     : vlSelf->pc_mux_tb__DOT__pc_plus4)))),32);
    bufp->chgCData(oldp+8,(vlSelf->pc_mux_tb__DOT__dut__DOT__sel),2);
}

void Vpc_mux_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_mux_tb___024root__trace_cleanup\n"); );
    // Init
    Vpc_mux_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpc_mux_tb___024root*>(voidSelf);
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
