// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Valutb.h"
#include "Valutb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Valutb::Valutb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Valutb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Valutb::Valutb(const char* _vcname__)
    : Valutb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Valutb::~Valutb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Valutb___024root___eval_debug_assertions(Valutb___024root* vlSelf);
#endif  // VL_DEBUG
void Valutb___024root___eval_static(Valutb___024root* vlSelf);
void Valutb___024root___eval_initial(Valutb___024root* vlSelf);
void Valutb___024root___eval_settle(Valutb___024root* vlSelf);
void Valutb___024root___eval(Valutb___024root* vlSelf);

void Valutb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valutb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Valutb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Valutb___024root___eval_static(&(vlSymsp->TOP));
        Valutb___024root___eval_initial(&(vlSymsp->TOP));
        Valutb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Valutb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Valutb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Valutb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Valutb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Valutb___024root___eval_final(Valutb___024root* vlSelf);

VL_ATTR_COLD void Valutb::final() {
    Valutb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Valutb::hierName() const { return vlSymsp->name(); }
const char* Valutb::modelName() const { return "Valutb"; }
unsigned Valutb::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Valutb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Valutb___024root__trace_init_top(Valutb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Valutb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valutb___024root*>(voidSelf);
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Valutb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Valutb___024root__trace_register(Valutb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Valutb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Valutb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Valutb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
