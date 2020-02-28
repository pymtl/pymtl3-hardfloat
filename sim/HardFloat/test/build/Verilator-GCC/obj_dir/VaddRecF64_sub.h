// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VADDRECF64_SUB_H_
#define _VADDRECF64_SUB_H_  // guard

#include "verilated.h"

class VaddRecF64_sub__Syms;

//----------

VL_MODULE(VaddRecF64_sub) {
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
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__invalidExc;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__out_isNaN;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__out_sign;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns;
    CData/*5:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign;
    CData/*5:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut;
    CData/*5:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    CData/*5:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__20__KET____DOT__countSoFar;
    CData/*5:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__28__KET____DOT__countSoFar;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra;
    CData/*0:0*/ addRecF64_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound;
    SData/*12:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps;
    SData/*13:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller;
    SData/*13:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask;
    SData/*13:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut;
    SData/*13:0*/ addRecF64_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp;
    IData/*27:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum;
    IData/*27:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn;
    IData/*28:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    IData/*16:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c;
    QData/*55:0*/ addRecF64_sub__DOT__addRecFN__DOT__out_sig;
    QData/*53:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA;
    QData/*53:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB;
    QData/*55:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum;
    QData/*54:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum;
    QData/*55:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut;
    QData/*52:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller;
    QData/*57:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller;
    QData/*55:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller;
    QData/*56:0*/ addRecF64_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum;
    QData/*51:0*/ addRecF64_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut;
    QData/*55:0*/ addRecF64_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask;
    QData/*54:0*/ addRecF64_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VaddRecF64_sub__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VaddRecF64_sub);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VaddRecF64_sub(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VaddRecF64_sub();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VaddRecF64_sub__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VaddRecF64_sub__Syms* symsp, bool first);
  private:
    static QData _change_request(VaddRecF64_sub__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VaddRecF64_sub__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VaddRecF64_sub__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VaddRecF64_sub__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VaddRecF64_sub__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(VaddRecF64_sub__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif  // guard
