// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vimmediate_generator_tb__Syms.h"


VL_ATTR_COLD void Vimmediate_generator_tb___024root__trace_init_sub__TOP__cpu_params__0(Vimmediate_generator_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vimmediate_generator_tb___024root__trace_init_sub__TOP__0(Vimmediate_generator_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("cpu_params", VerilatedTracePrefixType::SCOPE_MODULE);
    Vimmediate_generator_tb___024root__trace_init_sub__TOP__cpu_params__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("immediate_generator_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"imm_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+5,0,"compute_expected__Vstatic__sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"imm_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vimmediate_generator_tb___024root__trace_init_sub__TOP__cpu_params__0(Vimmediate_generator_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root__trace_init_sub__TOP__cpu_params__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+7,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+7,0,"INSTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+7,0,"REG_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+8,0,"REG_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+7,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+9,0,"IMEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+9,0,"DMEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+10,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+11,0,"PC_RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vimmediate_generator_tb___024root__trace_init_top(Vimmediate_generator_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root__trace_init_top\n"); );
    // Body
    Vimmediate_generator_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vimmediate_generator_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vimmediate_generator_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vimmediate_generator_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vimmediate_generator_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vimmediate_generator_tb___024root__trace_register(Vimmediate_generator_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vimmediate_generator_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vimmediate_generator_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vimmediate_generator_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vimmediate_generator_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vimmediate_generator_tb___024root__trace_const_0_sub_0(Vimmediate_generator_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vimmediate_generator_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root__trace_const_0\n"); );
    // Init
    Vimmediate_generator_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimmediate_generator_tb___024root*>(voidSelf);
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vimmediate_generator_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vimmediate_generator_tb___024root__trace_const_0_sub_0(Vimmediate_generator_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+7,(0x20U),32);
    bufp->fullIData(oldp+8,(5U),32);
    bufp->fullIData(oldp+9,(0x400U),32);
    bufp->fullIData(oldp+10,(4U),32);
    bufp->fullIData(oldp+11,(0U),32);
}

VL_ATTR_COLD void Vimmediate_generator_tb___024root__trace_full_0_sub_0(Vimmediate_generator_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vimmediate_generator_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root__trace_full_0\n"); );
    // Init
    Vimmediate_generator_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimmediate_generator_tb___024root*>(voidSelf);
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vimmediate_generator_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vimmediate_generator_tb___024root__trace_full_0_sub_0(Vimmediate_generator_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vimmediate_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmediate_generator_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->immediate_generator_tb__DOT__instruction),32);
    bufp->fullCData(oldp+2,(vlSelf->immediate_generator_tb__DOT__imm_type),3);
    bufp->fullIData(oldp+3,(vlSelf->immediate_generator_tb__DOT__expected),32);
    bufp->fullIData(oldp+4,(vlSelf->immediate_generator_tb__DOT__errors),32);
    bufp->fullBit(oldp+5,(vlSelf->immediate_generator_tb__DOT__compute_expected__Vstatic__sign));
    bufp->fullIData(oldp+6,(vlSelf->immediate_generator_tb__DOT__imm),32);
}
