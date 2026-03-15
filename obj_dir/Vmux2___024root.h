// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux2.h for the primary calling header

#ifndef VERILATED_VMUX2___024ROOT_H_
#define VERILATED_VMUX2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmux2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ mux2_tb__DOT__clk;
    CData/*0:0*/ mux2_tb__DOT__sel;
    CData/*0:0*/ __Vdlyvval__mux2_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__mux2_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mux2_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ mux2_tb__DOT__a;
    IData/*31:0*/ mux2_tb__DOT__b;
    IData/*31:0*/ mux2_tb__DOT__y;
    IData/*31:0*/ mux2_tb__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7a3b2523__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux2___024root(Vmux2__Syms* symsp, const char* v__name);
    ~Vmux2___024root();
    VL_UNCOPYABLE(Vmux2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
