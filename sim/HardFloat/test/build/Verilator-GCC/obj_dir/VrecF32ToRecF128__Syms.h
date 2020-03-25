// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VrecF32ToRecF128__Syms_H_
#define _VrecF32ToRecF128__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VrecF32ToRecF128.h"

// SYMS CLASS
class VrecF32ToRecF128__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VrecF32ToRecF128*              TOPp;
    
    // CREATORS
    VrecF32ToRecF128__Syms(VrecF32ToRecF128* topp, const char* namep);
    ~VrecF32ToRecF128__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
