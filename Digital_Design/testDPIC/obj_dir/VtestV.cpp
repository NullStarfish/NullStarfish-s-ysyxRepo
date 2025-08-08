// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VtestV.h"
#include "VtestV__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VtestV::VtestV(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VtestV__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VtestV::VtestV(const char* _vcname__)
    : VtestV(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VtestV::~VtestV() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VtestV___024root___eval_debug_assertions(VtestV___024root* vlSelf);
#endif  // VL_DEBUG
void VtestV___024root___eval_static(VtestV___024root* vlSelf);
void VtestV___024root___eval_initial(VtestV___024root* vlSelf);
void VtestV___024root___eval_settle(VtestV___024root* vlSelf);
void VtestV___024root___eval(VtestV___024root* vlSelf);

void VtestV::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VtestV::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VtestV___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VtestV___024root___eval_static(&(vlSymsp->TOP));
        VtestV___024root___eval_initial(&(vlSymsp->TOP));
        VtestV___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VtestV___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VtestV::eventsPending() { return false; }

uint64_t VtestV::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VtestV::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VtestV___024root___eval_final(VtestV___024root* vlSelf);

VL_ATTR_COLD void VtestV::final() {
    VtestV___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VtestV::hierName() const { return vlSymsp->name(); }
const char* VtestV::modelName() const { return "VtestV"; }
unsigned VtestV::threads() const { return 1; }
