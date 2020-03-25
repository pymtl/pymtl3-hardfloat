// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VrecF64ToI32__Syms_H_
#define _VrecF64ToI32__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VrecF64ToI32.h"

// SYMS CLASS
class VrecF64ToI32__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VrecF64ToI32*                  TOPp;
    
    // CREATORS
    VrecF64ToI32__Syms(VrecF64ToI32* topp, const char* namep);
    ~VrecF64ToI32__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
