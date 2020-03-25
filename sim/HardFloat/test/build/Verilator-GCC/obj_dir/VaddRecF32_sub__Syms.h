// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VaddRecF32_sub__Syms_H_
#define _VaddRecF32_sub__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VaddRecF32_sub.h"

// SYMS CLASS
class VaddRecF32_sub__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VaddRecF32_sub*                TOPp;
    
    // CREATORS
    VaddRecF32_sub__Syms(VaddRecF32_sub* topp, const char* namep);
    ~VaddRecF32_sub__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
