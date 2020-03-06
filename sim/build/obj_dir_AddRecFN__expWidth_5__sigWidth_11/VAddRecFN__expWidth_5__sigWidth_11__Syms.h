// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VADDRECFN__EXPWIDTH_5__SIGWIDTH_11__SYMS_H_
#define _VADDRECFN__EXPWIDTH_5__SIGWIDTH_11__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VAddRecFN__expWidth_5__sigWidth_11.h"

// SYMS CLASS
class VAddRecFN__expWidth_5__sigWidth_11__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VAddRecFN__expWidth_5__sigWidth_11* TOPp;
    
    // CREATORS
    VAddRecFN__expWidth_5__sigWidth_11__Syms(VAddRecFN__expWidth_5__sigWidth_11* topp, const char* namep);
    ~VAddRecFN__expWidth_5__sigWidth_11__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
