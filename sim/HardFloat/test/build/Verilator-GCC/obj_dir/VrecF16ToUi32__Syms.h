// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VrecF16ToUi32__Syms_H_
#define _VrecF16ToUi32__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VrecF16ToUi32.h"

// SYMS CLASS
class VrecF16ToUi32__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VrecF16ToUi32*                 TOPp;
    
    // CREATORS
    VrecF16ToUi32__Syms(VrecF16ToUi32* topp, const char* namep);
    ~VrecF16ToUi32__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
