// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vps2_top__Syms.h"
#include "Vps2_top_ps2_top.h"

void Vps2_top_ps2_top___ctor_var_reset(Vps2_top_ps2_top* vlSelf);

Vps2_top_ps2_top::Vps2_top_ps2_top(Vps2_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vps2_top_ps2_top___ctor_var_reset(this);
}

void Vps2_top_ps2_top::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vps2_top_ps2_top::~Vps2_top_ps2_top() {
}
