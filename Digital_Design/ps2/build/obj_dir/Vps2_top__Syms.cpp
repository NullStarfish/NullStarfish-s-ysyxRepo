// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vps2_top__Syms.h"
#include "Vps2_top.h"
#include "Vps2_top___024root.h"
#include "Vps2_top_ps2_top.h"

// FUNCTIONS
Vps2_top__Syms::~Vps2_top__Syms()
{
}

Vps2_top__Syms::Vps2_top__Syms(VerilatedContext* contextp, const char* namep, Vps2_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__ps2_top{this, Verilated::catName(namep, "ps2_top")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.ps2_top = &TOP__ps2_top;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ps2_top.__Vconfigure(true);
    // Setup scopes
    __Vscope_ps2_top.configure(this, name(), "ps2_top", "ps2_top", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ps2_top.varInsert(__Vfinal,"data", &(TOP__ps2_top.data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_ps2_top.varInsert(__Vfinal,"valid", &(TOP__ps2_top.valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
