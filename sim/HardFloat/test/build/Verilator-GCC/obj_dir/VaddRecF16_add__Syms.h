// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VADDRECF16_ADD__SYMS_H_
#define _VADDRECF16_ADD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VaddRecF16_add.h"

// SYMS CLASS
class VaddRecF16_add__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VaddRecF16_add*                TOPp;
    
    // CREATORS
    VaddRecF16_add__Syms(VaddRecF16_add* topp, const char* namep);
    ~VaddRecF16_add__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
