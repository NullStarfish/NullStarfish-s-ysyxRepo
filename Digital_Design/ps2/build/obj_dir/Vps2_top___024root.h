// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vps2_top.h for the primary calling header

#ifndef VERILATED_VPS2_TOP___024ROOT_H_
#define VERILATED_VPS2_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vps2_top__Syms;
class Vps2_top_ps2_top;


class Vps2_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vps2_top_ps2_top* ps2_top;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(o_seg0,7,0);
    VL_OUT8(o_seg1,7,0);
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
    Vps2_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vps2_top___024root(Vps2_top__Syms* symsp, const char* v__name);
    ~Vps2_top___024root();
    VL_UNCOPYABLE(Vps2_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
