// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer_top.h for the primary calling header

#include "verilated.h"

#include "Vtimer_top__Syms.h"
#include "Vtimer_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer_top___024root___dump_triggers__ico(Vtimer_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtimer_top___024root___eval_triggers__ico(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtimer_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer_top___024root___dump_triggers__act(Vtimer_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtimer_top___024root___eval_triggers__act(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((~ (IData)(vlSelf->timer_top__DOT____Vcellinp__cnt_to_99__rst_n)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__timer_top__DOT____Vcellinp__cnt_to_99__rst_n)));
    vlSelf->__VactTriggered.at(1U) = (((~ (IData)(vlSelf->timer_top__DOT____Vcellinp__cnt_to_99__rst_n)) 
                                       & (IData)(vlSelf->__Vtrigrprev__TOP__timer_top__DOT____Vcellinp__cnt_to_99__rst_n)) 
                                      | ((IData)(vlSelf->timer_top__DOT__clk_1Hz) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__timer_top__DOT__clk_1Hz))));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__timer_top__DOT____Vcellinp__cnt_to_99__rst_n 
        = vlSelf->timer_top__DOT____Vcellinp__cnt_to_99__rst_n;
    vlSelf->__Vtrigrprev__TOP__timer_top__DOT__clk_1Hz 
        = vlSelf->timer_top__DOT__clk_1Hz;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtimer_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
