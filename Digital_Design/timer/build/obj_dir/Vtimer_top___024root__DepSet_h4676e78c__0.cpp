// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer_top.h for the primary calling header

#include "verilated.h"

#include "Vtimer_top___024root.h"

VL_INLINE_OPT void Vtimer_top___024root___ico_sequent__TOP__0(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->timer_top__DOT____Vcellinp__cnt_to_99__rst_n 
        = (1U & (~ (IData)(vlSelf->rst)));
}

void Vtimer_top___024root___eval_ico(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtimer_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtimer_top___024root___eval_act(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtimer_top___024root___nba_sequent__TOP__0(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__timer_top__DOT__clk_div_inst__DOT__count;
    __Vdly__timer_top__DOT__clk_div_inst__DOT__count = 0;
    CData/*0:0*/ __Vdly__timer_top__DOT__clk_1Hz;
    __Vdly__timer_top__DOT__clk_1Hz = 0;
    // Body
    __Vdly__timer_top__DOT__clk_1Hz = vlSelf->timer_top__DOT__clk_1Hz;
    __Vdly__timer_top__DOT__clk_div_inst__DOT__count 
        = vlSelf->timer_top__DOT__clk_div_inst__DOT__count;
    if (vlSelf->timer_top__DOT____Vcellinp__cnt_to_99__rst_n) {
        if (vlSelf->pause) {
            __Vdly__timer_top__DOT__clk_div_inst__DOT__count 
                = vlSelf->timer_top__DOT__clk_div_inst__DOT__count;
            __Vdly__timer_top__DOT__clk_1Hz = vlSelf->timer_top__DOT__clk_1Hz;
        } else if ((0x26259fU == vlSelf->timer_top__DOT__clk_div_inst__DOT__count)) {
            __Vdly__timer_top__DOT__clk_div_inst__DOT__count = 0U;
            __Vdly__timer_top__DOT__clk_1Hz = (1U & 
                                               (~ (IData)(vlSelf->timer_top__DOT__clk_1Hz)));
        } else {
            __Vdly__timer_top__DOT__clk_div_inst__DOT__count 
                = ((IData)(1U) + vlSelf->timer_top__DOT__clk_div_inst__DOT__count);
        }
    } else {
        __Vdly__timer_top__DOT__clk_div_inst__DOT__count = 0U;
        __Vdly__timer_top__DOT__clk_1Hz = 0U;
    }
    vlSelf->timer_top__DOT__clk_div_inst__DOT__count 
        = __Vdly__timer_top__DOT__clk_div_inst__DOT__count;
    vlSelf->timer_top__DOT__clk_1Hz = __Vdly__timer_top__DOT__clk_1Hz;
}

extern const VlUnpacked<CData/*7:0*/, 16> Vtimer_top__ConstPool__TABLE_h4bc5a1dc_0;

VL_INLINE_OPT void Vtimer_top___024root___nba_sequent__TOP__1(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___nba_sequent__TOP__1\n"); );
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
    vlSelf->timer_top__DOT__timer = ((IData)(vlSelf->timer_top__DOT____Vcellinp__cnt_to_99__rst_n)
                                      ? ((IData)(vlSelf->pause)
                                          ? vlSelf->timer_top__DOT__timer
                                          : ((0x63U 
                                              == vlSelf->timer_top__DOT__timer)
                                              ? 0U : 
                                             ((IData)(1U) 
                                              + vlSelf->timer_top__DOT__timer)))
                                      : 0U);
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

void Vtimer_top___024root___eval_nba(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtimer_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtimer_top___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vtimer_top___024root___eval_triggers__ico(Vtimer_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer_top___024root___dump_triggers__ico(Vtimer_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtimer_top___024root___eval_triggers__act(Vtimer_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer_top___024root___dump_triggers__act(Vtimer_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer_top___024root___dump_triggers__nba(Vtimer_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtimer_top___024root___eval(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtimer_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtimer_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/nullstarfish/Desktop/NullStarfish-s-ysyxRepo/Digital_Design/timer/vsrc/timer_top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtimer_top___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtimer_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtimer_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/nullstarfish/Desktop/NullStarfish-s-ysyxRepo/Digital_Design/timer/vsrc/timer_top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtimer_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtimer_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/nullstarfish/Desktop/NullStarfish-s-ysyxRepo/Digital_Design/timer/vsrc/timer_top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtimer_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtimer_top___024root___eval_debug_assertions(Vtimer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->pause & 0xfeU))) {
        Verilated::overWidthError("pause");}
}
#endif  // VL_DEBUG
