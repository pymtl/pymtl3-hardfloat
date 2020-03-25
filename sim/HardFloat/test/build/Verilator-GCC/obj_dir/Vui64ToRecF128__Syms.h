// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _Vui64ToRecF128__Syms_H_
#define _Vui64ToRecF128__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vui64ToRecF128.h"

// SYMS CLASS
class Vui64ToRecF128__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vui64ToRecF128*                TOPp;
    
    // CREATORS
    Vui64ToRecF128__Syms(Vui64ToRecF128* topp, const char* namep);
    ~Vui64ToRecF128__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
