// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VADDRECFNRTL__EXPWIDTH_8__SIGWIDTH_8__SYMS_H_
#define _VADDRECFNRTL__EXPWIDTH_8__SIGWIDTH_8__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VaddRecFNRTL__expWidth_8__sigWidth_8.h"

// SYMS CLASS
class VaddRecFNRTL__expWidth_8__sigWidth_8__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VaddRecFNRTL__expWidth_8__sigWidth_8* TOPp;
    
    // CREATORS
    VaddRecFNRTL__expWidth_8__sigWidth_8__Syms(VaddRecFNRTL__expWidth_8__sigWidth_8* topp, const char* namep);
    ~VaddRecFNRTL__expWidth_8__sigWidth_8__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
