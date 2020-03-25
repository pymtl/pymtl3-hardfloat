// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _Vf64ToRecF64__Syms_H_
#define _Vf64ToRecF64__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vf64ToRecF64.h"

// SYMS CLASS
class Vf64ToRecF64__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vf64ToRecF64*                  TOPp;
    
    // CREATORS
    Vf64ToRecF64__Syms(Vf64ToRecF64* topp, const char* namep);
    ~Vf64ToRecF64__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
