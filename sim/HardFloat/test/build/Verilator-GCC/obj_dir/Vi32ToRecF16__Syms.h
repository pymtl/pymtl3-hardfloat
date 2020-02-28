// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VI32TORECF16__SYMS_H_
#define _VI32TORECF16__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vi32ToRecF16.h"

// SYMS CLASS
class Vi32ToRecF16__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vi32ToRecF16*                  TOPp;
    
    // CREATORS
    Vi32ToRecF16__Syms(Vi32ToRecF16* topp, const char* namep);
    ~Vi32ToRecF16__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
