// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpc_mux_tb.h for the primary calling header

#ifndef VERILATED_VPC_MUX_TB___024ROOT_H_
#define VERILATED_VPC_MUX_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vpc_mux_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpc_mux_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ pc_mux_tb__DOT__branch;
    CData/*0:0*/ pc_mux_tb__DOT__jump;
    CData/*1:0*/ pc_mux_tb__DOT__dut__DOT__sel;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ pc_mux_tb__DOT__pc_plus4;
    IData/*31:0*/ pc_mux_tb__DOT__branch_target;
    IData/*31:0*/ pc_mux_tb__DOT__jump_target;
    IData/*31:0*/ pc_mux_tb__DOT__pc_next;
    IData/*31:0*/ pc_mux_tb__DOT__expected;
    IData/*31:0*/ pc_mux_tb__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpc_mux_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpc_mux_tb___024root(Vpc_mux_tb__Syms* symsp, const char* v__name);
    ~Vpc_mux_tb___024root();
    VL_UNCOPYABLE(Vpc_mux_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
