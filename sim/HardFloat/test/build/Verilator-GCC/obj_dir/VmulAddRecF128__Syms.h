// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VMULADDRECF128__SYMS_H_
#define _VMULADDRECF128__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VmulAddRecF128.h"

// SYMS CLASS
class VmulAddRecF128__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VmulAddRecF128*                TOPp;
    
    // CREATORS
    VmulAddRecF128__Syms(VmulAddRecF128* topp, const char* namep);
    ~VmulAddRecF128__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
