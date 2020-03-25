// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VmulRecF64_H_
#define _VmulRecF64_H_

#include "verilated.h"

class VmulRecF64__Syms;

//----------

VL_MODULE(VmulRecF64) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(control,0,0);
    VL_IN8(roundingMode,2,0);
    VL_OUT8(exceptionFlags,4,0);
    VL_INW(a,64,0,3);
    VL_INW(b,64,0,3);
    VL_OUTW(out,64,0,3);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__invalidExc;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__out_isNaN;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__out_sign;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra;
    CData/*0:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound;
    SData/*12:0*/ mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut;
    SData/*13:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp;
    WData/*105:0*/ mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[4];
    WData/*4096:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[129];
    QData/*55:0*/ mulRecF64__DOT__mulRecFN__DOT__out_sig;
    QData/*53:0*/ mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA;
    QData/*53:0*/ mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB;
    QData/*51:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut;
    QData/*55:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask;
    QData/*53:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main;
    QData/*55:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask;
    QData/*54:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig;
    QData/*53:0*/ mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VmulRecF64__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VmulRecF64);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VmulRecF64(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VmulRecF64();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VmulRecF64__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VmulRecF64__Syms* symsp, bool first);
  private:
    static QData _change_request(VmulRecF64__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VmulRecF64__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VmulRecF64__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VmulRecF64__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VmulRecF64__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(VmulRecF64__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
