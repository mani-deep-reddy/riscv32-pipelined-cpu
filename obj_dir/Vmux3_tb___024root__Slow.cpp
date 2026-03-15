// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux3_tb.h for the primary calling header

#include "Vmux3_tb__pch.h"
#include "Vmux3_tb__Syms.h"
#include "Vmux3_tb___024root.h"

void Vmux3_tb___024root___ctor_var_reset(Vmux3_tb___024root* vlSelf);

Vmux3_tb___024root::Vmux3_tb___024root(Vmux3_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmux3_tb___024root___ctor_var_reset(this);
}

void Vmux3_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmux3_tb___024root::~Vmux3_tb___024root() {
}
