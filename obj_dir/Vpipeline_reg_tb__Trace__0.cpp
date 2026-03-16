// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline_reg_tb__Syms.h"


void Vpipeline_reg_tb___024root__trace_chg_0_sub_0(Vpipeline_reg_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpipeline_reg_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root__trace_chg_0\n"); );
    // Init
    Vpipeline_reg_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline_reg_tb___024root*>(voidSelf);
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpipeline_reg_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpipeline_reg_tb___024root__trace_chg_0_sub_0(Vpipeline_reg_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->pipeline_reg_tb__DOT__reset));
        bufp->chgBit(oldp+1,(vlSelf->pipeline_reg_tb__DOT__stall));
        bufp->chgBit(oldp+2,(vlSelf->pipeline_reg_tb__DOT__flush));
        bufp->chgIData(oldp+3,(vlSelf->pipeline_reg_tb__DOT__d),32);
        bufp->chgIData(oldp+4,(vlSelf->pipeline_reg_tb__DOT__expected),32);
        bufp->chgIData(oldp+5,(vlSelf->pipeline_reg_tb__DOT__errors),32);
        bufp->chgBit(oldp+6,(vlSelf->pipeline_reg_tb__DOT__seen_reset));
        bufp->chgBit(oldp+7,(vlSelf->pipeline_reg_tb__DOT__seen_flush));
        bufp->chgBit(oldp+8,(vlSelf->pipeline_reg_tb__DOT__seen_stall));
        bufp->chgBit(oldp+9,(vlSelf->pipeline_reg_tb__DOT__seen_normal));
    }
    bufp->chgBit(oldp+10,(vlSelf->pipeline_reg_tb__DOT__clk));
    bufp->chgIData(oldp+11,(vlSelf->pipeline_reg_tb__DOT__q),32);
}

void Vpipeline_reg_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root__trace_cleanup\n"); );
    // Init
    Vpipeline_reg_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline_reg_tb___024root*>(voidSelf);
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
