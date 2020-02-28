// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VRECF32TOUI64__SYMS_H_
#define _VRECF32TOUI64__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VrecF32ToUi64.h"

// SYMS CLASS
class VrecF32ToUi64__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VrecF32ToUi64*                 TOPp;
    
    // CREATORS
    VrecF32ToUi64__Syms(VrecF32ToUi64* topp, const char* namep);
    ~VrecF32ToUi64__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
