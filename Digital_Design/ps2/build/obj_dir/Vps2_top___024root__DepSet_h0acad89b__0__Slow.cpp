// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vps2_top__Syms.h"
#include "Vps2_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_top___024root___dump_triggers__stl(Vps2_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vps2_top___024root___eval_triggers__stl(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vps2_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vps2_top_ps2_top___stl_sequent__TOP__ps2_top__0(Vps2_top_ps2_top* vlSelf);
void Vps2_top___024root___nba_sequent__TOP__0(Vps2_top___024root* vlSelf);

VL_ATTR_COLD void Vps2_top___024root___eval_stl(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vps2_top_ps2_top___stl_sequent__TOP__ps2_top__0((&vlSymsp->TOP__ps2_top));
        Vps2_top___024root___nba_sequent__TOP__0(vlSelf);
    }
}
