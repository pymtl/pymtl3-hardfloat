// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VI32TORECF64__SYMS_H_
#define _VI32TORECF64__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vi32ToRecF64.h"

// SYMS CLASS
class Vi32ToRecF64__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vi32ToRecF64*                  TOPp;
    
    // CREATORS
    Vi32ToRecF64__Syms(Vi32ToRecF64* topp, const char* namep);
    ~Vi32ToRecF64__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
