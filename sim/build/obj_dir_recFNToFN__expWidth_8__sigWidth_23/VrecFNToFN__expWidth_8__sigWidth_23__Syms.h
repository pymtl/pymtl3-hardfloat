// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VRECFNTOFN__EXPWIDTH_8__SIGWIDTH_23__SYMS_H_
#define _VRECFNTOFN__EXPWIDTH_8__SIGWIDTH_23__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VrecFNToFN__expWidth_8__sigWidth_23.h"

// SYMS CLASS
class VrecFNToFN__expWidth_8__sigWidth_23__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VrecFNToFN__expWidth_8__sigWidth_23* TOPp;
    
    // CREATORS
    VrecFNToFN__expWidth_8__sigWidth_23__Syms(VrecFNToFN__expWidth_8__sigWidth_23* topp, const char* namep);
    ~VrecFNToFN__expWidth_8__sigWidth_23__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
