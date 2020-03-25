// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _Vf16ToRecF16__Syms_H_
#define _Vf16ToRecF16__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vf16ToRecF16.h"

// SYMS CLASS
class Vf16ToRecF16__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vf16ToRecF16*                  TOPp;
    
    // CREATORS
    Vf16ToRecF16__Syms(Vf16ToRecF16* topp, const char* namep);
    ~Vf16ToRecF16__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
