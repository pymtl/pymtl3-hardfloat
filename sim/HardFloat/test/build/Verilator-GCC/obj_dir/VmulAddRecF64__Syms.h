// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VMULADDRECF64__SYMS_H_
#define _VMULADDRECF64__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VmulAddRecF64.h"

// SYMS CLASS
class VmulAddRecF64__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VmulAddRecF64*                 TOPp;
    
    // CREATORS
    VmulAddRecF64__Syms(VmulAddRecF64* topp, const char* namep);
    ~VmulAddRecF64__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
