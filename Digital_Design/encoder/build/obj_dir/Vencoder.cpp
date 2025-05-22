// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vencoder.h"
#include "Vencoder__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vencoder::Vencoder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vencoder__Syms(contextp(), _vcname__, this)}
    , s{vlSymsp->TOP.s}
    , x{vlSymsp->TOP.x}
    , yex{vlSymsp->TOP.yex}
    , y{vlSymsp->TOP.y}
    , o_seg0{vlSymsp->TOP.o_seg0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vencoder::Vencoder(const char* _vcname__)
    : Vencoder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vencoder::~Vencoder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vencoder___024root___eval_debug_assertions(Vencoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vencoder___024root___eval_static(Vencoder___024root* vlSelf);
void Vencoder___024root___eval_initial(Vencoder___024root* vlSelf);
void Vencoder___024root___eval_settle(Vencoder___024root* vlSelf);
void Vencoder___024root___eval(Vencoder___024root* vlSelf);

void Vencoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vencoder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vencoder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vencoder___024root___eval_static(&(vlSymsp->TOP));
        Vencoder___024root___eval_initial(&(vlSymsp->TOP));
        Vencoder___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vencoder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vencoder::eventsPending() { return false; }

uint64_t Vencoder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vencoder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vencoder___024root___eval_final(Vencoder___024root* vlSelf);

VL_ATTR_COLD void Vencoder::final() {
    Vencoder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vencoder::hierName() const { return vlSymsp->name(); }
const char* Vencoder::modelName() const { return "Vencoder"; }
unsigned Vencoder::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vencoder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vencoder___024root__trace_init_top(Vencoder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vencoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencoder___024root*>(voidSelf);
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vencoder___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vencoder___024root__trace_register(Vencoder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vencoder::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vencoder::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vencoder___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
