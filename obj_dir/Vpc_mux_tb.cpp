// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpc_mux_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpc_mux_tb::Vpc_mux_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpc_mux_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpc_mux_tb::Vpc_mux_tb(const char* _vcname__)
    : Vpc_mux_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpc_mux_tb::~Vpc_mux_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpc_mux_tb___024root___eval_debug_assertions(Vpc_mux_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vpc_mux_tb___024root___eval_static(Vpc_mux_tb___024root* vlSelf);
void Vpc_mux_tb___024root___eval_initial(Vpc_mux_tb___024root* vlSelf);
void Vpc_mux_tb___024root___eval_settle(Vpc_mux_tb___024root* vlSelf);
void Vpc_mux_tb___024root___eval(Vpc_mux_tb___024root* vlSelf);

void Vpc_mux_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpc_mux_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpc_mux_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpc_mux_tb___024root___eval_static(&(vlSymsp->TOP));
        Vpc_mux_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vpc_mux_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpc_mux_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vpc_mux_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vpc_mux_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vpc_mux_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vpc_mux_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vpc_mux_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpc_mux_tb___024root___eval_final(Vpc_mux_tb___024root* vlSelf);

VL_ATTR_COLD void Vpc_mux_tb::final() {
    Vpc_mux_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpc_mux_tb::hierName() const { return vlSymsp->name(); }
const char* Vpc_mux_tb::modelName() const { return "Vpc_mux_tb"; }
unsigned Vpc_mux_tb::threads() const { return 1; }
void Vpc_mux_tb::prepareClone() const { contextp()->prepareClone(); }
void Vpc_mux_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpc_mux_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpc_mux_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vpc_mux_tb___024root__trace_init_top(Vpc_mux_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpc_mux_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpc_mux_tb___024root*>(voidSelf);
    Vpc_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vpc_mux_tb___024root__trace_decl_types(tracep);
    Vpc_mux_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpc_mux_tb___024root__trace_register(Vpc_mux_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpc_mux_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpc_mux_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpc_mux_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
