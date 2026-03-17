// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc_tb.h for the primary calling header

#include "Vpc_tb__pch.h"
#include "Vpc_tb__Syms.h"
#include "Vpc_tb___024root.h"

void Vpc_tb___024root___ctor_var_reset(Vpc_tb___024root* vlSelf);

Vpc_tb___024root::Vpc_tb___024root(Vpc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpc_tb___024root___ctor_var_reset(this);
}

void Vpc_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpc_tb___024root::~Vpc_tb___024root() {
}
