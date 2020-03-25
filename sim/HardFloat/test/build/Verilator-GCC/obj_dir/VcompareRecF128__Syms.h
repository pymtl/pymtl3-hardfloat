// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VcompareRecF128__Syms_H_
#define _VcompareRecF128__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VcompareRecF128.h"

// SYMS CLASS
class VcompareRecF128__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VcompareRecF128*               TOPp;
    
    // CREATORS
    VcompareRecF128__Syms(VcompareRecF128* topp, const char* namep);
    ~VcompareRecF128__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
