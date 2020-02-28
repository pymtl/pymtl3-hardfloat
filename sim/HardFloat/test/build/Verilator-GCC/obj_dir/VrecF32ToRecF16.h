// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRECF32TORECF16_H_
#define _VRECF32TORECF16_H_  // guard

#include "verilated.h"

class VrecF32ToRecF16__Syms;

//----------

VL_MODULE(VrecF32ToRecF16) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(control,0,0);
    VL_IN8(roundingMode,2,0);
    VL_OUT8(exceptionFlags,4,0);
    VL_OUT(out,16,0);
    VL_IN64(in,32,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__isInf;
    CData/*0:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__isSigNaN;
    CData/*0:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp;
    CData/*0:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut;
    CData/*0:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase;
    CData/*0:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow;
    CData/*0:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp;
    CData/*0:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut;
    CData/*0:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut;
    CData/*0:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut;
    CData/*0:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit;
    CData/*0:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra;
    CData/*0:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound;
    SData/*13:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig;
    SData/*11:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main;
    SData/*13:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask;
    SData/*12:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig;
    SData/*11:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp;
    SData/*11:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut;
    IData/*24:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__sigIn;
    WData/*64:0*/ recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[3];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VrecF32ToRecF16__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VrecF32ToRecF16);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VrecF32ToRecF16(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VrecF32ToRecF16();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VrecF32ToRecF16__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VrecF32ToRecF16__Syms* symsp, bool first);
  private:
    static QData _change_request(VrecF32ToRecF16__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VrecF32ToRecF16__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VrecF32ToRecF16__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VrecF32ToRecF16__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VrecF32ToRecF16__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(VrecF32ToRecF16__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif  // guard
