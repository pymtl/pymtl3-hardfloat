// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VADDRECFN__EXPWIDTH_8__SIGWIDTH_23__SYMS_H_
#define _VADDRECFN__EXPWIDTH_8__SIGWIDTH_23__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VaddRecFN__expWidth_8__sigWidth_23.h"

// SYMS CLASS
class VaddRecFN__expWidth_8__sigWidth_23__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VaddRecFN__expWidth_8__sigWidth_23* TOPp;
    
    // CREATORS
    VaddRecFN__expWidth_8__sigWidth_23__Syms(VaddRecFN__expWidth_8__sigWidth_23* topp, const char* namep);
    ~VaddRecFN__expWidth_8__sigWidth_23__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
