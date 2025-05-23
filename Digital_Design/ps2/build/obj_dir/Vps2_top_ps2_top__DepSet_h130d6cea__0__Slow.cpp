// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vps2_top_ps2_top.h"

extern const VlUnpacked<CData/*7:0*/, 16> Vps2_top__ConstPool__TABLE_h33195002_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vps2_top__ConstPool__TABLE_h922bfae3_0;

VL_ATTR_COLD void Vps2_top_ps2_top___stl_sequent__TOP__ps2_top__0(Vps2_top_ps2_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vps2_top_ps2_top___stl_sequent__TOP__ps2_top__0\n"); );
    // Init
    CData/*7:0*/ __PVT__ascii_code;
    __PVT__ascii_code = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelf->__PVT__fsm__DOT__next_state = vlSelf->__PVT__fsm__DOT__cur_state;
    vlSelf->__PVT__nextdata_n = 1U;
    if ((0U == (IData)(vlSelf->__PVT__fsm__DOT__cur_state))) {
        if (vlSelf->ready) {
            vlSelf->__PVT__fsm__DOT__next_state = 1U;
            vlSelf->__PVT__nextdata_n = 0U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__fsm__DOT__cur_state))) {
        vlSelf->__PVT__fsm__DOT__next_state = 0U;
        vlSelf->__PVT__nextdata_n = 1U;
    }
    __Vtableidx6 = (0xfU & (IData)(vlSelf->__PVT__press_cnt));
    vlSelf->__PVT__seg_uut2__DOT__seg0 = Vps2_top__ConstPool__TABLE_h33195002_0
        [__Vtableidx6];
    __Vtableidx7 = (0xfU & ((IData)(vlSelf->__PVT__press_cnt) 
                            >> 4U));
    vlSelf->__PVT__seg_uut2__DOT__seg1 = Vps2_top__ConstPool__TABLE_h33195002_0
        [__Vtableidx7];
    __Vtableidx1 = (0xfU & (IData)(vlSelf->__PVT__data_to_seg));
    vlSelf->__PVT__seg_uut0__DOT__seg0 = Vps2_top__ConstPool__TABLE_h33195002_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->__PVT__data_to_seg) 
                            >> 4U));
    vlSelf->__PVT__seg_uut0__DOT__seg1 = Vps2_top__ConstPool__TABLE_h33195002_0
        [__Vtableidx2];
    vlSelf->data = vlSelf->__PVT__uut1__DOT__fifo[vlSelf->__PVT__uut1__DOT__r_ptr];
    __Vtableidx3 = vlSelf->__PVT__data_to_seg;
    __PVT__ascii_code = Vps2_top__ConstPool__TABLE_h922bfae3_0
        [__Vtableidx3];
    vlSelf->__PVT__fsm__DOT__next_cnt = vlSelf->__PVT__press_cnt;
    vlSelf->__PVT__fsm__DOT__next_key_pressed = vlSelf->__PVT__key_pressed;
    vlSelf->__PVT__fsm__DOT__next_data_to_seg = vlSelf->__PVT__data_to_seg;
    if ((0U != (IData)(vlSelf->__PVT__fsm__DOT__cur_state))) {
        if ((1U == (IData)(vlSelf->__PVT__fsm__DOT__cur_state))) {
            if ((0xf0U == (IData)(vlSelf->data))) {
                vlSelf->__PVT__fsm__DOT__next_cnt = 
                    (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__press_cnt)));
            }
            if ((0xf0U != (IData)(vlSelf->data))) {
                vlSelf->__PVT__fsm__DOT__next_key_pressed = 1U;
                vlSelf->__PVT__fsm__DOT__next_data_to_seg 
                    = vlSelf->data;
            } else {
                vlSelf->__PVT__fsm__DOT__next_key_pressed = 0U;
                vlSelf->__PVT__fsm__DOT__next_data_to_seg = 0U;
            }
        }
    }
    __Vtableidx4 = (0xfU & (IData)(__PVT__ascii_code));
    vlSelf->__PVT__seg_uut1__DOT__seg0 = Vps2_top__ConstPool__TABLE_h33195002_0
        [__Vtableidx4];
    __Vtableidx5 = (0xfU & ((IData)(__PVT__ascii_code) 
                            >> 4U));
    vlSelf->__PVT__seg_uut1__DOT__seg1 = Vps2_top__ConstPool__TABLE_h33195002_0
        [__Vtableidx5];
}

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
    vlSelf->o_seg4 = 0;
    vlSelf->o_seg5 = 0;
    vlSelf->data = 0;
    vlSelf->ready = 0;
    vlSelf->__PVT__nextdata_n = 0;
    vlSelf->__PVT__key_pressed = 0;
    vlSelf->__PVT__data_to_seg = 0;
    vlSelf->__PVT__press_cnt = 0;
    vlSelf->__PVT__uut1__DOT__overflow = 0;
    vlSelf->__PVT__uut1__DOT__buffer = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__uut1__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->__PVT__uut1__DOT__w_ptr = 0;
    vlSelf->__PVT__uut1__DOT__r_ptr = 0;
    vlSelf->__PVT__uut1__DOT__count = 0;
    vlSelf->__PVT__uut1__DOT__ps2_clk_sync = 0;
    vlSelf->uut1__DOT____Vlvbound_h1a91ade8__0 = 0;
    vlSelf->__PVT__fsm__DOT__cur_state = 0;
    vlSelf->__PVT__fsm__DOT__next_state = 0;
    vlSelf->__PVT__fsm__DOT__next_cnt = 0;
    vlSelf->__PVT__fsm__DOT__next_key_pressed = 0;
    vlSelf->__PVT__fsm__DOT__next_data_to_seg = 0;
    vlSelf->__PVT__seg_uut0__DOT__seg0 = 0;
    vlSelf->__PVT__seg_uut0__DOT__seg1 = 0;
    vlSelf->__PVT__seg_uut1__DOT__seg0 = 0;
    vlSelf->__PVT__seg_uut1__DOT__seg1 = 0;
    vlSelf->__PVT__seg_uut2__DOT__seg0 = 0;
    vlSelf->__PVT__seg_uut2__DOT__seg1 = 0;
}
