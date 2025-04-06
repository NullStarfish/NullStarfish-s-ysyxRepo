// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtimer_top.h for the primary calling header

#ifndef VERILATED_VTIMER_TOP___024ROOT_H_
#define VERILATED_VTIMER_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtimer_top__Syms;

class Vtimer_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ timer_top__DOT__clk_1Hz;
    CData/*0:0*/ timer_top__DOT____Vcellinp__cnt_to_99__rst_n;
    VL_IN8(rst,0,0);
    VL_IN8(pause,0,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__timer_top__DOT____Vcellinp__cnt_to_99__rst_n;
    CData/*0:0*/ __Vtrigrprev__TOP__timer_top__DOT__clk_1Hz;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(out,15,0);
    IData/*31:0*/ timer_top__DOT__timer;
    IData/*31:0*/ timer_top__DOT__clk_div_inst__DOT__count;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtimer_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtimer_top___024root(Vtimer_top__Syms* symsp, const char* v__name);
    ~Vtimer_top___024root();
    VL_UNCOPYABLE(Vtimer_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
