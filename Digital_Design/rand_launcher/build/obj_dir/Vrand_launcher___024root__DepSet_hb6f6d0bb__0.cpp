// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrand_launcher.h for the primary calling header

#include "verilated.h"

#include "Vrand_launcher___024root.h"

void Vrand_launcher___024root___eval_act(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*7:0*/, 16> Vrand_launcher__ConstPool__TABLE_h33195002_0;

VL_INLINE_OPT void Vrand_launcher___024root___nba_sequent__TOP__0(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ rand_launcher__DOT__seg_driver__DOT__seg0;
    rand_launcher__DOT__seg_driver__DOT__seg0 = 0;
    CData/*7:0*/ rand_launcher__DOT__seg_driver__DOT__seg1;
    rand_launcher__DOT__seg_driver__DOT__seg1 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vdly__rand_launcher__DOT__num;
    __Vdly__rand_launcher__DOT__num = 0;
    // Body
    __Vdly__rand_launcher__DOT__num = vlSelf->rand_launcher__DOT__num;
    __Vdly__rand_launcher__DOT__num = ((IData)(vlSelf->rst)
                                        ? 0U : (((IData)(vlSelf->rand_launcher__DOT__In) 
                                                 << 7U) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelf->rand_launcher__DOT__num) 
                                                      >> 1U))));
    vlSelf->rand_launcher__DOT__In = (1U & ((~ (IData)(vlSelf->rst)) 
                                            & ((0U 
                                                == (IData)(vlSelf->rand_launcher__DOT__num)) 
                                               | (1U 
                                                  & VL_REDXOR_8(
                                                                (0x1dU 
                                                                 & (IData)(vlSelf->rand_launcher__DOT__num)))))));
    vlSelf->rand_launcher__DOT__num = __Vdly__rand_launcher__DOT__num;
    __Vtableidx1 = (0xfU & (IData)(vlSelf->rand_launcher__DOT__num));
    rand_launcher__DOT__seg_driver__DOT__seg0 = Vrand_launcher__ConstPool__TABLE_h33195002_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->rand_launcher__DOT__num) 
                            >> 4U));
    rand_launcher__DOT__seg_driver__DOT__seg1 = Vrand_launcher__ConstPool__TABLE_h33195002_0
        [__Vtableidx2];
    vlSelf->o_seg0 = (0xffU & (~ (IData)(rand_launcher__DOT__seg_driver__DOT__seg0)));
    vlSelf->o_seg1 = (0xffU & (~ (IData)(rand_launcher__DOT__seg_driver__DOT__seg1)));
}

void Vrand_launcher___024root___eval_nba(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrand_launcher___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vrand_launcher___024root___eval_triggers__act(Vrand_launcher___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrand_launcher___024root___dump_triggers__act(Vrand_launcher___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrand_launcher___024root___dump_triggers__nba(Vrand_launcher___024root* vlSelf);
#endif  // VL_DEBUG

void Vrand_launcher___024root___eval(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vrand_launcher___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vrand_launcher___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/nullstarfish/Desktop/NullStarfish-s-ysyxRepo/Digital_Design/rand_launcher/vsrc/rand_launcher.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vrand_launcher___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vrand_launcher___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/nullstarfish/Desktop/NullStarfish-s-ysyxRepo/Digital_Design/rand_launcher/vsrc/rand_launcher.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vrand_launcher___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vrand_launcher___024root___eval_debug_assertions(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->__pinNumber5 & 0xfeU))) {
        Verilated::overWidthError("__pinNumber5");}
}
#endif  // VL_DEBUG
