// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vps2_top_ps2_top.h"

extern const VlUnpacked<CData/*7:0*/, 16> Vps2_top__ConstPool__TABLE_h33195002_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vps2_top__ConstPool__TABLE_h922bfae3_0;

VL_INLINE_OPT void Vps2_top_ps2_top___ico_sequent__TOP__ps2_top__0(Vps2_top_ps2_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vps2_top_ps2_top___ico_sequent__TOP__ps2_top__0\n"); );
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
    // Body
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
