// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtestV.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VtestV__Syms.h"
#include "VtestV___024root.h"

void VtestV___024root___ctor_var_reset(VtestV___024root* vlSelf);

VtestV___024root::VtestV___024root(VtestV__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VtestV___024root___ctor_var_reset(this);
}

void VtestV___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VtestV___024root::~VtestV___024root() {
}
