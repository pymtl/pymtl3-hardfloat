// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VADDRECFNRTL__EXPWIDTH_8__SIGWIDTH_8_H_
#define _VADDRECFNRTL__EXPWIDTH_8__SIGWIDTH_8_H_  // guard

#include "verilated.h"

class VaddRecFNRTL__expWidth_8__sigWidth_8__Syms;

//----------

VL_MODULE(VaddRecFNRTL__expWidth_8__sigWidth_8) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(control,0,0);
    VL_OUT8(exceptionFlags,4,0);
    VL_IN8(roundingMode,2,0);
    VL_IN8(subOp,0,0);
    VL_IN(a,16,0);
    VL_IN(b,16,0);
    VL_OUT(out,16,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__invalidExc;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfA;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfB;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__effSignB;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns;
    CData/*2:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags;
    CData/*4:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum;
    CData/*7:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller;
    CData/*2:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller;
    CData/*2:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__addZeros;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut;
    CData/*4:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn;
    CData/*5:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    CData/*2:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__5__KET____DOT__countSoFar;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut;
    CData/*6:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra;
    CData/*0:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound;
    SData/*8:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigA;
    SData/*8:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigB;
    SData/*9:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps;
    SData/*10:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum;
    SData/*9:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum;
    SData/*10:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut;
    SData/*12:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller;
    SData/*10:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller;
    SData/*11:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum;
    SData/*10:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut;
    SData/*10:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask;
    SData/*9:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig;
    SData/*10:0*/ addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VaddRecFNRTL__expWidth_8__sigWidth_8);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VaddRecFNRTL__expWidth_8__sigWidth_8(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VaddRecFNRTL__expWidth_8__sigWidth_8();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* symsp, bool first);
  private:
    static QData _change_request(VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif  // guard
