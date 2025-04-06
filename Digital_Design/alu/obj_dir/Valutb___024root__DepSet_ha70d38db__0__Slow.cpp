// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valutb.h for the primary calling header

#include "verilated.h"

#include "Valutb___024root.h"

VL_ATTR_COLD void Valutb___024root___eval_static(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Valutb___024root___eval_final(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Valutb___024root___eval_triggers__stl(Valutb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valutb___024root___dump_triggers__stl(Valutb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Valutb___024root___eval_stl(Valutb___024root* vlSelf);

VL_ATTR_COLD void Valutb___024root___eval_settle(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Valutb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Valutb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/alutb.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Valutb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valutb___024root___dump_triggers__stl(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Valutb___024root___act_sequent__TOP__0(Valutb___024root* vlSelf);

VL_ATTR_COLD void Valutb___024root___eval_stl(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Valutb___024root___act_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valutb___024root___dump_triggers__act(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Valutb___024root___dump_triggers__nba(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Valutb___024root___ctor_var_reset(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->alutb__DOT__inputa = VL_RAND_RESET_I(8);
    vlSelf->alutb__DOT__inputb = VL_RAND_RESET_I(8);
    vlSelf->alutb__DOT__inputaluop = VL_RAND_RESET_I(3);
    vlSelf->alutb__DOT__k = VL_RAND_RESET_I(8);
    vlSelf->alutb__DOT__resultof = VL_RAND_RESET_I(1);
    vlSelf->alutb__DOT__resultc = VL_RAND_RESET_I(1);
    vlSelf->alutb__DOT__resultz = VL_RAND_RESET_I(1);
    vlSelf->alutb__DOT__outputs = VL_RAND_RESET_I(8);
    vlSelf->alutb__DOT__of = VL_RAND_RESET_I(1);
    vlSelf->alutb__DOT__c = VL_RAND_RESET_I(1);
    vlSelf->alutb__DOT__tempresult = VL_RAND_RESET_I(9);
    vlSelf->alutb__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->alutb__DOT__unnamedblk1__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->alutb__DOT__alu_uut__DOT__AdderCtrl = VL_RAND_RESET_I(1);
    vlSelf->alutb__DOT__alu_uut__DOT__AdderResult = VL_RAND_RESET_I(8);
    vlSelf->alutb__DOT__alu_uut__DOT__selAdder__DOT__t_Cin = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
