// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _Vi32ToRecF32__Syms_H_
#define _Vi32ToRecF32__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vi32ToRecF32.h"

// SYMS CLASS
class Vi32ToRecF32__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vi32ToRecF32*                  TOPp;
    
    // CREATORS
    Vi32ToRecF32__Syms(Vi32ToRecF32* topp, const char* namep);
    ~Vi32ToRecF32__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
