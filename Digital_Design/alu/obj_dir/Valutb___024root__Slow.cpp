// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valutb.h for the primary calling header

#include "verilated.h"

#include "Valutb__Syms.h"
#include "Valutb___024root.h"

void Valutb___024root___ctor_var_reset(Valutb___024root* vlSelf);

Valutb___024root::Valutb___024root(Valutb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Valutb___024root___ctor_var_reset(this);
}

void Valutb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Valutb___024root::~Valutb___024root() {
}
