// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpipeline_reg_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpipeline_reg_tb::Vpipeline_reg_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpipeline_reg_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpipeline_reg_tb::Vpipeline_reg_tb(const char* _vcname__)
    : Vpipeline_reg_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpipeline_reg_tb::~Vpipeline_reg_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpipeline_reg_tb___024root___eval_debug_assertions(Vpipeline_reg_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vpipeline_reg_tb___024root___eval_static(Vpipeline_reg_tb___024root* vlSelf);
void Vpipeline_reg_tb___024root___eval_initial(Vpipeline_reg_tb___024root* vlSelf);
void Vpipeline_reg_tb___024root___eval_settle(Vpipeline_reg_tb___024root* vlSelf);
void Vpipeline_reg_tb___024root___eval(Vpipeline_reg_tb___024root* vlSelf);

void Vpipeline_reg_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpipeline_reg_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpipeline_reg_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpipeline_reg_tb___024root___eval_static(&(vlSymsp->TOP));
        Vpipeline_reg_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vpipeline_reg_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpipeline_reg_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vpipeline_reg_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vpipeline_reg_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vpipeline_reg_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vpipeline_reg_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vpipeline_reg_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpipeline_reg_tb___024root___eval_final(Vpipeline_reg_tb___024root* vlSelf);

VL_ATTR_COLD void Vpipeline_reg_tb::final() {
    Vpipeline_reg_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpipeline_reg_tb::hierName() const { return vlSymsp->name(); }
const char* Vpipeline_reg_tb::modelName() const { return "Vpipeline_reg_tb"; }
unsigned Vpipeline_reg_tb::threads() const { return 1; }
void Vpipeline_reg_tb::prepareClone() const { contextp()->prepareClone(); }
void Vpipeline_reg_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpipeline_reg_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpipeline_reg_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vpipeline_reg_tb___024root__trace_init_top(Vpipeline_reg_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpipeline_reg_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline_reg_tb___024root*>(voidSelf);
    Vpipeline_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vpipeline_reg_tb___024root__trace_decl_types(tracep);
    Vpipeline_reg_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpipeline_reg_tb___024root__trace_register(Vpipeline_reg_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpipeline_reg_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpipeline_reg_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpipeline_reg_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
