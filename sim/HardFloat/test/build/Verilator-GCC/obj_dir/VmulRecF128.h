// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VmulRecF128_H_
#define _VmulRecF128_H_

#include "verilated.h"

class VmulRecF128__Syms;

//----------

VL_MODULE(VmulRecF128) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(control,0,0);
    VL_IN8(roundingMode,2,0);
    VL_OUT8(exceptionFlags,4,0);
    VL_INW(a,128,0,5);
    VL_INW(b,128,0,5);
    VL_OUTW(out,128,0,5);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__invalidExc;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__out_isNaN;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__out_sign;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra;
    CData/*0:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound;
    WData/*115:0*/ mulRecF128__DOT__mulRecFN__DOT__out_sig[4];
    WData/*113:0*/ mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[4];
    WData/*113:0*/ mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[4];
    IData/*16:0*/ mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut;
    WData/*225:0*/ mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[8];
    WData/*111:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[4];
    WData/*115:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[4];
    WData/*113:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[4];
    WData/*115:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[4];
    WData/*114:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[4];
    IData/*17:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp;
    WData/*65536:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[2049];
    WData/*113:0*/ mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[4];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VmulRecF128__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VmulRecF128);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VmulRecF128(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VmulRecF128();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VmulRecF128__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VmulRecF128__Syms* symsp, bool first);
  private:
    static QData _change_request(VmulRecF128__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VmulRecF128__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VmulRecF128__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VmulRecF128__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VmulRecF128__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(VmulRecF128__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
