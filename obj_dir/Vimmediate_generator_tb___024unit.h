// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vimmediate_generator_tb.h for the primary calling header

#ifndef VERILATED_VIMMEDIATE_GENERATOR_TB___024UNIT_H_
#define VERILATED_VIMMEDIATE_GENERATOR_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vimmediate_generator_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vimmediate_generator_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vimmediate_generator_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vimmediate_generator_tb___024unit(Vimmediate_generator_tb__Syms* symsp, const char* v__name);
    ~Vimmediate_generator_tb___024unit();
    VL_UNCOPYABLE(Vimmediate_generator_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
