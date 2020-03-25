// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VaddRecF128_sub__Syms_H_
#define _VaddRecF128_sub__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VaddRecF128_sub.h"

// SYMS CLASS
class VaddRecF128_sub__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VaddRecF128_sub*               TOPp;
    
    // CREATORS
    VaddRecF128_sub__Syms(VaddRecF128_sub* topp, const char* namep);
    ~VaddRecF128_sub__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
