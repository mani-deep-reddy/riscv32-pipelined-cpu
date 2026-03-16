// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline_reg_tb.h for the primary calling header

#include "Vpipeline_reg_tb__pch.h"
#include "Vpipeline_reg_tb__Syms.h"
#include "Vpipeline_reg_tb___024root.h"

extern const VlWide<9>/*287:0*/ Vpipeline_reg_tb__ConstPool__CONST_hfb9a622e_0;

VL_INLINE_OPT VlCoroutine Vpipeline_reg_tb___024root___eval_initial__TOP__Vtiming__0(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->pipeline_reg_tb__DOT__clk = 0U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(9, Vpipeline_reg_tb__ConstPool__CONST_hfb9a622e_0));
    vlSymsp->_traceDumpOpen();
    vlSelf->pipeline_reg_tb__DOT__d = 0xdeadbeefU;
    vlSelf->pipeline_reg_tb__DOT__expected = 0U;
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_hbc4618ef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge pipeline_reg_tb.clk)", 
                                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->pipeline_reg_tb__DOT__reset = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__stall = (1U & VL_RANDOM_I());
    vlSelf->pipeline_reg_tb__DOT__flush = (1U & VL_RANDOM_I());
    if (vlSelf->pipeline_reg_tb__DOT__reset) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_reset = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__flush) {
        vlSelf->pipeline_reg_tb__DOT__expected = 0U;
        vlSelf->pipeline_reg_tb__DOT__seen_flush = 1U;
    } else if (vlSelf->pipeline_reg_tb__DOT__stall) {
        vlSelf->pipeline_reg_tb__DOT__seen_stall = 1U;
    } else {
        vlSelf->pipeline_reg_tb__DOT__expected = vlSelf->pipeline_reg_tb__DOT__d;
        vlSelf->pipeline_reg_tb__DOT__seen_normal = 1U;
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/pipeline_reg_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->pipeline_reg_tb__DOT__q 
                     != vlSelf->pipeline_reg_tb__DOT__expected))) {
        VL_WRITEF("ERROR: reset=%b stall=%b flush=%b q=%x expected=%x\n",
                  1,vlSelf->pipeline_reg_tb__DOT__reset,
                  1,(IData)(vlSelf->pipeline_reg_tb__DOT__stall),
                  1,vlSelf->pipeline_reg_tb__DOT__flush,
                  32,vlSelf->pipeline_reg_tb__DOT__q,
                  32,vlSelf->pipeline_reg_tb__DOT__expected);
        vlSelf->pipeline_reg_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->pipeline_reg_tb__DOT__errors);
    }
    VL_WRITEF("Coverage:\n reset  seen = %0#\n flush  seen = %0#\n stall  seen = %0#\n normal seen = %0#\n",
              1,vlSelf->pipeline_reg_tb__DOT__seen_reset,
              1,(IData)(vlSelf->pipeline_reg_tb__DOT__seen_flush),
              1,vlSelf->pipeline_reg_tb__DOT__seen_stall,
              1,(IData)(vlSelf->pipeline_reg_tb__DOT__seen_normal));
    if ((0U == vlSelf->pipeline_reg_tb__DOT__errors)) {
        VL_WRITEF("PASS: pipeline_reg test successful\n");
    } else {
        VL_WRITEF("FAIL: %0d errors detected\n",32,
                  vlSelf->pipeline_reg_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/block_tests/utils/pipeline_reg_tb.sv", 90, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline_reg_tb___024root___dump_triggers__act(Vpipeline_reg_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vpipeline_reg_tb___024root___eval_triggers__act(Vpipeline_reg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_reg_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->pipeline_reg_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__pipeline_reg_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->pipeline_reg_tb__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__pipeline_reg_tb__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->pipeline_reg_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__pipeline_reg_tb__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__pipeline_reg_tb__DOT__clk__0 
        = vlSelf->pipeline_reg_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__pipeline_reg_tb__DOT__reset__0 
        = vlSelf->pipeline_reg_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpipeline_reg_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
