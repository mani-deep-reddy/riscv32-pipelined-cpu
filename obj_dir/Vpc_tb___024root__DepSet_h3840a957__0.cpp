// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc_tb.h for the primary calling header

#include "Vpc_tb__pch.h"
#include "Vpc_tb__Syms.h"
#include "Vpc_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vpc_tb___024root___eval_initial__TOP__Vtiming__0(Vpc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x682f7063U;
    __Vtemp_1[2U] = 0x66657463U;
    __Vtemp_1[3U] = 0x73696d2fU;
    __Vtemp_1[4U] = 0x6f636b5fU;
    __Vtemp_1[5U] = 0x6d2f626cU;
    __Vtemp_1[6U] = 0x7369U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(7, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->pc_tb__DOT__clk = 0U;
    vlSelf->pc_tb__DOT__errors = 0U;
    vlSelf->pc_tb__DOT__expected = 0U;
    vlSelf->pc_tb__DOT__reset = 1U;
    vlSelf->pc_tb__DOT__pc_write = 0U;
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       39);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h00f6b3bc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pc_tb.clk)", 
                                                       "tb/block_tests/fetch/pc_tb.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pc_tb__DOT__pc_next = VL_RANDOM_I();
    vlSelf->pc_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__pc_write = (1U & VL_RANDOM_I());
    vlSelf->pc_tb__DOT__expected = ((IData)(vlSelf->pc_tb__DOT__reset)
                                     ? 0U : ((IData)(vlSelf->pc_tb__DOT__pc_write)
                                              ? vlSelf->pc_tb__DOT__pc_next
                                              : vlSelf->pc_tb__DOT__expected));
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/fetch/pc_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pc_tb__DOT__pc != vlSelf->pc_tb__DOT__expected))) {
        VL_WRITEF("ERROR: pc=%x expected=%x reset=%b write=%b\n",
                  32,vlSelf->pc_tb__DOT__pc,32,vlSelf->pc_tb__DOT__expected,
                  1,(IData)(vlSelf->pc_tb__DOT__reset),
                  1,vlSelf->pc_tb__DOT__pc_write);
        vlSelf->pc_tb__DOT__errors = ((IData)(1U) + vlSelf->pc_tb__DOT__errors);
    }
    if ((0U == vlSelf->pc_tb__DOT__errors)) {
        VL_WRITEF("PASS\n");
    } else {
        VL_WRITEF("FAIL: %0d errors\n",32,vlSelf->pc_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/block_tests/fetch/pc_tb.sv", 71, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc_tb___024root___dump_triggers__act(Vpc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vpc_tb___024root___eval_triggers__act(Vpc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->pc_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__pc_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->pc_tb__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__pc_tb__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->pc_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__pc_tb__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__pc_tb__DOT__clk__0 
        = vlSelf->pc_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__pc_tb__DOT__reset__0 
        = vlSelf->pc_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpc_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
