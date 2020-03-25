// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VmulAddRecF128_H_
#define _VmulAddRecF128_H_

#include "verilated.h"

class VmulAddRecF128__Syms;

//----------

VL_MODULE(VmulAddRecF128) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(control,0,0);
    VL_IN8(op,1,0);
    VL_IN8(roundingMode,2,0);
    VL_OUT8(exceptionFlags,4,0);
    VL_INW(a,128,0,5);
    VL_INW(b,128,0,5);
    VL_INW(c,128,0,5);
    VL_OUTW(out,128,0,5);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__invalidExc;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__out_isNaN;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__out_isInf;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__out_isZero;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__out_sign;
        CData/*5:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC;
        CData/*6:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar;
        CData/*6:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar;
        CData/*6:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__30__KET____DOT__countSoFar;
        CData/*6:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__40__KET____DOT__countSoFar;
        CData/*6:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__50__KET____DOT__countSoFar;
        CData/*6:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__60__KET____DOT__countSoFar;
        CData/*6:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__70__KET____DOT__countSoFar;
        CData/*6:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__80__KET____DOT__countSoFar;
        CData/*6:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__90__KET____DOT__countSoFar;
        CData/*6:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__100__KET____DOT__countSoFar;
        CData/*6:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__110__KET____DOT__countSoFar;
        CData/*6:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__115__KET____DOT__countSoFar;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra;
        CData/*0:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound;
        SData/*8:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist;
        IData/*16:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__out_sExp;
        WData/*115:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__out_sig[4];
        WData/*114:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC[4];
        WData/*226:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[8];
        WData/*113:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA[4];
        WData/*113:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigB[4];
        WData/*113:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC[4];
        IData/*17:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd;
        IData/*17:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist;
        IData/*16:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum;
        WData/*343:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[11];
        IData/*28:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC;
    };
    struct {
        IData/*27:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask;
        WData/*341:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[11];
        WData/*128:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c[5];
        IData/*27:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut;
        WData/*341:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[11];
        WData/*227:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[8];
        WData/*117:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig[4];
        IData/*28:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig;
        IData/*27:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask;
        WData/*228:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[8];
        WData/*114:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum[4];
        WData/*117:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig[4];
        IData/*28:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum;
        IData/*27:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask;
        WData/*115:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig[4];
        IData/*27:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut;
        WData/*114:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn[4];
        WData/*115:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn[4];
        WData/*64:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__c[3];
        IData/*27:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut;
        WData/*111:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[4];
        WData/*115:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[4];
        WData/*113:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[4];
        WData/*115:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[4];
        WData/*114:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[4];
        IData/*17:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp;
        WData/*65536:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[2049];
        WData/*113:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[4];
        QData/*32:0*/ mulAddRecF128__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__c;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VmulAddRecF128__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VmulAddRecF128);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VmulAddRecF128(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VmulAddRecF128();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VmulAddRecF128__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VmulAddRecF128__Syms* symsp, bool first);
  private:
    static QData _change_request(VmulAddRecF128__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VmulAddRecF128__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VmulAddRecF128__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VmulAddRecF128__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VmulAddRecF128__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(VmulAddRecF128__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
