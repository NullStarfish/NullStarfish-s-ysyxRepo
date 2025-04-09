// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrand_launcher.h for the primary calling header

#include "verilated.h"

#include "Vrand_launcher__Syms.h"
#include "Vrand_launcher___024root.h"

void Vrand_launcher___024root___ctor_var_reset(Vrand_launcher___024root* vlSelf);

Vrand_launcher___024root::Vrand_launcher___024root(Vrand_launcher__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrand_launcher___024root___ctor_var_reset(this);
}

void Vrand_launcher___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrand_launcher___024root::~Vrand_launcher___024root() {
}
