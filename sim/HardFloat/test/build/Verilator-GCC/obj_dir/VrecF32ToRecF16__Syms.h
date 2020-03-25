// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VrecF32ToRecF16__Syms_H_
#define _VrecF32ToRecF16__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VrecF32ToRecF16.h"

// SYMS CLASS
class VrecF32ToRecF16__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VrecF32ToRecF16*               TOPp;
    
    // CREATORS
    VrecF32ToRecF16__Syms(VrecF32ToRecF16* topp, const char* namep);
    ~VrecF32ToRecF16__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
