// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valutb.h for the primary calling header

#ifndef VERILATED_VALUTB___024ROOT_H_
#define VERILATED_VALUTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Valutb__Syms;

class Valutb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ alutb__DOT__inputa;
    CData/*7:0*/ alutb__DOT__inputb;
    CData/*2:0*/ alutb__DOT__inputaluop;
    CData/*7:0*/ alutb__DOT__k;
    CData/*0:0*/ alutb__DOT__resultof;
    CData/*0:0*/ alutb__DOT__resultc;
    CData/*0:0*/ alutb__DOT__resultz;
    CData/*7:0*/ alutb__DOT__outputs;
    CData/*0:0*/ alutb__DOT__of;
    CData/*0:0*/ alutb__DOT__c;
    CData/*0:0*/ alutb__DOT__alu_uut__DOT__AdderCtrl;
    CData/*7:0*/ alutb__DOT__alu_uut__DOT__AdderResult;
    CData/*7:0*/ alutb__DOT__alu_uut__DOT__selAdder__DOT__t_Cin;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ alutb__DOT__tempresult;
    IData/*31:0*/ alutb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ alutb__DOT__unnamedblk1__DOT__j;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valutb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valutb___024root(Valutb__Syms* symsp, const char* v__name);
    ~Valutb___024root();
    VL_UNCOPYABLE(Valutb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
