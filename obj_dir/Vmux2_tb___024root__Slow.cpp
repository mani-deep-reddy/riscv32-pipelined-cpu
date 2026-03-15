// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux2_tb.h for the primary calling header

#include "Vmux2_tb__pch.h"
#include "Vmux2_tb__Syms.h"
#include "Vmux2_tb___024root.h"

void Vmux2_tb___024root___ctor_var_reset(Vmux2_tb___024root* vlSelf);

Vmux2_tb___024root::Vmux2_tb___024root(Vmux2_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmux2_tb___024root___ctor_var_reset(this);
}

void Vmux2_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmux2_tb___024root::~Vmux2_tb___024root() {
}
