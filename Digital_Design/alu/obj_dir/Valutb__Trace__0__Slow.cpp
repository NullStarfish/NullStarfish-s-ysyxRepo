// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valutb__Syms.h"


VL_ATTR_COLD void Valutb___024root__trace_init_sub__TOP__0(Valutb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("alutb ");
    tracep->declBus(c+1,"inputa", false,-1, 7,0);
    tracep->declBus(c+2,"inputb", false,-1, 7,0);
    tracep->declBus(c+3,"inputaluop", false,-1, 2,0);
    tracep->declBus(c+4,"k", false,-1, 7,0);
    tracep->declBit(c+5,"resultof", false,-1);
    tracep->declBit(c+6,"resultc", false,-1);
    tracep->declBit(c+7,"resultz", false,-1);
    tracep->declBus(c+11,"outputs", false,-1, 7,0);
    tracep->declBit(c+12,"of", false,-1);
    tracep->declBit(c+13,"c", false,-1);
    tracep->declBit(c+14,"z", false,-1);
    tracep->declBus(c+8,"tempresult", false,-1, 8,0);
    tracep->pushNamePrefix("alu_uut ");
    tracep->declBus(c+19,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"A", false,-1, 7,0);
    tracep->declBus(c+2,"B", false,-1, 7,0);
    tracep->declBus(c+3,"Mode", false,-1, 2,0);
    tracep->declBus(c+11,"Results", false,-1, 7,0);
    tracep->declBit(c+14,"zero", false,-1);
    tracep->declBit(c+12,"Overflow", false,-1);
    tracep->declBit(c+13,"Carry", false,-1);
    tracep->declBit(c+15,"AdderCtrl", false,-1);
    tracep->declBus(c+16,"AdderResult", false,-1, 7,0);
    tracep->declBit(c+17,"less", false,-1);
    tracep->declBit(c+14,"equal", false,-1);
    tracep->pushNamePrefix("selAdder ");
    tracep->declBus(c+19,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"A", false,-1, 7,0);
    tracep->declBus(c+2,"B", false,-1, 7,0);
    tracep->declBit(c+15,"Cin", false,-1);
    tracep->declBit(c+13,"Carry", false,-1);
    tracep->declBit(c+14,"zero", false,-1);
    tracep->declBit(c+12,"Overflow", false,-1);
    tracep->declBus(c+16,"Result", false,-1, 7,0);
    tracep->declBus(c+18,"t_Cin", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+9,"i", false,-1, 31,0);
    tracep->declBus(c+10,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Valutb___024root__trace_init_top(Valutb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root__trace_init_top\n"); );
    // Body
    Valutb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valutb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valutb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valutb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valutb___024root__trace_register(Valutb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Valutb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Valutb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Valutb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valutb___024root__trace_full_sub_0(Valutb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valutb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root__trace_full_top_0\n"); );
    // Init
    Valutb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valutb___024root*>(voidSelf);
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valutb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valutb___024root__trace_full_sub_0(Valutb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->alutb__DOT__inputa),8);
    bufp->fullCData(oldp+2,(vlSelf->alutb__DOT__inputb),8);
    bufp->fullCData(oldp+3,(vlSelf->alutb__DOT__inputaluop),3);
    bufp->fullCData(oldp+4,(vlSelf->alutb__DOT__k),8);
    bufp->fullBit(oldp+5,(vlSelf->alutb__DOT__resultof));
    bufp->fullBit(oldp+6,(vlSelf->alutb__DOT__resultc));
    bufp->fullBit(oldp+7,(vlSelf->alutb__DOT__resultz));
    bufp->fullSData(oldp+8,(vlSelf->alutb__DOT__tempresult),9);
    bufp->fullIData(oldp+9,(vlSelf->alutb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+10,(vlSelf->alutb__DOT__unnamedblk1__DOT__j),32);
    bufp->fullCData(oldp+11,((0xffU & ((4U & (IData)(vlSelf->alutb__DOT__inputaluop))
                                        ? ((2U & (IData)(vlSelf->alutb__DOT__inputaluop))
                                            ? ((1U 
                                                & (IData)(vlSelf->alutb__DOT__inputaluop))
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
                                            : ((1U 
                                                & (IData)(vlSelf->alutb__DOT__inputaluop))
                                                ? ((IData)(vlSelf->alutb__DOT__inputa) 
                                                   ^ (IData)(vlSelf->alutb__DOT__inputb))
                                                : ((IData)(vlSelf->alutb__DOT__inputa) 
                                                   | (IData)(vlSelf->alutb__DOT__inputb))))
                                        : ((2U & (IData)(vlSelf->alutb__DOT__inputaluop))
                                            ? ((1U 
                                                & (IData)(vlSelf->alutb__DOT__inputaluop))
                                                ? ((IData)(vlSelf->alutb__DOT__inputa) 
                                                   & (IData)(vlSelf->alutb__DOT__inputb))
                                                : (~ (IData)(vlSelf->alutb__DOT__inputa)))
                                            : (IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult))))),8);
    bufp->fullBit(oldp+12,((((1U & ((IData)(vlSelf->alutb__DOT__inputa) 
                                    >> 7U)) == (1U 
                                                & ((IData)(vlSelf->alutb__DOT__inputb) 
                                                   >> 7U))) 
                            & ((1U & ((IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult) 
                                      >> 7U)) != (1U 
                                                  & ((IData)(vlSelf->alutb__DOT__inputa) 
                                                     >> 7U))))));
    bufp->fullBit(oldp+13,((1U & (((IData)(vlSelf->alutb__DOT__inputa) 
                                   + (IData)(vlSelf->alutb__DOT__alu_uut__DOT__selAdder__DOT__t_Cin)) 
                                  >> 8U))));
    bufp->fullBit(oldp+14,((1U & (~ (IData)((0U != (IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult)))))));
    bufp->fullBit(oldp+15,(vlSelf->alutb__DOT__alu_uut__DOT__AdderCtrl));
    bufp->fullCData(oldp+16,(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult),8);
    bufp->fullBit(oldp+17,((1U & (((IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult) 
                                   >> 7U) ^ (((1U & 
                                               ((IData)(vlSelf->alutb__DOT__inputa) 
                                                >> 7U)) 
                                              == (1U 
                                                  & ((IData)(vlSelf->alutb__DOT__inputb) 
                                                     >> 7U))) 
                                             & ((1U 
                                                 & ((IData)(vlSelf->alutb__DOT__alu_uut__DOT__AdderResult) 
                                                    >> 7U)) 
                                                != 
                                                (1U 
                                                 & ((IData)(vlSelf->alutb__DOT__inputa) 
                                                    >> 7U))))))));
    bufp->fullCData(oldp+18,(vlSelf->alutb__DOT__alu_uut__DOT__selAdder__DOT__t_Cin),8);
    bufp->fullIData(oldp+19,(8U),32);
}
