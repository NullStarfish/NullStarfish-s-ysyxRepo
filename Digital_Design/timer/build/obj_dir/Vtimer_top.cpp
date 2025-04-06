// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtimer_top.h"
#include "Vtimer_top__Syms.h"

//============================================================
// Constructors

Vtimer_top::Vtimer_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtimer_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , pause{vlSymsp->TOP.pause}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtimer_top::Vtimer_top(const char* _vcname__)
    : Vtimer_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtimer_top::~Vtimer_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtimer_top___024root___eval_debug_assertions(Vtimer_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtimer_top___024root___eval_static(Vtimer_top___024root* vlSelf);
void Vtimer_top___024root___eval_initial(Vtimer_top___024root* vlSelf);
void Vtimer_top___024root___eval_settle(Vtimer_top___024root* vlSelf);
void Vtimer_top___024root___eval(Vtimer_top___024root* vlSelf);

void Vtimer_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtimer_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtimer_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtimer_top___024root___eval_static(&(vlSymsp->TOP));
        Vtimer_top___024root___eval_initial(&(vlSymsp->TOP));
        Vtimer_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtimer_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtimer_top::eventsPending() { return false; }

uint64_t Vtimer_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtimer_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtimer_top___024root___eval_final(Vtimer_top___024root* vlSelf);

VL_ATTR_COLD void Vtimer_top::final() {
    Vtimer_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtimer_top::hierName() const { return vlSymsp->name(); }
const char* Vtimer_top::modelName() const { return "Vtimer_top"; }
unsigned Vtimer_top::threads() const { return 1; }
