// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VUI32TORECF16__SYMS_H_
#define _VUI32TORECF16__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vui32ToRecF16.h"

// SYMS CLASS
class Vui32ToRecF16__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vui32ToRecF16*                 TOPp;
    
    // CREATORS
    Vui32ToRecF16__Syms(Vui32ToRecF16* topp, const char* namep);
    ~Vui32ToRecF16__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
