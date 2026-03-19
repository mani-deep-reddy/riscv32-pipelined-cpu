// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregister_file_tb__Syms.h"


void Vregister_file_tb___024root__trace_chg_0_sub_0(Vregister_file_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vregister_file_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root__trace_chg_0\n"); );
    // Init
    Vregister_file_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister_file_tb___024root*>(voidSelf);
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vregister_file_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vregister_file_tb___024root__trace_chg_0_sub_0(Vregister_file_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->register_file_tb__DOT__reset));
        bufp->chgCData(oldp+1,(vlSelf->register_file_tb__DOT__rs1),5);
        bufp->chgCData(oldp+2,(vlSelf->register_file_tb__DOT__rs2),5);
        bufp->chgCData(oldp+3,(vlSelf->register_file_tb__DOT__rd),5);
        bufp->chgIData(oldp+4,(vlSelf->register_file_tb__DOT__write_data),32);
        bufp->chgBit(oldp+5,(vlSelf->register_file_tb__DOT__reg_write));
        bufp->chgIData(oldp+6,(vlSelf->register_file_tb__DOT__errors),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+7,(vlSelf->register_file_tb__DOT__dut__DOT__regs[0]),32);
        bufp->chgIData(oldp+8,(vlSelf->register_file_tb__DOT__dut__DOT__regs[1]),32);
        bufp->chgIData(oldp+9,(vlSelf->register_file_tb__DOT__dut__DOT__regs[2]),32);
        bufp->chgIData(oldp+10,(vlSelf->register_file_tb__DOT__dut__DOT__regs[3]),32);
        bufp->chgIData(oldp+11,(vlSelf->register_file_tb__DOT__dut__DOT__regs[4]),32);
        bufp->chgIData(oldp+12,(vlSelf->register_file_tb__DOT__dut__DOT__regs[5]),32);
        bufp->chgIData(oldp+13,(vlSelf->register_file_tb__DOT__dut__DOT__regs[6]),32);
        bufp->chgIData(oldp+14,(vlSelf->register_file_tb__DOT__dut__DOT__regs[7]),32);
        bufp->chgIData(oldp+15,(vlSelf->register_file_tb__DOT__dut__DOT__regs[8]),32);
        bufp->chgIData(oldp+16,(vlSelf->register_file_tb__DOT__dut__DOT__regs[9]),32);
        bufp->chgIData(oldp+17,(vlSelf->register_file_tb__DOT__dut__DOT__regs[10]),32);
        bufp->chgIData(oldp+18,(vlSelf->register_file_tb__DOT__dut__DOT__regs[11]),32);
        bufp->chgIData(oldp+19,(vlSelf->register_file_tb__DOT__dut__DOT__regs[12]),32);
        bufp->chgIData(oldp+20,(vlSelf->register_file_tb__DOT__dut__DOT__regs[13]),32);
        bufp->chgIData(oldp+21,(vlSelf->register_file_tb__DOT__dut__DOT__regs[14]),32);
        bufp->chgIData(oldp+22,(vlSelf->register_file_tb__DOT__dut__DOT__regs[15]),32);
        bufp->chgIData(oldp+23,(vlSelf->register_file_tb__DOT__dut__DOT__regs[16]),32);
        bufp->chgIData(oldp+24,(vlSelf->register_file_tb__DOT__dut__DOT__regs[17]),32);
        bufp->chgIData(oldp+25,(vlSelf->register_file_tb__DOT__dut__DOT__regs[18]),32);
        bufp->chgIData(oldp+26,(vlSelf->register_file_tb__DOT__dut__DOT__regs[19]),32);
        bufp->chgIData(oldp+27,(vlSelf->register_file_tb__DOT__dut__DOT__regs[20]),32);
        bufp->chgIData(oldp+28,(vlSelf->register_file_tb__DOT__dut__DOT__regs[21]),32);
        bufp->chgIData(oldp+29,(vlSelf->register_file_tb__DOT__dut__DOT__regs[22]),32);
        bufp->chgIData(oldp+30,(vlSelf->register_file_tb__DOT__dut__DOT__regs[23]),32);
        bufp->chgIData(oldp+31,(vlSelf->register_file_tb__DOT__dut__DOT__regs[24]),32);
        bufp->chgIData(oldp+32,(vlSelf->register_file_tb__DOT__dut__DOT__regs[25]),32);
        bufp->chgIData(oldp+33,(vlSelf->register_file_tb__DOT__dut__DOT__regs[26]),32);
        bufp->chgIData(oldp+34,(vlSelf->register_file_tb__DOT__dut__DOT__regs[27]),32);
        bufp->chgIData(oldp+35,(vlSelf->register_file_tb__DOT__dut__DOT__regs[28]),32);
        bufp->chgIData(oldp+36,(vlSelf->register_file_tb__DOT__dut__DOT__regs[29]),32);
        bufp->chgIData(oldp+37,(vlSelf->register_file_tb__DOT__dut__DOT__regs[30]),32);
        bufp->chgIData(oldp+38,(vlSelf->register_file_tb__DOT__dut__DOT__regs[31]),32);
        bufp->chgIData(oldp+39,(vlSelf->register_file_tb__DOT__dut__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+40,(vlSelf->register_file_tb__DOT__clk));
    bufp->chgIData(oldp+41,(((0U == (IData)(vlSelf->register_file_tb__DOT__rs1))
                              ? 0U : vlSelf->register_file_tb__DOT__dut__DOT__regs
                             [vlSelf->register_file_tb__DOT__rs1])),32);
    bufp->chgIData(oldp+42,(((0U == (IData)(vlSelf->register_file_tb__DOT__rs2))
                              ? 0U : vlSelf->register_file_tb__DOT__dut__DOT__regs
                             [vlSelf->register_file_tb__DOT__rs2])),32);
}

void Vregister_file_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root__trace_cleanup\n"); );
    // Init
    Vregister_file_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister_file_tb___024root*>(voidSelf);
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
