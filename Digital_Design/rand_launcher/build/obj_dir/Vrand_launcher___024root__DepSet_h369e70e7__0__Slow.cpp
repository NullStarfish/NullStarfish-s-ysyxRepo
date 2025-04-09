// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrand_launcher.h for the primary calling header

#include "verilated.h"

#include "Vrand_launcher__Syms.h"
#include "Vrand_launcher___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrand_launcher___024root___dump_triggers__stl(Vrand_launcher___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrand_launcher___024root___eval_triggers__stl(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrand_launcher___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
