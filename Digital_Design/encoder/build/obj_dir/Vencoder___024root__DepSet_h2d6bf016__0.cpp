// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder.h for the primary calling header

#include "verilated.h"

#include "Vencoder___024root.h"

extern const VlUnpacked<CData/*0:0*/, 512> Vencoder__ConstPool__TABLE_h2ab8c13b_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vencoder__ConstPool__TABLE_h934a15ab_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vencoder__ConstPool__TABLE_h0d68042a_0;

VL_INLINE_OPT void Vencoder___024root___ico_sequent__TOP__0(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->x) << 1U) | (IData)(vlSelf->s));
    vlSelf->ys = Vencoder__ConstPool__TABLE_h2ab8c13b_0
        [__Vtableidx1];
    vlSelf->yex = Vencoder__ConstPool__TABLE_h934a15ab_0
        [__Vtableidx1];
    vlSelf->y = Vencoder__ConstPool__TABLE_h0d68042a_0
        [__Vtableidx1];
}

void Vencoder___024root___eval_ico(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vencoder___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vencoder___024root___eval_act(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_act\n"); );
}

void Vencoder___024root___eval_nba(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_nba\n"); );
}

void Vencoder___024root___eval_triggers__ico(Vencoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder___024root___dump_triggers__ico(Vencoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vencoder___024root___eval_triggers__act(Vencoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder___024root___dump_triggers__act(Vencoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder___024root___dump_triggers__nba(Vencoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vencoder___024root___eval(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vencoder___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vencoder___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/nullstarfish/桌面/NullStarfish-s-ysyxRepo/Digital_Design/encoder/vsrc/encoder.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vencoder___024root___eval_ico(vlSelf);
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
            Vencoder___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vencoder___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/nullstarfish/桌面/NullStarfish-s-ysyxRepo/Digital_Design/encoder/vsrc/encoder.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vencoder___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vencoder___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/nullstarfish/桌面/NullStarfish-s-ysyxRepo/Digital_Design/encoder/vsrc/encoder.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vencoder___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vencoder___024root___eval_debug_assertions(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->s & 0xfeU))) {
        Verilated::overWidthError("s");}
}
#endif  // VL_DEBUG
