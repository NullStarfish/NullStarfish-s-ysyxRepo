// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrand_launcher.h for the primary calling header

#include "verilated.h"

#include "Vrand_launcher___024root.h"

VL_ATTR_COLD void Vrand_launcher___024root___eval_static(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vrand_launcher___024root___eval_initial(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vrand_launcher___024root___eval_final(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vrand_launcher___024root___eval_triggers__stl(Vrand_launcher___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrand_launcher___024root___dump_triggers__stl(Vrand_launcher___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vrand_launcher___024root___eval_stl(Vrand_launcher___024root* vlSelf);

VL_ATTR_COLD void Vrand_launcher___024root___eval_settle(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vrand_launcher___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vrand_launcher___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/nullstarfish/Desktop/NullStarfish-s-ysyxRepo/Digital_Design/rand_launcher/vsrc/rand_launcher.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vrand_launcher___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrand_launcher___024root___dump_triggers__stl(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 16> Vrand_launcher__ConstPool__TABLE_h33195002_0;

VL_ATTR_COLD void Vrand_launcher___024root___stl_sequent__TOP__0(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ rand_launcher__DOT__seg_driver__DOT__seg0;
    rand_launcher__DOT__seg_driver__DOT__seg0 = 0;
    CData/*7:0*/ rand_launcher__DOT__seg_driver__DOT__seg1;
    rand_launcher__DOT__seg_driver__DOT__seg1 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
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

VL_ATTR_COLD void Vrand_launcher___024root___eval_stl(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vrand_launcher___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrand_launcher___024root___dump_triggers__act(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrand_launcher___024root___dump_triggers__nba(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrand_launcher___024root___ctor_var_reset(Vrand_launcher___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrand_launcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrand_launcher___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->o_seg0 = 0;
    vlSelf->o_seg1 = 0;
    vlSelf->__pinNumber5 = 0;
    vlSelf->rand_launcher__DOT__In = 0;
    vlSelf->rand_launcher__DOT__num = 0;
    vlSelf->__Vdly__rand_launcher__DOT__num = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__rst = 0;
}
