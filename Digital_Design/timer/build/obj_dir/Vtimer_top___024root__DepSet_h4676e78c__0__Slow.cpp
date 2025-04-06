// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer_top.h for the primary calling header

#include "verilated.h"

#include "Vtimer_top___024root.h"

VL_ATTR_COLD void Vtimer_top___024root___eval_static(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtimer_top___024root___eval_initial(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__timer_top__DOT____Vcellinp__cnt_to_99__rst_n 
        = vlSelf->timer_top__DOT____Vcellinp__cnt_to_99__rst_n;
    vlSelf->__Vtrigrprev__TOP__timer_top__DOT__clk_1Hz 
        = vlSelf->timer_top__DOT__clk_1Hz;
}

VL_ATTR_COLD void Vtimer_top___024root___eval_final(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtimer_top___024root___eval_triggers__stl(Vtimer_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer_top___024root___dump_triggers__stl(Vtimer_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtimer_top___024root___eval_stl(Vtimer_top___024root* vlSelf);

VL_ATTR_COLD void Vtimer_top___024root___eval_settle(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtimer_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtimer_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/nullstarfish/桌面/NullStarfish-s-ysyxRepo/Digital_Design/timer/vsrc/timer_top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtimer_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer_top___024root___dump_triggers__stl(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 16> Vtimer_top__ConstPool__TABLE_h4bc5a1dc_0;

VL_ATTR_COLD void Vtimer_top___024root___stl_sequent__TOP__0(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ timer_top__DOT__seg_driver_inst__DOT__seg0;
    timer_top__DOT__seg_driver_inst__DOT__seg0 = 0;
    CData/*7:0*/ timer_top__DOT__seg_driver_inst__DOT__seg1;
    timer_top__DOT__seg_driver_inst__DOT__seg1 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->timer_top__DOT____Vcellinp__cnt_to_99__rst_n 
        = (1U & (~ (IData)(vlSelf->rst)));
    __Vtableidx1 = (0xfU & VL_MODDIV_III(32, (0x7fU 
                                              & vlSelf->timer_top__DOT__timer), (IData)(0xaU)));
    timer_top__DOT__seg_driver_inst__DOT__seg0 = Vtimer_top__ConstPool__TABLE_h4bc5a1dc_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & VL_DIV_III(32, (0x7fU & vlSelf->timer_top__DOT__timer), (IData)(0xaU)));
    timer_top__DOT__seg_driver_inst__DOT__seg1 = Vtimer_top__ConstPool__TABLE_h4bc5a1dc_0
        [__Vtableidx2];
    vlSelf->out = ((((0U == (0xfU & VL_DIV_III(32, 
                                               (0x7fU 
                                                & vlSelf->timer_top__DOT__timer), (IData)(0xaU))))
                      ? 0xffU : (0xffU & (~ (IData)(timer_top__DOT__seg_driver_inst__DOT__seg1)))) 
                    << 8U) | (0xffU & (~ (IData)(timer_top__DOT__seg_driver_inst__DOT__seg0))));
}

VL_ATTR_COLD void Vtimer_top___024root___eval_stl(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtimer_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer_top___024root___dump_triggers__ico(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer_top___024root___dump_triggers__act(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge timer_top.__Vcellinp__cnt_to_99__rst_n)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge timer_top.__Vcellinp__cnt_to_99__rst_n or posedge timer_top.clk_1Hz)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer_top___024root___dump_triggers__nba(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge timer_top.__Vcellinp__cnt_to_99__rst_n)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge timer_top.__Vcellinp__cnt_to_99__rst_n or posedge timer_top.clk_1Hz)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtimer_top___024root___ctor_var_reset(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->pause = 0;
    vlSelf->out = 0;
    vlSelf->timer_top__DOT__clk_1Hz = 0;
    vlSelf->timer_top__DOT__timer = 0;
    vlSelf->timer_top__DOT____Vcellinp__cnt_to_99__rst_n = 0;
    vlSelf->timer_top__DOT__clk_div_inst__DOT__count = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__timer_top__DOT____Vcellinp__cnt_to_99__rst_n = 0;
    vlSelf->__Vtrigrprev__TOP__timer_top__DOT__clk_1Hz = 0;
}
