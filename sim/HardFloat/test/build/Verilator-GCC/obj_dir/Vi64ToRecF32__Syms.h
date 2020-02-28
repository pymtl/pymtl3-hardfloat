// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VI64TORECF32__SYMS_H_
#define _VI64TORECF32__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vi64ToRecF32.h"

// SYMS CLASS
class Vi64ToRecF32__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vi64ToRecF32*                  TOPp;
    
    // CREATORS
    Vi64ToRecF32__Syms(Vi64ToRecF32* topp, const char* namep);
    ~Vi64ToRecF32__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
