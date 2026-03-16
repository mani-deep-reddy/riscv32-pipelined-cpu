// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline_reg_tb.h for the primary calling header

#include "Vpipeline_reg_tb__pch.h"
#include "Vpipeline_reg_tb__Syms.h"
#include "Vpipeline_reg_tb___024root.h"

void Vpipeline_reg_tb___024root___ctor_var_reset(Vpipeline_reg_tb___024root* vlSelf);

Vpipeline_reg_tb___024root::Vpipeline_reg_tb___024root(Vpipeline_reg_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpipeline_reg_tb___024root___ctor_var_reset(this);
}

void Vpipeline_reg_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpipeline_reg_tb___024root::~Vpipeline_reg_tb___024root() {
}
