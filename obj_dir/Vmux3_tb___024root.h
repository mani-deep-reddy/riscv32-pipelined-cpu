// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux3_tb.h for the primary calling header

#ifndef VERILATED_VMUX3_TB___024ROOT_H_
#define VERILATED_VMUX3_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmux3_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux3_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ mux3_tb__DOT__clk;
    CData/*1:0*/ mux3_tb__DOT__sel;
    CData/*0:0*/ __Vdlyvval__mux3_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__mux3_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mux3_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ mux3_tb__DOT__a;
    IData/*31:0*/ mux3_tb__DOT__b;
    IData/*31:0*/ mux3_tb__DOT__c;
    IData/*31:0*/ mux3_tb__DOT__y;
    IData/*31:0*/ mux3_tb__DOT__expected;
    IData/*31:0*/ mux3_tb__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h93d97205__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux3_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux3_tb___024root(Vmux3_tb__Syms* symsp, const char* v__name);
    ~Vmux3_tb___024root();
    VL_UNCOPYABLE(Vmux3_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
