// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrand_launcher.h for the primary calling header

#include "verilated.h"

#include "Vrand_launcher__Syms.h"
#include "Vrand_launcher___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrand_launcher___024root___dump_triggers__act(Vrand_launcher___024root* vlSelf);
#endif  // VL_DEBUG

void Vrand_launcher___024root___eval_triggers__act(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__rst))));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrand_launcher___024root___dump_triggers__act(vlSelf);
    }
#endif
}
