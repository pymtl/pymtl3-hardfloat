// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VmulRecF32__Syms_H_
#define _VmulRecF32__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VmulRecF32.h"

// SYMS CLASS
class VmulRecF32__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VmulRecF32*                    TOPp;
    
    // CREATORS
    VmulRecF32__Syms(VmulRecF32* topp, const char* namep);
    ~VmulRecF32__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
