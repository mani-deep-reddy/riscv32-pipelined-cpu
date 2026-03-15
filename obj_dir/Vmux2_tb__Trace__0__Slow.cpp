// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux2_tb__Syms.h"


VL_ATTR_COLD void Vmux2_tb___024root__trace_init_sub__TOP__0(Vmux2_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("mux2_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmux2_tb___024root__trace_init_top(Vmux2_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_tb___024root__trace_init_top\n"); );
    // Body
    Vmux2_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmux2_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmux2_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux2_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux2_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmux2_tb___024root__trace_register(Vmux2_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vmux2_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmux2_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmux2_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmux2_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmux2_tb___024root__trace_const_0_sub_0(Vmux2_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmux2_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_tb___024root__trace_const_0\n"); );
    // Init
    Vmux2_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2_tb___024root*>(voidSelf);
    Vmux2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmux2_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmux2_tb___024root__trace_const_0_sub_0(Vmux2_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+8,(0x20U),32);
    bufp->fullIData(oldp+9,(0x20U),32);
}

VL_ATTR_COLD void Vmux2_tb___024root__trace_full_0_sub_0(Vmux2_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmux2_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_tb___024root__trace_full_0\n"); );
    // Init
    Vmux2_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2_tb___024root*>(voidSelf);
    Vmux2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmux2_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmux2_tb___024root__trace_full_0_sub_0(Vmux2_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->mux2_tb__DOT__a),32);
    bufp->fullIData(oldp+2,(vlSelf->mux2_tb__DOT__b),32);
    bufp->fullBit(oldp+3,(vlSelf->mux2_tb__DOT__sel));
    bufp->fullIData(oldp+4,(((IData)(vlSelf->mux2_tb__DOT__sel)
                              ? vlSelf->mux2_tb__DOT__b
                              : vlSelf->mux2_tb__DOT__a)),32);
    bufp->fullIData(oldp+5,(vlSelf->mux2_tb__DOT__expected),32);
    bufp->fullIData(oldp+6,(vlSelf->mux2_tb__DOT__errors),32);
    bufp->fullBit(oldp+7,(vlSelf->mux2_tb__DOT__clk));
}
