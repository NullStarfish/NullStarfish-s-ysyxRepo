// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrand_launcher.h"
#include "Vrand_launcher__Syms.h"

//============================================================
// Constructors

Vrand_launcher::Vrand_launcher(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrand_launcher__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , o_seg0{vlSymsp->TOP.o_seg0}
    , o_seg1{vlSymsp->TOP.o_seg1}
    , __pinNumber5{vlSymsp->TOP.__pinNumber5}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrand_launcher::Vrand_launcher(const char* _vcname__)
    : Vrand_launcher(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrand_launcher::~Vrand_launcher() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrand_launcher___024root___eval_debug_assertions(Vrand_launcher___024root* vlSelf);
#endif  // VL_DEBUG
void Vrand_launcher___024root___eval_static(Vrand_launcher___024root* vlSelf);
void Vrand_launcher___024root___eval_initial(Vrand_launcher___024root* vlSelf);
void Vrand_launcher___024root___eval_settle(Vrand_launcher___024root* vlSelf);
void Vrand_launcher___024root___eval(Vrand_launcher___024root* vlSelf);

void Vrand_launcher::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrand_launcher::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrand_launcher___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrand_launcher___024root___eval_static(&(vlSymsp->TOP));
        Vrand_launcher___024root___eval_initial(&(vlSymsp->TOP));
        Vrand_launcher___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrand_launcher___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrand_launcher::eventsPending() { return false; }

uint64_t Vrand_launcher::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrand_launcher::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrand_launcher___024root___eval_final(Vrand_launcher___024root* vlSelf);

VL_ATTR_COLD void Vrand_launcher::final() {
    Vrand_launcher___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrand_launcher::hierName() const { return vlSymsp->name(); }
const char* Vrand_launcher::modelName() const { return "Vrand_launcher"; }
unsigned Vrand_launcher::threads() const { return 1; }
