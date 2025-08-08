// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTESTV__SYMS_H_
#define VERILATED_VTESTV__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VtestV.h"

// INCLUDE MODULE CLASSES
#include "VtestV___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VtestV__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VtestV* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VtestV___024root               TOP;

    // CONSTRUCTORS
    VtestV__Syms(VerilatedContext* contextp, const char* namep, VtestV* modelp);
    ~VtestV__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
