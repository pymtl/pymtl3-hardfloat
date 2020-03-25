// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VdivSqrtRecF16_small_div__Syms_H_
#define _VdivSqrtRecF16_small_div__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VdivSqrtRecF16_small_div.h"

// SYMS CLASS
class VdivSqrtRecF16_small_div__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VdivSqrtRecF16_small_div*      TOPp;
    
    // CREATORS
    VdivSqrtRecF16_small_div__Syms(VdivSqrtRecF16_small_div* topp, const char* namep);
    ~VdivSqrtRecF16_small_div__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
