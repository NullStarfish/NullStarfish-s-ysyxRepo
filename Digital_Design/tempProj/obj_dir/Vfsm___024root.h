// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfsm.h for the primary calling header

#ifndef VERILATED_VFSM___024ROOT_H_
#define VERILATED_VFSM___024ROOT_H_  // guard

#include "verilated.h"

class Vfsm__Syms;

class Vfsm___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(M,0,0);
    VL_OUT8(state,2,0);
    CData/*2:0*/ fsm__DOT__cur_state;
    CData/*2:0*/ fsm__DOT__next_state;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfsm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfsm___024root(Vfsm__Syms* symsp, const char* v__name);
    ~Vfsm___024root();
    VL_UNCOPYABLE(Vfsm___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
