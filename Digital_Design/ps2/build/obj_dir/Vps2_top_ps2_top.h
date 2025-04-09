// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vps2_top.h for the primary calling header

#ifndef VERILATED_VPS2_TOP_PS2_TOP_H_
#define VERILATED_VPS2_TOP_PS2_TOP_H_  // guard

#include "verilated.h"

class Vps2_top__Syms;

class Vps2_top_ps2_top final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(o_seg0,7,0);
    VL_OUT8(o_seg1,7,0);
    CData/*7:0*/ data;
    CData/*0:0*/ valid;
    CData/*3:0*/ __PVT__uut1__DOT__count;
    CData/*2:0*/ __PVT__uut1__DOT__ps2_clk_sync;
    CData/*0:0*/ __PVT__uut1__DOT__key_pressed;
    CData/*0:0*/ __PVT__uut1__DOT__break_code;
    CData/*0:0*/ uut1__DOT____Vlvbound_h1a91ade8__0;
    CData/*7:0*/ __PVT__uut2__DOT__seg0;
    CData/*7:0*/ __PVT__uut2__DOT__seg1;
    SData/*9:0*/ __PVT__uut1__DOT__buffer;

    // INTERNAL VARIABLES
    Vps2_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vps2_top_ps2_top(Vps2_top__Syms* symsp, const char* v__name);
    ~Vps2_top_ps2_top();
    VL_UNCOPYABLE(Vps2_top_ps2_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
