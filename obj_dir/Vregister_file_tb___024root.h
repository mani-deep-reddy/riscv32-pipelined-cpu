// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister_file_tb.h for the primary calling header

#ifndef VERILATED_VREGISTER_FILE_TB___024ROOT_H_
#define VERILATED_VREGISTER_FILE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vregister_file_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister_file_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ register_file_tb__DOT__clk;
    CData/*0:0*/ register_file_tb__DOT__reset;
    CData/*4:0*/ register_file_tb__DOT__rs1;
    CData/*4:0*/ register_file_tb__DOT__rs2;
    CData/*4:0*/ register_file_tb__DOT__rd;
    CData/*0:0*/ register_file_tb__DOT__reg_write;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__register_file_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__register_file_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ register_file_tb__DOT__write_data;
    IData/*31:0*/ register_file_tb__DOT__rs1_value;
    IData/*31:0*/ register_file_tb__DOT__rs2_value;
    IData/*31:0*/ register_file_tb__DOT__errors;
    IData/*31:0*/ register_file_tb__DOT__dut__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> register_file_tb__DOT__dut__DOT__regs;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha5216bcd__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregister_file_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregister_file_tb___024root(Vregister_file_tb__Syms* symsp, const char* v__name);
    ~Vregister_file_tb___024root();
    VL_UNCOPYABLE(Vregister_file_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
