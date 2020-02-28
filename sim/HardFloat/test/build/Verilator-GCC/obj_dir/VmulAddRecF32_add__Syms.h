// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VMULADDRECF32_ADD__SYMS_H_
#define _VMULADDRECF32_ADD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VmulAddRecF32_add.h"

// SYMS CLASS
class VmulAddRecF32_add__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VmulAddRecF32_add*             TOPp;
    
    // CREATORS
    VmulAddRecF32_add__Syms(VmulAddRecF32_add* topp, const char* namep);
    ~VmulAddRecF32_add__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
