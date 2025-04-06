// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valutb__Syms.h"


void Valutb___024root__trace_chg_sub_0(Valutb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valutb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root__trace_chg_top_0\n"); );
    // Init
    Valutb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valutb___024root*>(voidSelf);
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valutb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Valutb___024root__trace_chg_sub_0(Valutb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->alutb__DOT__inputa),8);
        bufp->chgCData(oldp+1,(vlSelf->alutb__DOT__inputb),8);
        bufp->chgCData(oldp+2,(vlSelf->alutb__DOT__inputaluop),3);
        bufp->chgCData(oldp+3,(vlSelf->alutb__DOT__k),8);
        bufp->chgBit(oldp+4,(vlSelf->alutb__DOT__resultof));
        bufp->chgBit(oldp+5,(vlSelf->alutb__DOT__resultc));
        bufp->chgBit(oldp+6,(vlSelf->alutb__DOT__resultz));
        bufp->chgSData(oldp+7,(vlSelf->alutb__DOT__tempresult),9);
        bufp->chgIData(oldp+8,(vlSelf->alutb__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+9,(vlSelf->alutb__DOT__unnamedblk1__DOT__j),32);
    }
    bufp->chgCData(oldp+10,((0xffU & ((4U & (IData)(vlSelf->alutb__DOT__inputaluop))
                                       ? ((2U & (IData)(vlSelf->alutb__DOT__inputaluop))
                                           ? ((1U & (IData)(vlSelf->alutb__DOT__inputaluop))
                                               ? (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult)))))
                                               : (1U 
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
                                           : ((1U & (IData)(vlSelf->alutb__DOT__inputaluop))
                                               ? ((IData)(vlSelf->alutb__DOT__inputa) 
                                                  ^ (IData)(vlSelf->alutb__DOT__inputb))
                                               : ((IData)(vlSelf->alutb__DOT__inputa) 
                                                  | (IData)(vlSelf->alutb__DOT__inputb))))
                                       : ((2U & (IData)(vlSelf->alutb__DOT__inputaluop))
                                           ? ((1U & (IData)(vlSelf->alutb__DOT__inputaluop))
                                               ? ((IData)(vlSelf->alutb__DOT__inputa) 
                                                  & (IData)(vlSelf->alutb__DOT__inputb))
                                               : (~ (IData)(vlSelf->alutb__DOT__inputa)))
                                           : (IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult))))),8);
    bufp->chgBit(oldp+11,((((1U & ((IData)(vlSelf->alutb__DOT__inputa) 
                                   >> 7U)) == (1U & 
                                               ((IData)(vlSelf->alutb__DOT__inputb) 
                                                >> 7U))) 
                           & ((1U & ((IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult) 
                                     >> 7U)) != (1U 
                                                 & ((IData)(vlSelf->alutb__DOT__inputa) 
                                                    >> 7U))))));
    bufp->chgBit(oldp+12,((1U & (((IData)(vlSelf->alutb__DOT__inputa) 
                                  + (IData)(vlSelf->alutb__DOT__alu_uut__DOT__selAdder__DOT__t_Cin)) 
                                 >> 8U))));
    bufp->chgBit(oldp+13,((1U & (~ (IData)((0U != (IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult)))))));
    bufp->chgBit(oldp+14,(vlSelf->alutb__DOT__alu_uut__DOT__AdderCtrl));
    bufp->chgCData(oldp+15,(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult),8);
    bufp->chgBit(oldp+16,((1U & (((IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult) 
                                  >> 7U) ^ (((1U & 
                                              ((IData)(vlSelf->alutb__DOT__inputa) 
                                               >> 7U)) 
                                             == (1U 
                                                 & ((IData)(vlSelf->alutb__DOT__inputb) 
                                                    >> 7U))) 
                                            & ((1U 
                                                & ((IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult) 
                                                   >> 7U)) 
                                               != (1U 
                                                   & ((IData)(vlSelf->alutb__DOT__inputa) 
                                                      >> 7U))))))));
    bufp->chgCData(oldp+17,(vlSelf->alutb__DOT__alu_uut__DOT__selAdder__DOT__t_Cin),8);
}

void Valutb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root__trace_cleanup\n"); );
    // Init
    Valutb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valutb___024root*>(voidSelf);
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
