// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc_tb.h for the primary calling header

#include "Vpc_tb__pch.h"
#include "Vpc_tb__Syms.h"
#include "Vpc_tb___024unit.h"

void Vpc_tb___024unit___ctor_var_reset(Vpc_tb___024unit* vlSelf);

Vpc_tb___024unit::Vpc_tb___024unit(Vpc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpc_tb___024unit___ctor_var_reset(this);
}

void Vpc_tb___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpc_tb___024unit::~Vpc_tb___024unit() {
}
