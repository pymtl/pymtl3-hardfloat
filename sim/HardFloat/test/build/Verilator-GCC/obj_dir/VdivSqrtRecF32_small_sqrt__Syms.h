// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VDIVSQRTRECF32_SMALL_SQRT__SYMS_H_
#define _VDIVSQRTRECF32_SMALL_SQRT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VdivSqrtRecF32_small_sqrt.h"

// SYMS CLASS
class VdivSqrtRecF32_small_sqrt__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VdivSqrtRecF32_small_sqrt*     TOPp;
    
    // CREATORS
    VdivSqrtRecF32_small_sqrt__Syms(VdivSqrtRecF32_small_sqrt* topp, const char* namep);
    ~VdivSqrtRecF32_small_sqrt__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
