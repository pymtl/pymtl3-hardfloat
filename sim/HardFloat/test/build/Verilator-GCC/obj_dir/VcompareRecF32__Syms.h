// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VcompareRecF32__Syms_H_
#define _VcompareRecF32__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VcompareRecF32.h"

// SYMS CLASS
class VcompareRecF32__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VcompareRecF32*                TOPp;
    
    // CREATORS
    VcompareRecF32__Syms(VcompareRecF32* topp, const char* namep);
    ~VcompareRecF32__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
