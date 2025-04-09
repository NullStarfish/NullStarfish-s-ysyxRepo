// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRAND_LAUNCHER__SYMS_H_
#define VERILATED_VRAND_LAUNCHER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrand_launcher.h"

// INCLUDE MODULE CLASSES
#include "Vrand_launcher___024root.h"

// SYMS CLASS (contains all model state)
class Vrand_launcher__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrand_launcher* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrand_launcher___024root       TOP;

    // CONSTRUCTORS
    Vrand_launcher__Syms(VerilatedContext* contextp, const char* namep, Vrand_launcher* modelp);
    ~Vrand_launcher__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
