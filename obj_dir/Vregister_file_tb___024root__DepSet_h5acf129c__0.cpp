// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file_tb.h for the primary calling header

#include "Vregister_file_tb__pch.h"
#include "Vregister_file_tb__Syms.h"
#include "Vregister_file_tb___024root.h"

extern const VlWide<10>/*319:0*/ Vregister_file_tb__ConstPool__CONST_he42fd204_0;

VL_INLINE_OPT VlCoroutine Vregister_file_tb___024root___eval_initial__TOP__Vtiming__0(Vregister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_register_file_tb__DOT__check__0__exp1;
    __Vtask_register_file_tb__DOT__check__0__exp1 = 0;
    IData/*31:0*/ __Vtask_register_file_tb__DOT__check__0__exp2;
    __Vtask_register_file_tb__DOT__check__0__exp2 = 0;
    IData/*31:0*/ __Vtask_register_file_tb__DOT__check__1__exp1;
    __Vtask_register_file_tb__DOT__check__1__exp1 = 0;
    IData/*31:0*/ __Vtask_register_file_tb__DOT__check__1__exp2;
    __Vtask_register_file_tb__DOT__check__1__exp2 = 0;
    IData/*31:0*/ __Vtask_register_file_tb__DOT__check__2__exp1;
    __Vtask_register_file_tb__DOT__check__2__exp1 = 0;
    IData/*31:0*/ __Vtask_register_file_tb__DOT__check__2__exp2;
    __Vtask_register_file_tb__DOT__check__2__exp2 = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(10, Vregister_file_tb__ConstPool__CONST_he42fd204_0));
    vlSymsp->_traceDumpOpen();
    vlSelf->register_file_tb__DOT__clk = 0U;
    vlSelf->register_file_tb__DOT__errors = 0U;
    vlSelf->register_file_tb__DOT__reset = 1U;
    vlSelf->register_file_tb__DOT__reg_write = 0U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       42);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__reset = 0U;
    vlSelf->register_file_tb__DOT__rd = 5U;
    vlSelf->register_file_tb__DOT__write_data = 0x7bU;
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = 5U;
    vlSelf->register_file_tb__DOT__rs2 = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_register_file_tb__DOT__check__0__exp2 = 0U;
    __Vtask_register_file_tb__DOT__check__0__exp1 = 0x7bU;
    if (VL_UNLIKELY(((vlSelf->register_file_tb__DOT__rs1_value 
                      != __Vtask_register_file_tb__DOT__check__0__exp1) 
                     | (vlSelf->register_file_tb__DOT__rs2_value 
                        != __Vtask_register_file_tb__DOT__check__0__exp2)))) {
        VL_WRITEF("ERROR:\nrs1_val=%x expected=%x\nrs2_val=%x expected=%x\n",
                  32,vlSelf->register_file_tb__DOT__rs1_value,
                  32,__Vtask_register_file_tb__DOT__check__0__exp1,
                  32,vlSelf->register_file_tb__DOT__rs2_value,
                  32,__Vtask_register_file_tb__DOT__check__0__exp2);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = 0U;
    vlSelf->register_file_tb__DOT__write_data = 0x3e7U;
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = 0U;
    vlSelf->register_file_tb__DOT__rs2 = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_register_file_tb__DOT__check__1__exp2 = 0U;
    __Vtask_register_file_tb__DOT__check__1__exp1 = 0U;
    if (VL_UNLIKELY(((vlSelf->register_file_tb__DOT__rs1_value 
                      != __Vtask_register_file_tb__DOT__check__1__exp1) 
                     | (vlSelf->register_file_tb__DOT__rs2_value 
                        != __Vtask_register_file_tb__DOT__check__1__exp2)))) {
        VL_WRITEF("ERROR:\nrs1_val=%x expected=%x\nrs2_val=%x expected=%x\n",
                  32,vlSelf->register_file_tb__DOT__rs1_value,
                  32,__Vtask_register_file_tb__DOT__check__1__exp1,
                  32,vlSelf->register_file_tb__DOT__rs2_value,
                  32,__Vtask_register_file_tb__DOT__check__1__exp2);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = 6U;
    vlSelf->register_file_tb__DOT__write_data = 0x22bU;
    vlSelf->register_file_tb__DOT__reg_write = 0U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = 6U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_register_file_tb__DOT__check__2__exp2 = vlSelf->register_file_tb__DOT__rs2_value;
    __Vtask_register_file_tb__DOT__check__2__exp1 = 0U;
    if (VL_UNLIKELY(((vlSelf->register_file_tb__DOT__rs1_value 
                      != __Vtask_register_file_tb__DOT__check__2__exp1) 
                     | (vlSelf->register_file_tb__DOT__rs2_value 
                        != __Vtask_register_file_tb__DOT__check__2__exp2)))) {
        VL_WRITEF("ERROR:\nrs1_val=%x expected=%x\nrs2_val=%x expected=%x\n",
                  32,vlSelf->register_file_tb__DOT__rs1_value,
                  32,__Vtask_register_file_tb__DOT__check__2__exp1,
                  32,vlSelf->register_file_tb__DOT__rs2_value,
                  32,__Vtask_register_file_tb__DOT__check__2__exp2);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    vlSelf->register_file_tb__DOT__rd = (0x1fU & VL_URANDOM_RANGE_I(1U, 0x1fU));
    vlSelf->register_file_tb__DOT__write_data = VL_RANDOM_I();
    vlSelf->register_file_tb__DOT__reg_write = 1U;
    co_await vlSelf->__VtrigSched_ha5216bcd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_file_tb.clk)", 
                                                       "tb/block_tests/decode/register_file_tb.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_file_tb__DOT__rs1 = vlSelf->register_file_tb__DOT__rd;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/decode/register_file_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->register_file_tb__DOT__rs1_value 
                     != vlSelf->register_file_tb__DOT__write_data))) {
        VL_WRITEF("ERROR: write/read mismatch rd=%0# data=%x got=%x\n",
                  5,vlSelf->register_file_tb__DOT__rd,
                  32,vlSelf->register_file_tb__DOT__write_data,
                  32,vlSelf->register_file_tb__DOT__rs1_value);
        vlSelf->register_file_tb__DOT__errors = ((IData)(1U) 
                                                 + vlSelf->register_file_tb__DOT__errors);
    }
    if ((0U == vlSelf->register_file_tb__DOT__errors)) {
        VL_WRITEF("PASS\n");
    } else {
        VL_WRITEF("FAIL: %0d errors\n",32,vlSelf->register_file_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/block_tests/decode/register_file_tb.sv", 117, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__act(Vregister_file_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregister_file_tb___024root___eval_triggers__act(Vregister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->register_file_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__register_file_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->register_file_tb__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__register_file_tb__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->register_file_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__register_file_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__register_file_tb__DOT__clk__0 
        = vlSelf->register_file_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__register_file_tb__DOT__reset__0 
        = vlSelf->register_file_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregister_file_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
