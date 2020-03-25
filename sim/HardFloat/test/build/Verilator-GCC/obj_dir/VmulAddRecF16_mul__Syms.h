// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VmulAddRecF16_mul__Syms_H_
#define _VmulAddRecF16_mul__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VmulAddRecF16_mul.h"

// SYMS CLASS
class VmulAddRecF16_mul__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VmulAddRecF16_mul*             TOPp;
    
    // CREATORS
    VmulAddRecF16_mul__Syms(VmulAddRecF16_mul* topp, const char* namep);
    ~VmulAddRecF16_mul__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
