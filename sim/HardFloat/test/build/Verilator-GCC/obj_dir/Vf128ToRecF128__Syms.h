// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _Vf128ToRecF128__Syms_H_
#define _Vf128ToRecF128__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vf128ToRecF128.h"

// SYMS CLASS
class Vf128ToRecF128__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vf128ToRecF128*                TOPp;
    
    // CREATORS
    Vf128ToRecF128__Syms(Vf128ToRecF128* topp, const char* namep);
    ~Vf128ToRecF128__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
