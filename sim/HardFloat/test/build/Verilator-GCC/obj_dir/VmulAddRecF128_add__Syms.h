// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VmulAddRecF128_add__Syms_H_
#define _VmulAddRecF128_add__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VmulAddRecF128_add.h"

// SYMS CLASS
class VmulAddRecF128_add__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VmulAddRecF128_add*            TOPp;
    
    // CREATORS
    VmulAddRecF128_add__Syms(VmulAddRecF128_add* topp, const char* namep);
    ~VmulAddRecF128_add__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
