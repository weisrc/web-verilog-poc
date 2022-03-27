// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtest.h"
#include "Vtest__Syms.h"

//============================================================
// Constructors

Vtest::Vtest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtest__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , c{vlSymsp->TOP.c}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtest::Vtest(const char* _vcname__)
    : Vtest(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtest::~Vtest() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtest___024root___eval_initial(Vtest___024root* vlSelf);
void Vtest___024root___eval_settle(Vtest___024root* vlSelf);
void Vtest___024root___eval(Vtest___024root* vlSelf);
#ifdef VL_DEBUG
void Vtest___024root___eval_debug_assertions(Vtest___024root* vlSelf);
#endif  // VL_DEBUG
void Vtest___024root___final(Vtest___024root* vlSelf);

static void _eval_initial_loop(Vtest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtest___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtest___024root___eval_settle(&(vlSymsp->TOP));
        Vtest___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtest___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtest___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vtest::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtest::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtest::final() {
    Vtest___024root___final(&(vlSymsp->TOP));
}
