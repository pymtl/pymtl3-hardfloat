// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VdivSqrtRecF32_small_div_H_
#define _VdivSqrtRecF32_small_div_H_

#include "verilated.h"

class VdivSqrtRecF32_small_div__Syms;

//----------

VL_MODULE(VdivSqrtRecF32_small_div) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(nReset,0,0);
    VL_IN8(clock,0,0);
    VL_IN8(control,0,0);
    VL_OUT8(inReady,0,0);
    VL_IN8(inValid,0,0);
    VL_IN8(roundingMode,2,0);
    VL_OUT8(outValid,0,0);
    VL_OUT8(exceptionFlags,4,0);
    VL_IN64(a,32,0);
    VL_IN64(b,32,0);
    VL_OUT64(out,32,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__invalidExc;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__infiniteExc;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_div;
    CData/*4:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z;
    CData/*2:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra;
    CData/*0:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound;
    SData/*10:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div;
    SData/*9:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z;
    SData/*10:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp;
    IData/*26:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__out_sig;
    IData/*24:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S;
    IData/*24:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S;
    IData/*22:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z;
    IData/*25:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z;
    IData/*25:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z;
    IData/*26:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem;
    IData/*27:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem;
    IData/*22:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut;
    IData/*26:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask;
    IData/*24:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main;
    IData/*26:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask;
    IData/*25:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig;
    WData/*512:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[17];
    IData/*24:0*/ divSqrtRecF32_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    CData/*0:0*/ __Vclklast__TOP__nReset;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VdivSqrtRecF32_small_div__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VdivSqrtRecF32_small_div);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VdivSqrtRecF32_small_div(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VdivSqrtRecF32_small_div();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VdivSqrtRecF32_small_div__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VdivSqrtRecF32_small_div__Syms* symsp, bool first);
  private:
    static QData _change_request(VdivSqrtRecF32_small_div__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(VdivSqrtRecF32_small_div__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VdivSqrtRecF32_small_div__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VdivSqrtRecF32_small_div__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VdivSqrtRecF32_small_div__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VdivSqrtRecF32_small_div__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VdivSqrtRecF32_small_div__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(VdivSqrtRecF32_small_div__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
