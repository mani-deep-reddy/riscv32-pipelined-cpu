// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpc_mux_tb.h for the primary calling header

#ifndef VERILATED_VPC_MUX_TB___024UNIT_H_
#define VERILATED_VPC_MUX_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vpc_mux_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpc_mux_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vpc_mux_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpc_mux_tb___024unit(Vpc_mux_tb__Syms* symsp, const char* v__name);
    ~Vpc_mux_tb___024unit();
    VL_UNCOPYABLE(Vpc_mux_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
