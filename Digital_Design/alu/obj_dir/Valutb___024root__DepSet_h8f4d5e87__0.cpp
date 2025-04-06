// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valutb.h for the primary calling header

#include "verilated.h"

#include "Valutb__Syms.h"
#include "Valutb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Valutb___024root___dump_triggers__act(Valutb___024root* vlSelf);
#endif  // VL_DEBUG

void Valutb___024root___eval_triggers__act(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = vlSelf->__VdlySched.awaitingCurrentTime();
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valutb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
