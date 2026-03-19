// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimmediate_generator_tb.h for the primary calling header

#include "Vimmediate_generator_tb__pch.h"
#include "Vimmediate_generator_tb__Syms.h"
#include "Vimmediate_generator_tb___024root.h"

void Vimmediate_generator_tb___024root___ctor_var_reset(Vimmediate_generator_tb___024root* vlSelf);

Vimmediate_generator_tb___024root::Vimmediate_generator_tb___024root(Vimmediate_generator_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vimmediate_generator_tb___024root___ctor_var_reset(this);
}

void Vimmediate_generator_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vimmediate_generator_tb___024root::~Vimmediate_generator_tb___024root() {
}
