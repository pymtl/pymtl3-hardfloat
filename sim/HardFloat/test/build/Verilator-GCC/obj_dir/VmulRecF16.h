// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VmulRecF16_H_
#define _VmulRecF16_H_

#include "verilated.h"

class VmulRecF16__Syms;

//----------

VL_MODULE(VmulRecF16) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(control,0,0);
    VL_IN8(roundingMode,2,0);
    VL_OUT8(exceptionFlags,4,0);
    VL_IN(a,16,0);
    VL_IN(b,16,0);
    VL_OUT(out,16,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__invalidExc;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__out_isNaN;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__out_sign;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut;
    CData/*6:0*/ mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra;
    CData/*0:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound;
    CData/*7:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp;
    SData/*13:0*/ mulRecF16__DOT__mulRecFN__DOT__out_sig;
    SData/*11:0*/ mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA;
    SData/*11:0*/ mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB;
    SData/*9:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut;
    SData/*13:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask;
    SData/*11:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main;
    SData/*13:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask;
    SData/*12:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig;
    SData/*11:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut;
    IData/*21:0*/ mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd;
    WData/*64:0*/ mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[3];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VmulRecF16__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VmulRecF16);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VmulRecF16(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VmulRecF16();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VmulRecF16__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VmulRecF16__Syms* symsp, bool first);
  private:
    static QData _change_request(VmulRecF16__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VmulRecF16__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VmulRecF16__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VmulRecF16__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VmulRecF16__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(VmulRecF16__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
