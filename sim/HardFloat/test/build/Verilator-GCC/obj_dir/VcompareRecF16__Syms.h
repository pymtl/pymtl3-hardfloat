// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VcompareRecF16__Syms_H_
#define _VcompareRecF16__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VcompareRecF16.h"

// SYMS CLASS
class VcompareRecF16__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VcompareRecF16*                TOPp;
    
    // CREATORS
    VcompareRecF16__Syms(VcompareRecF16* topp, const char* namep);
    ~VcompareRecF16__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
