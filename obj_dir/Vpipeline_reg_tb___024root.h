// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpipeline_reg_tb.h for the primary calling header

#ifndef VERILATED_VPIPELINE_REG_TB___024ROOT_H_
#define VERILATED_VPIPELINE_REG_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vpipeline_reg_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpipeline_reg_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ pipeline_reg_tb__DOT__clk;
    CData/*0:0*/ pipeline_reg_tb__DOT__reset;
    CData/*0:0*/ pipeline_reg_tb__DOT__stall;
    CData/*0:0*/ pipeline_reg_tb__DOT__flush;
    CData/*0:0*/ pipeline_reg_tb__DOT__seen_reset;
    CData/*0:0*/ pipeline_reg_tb__DOT__seen_flush;
    CData/*0:0*/ pipeline_reg_tb__DOT__seen_stall;
    CData/*0:0*/ pipeline_reg_tb__DOT__seen_normal;
    CData/*0:0*/ __Vdlyvval__pipeline_reg_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__pipeline_reg_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__pipeline_reg_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__pipeline_reg_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ pipeline_reg_tb__DOT__d;
    IData/*31:0*/ pipeline_reg_tb__DOT__q;
    IData/*31:0*/ pipeline_reg_tb__DOT__expected;
    IData/*31:0*/ pipeline_reg_tb__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hbc4618ef__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpipeline_reg_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpipeline_reg_tb___024root(Vpipeline_reg_tb__Syms* symsp, const char* v__name);
    ~Vpipeline_reg_tb___024root();
    VL_UNCOPYABLE(Vpipeline_reg_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
