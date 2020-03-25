// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VrecF64ToUi32__Syms_H_
#define _VrecF64ToUi32__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VrecF64ToUi32.h"

// SYMS CLASS
class VrecF64ToUi32__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VrecF64ToUi32*                 TOPp;
    
    // CREATORS
    VrecF64ToUi32__Syms(VrecF64ToUi32* topp, const char* namep);
    ~VrecF64ToUi32__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
