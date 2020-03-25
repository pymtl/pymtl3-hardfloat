// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VaddRecF32_sub_H_
#define _VaddRecF32_sub_H_

#include "verilated.h"

class VaddRecF32_sub__Syms;

//----------

VL_MODULE(VaddRecF32_sub) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(control,0,0);
    VL_IN8(roundingMode,2,0);
    VL_OUT8(exceptionFlags,4,0);
    VL_IN64(a,32,0);
    VL_IN64(b,32,0);
    VL_OUT64(out,32,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__invalidExc;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__out_isNaN;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__out_sign;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns;
    CData/*4:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign;
    CData/*4:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags;
    CData/*6:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller;
    CData/*6:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut;
    CData/*4:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    CData/*4:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    CData/*6:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra;
    CData/*0:0*/ addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound;
    SData/*9:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps;
    SData/*12:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum;
    SData/*12:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn;
    SData/*13:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    SData/*8:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c;
    SData/*10:0*/ addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp;
    IData/*26:0*/ addRecF32_sub__DOT__addRecFN__DOT__out_sig;
    IData/*24:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA;
    IData/*24:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB;
    IData/*26:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum;
    IData/*25:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum;
    IData/*26:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut;
    IData/*23:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller;
    IData/*28:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller;
    IData/*26:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller;
    IData/*27:0*/ addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum;
    IData/*22:0*/ addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut;
    IData/*26:0*/ addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask;
    IData/*25:0*/ addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VaddRecF32_sub__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VaddRecF32_sub);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VaddRecF32_sub(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VaddRecF32_sub();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VaddRecF32_sub__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VaddRecF32_sub__Syms* symsp, bool first);
  private:
    static QData _change_request(VaddRecF32_sub__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VaddRecF32_sub__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VaddRecF32_sub__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VaddRecF32_sub__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VaddRecF32_sub__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(VaddRecF32_sub__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
