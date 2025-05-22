// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vencoder__Syms.h"


VL_ATTR_COLD void Vencoder___024root__trace_init_sub__TOP__0(Vencoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"s", false,-1);
    tracep->declBus(c+2,"x", false,-1, 7,0);
    tracep->declBit(c+3,"yex", false,-1);
    tracep->declBus(c+4,"y", false,-1, 2,0);
    tracep->declBus(c+5,"o_seg0", false,-1, 7,0);
    tracep->pushNamePrefix("encoder ");
    tracep->declBit(c+1,"s", false,-1);
    tracep->declBus(c+2,"x", false,-1, 7,0);
    tracep->declBit(c+3,"yex", false,-1);
    tracep->declBus(c+4,"y", false,-1, 2,0);
    tracep->declBus(c+5,"o_seg0", false,-1, 7,0);
    tracep->declBus(c+6,"seg0", false,-1, 7,0);
    tracep->pushNamePrefix("seg_decoder0 ");
    tracep->declBus(c+7,"num", false,-1, 3,0);
    tracep->declBus(c+6,"seg", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vencoder___024root__trace_init_top(Vencoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root__trace_init_top\n"); );
    // Body
    Vencoder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vencoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vencoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vencoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vencoder___024root__trace_register(Vencoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vencoder___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vencoder___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vencoder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vencoder___024root__trace_full_sub_0(Vencoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vencoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root__trace_full_top_0\n"); );
    // Init
    Vencoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencoder___024root*>(voidSelf);
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vencoder___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vencoder___024root__trace_full_sub_0(Vencoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->s));
    bufp->fullCData(oldp+2,(vlSelf->x),8);
    bufp->fullBit(oldp+3,(vlSelf->yex));
    bufp->fullCData(oldp+4,(vlSelf->y),3);
    bufp->fullCData(oldp+5,(vlSelf->o_seg0),8);
    bufp->fullCData(oldp+6,(vlSelf->encoder__DOT__seg0),8);
    bufp->fullCData(oldp+7,(vlSelf->y),4);
}
