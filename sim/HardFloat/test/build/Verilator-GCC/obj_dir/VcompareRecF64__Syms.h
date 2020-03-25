// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VcompareRecF64__Syms_H_
#define _VcompareRecF64__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VcompareRecF64.h"

// SYMS CLASS
class VcompareRecF64__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VcompareRecF64*                TOPp;
    
    // CREATORS
    VcompareRecF64__Syms(VcompareRecF64* topp, const char* namep);
    ~VcompareRecF64__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
