// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valutb.h for the primary calling header

#include "verilated.h"

#include "Valutb___024root.h"

VlCoroutine Valutb___024root___eval_initial__TOP__0(Valutb___024root* vlSelf);

void Valutb___024root___eval_initial(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Valutb___024root___eval_initial__TOP__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Valutb___024root___eval_initial__TOP__0(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_initial__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtask_alutb__DOT__check__0__results;
    __Vtask_alutb__DOT__check__0__results = 0;
    CData/*0:0*/ __Vtask_alutb__DOT__check__0__resultof;
    __Vtask_alutb__DOT__check__0__resultof = 0;
    CData/*0:0*/ __Vtask_alutb__DOT__check__0__resultc;
    __Vtask_alutb__DOT__check__0__resultc = 0;
    CData/*0:0*/ __Vtask_alutb__DOT__check__0__resultz;
    __Vtask_alutb__DOT__check__0__resultz = 0;
    CData/*7:0*/ __Vtask_alutb__DOT__check3__1__results;
    __Vtask_alutb__DOT__check3__1__results = 0;
    CData/*0:0*/ __Vtask_alutb__DOT__check3__1__resultof;
    __Vtask_alutb__DOT__check3__1__resultof = 0;
    CData/*0:0*/ __Vtask_alutb__DOT__check3__1__resultz;
    __Vtask_alutb__DOT__check3__1__resultz = 0;
    CData/*7:0*/ __Vtask_alutb__DOT__check2__2__results;
    __Vtask_alutb__DOT__check2__2__results = 0;
    CData/*7:0*/ __Vtask_alutb__DOT__check2__3__results;
    __Vtask_alutb__DOT__check2__3__results = 0;
    CData/*7:0*/ __Vtask_alutb__DOT__check2__4__results;
    __Vtask_alutb__DOT__check2__4__results = 0;
    CData/*7:0*/ __Vtask_alutb__DOT__check2__5__results;
    __Vtask_alutb__DOT__check2__5__results = 0;
    // Body
    vlSelf->alutb__DOT__unnamedblk1__DOT__i = 0xffffff80U;
    while (VL_GTES_III(32, 0x7fU, vlSelf->alutb__DOT__unnamedblk1__DOT__i)) {
        vlSelf->alutb__DOT__unnamedblk1__DOT__j = 0xffffff80U;
        while (VL_GTES_III(32, 0x7fU, vlSelf->alutb__DOT__unnamedblk1__DOT__j)) {
            vlSelf->alutb__DOT__inputa = (0xffU & vlSelf->alutb__DOT__unnamedblk1__DOT__i);
            vlSelf->alutb__DOT__inputb = (0xffU & vlSelf->alutb__DOT__unnamedblk1__DOT__j);
            vlSelf->alutb__DOT__inputaluop = 0U;
            vlSelf->alutb__DOT__k = (0xffU & ((IData)(vlSelf->alutb__DOT__inputa) 
                                              + (IData)(vlSelf->alutb__DOT__inputb)));
            vlSelf->alutb__DOT__resultof = (((1U & 
                                              ((IData)(vlSelf->alutb__DOT__inputa) 
                                               >> 7U)) 
                                             == (1U 
                                                 & ((IData)(vlSelf->alutb__DOT__inputb) 
                                                    >> 7U))) 
                                            & ((1U 
                                                & ((IData)(vlSelf->alutb__DOT__inputa) 
                                                   >> 7U)) 
                                               != (1U 
                                                   & ((IData)(vlSelf->alutb__DOT__k) 
                                                      >> 7U))));
            vlSelf->alutb__DOT__tempresult = (0x1ffU 
                                              & ((IData)(vlSelf->alutb__DOT__inputa) 
                                                 + (IData)(vlSelf->alutb__DOT__inputb)));
            vlSelf->alutb__DOT__resultc = (0xffU < (IData)(vlSelf->alutb__DOT__tempresult));
            vlSelf->alutb__DOT__resultz = (0U == (IData)(vlSelf->alutb__DOT__k));
            co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                               "vsrc/alutb.v", 
                                               80);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_alutb__DOT__check__0__resultz = vlSelf->alutb__DOT__resultz;
            __Vtask_alutb__DOT__check__0__resultc = vlSelf->alutb__DOT__resultc;
            __Vtask_alutb__DOT__check__0__resultof 
                = vlSelf->alutb__DOT__resultof;
            __Vtask_alutb__DOT__check__0__results = vlSelf->alutb__DOT__k;
            if (VL_UNLIKELY(((IData)(vlSelf->alutb__DOT__outputs) 
                             != (IData)(__Vtask_alutb__DOT__check__0__results)))) {
                VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x, get %x\n",
                          8,vlSelf->alutb__DOT__inputa,
                          8,(IData)(vlSelf->alutb__DOT__inputb),
                          3,vlSelf->alutb__DOT__inputaluop,
                          8,(IData)(__Vtask_alutb__DOT__check__0__results),
                          8,vlSelf->alutb__DOT__outputs);
            }
            if (VL_UNLIKELY(((((IData)(vlSelf->alutb__DOT__of) 
                               != (IData)(__Vtask_alutb__DOT__check__0__resultof)) 
                              | ((IData)(vlSelf->alutb__DOT__c) 
                                 != (IData)(__Vtask_alutb__DOT__check__0__resultc))) 
                             | ((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult))))) 
                                != (IData)(__Vtask_alutb__DOT__check__0__resultz))))) {
                VL_WRITEF("Error in flags: Overflow=%b, Carry=%b, Zero=%b (expected: Overflow=%b, Carry=%b, Zero=%b)\nx=%b,y=%b,ctrl=%b,s should be %x, get %x\n",
                          1,vlSelf->alutb__DOT__of,
                          1,(IData)(vlSelf->alutb__DOT__c),
                          1,(1U & (~ (IData)((0U != (IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult))))),
                          1,(IData)(__Vtask_alutb__DOT__check__0__resultof),
                          1,__Vtask_alutb__DOT__check__0__resultc,
                          1,(IData)(__Vtask_alutb__DOT__check__0__resultz),
                          8,vlSelf->alutb__DOT__inputa,
                          8,(IData)(vlSelf->alutb__DOT__inputb),
                          3,vlSelf->alutb__DOT__inputaluop,
                          8,(IData)(__Vtask_alutb__DOT__check__0__results),
                          8,vlSelf->alutb__DOT__outputs);
            }
            vlSelf->alutb__DOT__inputaluop = 1U;
            vlSelf->alutb__DOT__k = (0xffU & ((IData)(vlSelf->alutb__DOT__inputa) 
                                              - (IData)(vlSelf->alutb__DOT__inputb)));
            vlSelf->alutb__DOT__resultof = (((1U & 
                                              ((IData)(vlSelf->alutb__DOT__inputa) 
                                               >> 7U)) 
                                             == (1U 
                                                 & ((IData)(vlSelf->alutb__DOT__inputb) 
                                                    >> 7U))) 
                                            & ((1U 
                                                & ((IData)(vlSelf->alutb__DOT__inputa) 
                                                   >> 7U)) 
                                               != (1U 
                                                   & ((IData)(vlSelf->alutb__DOT__k) 
                                                      >> 7U))));
            vlSelf->alutb__DOT__resultz = (0U == (IData)(vlSelf->alutb__DOT__k));
            co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                               "vsrc/alutb.v", 
                                               87);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_alutb__DOT__check3__1__resultz 
                = vlSelf->alutb__DOT__resultz;
            __Vtask_alutb__DOT__check3__1__resultof 
                = vlSelf->alutb__DOT__resultof;
            __Vtask_alutb__DOT__check3__1__results 
                = vlSelf->alutb__DOT__k;
            if (VL_UNLIKELY(((IData)(vlSelf->alutb__DOT__outputs) 
                             != (IData)(__Vtask_alutb__DOT__check3__1__results)))) {
                VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x, get %x\n",
                          8,vlSelf->alutb__DOT__inputa,
                          8,(IData)(vlSelf->alutb__DOT__inputb),
                          3,vlSelf->alutb__DOT__inputaluop,
                          8,(IData)(__Vtask_alutb__DOT__check3__1__results),
                          8,vlSelf->alutb__DOT__outputs);
            }
            if (VL_UNLIKELY((((IData)(vlSelf->alutb__DOT__of) 
                              != (IData)(__Vtask_alutb__DOT__check3__1__resultof)) 
                             | ((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult))))) 
                                != (IData)(__Vtask_alutb__DOT__check3__1__resultz))))) {
                VL_WRITEF("Error in flags: Overflow=%b, Zero=%b (expected: Overflow=%b,  Zero=%b)\nx=%b,y=%b,ctrl=%b,s should be %x, get %x\n",
                          1,vlSelf->alutb__DOT__of,
                          1,(1U & (~ (IData)((0U != (IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult))))),
                          1,(IData)(__Vtask_alutb__DOT__check3__1__resultof),
                          1,__Vtask_alutb__DOT__check3__1__resultz,
                          8,(IData)(vlSelf->alutb__DOT__inputa),
                          8,vlSelf->alutb__DOT__inputb,
                          3,(IData)(vlSelf->alutb__DOT__inputaluop),
                          8,__Vtask_alutb__DOT__check3__1__results,
                          8,(IData)(vlSelf->alutb__DOT__outputs));
            }
            vlSelf->alutb__DOT__inputaluop = 2U;
            vlSelf->alutb__DOT__k = (0xffU & (~ (IData)(vlSelf->alutb__DOT__inputa)));
            vlSelf->alutb__DOT__resultof = 0U;
            vlSelf->alutb__DOT__resultc = 0U;
            vlSelf->alutb__DOT__resultz = (0U == (IData)(vlSelf->alutb__DOT__k));
            co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                               "vsrc/alutb.v", 
                                               95);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_alutb__DOT__check2__2__results 
                = vlSelf->alutb__DOT__k;
            if (VL_UNLIKELY(((IData)(vlSelf->alutb__DOT__outputs) 
                             != (IData)(__Vtask_alutb__DOT__check2__2__results)))) {
                VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x, get %x\n",
                          8,vlSelf->alutb__DOT__inputa,
                          8,(IData)(vlSelf->alutb__DOT__inputb),
                          3,vlSelf->alutb__DOT__inputaluop,
                          8,(IData)(__Vtask_alutb__DOT__check2__2__results),
                          8,vlSelf->alutb__DOT__outputs);
            }
            vlSelf->alutb__DOT__inputaluop = 3U;
            vlSelf->alutb__DOT__k = ((IData)(vlSelf->alutb__DOT__inputa) 
                                     & (IData)(vlSelf->alutb__DOT__inputb));
            vlSelf->alutb__DOT__resultof = 0U;
            vlSelf->alutb__DOT__resultc = 0U;
            vlSelf->alutb__DOT__resultz = (0U == (IData)(vlSelf->alutb__DOT__k));
            co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                               "vsrc/alutb.v", 
                                               103);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_alutb__DOT__check2__3__results 
                = vlSelf->alutb__DOT__k;
            if (VL_UNLIKELY(((IData)(vlSelf->alutb__DOT__outputs) 
                             != (IData)(__Vtask_alutb__DOT__check2__3__results)))) {
                VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x, get %x\n",
                          8,vlSelf->alutb__DOT__inputa,
                          8,(IData)(vlSelf->alutb__DOT__inputb),
                          3,vlSelf->alutb__DOT__inputaluop,
                          8,(IData)(__Vtask_alutb__DOT__check2__3__results),
                          8,vlSelf->alutb__DOT__outputs);
            }
            vlSelf->alutb__DOT__inputaluop = 4U;
            vlSelf->alutb__DOT__k = ((IData)(vlSelf->alutb__DOT__inputa) 
                                     | (IData)(vlSelf->alutb__DOT__inputb));
            vlSelf->alutb__DOT__resultof = 0U;
            vlSelf->alutb__DOT__resultc = 0U;
            vlSelf->alutb__DOT__resultz = (0U == (IData)(vlSelf->alutb__DOT__k));
            co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                               "vsrc/alutb.v", 
                                               111);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_alutb__DOT__check2__4__results 
                = vlSelf->alutb__DOT__k;
            if (VL_UNLIKELY(((IData)(vlSelf->alutb__DOT__outputs) 
                             != (IData)(__Vtask_alutb__DOT__check2__4__results)))) {
                VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x, get %x\n",
                          8,vlSelf->alutb__DOT__inputa,
                          8,(IData)(vlSelf->alutb__DOT__inputb),
                          3,vlSelf->alutb__DOT__inputaluop,
                          8,(IData)(__Vtask_alutb__DOT__check2__4__results),
                          8,vlSelf->alutb__DOT__outputs);
            }
            vlSelf->alutb__DOT__inputaluop = 5U;
            vlSelf->alutb__DOT__k = ((IData)(vlSelf->alutb__DOT__inputa) 
                                     ^ (IData)(vlSelf->alutb__DOT__inputb));
            vlSelf->alutb__DOT__resultof = 0U;
            vlSelf->alutb__DOT__resultc = 0U;
            vlSelf->alutb__DOT__resultz = (0U == (IData)(vlSelf->alutb__DOT__k));
            co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                               "vsrc/alutb.v", 
                                               119);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_alutb__DOT__check2__5__results 
                = vlSelf->alutb__DOT__k;
            if (VL_UNLIKELY(((IData)(vlSelf->alutb__DOT__outputs) 
                             != (IData)(__Vtask_alutb__DOT__check2__5__results)))) {
                VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x, get %x\n",
                          8,vlSelf->alutb__DOT__inputa,
                          8,(IData)(vlSelf->alutb__DOT__inputb),
                          3,vlSelf->alutb__DOT__inputaluop,
                          8,(IData)(__Vtask_alutb__DOT__check2__5__results),
                          8,vlSelf->alutb__DOT__outputs);
            }
            vlSelf->alutb__DOT__unnamedblk1__DOT__j 
                = ((IData)(1U) + vlSelf->alutb__DOT__unnamedblk1__DOT__j);
        }
        vlSelf->alutb__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                                   + vlSelf->alutb__DOT__unnamedblk1__DOT__i);
    }
    VL_FINISH_MT("vsrc/alutb.v", 121, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Valutb___024root___act_sequent__TOP__0(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->alutb__DOT__alu_uut__DOT__AdderCtrl = (
                                                   (0U 
                                                    != (IData)(vlSelf->alutb__DOT__inputaluop)) 
                                                   & ((1U 
                                                       == (IData)(vlSelf->alutb__DOT__inputaluop)) 
                                                      | (6U 
                                                         == (IData)(vlSelf->alutb__DOT__inputaluop))));
    vlSelf->alutb__DOT__alu_uut__DOT__selAdder__DOT__t_Cin 
        = (0xffU & (((- (IData)((IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderCtrl))) 
                     ^ (IData)(vlSelf->alutb__DOT__inputb)) 
                    + (IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderCtrl)));
    vlSelf->alutb__DOT__c = (1U & (((IData)(vlSelf->alutb__DOT__inputa) 
                                    + (IData)(vlSelf->alutb__DOT__alu_uut__DOT__selAdder__DOT__t_Cin)) 
                                   >> 8U));
    vlSelf->alutb__DOT__alu_uut__DOT__AdderResult = 
        (0xffU & ((IData)(vlSelf->alutb__DOT__inputa) 
                  + (IData)(vlSelf->alutb__DOT__alu_uut__DOT__selAdder__DOT__t_Cin)));
    vlSelf->alutb__DOT__of = (((1U & ((IData)(vlSelf->alutb__DOT__inputa) 
                                      >> 7U)) == (1U 
                                                  & ((IData)(vlSelf->alutb__DOT__inputb) 
                                                     >> 7U))) 
                              & ((1U & ((IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult) 
                                        >> 7U)) != 
                                 (1U & ((IData)(vlSelf->alutb__DOT__inputa) 
                                        >> 7U))));
    vlSelf->alutb__DOT__outputs = (0xffU & ((4U & (IData)(vlSelf->alutb__DOT__inputaluop))
                                             ? ((2U 
                                                 & (IData)(vlSelf->alutb__DOT__inputaluop))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->alutb__DOT__inputaluop))
                                                  ? 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult)))))
                                                  : 
                                                 (1U 
                                                  & (((IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult) 
                                                      >> 7U) 
                                                     ^ 
                                                     (((1U 
                                                        & ((IData)(vlSelf->alutb__DOT__inputa) 
                                                           >> 7U)) 
                                                       == 
                                                       (1U 
                                                        & ((IData)(vlSelf->alutb__DOT__inputb) 
                                                           >> 7U))) 
                                                      & ((1U 
                                                          & ((IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult) 
                                                             >> 7U)) 
                                                         != 
                                                         (1U 
                                                          & ((IData)(vlSelf->alutb__DOT__inputa) 
                                                             >> 7U)))))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->alutb__DOT__inputaluop))
                                                  ? 
                                                 ((IData)(vlSelf->alutb__DOT__inputa) 
                                                  ^ (IData)(vlSelf->alutb__DOT__inputb))
                                                  : 
                                                 ((IData)(vlSelf->alutb__DOT__inputa) 
                                                  | (IData)(vlSelf->alutb__DOT__inputb))))
                                             : ((2U 
                                                 & (IData)(vlSelf->alutb__DOT__inputaluop))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->alutb__DOT__inputaluop))
                                                  ? 
                                                 ((IData)(vlSelf->alutb__DOT__inputa) 
                                                  & (IData)(vlSelf->alutb__DOT__inputb))
                                                  : 
                                                 (~ (IData)(vlSelf->alutb__DOT__inputa)))
                                                 : (IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult))));
}

void Valutb___024root___eval_act(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        Valutb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Valutb___024root___eval_nba(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Valutb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Valutb___024root___eval_triggers__act(Valutb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valutb___024root___dump_triggers__act(Valutb___024root* vlSelf);
#endif  // VL_DEBUG
void Valutb___024root___timing_resume(Valutb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valutb___024root___dump_triggers__nba(Valutb___024root* vlSelf);
#endif  // VL_DEBUG

void Valutb___024root___eval(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval\n"); );
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
            Valutb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Valutb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/alutb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Valutb___024root___timing_resume(vlSelf);
                Valutb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Valutb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/alutb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Valutb___024root___eval_nba(vlSelf);
        }
    }
}

void Valutb___024root___timing_resume(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Valutb___024root___eval_debug_assertions(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
