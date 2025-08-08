// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VtestV.h for the primary calling header

#ifndef VERILATED_VTESTV___024ROOT_H_
#define VERILATED_VTESTV___024ROOT_H_  // guard

#include "verilated.h"

class VtestV__Syms;

class VtestV___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VtestV__Syms* const vlSymsp;

    // CONSTRUCTORS
    VtestV___024root(VtestV__Syms* symsp, const char* v__name);
    ~VtestV___024root();
    VL_UNCOPYABLE(VtestV___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
