// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtestV.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VtestV__Syms.h"
#include "VtestV___024root.h"

extern "C" int add(int a, int b);

VL_INLINE_OPT void VtestV___024root____Vdpiimwrap_testV__DOT__add_TOP(IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &add__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtestV___024root____Vdpiimwrap_testV__DOT__add_TOP\n"); );
    // Body
    int a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    int b__Vcvt;
    for (size_t b__Vidx = 0; b__Vidx < 1; ++b__Vidx) b__Vcvt = b;
    int add__Vfuncrtn__Vcvt;
    add__Vfuncrtn__Vcvt = add(a__Vcvt, b__Vcvt);
    add__Vfuncrtn = add__Vfuncrtn__Vcvt;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtestV___024root___dump_triggers__act(VtestV___024root* vlSelf);
#endif  // VL_DEBUG

void VtestV___024root___eval_triggers__act(VtestV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtestV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtestV___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VtestV___024root___dump_triggers__act(vlSelf);
    }
#endif
}
