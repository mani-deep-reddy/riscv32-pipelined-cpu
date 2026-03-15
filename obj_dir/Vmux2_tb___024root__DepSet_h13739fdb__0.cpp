// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux2_tb.h for the primary calling header

#include "Vmux2_tb__pch.h"
#include "Vmux2_tb__Syms.h"
#include "Vmux2_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmux2_tb___024root___eval_initial__TOP__Vtiming__0(Vmux2_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    vlSelf->mux2_tb__DOT__clk = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6d757832U;
    __Vtemp_1[2U] = 0x696c732fU;
    __Vtemp_1[3U] = 0x6d2f7574U;
    __Vtemp_1[4U] = 0x6b5f7369U;
    __Vtemp_1[5U] = 0x626c6f63U;
    __Vtemp_1[6U] = 0x73696d2fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(7, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h7a3b2523__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mux2_tb.clk)", 
                                                       "tb/block_tests/utils/mux2_tb.sv", 
                                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux2_tb__DOT__a = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__b = VL_RANDOM_I();
    vlSelf->mux2_tb__DOT__sel = (1U & VL_RANDOM_I());
    vlSelf->mux2_tb__DOT__expected = ((IData)(vlSelf->mux2_tb__DOT__sel)
                                       ? vlSelf->mux2_tb__DOT__b
                                       : vlSelf->mux2_tb__DOT__a);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/block_tests/utils/mux2_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->mux2_tb__DOT__y != vlSelf->mux2_tb__DOT__expected))) {
        VL_WRITEF("ERROR: a=%x b=%x sel=%b y=%x expected=%x\n",
                  32,vlSelf->mux2_tb__DOT__a,32,vlSelf->mux2_tb__DOT__b,
                  1,(IData)(vlSelf->mux2_tb__DOT__sel),
                  32,vlSelf->mux2_tb__DOT__y,32,vlSelf->mux2_tb__DOT__expected);
        vlSelf->mux2_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->mux2_tb__DOT__errors);
    }
    if ((0U == vlSelf->mux2_tb__DOT__errors)) {
        VL_WRITEF("PASS: mux2 test successful\n");
    } else {
        VL_WRITEF("FAIL: %0d errors detected\n",32,
                  vlSelf->mux2_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/block_tests/utils/mux2_tb.sv", 55, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux2_tb___024root___dump_triggers__act(Vmux2_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux2_tb___024root___eval_triggers__act(Vmux2_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->mux2_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__mux2_tb__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__mux2_tb__DOT__clk__0 
        = vlSelf->mux2_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux2_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
