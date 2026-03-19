// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister_file_tb.h for the primary calling header

#ifndef VERILATED_VREGISTER_FILE_TB___024UNIT_H_
#define VERILATED_VREGISTER_FILE_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vregister_file_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister_file_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vregister_file_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregister_file_tb___024unit(Vregister_file_tb__Syms* symsp, const char* v__name);
    ~Vregister_file_tb___024unit();
    VL_UNCOPYABLE(Vregister_file_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
