// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VF32TORECF32__SYMS_H_
#define _VF32TORECF32__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vf32ToRecF32.h"

// SYMS CLASS
class Vf32ToRecF32__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vf32ToRecF32*                  TOPp;
    
    // CREATORS
    Vf32ToRecF32__Syms(Vf32ToRecF32* topp, const char* namep);
    ~Vf32ToRecF32__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
