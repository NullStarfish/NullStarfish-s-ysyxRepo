// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vps2_top_ps2_top.h"

VL_ATTR_COLD void Vps2_top_ps2_top___ctor_var_reset(Vps2_top_ps2_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vps2_top_ps2_top___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->o_seg0 = 0;
    vlSelf->o_seg1 = 0;
    vlSelf->o_seg2 = 0;
    vlSelf->o_seg3 = 0;
    vlSelf->data = 0;
    vlSelf->valid = 0;
    vlSelf->__PVT__uut1__DOT__buffer = 0;
    vlSelf->__PVT__uut1__DOT__count = 0;
    vlSelf->__PVT__uut1__DOT__ps2_clk_sync = 0;
    vlSelf->__PVT__uut1__DOT__key_pressed = 0;
    vlSelf->__PVT__uut1__DOT__break_code = 0;
    vlSelf->uut1__DOT____Vlvbound_h1a91ade8__0 = 0;
    vlSelf->__PVT__seg_uut0__DOT__seg0 = 0;
    vlSelf->__PVT__seg_uut0__DOT__seg1 = 0;
    vlSelf->__PVT__seg_uut1__DOT__seg0 = 0;
    vlSelf->__PVT__seg_uut1__DOT__seg1 = 0;
}
