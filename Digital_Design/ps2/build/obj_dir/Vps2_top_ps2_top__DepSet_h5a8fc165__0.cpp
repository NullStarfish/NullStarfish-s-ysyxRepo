// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vps2_top__Syms.h"
#include "Vps2_top_ps2_top.h"

extern const VlUnpacked<CData/*7:0*/, 16> Vps2_top__ConstPool__TABLE_h33195002_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vps2_top__ConstPool__TABLE_h922bfae3_0;

VL_INLINE_OPT void Vps2_top_ps2_top___nba_sequent__TOP__ps2_top__0(Vps2_top_ps2_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vps2_top_ps2_top___nba_sequent__TOP__ps2_top__0\n"); );
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
    CData/*2:0*/ __Vdly__uut1__DOT__ps2_clk_sync;
    __Vdly__uut1__DOT__ps2_clk_sync = 0;
    CData/*3:0*/ __Vdly__uut1__DOT__count;
    __Vdly__uut1__DOT__count = 0;
    CData/*2:0*/ __Vdly__uut1__DOT__w_ptr;
    __Vdly__uut1__DOT__w_ptr = 0;
    CData/*2:0*/ __Vdly__uut1__DOT__r_ptr;
    __Vdly__uut1__DOT__r_ptr = 0;
    CData/*0:0*/ __Vdly__uut1__DOT__overflow;
    __Vdly__uut1__DOT__overflow = 0;
    CData/*0:0*/ __Vdly__ready;
    __Vdly__ready = 0;
    CData/*2:0*/ __Vdlyvdim0__uut1__DOT__fifo__v0;
    __Vdlyvdim0__uut1__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__uut1__DOT__fifo__v0;
    __Vdlyvval__uut1__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__uut1__DOT__fifo__v0;
    __Vdlyvset__uut1__DOT__fifo__v0 = 0;
    // Body
    __Vdly__uut1__DOT__ps2_clk_sync = vlSelf->__PVT__uut1__DOT__ps2_clk_sync;
    __Vdly__uut1__DOT__overflow = vlSelf->__PVT__uut1__DOT__overflow;
    __Vdly__uut1__DOT__w_ptr = vlSelf->__PVT__uut1__DOT__w_ptr;
    __Vdly__uut1__DOT__count = vlSelf->__PVT__uut1__DOT__count;
    __Vdly__ready = vlSelf->ready;
    __Vdly__uut1__DOT__r_ptr = vlSelf->__PVT__uut1__DOT__r_ptr;
    __Vdlyvset__uut1__DOT__fifo__v0 = 0U;
    __Vdly__uut1__DOT__ps2_clk_sync = ((6U & ((IData)(vlSelf->__PVT__uut1__DOT__ps2_clk_sync) 
                                              << 1U)) 
                                       | (IData)(vlSymsp->TOP.ps2_clk));
    if (vlSymsp->TOP.rst) {
        __Vdly__uut1__DOT__count = 0U;
        __Vdly__uut1__DOT__w_ptr = 0U;
        __Vdly__uut1__DOT__r_ptr = 0U;
        __Vdly__uut1__DOT__overflow = 0U;
        __Vdly__ready = 0U;
        vlSelf->__PVT__fsm__DOT__cur_state = 0U;
        vlSelf->__PVT__press_cnt = 0U;
        vlSelf->__PVT__data_to_seg = 0U;
    } else {
        if (vlSelf->ready) {
            if ((1U & (~ (IData)(vlSelf->__PVT__nextdata_n)))) {
                __Vdly__uut1__DOT__r_ptr = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__uut1__DOT__r_ptr)));
                if (((IData)(vlSelf->__PVT__uut1__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__uut1__DOT__r_ptr))))) {
                    __Vdly__ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->__PVT__uut1__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->__PVT__uut1__DOT__count))) {
                if ((((~ (IData)(vlSelf->__PVT__uut1__DOT__buffer)) 
                      & (IData)(vlSymsp->TOP.ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->__PVT__uut1__DOT__buffer) 
                                               >> 1U))))) {
                    __Vdlyvval__uut1__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->__PVT__uut1__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__uut1__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__uut1__DOT__fifo__v0 
                        = vlSelf->__PVT__uut1__DOT__w_ptr;
                    __Vdly__ready = 1U;
                    __Vdly__uut1__DOT__w_ptr = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__uut1__DOT__w_ptr)));
                    __Vdly__uut1__DOT__overflow = ((IData)(vlSelf->__PVT__uut1__DOT__overflow) 
                                                   | ((IData)(vlSelf->__PVT__uut1__DOT__r_ptr) 
                                                      == 
                                                      (7U 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlSelf->__PVT__uut1__DOT__w_ptr)))));
                }
                __Vdly__uut1__DOT__count = 0U;
            } else {
                vlSelf->uut1__DOT____Vlvbound_h1a91ade8__0 
                    = vlSymsp->TOP.ps2_data;
                if ((9U >= (IData)(vlSelf->__PVT__uut1__DOT__count))) {
                    vlSelf->__PVT__uut1__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->__PVT__uut1__DOT__count))) 
                            & (IData)(vlSelf->__PVT__uut1__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->uut1__DOT____Vlvbound_h1a91ade8__0) 
                                        << (IData)(vlSelf->__PVT__uut1__DOT__count))));
                }
                __Vdly__uut1__DOT__count = (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__uut1__DOT__count)));
            }
        }
        vlSelf->__PVT__fsm__DOT__cur_state = vlSelf->__PVT__fsm__DOT__next_state;
        vlSelf->__PVT__press_cnt = vlSelf->__PVT__fsm__DOT__next_cnt;
        vlSelf->__PVT__data_to_seg = vlSelf->__PVT__fsm__DOT__next_data_to_seg;
    }
    vlSelf->__PVT__key_pressed = ((~ (IData)(vlSymsp->TOP.rst)) 
                                  & (IData)(vlSelf->__PVT__fsm__DOT__next_key_pressed));
    vlSelf->__PVT__uut1__DOT__count = __Vdly__uut1__DOT__count;
    vlSelf->__PVT__uut1__DOT__w_ptr = __Vdly__uut1__DOT__w_ptr;
    vlSelf->__PVT__uut1__DOT__overflow = __Vdly__uut1__DOT__overflow;
    vlSelf->__PVT__uut1__DOT__ps2_clk_sync = __Vdly__uut1__DOT__ps2_clk_sync;
    vlSelf->ready = __Vdly__ready;
    vlSelf->__PVT__uut1__DOT__r_ptr = __Vdly__uut1__DOT__r_ptr;
    if (__Vdlyvset__uut1__DOT__fifo__v0) {
        vlSelf->__PVT__uut1__DOT__fifo[__Vdlyvdim0__uut1__DOT__fifo__v0] 
            = __Vdlyvval__uut1__DOT__fifo__v0;
    }
    vlSelf->data = vlSelf->__PVT__uut1__DOT__fifo[vlSelf->__PVT__uut1__DOT__r_ptr];
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
