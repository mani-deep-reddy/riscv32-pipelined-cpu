// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline_reg_tb__Syms.h"


VL_ATTR_COLD void Vpipeline_reg_tb___024root__trace_init_sub__TOP__0(Vpipeline_reg_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("pipeline_reg_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+7,0,"seen_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+8,0,"seen_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+9,0,"seen_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+10,0,"seen_normal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+11,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpipeline_reg_tb___024root__trace_init_top(Vpipeline_reg_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root__trace_init_top\n"); );
    // Body
    Vpipeline_reg_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpipeline_reg_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vpipeline_reg_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline_reg_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline_reg_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpipeline_reg_tb___024root__trace_register(Vpipeline_reg_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vpipeline_reg_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vpipeline_reg_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vpipeline_reg_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vpipeline_reg_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpipeline_reg_tb___024root__trace_const_0_sub_0(Vpipeline_reg_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpipeline_reg_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root__trace_const_0\n"); );
    // Init
    Vpipeline_reg_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline_reg_tb___024root*>(voidSelf);
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpipeline_reg_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpipeline_reg_tb___024root__trace_const_0_sub_0(Vpipeline_reg_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+13,(0x20U),32);
    bufp->fullIData(oldp+14,(0x20U),32);
}

VL_ATTR_COLD void Vpipeline_reg_tb___024root__trace_full_0_sub_0(Vpipeline_reg_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpipeline_reg_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root__trace_full_0\n"); );
    // Init
    Vpipeline_reg_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline_reg_tb___024root*>(voidSelf);
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpipeline_reg_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpipeline_reg_tb___024root__trace_full_0_sub_0(Vpipeline_reg_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->pipeline_reg_tb__DOT__reset));
    bufp->fullBit(oldp+2,(vlSelf->pipeline_reg_tb__DOT__stall));
    bufp->fullBit(oldp+3,(vlSelf->pipeline_reg_tb__DOT__flush));
    bufp->fullIData(oldp+4,(vlSelf->pipeline_reg_tb__DOT__d),32);
    bufp->fullIData(oldp+5,(vlSelf->pipeline_reg_tb__DOT__expected),32);
    bufp->fullIData(oldp+6,(vlSelf->pipeline_reg_tb__DOT__errors),32);
    bufp->fullBit(oldp+7,(vlSelf->pipeline_reg_tb__DOT__seen_reset));
    bufp->fullBit(oldp+8,(vlSelf->pipeline_reg_tb__DOT__seen_flush));
    bufp->fullBit(oldp+9,(vlSelf->pipeline_reg_tb__DOT__seen_stall));
    bufp->fullBit(oldp+10,(vlSelf->pipeline_reg_tb__DOT__seen_normal));
    bufp->fullBit(oldp+11,(vlSelf->pipeline_reg_tb__DOT__clk));
    bufp->fullIData(oldp+12,(vlSelf->pipeline_reg_tb__DOT__q),32);
}
