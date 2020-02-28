// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VI64TORECF128__SYMS_H_
#define _VI64TORECF128__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vi64ToRecF128.h"

// SYMS CLASS
class Vi64ToRecF128__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vi64ToRecF128*                 TOPp;
    
    // CREATORS
    Vi64ToRecF128__Syms(Vi64ToRecF128* topp, const char* namep);
    ~Vi64ToRecF128__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
