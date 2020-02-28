// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VRECF64TOI64__SYMS_H_
#define _VRECF64TOI64__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VrecF64ToI64.h"

// SYMS CLASS
class VrecF64ToI64__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VrecF64ToI64*                  TOPp;
    
    // CREATORS
    VrecF64ToI64__Syms(VrecF64ToI64* topp, const char* namep);
    ~VrecF64ToI64__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
