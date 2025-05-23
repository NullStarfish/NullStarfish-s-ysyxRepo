// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vps2_top__Syms.h"
#include "Vps2_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_top___024root___dump_triggers__ico(Vps2_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vps2_top___024root___eval_triggers__ico(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vps2_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vps2_top_ps2_top___ico_sequent__TOP__ps2_top__0(Vps2_top_ps2_top* vlSelf);

void Vps2_top___024root___eval_ico(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vps2_top_ps2_top___ico_sequent__TOP__ps2_top__0((&vlSymsp->TOP__ps2_top));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_top___024root___dump_triggers__act(Vps2_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vps2_top___024root___eval_triggers__act(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vps2_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vps2_top___024root___nba_sequent__TOP__0(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->o_seg4 = (0xffU & (~ (IData)(vlSymsp->TOP__ps2_top.__PVT__seg_uut2__DOT__seg0)));
    vlSelf->o_seg5 = (0xffU & (~ (IData)(vlSymsp->TOP__ps2_top.__PVT__seg_uut2__DOT__seg1)));
    if (vlSymsp->TOP__ps2_top.__PVT__key_pressed) {
        vlSelf->o_seg0 = (0xffU & (~ (IData)(vlSymsp->TOP__ps2_top.__PVT__seg_uut0__DOT__seg0)));
        vlSelf->o_seg1 = (0xffU & (~ (IData)(vlSymsp->TOP__ps2_top.__PVT__seg_uut0__DOT__seg1)));
        vlSelf->o_seg2 = (0xffU & (~ (IData)(vlSymsp->TOP__ps2_top.__PVT__seg_uut1__DOT__seg0)));
        vlSelf->o_seg3 = (0xffU & (~ (IData)(vlSymsp->TOP__ps2_top.__PVT__seg_uut1__DOT__seg1)));
    } else {
        vlSelf->o_seg0 = 0xffU;
        vlSelf->o_seg1 = 0xffU;
        vlSelf->o_seg2 = 0xffU;
        vlSelf->o_seg3 = 0xffU;
    }
}

void Vps2_top_ps2_top___nba_sequent__TOP__ps2_top__0(Vps2_top_ps2_top* vlSelf);

void Vps2_top___024root___eval_nba(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vps2_top_ps2_top___nba_sequent__TOP__ps2_top__0((&vlSymsp->TOP__ps2_top));
        Vps2_top___024root___nba_sequent__TOP__0(vlSelf);
    }
}
