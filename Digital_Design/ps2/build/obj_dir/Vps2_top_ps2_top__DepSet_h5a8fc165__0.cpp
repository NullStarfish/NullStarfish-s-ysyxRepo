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
    CData/*2:0*/ __Vdly__uut1__DOT__ps2_clk_sync;
    __Vdly__uut1__DOT__ps2_clk_sync = 0;
    CData/*3:0*/ __Vdly__uut1__DOT__count;
    __Vdly__uut1__DOT__count = 0;
    CData/*0:0*/ __Vdly__uut1__DOT__key_pressed;
    __Vdly__uut1__DOT__key_pressed = 0;
    CData/*0:0*/ __Vdly__uut1__DOT__break_code;
    __Vdly__uut1__DOT__break_code = 0;
    // Body
    __Vdly__uut1__DOT__ps2_clk_sync = vlSelf->__PVT__uut1__DOT__ps2_clk_sync;
    __Vdly__uut1__DOT__break_code = vlSelf->__PVT__uut1__DOT__break_code;
    __Vdly__uut1__DOT__key_pressed = vlSelf->__PVT__uut1__DOT__key_pressed;
    __Vdly__uut1__DOT__count = vlSelf->__PVT__uut1__DOT__count;
    __Vdly__uut1__DOT__ps2_clk_sync = ((6U & ((IData)(vlSelf->__PVT__uut1__DOT__ps2_clk_sync) 
                                              << 1U)) 
                                       | (IData)(vlSymsp->TOP.ps2_clk));
    if (vlSymsp->TOP.rst) {
        __Vdly__uut1__DOT__count = 0U;
        vlSelf->data = 0U;
        vlSelf->valid = 0U;
        __Vdly__uut1__DOT__key_pressed = 0U;
        __Vdly__uut1__DOT__break_code = 0U;
    } else if ((IData)((4U == (6U & (IData)(vlSelf->__PVT__uut1__DOT__ps2_clk_sync))))) {
        if ((0xaU == (IData)(vlSelf->__PVT__uut1__DOT__count))) {
            if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__uut1__DOT__buffer)) 
                              & (IData)(vlSymsp->TOP.ps2_data)) 
                             & VL_REDXOR_32((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__uut1__DOT__buffer) 
                                                >> 1U)))))) {
                VL_WRITEF("receive %x\n",8,(0xffU & 
                                            ((IData)(vlSelf->__PVT__uut1__DOT__buffer) 
                                             >> 1U)));
                if ((0xf0U == (0xffU & ((IData)(vlSelf->__PVT__uut1__DOT__buffer) 
                                        >> 1U)))) {
                    __Vdly__uut1__DOT__break_code = 1U;
                } else if (vlSelf->__PVT__uut1__DOT__break_code) {
                    __Vdly__uut1__DOT__break_code = 0U;
                    __Vdly__uut1__DOT__key_pressed = 0U;
                    vlSelf->valid = 0U;
                } else if ((1U & (~ (IData)(vlSelf->__PVT__uut1__DOT__key_pressed)))) {
                    vlSelf->data = (0xffU & ((IData)(vlSelf->__PVT__uut1__DOT__buffer) 
                                             >> 1U));
                    vlSelf->valid = 1U;
                    __Vdly__uut1__DOT__key_pressed = 1U;
                }
            }
            __Vdly__uut1__DOT__count = 0U;
        } else {
            vlSelf->uut1__DOT____Vlvbound_h1a91ade8__0 
                = vlSymsp->TOP.ps2_data;
            if (VL_LIKELY((9U >= (IData)(vlSelf->__PVT__uut1__DOT__count)))) {
                vlSelf->__PVT__uut1__DOT__buffer = 
                    (((~ ((IData)(1U) << (IData)(vlSelf->__PVT__uut1__DOT__count))) 
                      & (IData)(vlSelf->__PVT__uut1__DOT__buffer)) 
                     | (0x3ffU & ((IData)(vlSelf->uut1__DOT____Vlvbound_h1a91ade8__0) 
                                  << (IData)(vlSelf->__PVT__uut1__DOT__count))));
            }
            __Vdly__uut1__DOT__count = (0xfU & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__uut1__DOT__count)));
        }
    }
    vlSelf->__PVT__uut1__DOT__count = __Vdly__uut1__DOT__count;
    vlSelf->__PVT__uut1__DOT__key_pressed = __Vdly__uut1__DOT__key_pressed;
    vlSelf->__PVT__uut1__DOT__break_code = __Vdly__uut1__DOT__break_code;
    vlSelf->__PVT__uut1__DOT__ps2_clk_sync = __Vdly__uut1__DOT__ps2_clk_sync;
    __Vtableidx1 = (0xfU & (IData)(vlSelf->data));
    vlSelf->__PVT__seg_uut0__DOT__seg0 = Vps2_top__ConstPool__TABLE_h33195002_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->data) >> 4U));
    vlSelf->__PVT__seg_uut0__DOT__seg1 = Vps2_top__ConstPool__TABLE_h33195002_0
        [__Vtableidx2];
    __Vtableidx3 = vlSelf->data;
    __PVT__ascii_code = Vps2_top__ConstPool__TABLE_h922bfae3_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & (IData)(__PVT__ascii_code));
    vlSelf->__PVT__seg_uut1__DOT__seg0 = Vps2_top__ConstPool__TABLE_h33195002_0
        [__Vtableidx4];
    __Vtableidx5 = (0xfU & ((IData)(__PVT__ascii_code) 
                            >> 4U));
    vlSelf->__PVT__seg_uut1__DOT__seg1 = Vps2_top__ConstPool__TABLE_h33195002_0
        [__Vtableidx5];
}
