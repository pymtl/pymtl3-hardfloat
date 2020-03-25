// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VmulAddRecF64_add__Syms_H_
#define _VmulAddRecF64_add__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VmulAddRecF64_add.h"

// SYMS CLASS
class VmulAddRecF64_add__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VmulAddRecF64_add*             TOPp;
    
    // CREATORS
    VmulAddRecF64_add__Syms(VmulAddRecF64_add* topp, const char* namep);
    ~VmulAddRecF64_add__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
