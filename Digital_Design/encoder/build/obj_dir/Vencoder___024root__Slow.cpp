// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder.h for the primary calling header

#include "verilated.h"

#include "Vencoder__Syms.h"
#include "Vencoder___024root.h"

void Vencoder___024root___ctor_var_reset(Vencoder___024root* vlSelf);

Vencoder___024root::Vencoder___024root(Vencoder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vencoder___024root___ctor_var_reset(this);
}

void Vencoder___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vencoder___024root::~Vencoder___024root() {
}
