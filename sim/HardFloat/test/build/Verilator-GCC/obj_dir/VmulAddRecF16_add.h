// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VmulAddRecF16_add_H_
#define _VmulAddRecF16_add_H_

#include "verilated.h"

class VmulAddRecF16_add__Syms;

//----------

VL_MODULE(VmulAddRecF16_add) {
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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__invalidExc;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__out_isNaN;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__out_isInf;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__out_isZero;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__out_sign;
        CData/*6:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__out_sExp;
        CData/*5:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC;
        CData/*7:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant;
        CData/*6:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum;
        CData/*5:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist;
        CData/*2:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC;
        CData/*1:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut;
        CData/*1:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut;
        CData/*2:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig;
        CData/*1:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask;
        CData/*3:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum;
        CData/*2:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask;
        CData/*4:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__c;
        CData/*1:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut;
        CData/*3:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar;
        CData/*3:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__13__KET____DOT__countSoFar;
        CData/*2:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra;
        CData/*0:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound;
        CData/*7:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp;
        SData/*13:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__out_sig;
        SData/*12:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC;
        SData/*11:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA;
        SData/*11:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC;
        SData/*15:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig;
        SData/*12:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum;
        SData/*15:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig;
        SData/*13:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig;
        SData/*12:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn;
        SData/*13:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn;
        SData/*8:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__c;
        SData/*9:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut;
        SData/*13:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask;
        SData/*11:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main;
        SData/*13:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask;
    };
    struct {
        SData/*12:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig;
        SData/*11:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut;
        IData/*22:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult;
        IData/*16:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c;
        IData/*23:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum;
        IData/*24:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum;
        WData/*64:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[3];
        QData/*37:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC;
        QData/*35:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC;
        QData/*35:0*/ mulAddRecF16_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VmulAddRecF16_add__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VmulAddRecF16_add);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VmulAddRecF16_add(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VmulAddRecF16_add();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VmulAddRecF16_add__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VmulAddRecF16_add__Syms* symsp, bool first);
  private:
    static QData _change_request(VmulAddRecF16_add__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VmulAddRecF16_add__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VmulAddRecF16_add__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VmulAddRecF16_add__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VmulAddRecF16_add__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(VmulAddRecF16_add__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
