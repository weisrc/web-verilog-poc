// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "verilated.h"

#include "Vtest__Syms.h"
#include "Vtest___024root.h"

void Vtest___024root___ctor_var_reset(Vtest___024root* vlSelf);

Vtest___024root::Vtest___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtest___024root___ctor_var_reset(this);
}

void Vtest___024root::__Vconfigure(Vtest__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtest___024root::~Vtest___024root() {
}
