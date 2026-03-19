// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vimmediate_generator_tb.h for the primary calling header

#ifndef VERILATED_VIMMEDIATE_GENERATOR_TB___024ROOT_H_
#define VERILATED_VIMMEDIATE_GENERATOR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vimmediate_generator_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vimmediate_generator_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ immediate_generator_tb__DOT__imm_type;
    CData/*0:0*/ immediate_generator_tb__DOT__compute_expected__Vstatic__sign;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ immediate_generator_tb__DOT__instruction;
    IData/*31:0*/ immediate_generator_tb__DOT__imm;
    IData/*31:0*/ immediate_generator_tb__DOT__expected;
    IData/*31:0*/ immediate_generator_tb__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vimmediate_generator_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vimmediate_generator_tb___024root(Vimmediate_generator_tb__Syms* symsp, const char* v__name);
    ~Vimmediate_generator_tb___024root();
    VL_UNCOPYABLE(Vimmediate_generator_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
