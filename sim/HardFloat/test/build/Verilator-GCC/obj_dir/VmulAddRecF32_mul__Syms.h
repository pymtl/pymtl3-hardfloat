// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VmulAddRecF32_mul__Syms_H_
#define _VmulAddRecF32_mul__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VmulAddRecF32_mul.h"

// SYMS CLASS
class VmulAddRecF32_mul__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VmulAddRecF32_mul*             TOPp;
    
    // CREATORS
    VmulAddRecF32_mul__Syms(VmulAddRecF32_mul* topp, const char* namep);
    ~VmulAddRecF32_mul__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
