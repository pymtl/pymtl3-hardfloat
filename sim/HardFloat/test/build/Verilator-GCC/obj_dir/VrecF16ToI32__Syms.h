// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VrecF16ToI32__Syms_H_
#define _VrecF16ToI32__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VrecF16ToI32.h"

// SYMS CLASS
class VrecF16ToI32__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VrecF16ToI32*                  TOPp;
    
    // CREATORS
    VrecF16ToI32__Syms(VrecF16ToI32* topp, const char* namep);
    ~VrecF16ToI32__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
