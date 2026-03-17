// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpc_tb.h for the primary calling header

#ifndef VERILATED_VPC_TB___024ROOT_H_
#define VERILATED_VPC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vpc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ pc_tb__DOT__clk;
    CData/*0:0*/ pc_tb__DOT__reset;
    CData/*0:0*/ pc_tb__DOT__pc_write;
    CData/*0:0*/ __Vdlyvval__pc_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__pc_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__pc_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__pc_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ pc_tb__DOT__pc_next;
    IData/*31:0*/ pc_tb__DOT__pc;
    IData/*31:0*/ pc_tb__DOT__expected;
    IData/*31:0*/ pc_tb__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h00f6b3bc__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpc_tb___024root(Vpc_tb__Syms* symsp, const char* v__name);
    ~Vpc_tb___024root();
    VL_UNCOPYABLE(Vpc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
