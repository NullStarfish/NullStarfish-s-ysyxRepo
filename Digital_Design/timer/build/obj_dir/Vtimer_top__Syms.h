// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTIMER_TOP__SYMS_H_
#define VERILATED_VTIMER_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtimer_top.h"

// INCLUDE MODULE CLASSES
#include "Vtimer_top___024root.h"

// SYMS CLASS (contains all model state)
class Vtimer_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtimer_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtimer_top___024root           TOP;

    // CONSTRUCTORS
    Vtimer_top__Syms(VerilatedContext* contextp, const char* namep, Vtimer_top* modelp);
    ~Vtimer_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
