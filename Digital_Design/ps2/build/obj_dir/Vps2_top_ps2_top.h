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
    VL_OUT8(o_seg2,7,0);
    VL_OUT8(o_seg3,7,0);
    VL_OUT8(o_seg4,7,0);
    VL_OUT8(o_seg5,7,0);
    CData/*7:0*/ data;
    CData/*0:0*/ ready;
    CData/*0:0*/ __PVT__nextdata_n;
    CData/*0:0*/ __PVT__key_pressed;
    CData/*7:0*/ __PVT__data_to_seg;
    CData/*7:0*/ __PVT__press_cnt;
    CData/*0:0*/ __PVT__uut1__DOT__overflow;
    CData/*2:0*/ __PVT__uut1__DOT__w_ptr;
    CData/*2:0*/ __PVT__uut1__DOT__r_ptr;
    CData/*3:0*/ __PVT__uut1__DOT__count;
    CData/*2:0*/ __PVT__uut1__DOT__ps2_clk_sync;
    CData/*0:0*/ uut1__DOT____Vlvbound_h1a91ade8__0;
    CData/*1:0*/ __PVT__fsm__DOT__cur_state;
    CData/*1:0*/ __PVT__fsm__DOT__next_state;
    CData/*7:0*/ __PVT__fsm__DOT__next_cnt;
    CData/*0:0*/ __PVT__fsm__DOT__next_key_pressed;
    CData/*7:0*/ __PVT__fsm__DOT__next_data_to_seg;
    CData/*7:0*/ __PVT__seg_uut0__DOT__seg0;
    CData/*7:0*/ __PVT__seg_uut0__DOT__seg1;
    CData/*7:0*/ __PVT__seg_uut1__DOT__seg0;
    CData/*7:0*/ __PVT__seg_uut1__DOT__seg1;
    CData/*7:0*/ __PVT__seg_uut2__DOT__seg0;
    CData/*7:0*/ __PVT__seg_uut2__DOT__seg1;
    SData/*9:0*/ __PVT__uut1__DOT__buffer;
    VlUnpacked<CData/*7:0*/, 8> __PVT__uut1__DOT__fifo;

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
