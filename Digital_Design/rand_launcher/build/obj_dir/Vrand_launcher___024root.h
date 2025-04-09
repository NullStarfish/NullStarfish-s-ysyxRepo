// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrand_launcher.h for the primary calling header

#ifndef VERILATED_VRAND_LAUNCHER___024ROOT_H_
#define VERILATED_VRAND_LAUNCHER___024ROOT_H_  // guard

#include "verilated.h"

class Vrand_launcher__Syms;

class Vrand_launcher___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(o_seg0,7,0);
    VL_OUT8(o_seg1,7,0);
    VL_IN8(__pinNumber5,0,0);
    CData/*0:0*/ rand_launcher__DOT__In;
    CData/*7:0*/ rand_launcher__DOT__num;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrand_launcher__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrand_launcher___024root(Vrand_launcher__Syms* symsp, const char* v__name);
    ~Vrand_launcher___024root();
    VL_UNCOPYABLE(Vrand_launcher___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
