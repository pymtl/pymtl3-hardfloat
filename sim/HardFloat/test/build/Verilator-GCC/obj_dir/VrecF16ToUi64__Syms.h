// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VRECF16TOUI64__SYMS_H_
#define _VRECF16TOUI64__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VrecF16ToUi64.h"

// SYMS CLASS
class VrecF16ToUi64__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VrecF16ToUi64*                 TOPp;
    
    // CREATORS
    VrecF16ToUi64__Syms(VrecF16ToUi64* topp, const char* namep);
    ~VrecF16ToUi64__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
