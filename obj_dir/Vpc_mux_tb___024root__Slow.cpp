// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc_mux_tb.h for the primary calling header

#include "Vpc_mux_tb__pch.h"
#include "Vpc_mux_tb__Syms.h"
#include "Vpc_mux_tb___024root.h"

void Vpc_mux_tb___024root___ctor_var_reset(Vpc_mux_tb___024root* vlSelf);

Vpc_mux_tb___024root::Vpc_mux_tb___024root(Vpc_mux_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpc_mux_tb___024root___ctor_var_reset(this);
}

void Vpc_mux_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpc_mux_tb___024root::~Vpc_mux_tb___024root() {
}
