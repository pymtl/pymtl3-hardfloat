// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VrecF128ToUi32__Syms_H_
#define _VrecF128ToUi32__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VrecF128ToUi32.h"

// SYMS CLASS
class VrecF128ToUi32__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VrecF128ToUi32*                TOPp;
    
    // CREATORS
    VrecF128ToUi32__Syms(VrecF128ToUi32* topp, const char* namep);
    ~VrecF128ToUi32__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
