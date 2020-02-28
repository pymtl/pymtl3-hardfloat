// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VDIVSQRTRECF64_SMALL_SQRT__SYMS_H_
#define _VDIVSQRTRECF64_SMALL_SQRT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VdivSqrtRecF64_small_sqrt.h"

// SYMS CLASS
class VdivSqrtRecF64_small_sqrt__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VdivSqrtRecF64_small_sqrt*     TOPp;
    
    // CREATORS
    VdivSqrtRecF64_small_sqrt__Syms(VdivSqrtRecF64_small_sqrt* topp, const char* namep);
    ~VdivSqrtRecF64_small_sqrt__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
