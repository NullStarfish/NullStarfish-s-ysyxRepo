// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtestV.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VtestV___024root.h"

VL_ATTR_COLD void VtestV___024root___eval_static(VtestV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtestV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtestV___024root___eval_static\n"); );
}

VL_ATTR_COLD void VtestV___024root___eval_initial__TOP(VtestV___024root* vlSelf);

VL_ATTR_COLD void VtestV___024root___eval_initial(VtestV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtestV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtestV___024root___eval_initial\n"); );
    // Body
    VtestV___024root___eval_initial__TOP(vlSelf);
}

void VtestV___024root____Vdpiimwrap_testV__DOT__add_TOP(IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &add__Vfuncrtn);

VL_ATTR_COLD void VtestV___024root___eval_initial__TOP(VtestV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtestV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtestV___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ __Vfunc_testV__DOT__add__0__Vfuncout;
    __Vfunc_testV__DOT__add__0__Vfuncout = 0;
    // Body
    VtestV___024root____Vdpiimwrap_testV__DOT__add_TOP(1U, 2U, __Vfunc_testV__DOT__add__0__Vfuncout);
    VL_WRITEF("00000001 + 00000002 = %x\n",32,__Vfunc_testV__DOT__add__0__Vfuncout);
    VL_FINISH_MT("testV.v", 7, "");
}

VL_ATTR_COLD void VtestV___024root___eval_final(VtestV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtestV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtestV___024root___eval_final\n"); );
}

VL_ATTR_COLD void VtestV___024root___eval_settle(VtestV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtestV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtestV___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtestV___024root___dump_triggers__act(VtestV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtestV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtestV___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VtestV___024root___dump_triggers__nba(VtestV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtestV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtestV___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VtestV___024root___ctor_var_reset(VtestV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtestV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtestV___024root___ctor_var_reset\n"); );
}
