// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VF128TORECF128_H_
#define _VF128TORECF128_H_  // guard

#include "verilated.h"

class Vf128ToRecF128__Syms;

//----------

VL_MODULE(Vf128ToRecF128) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_INW(in,127,0,4);
    VL_OUTW(out,128,0,5);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*6:0*/ f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    CData/*6:0*/ f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar;
    CData/*6:0*/ f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar;
    CData/*6:0*/ f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__40__KET____DOT__countSoFar;
    CData/*6:0*/ f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__50__KET____DOT__countSoFar;
    CData/*6:0*/ f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__60__KET____DOT__countSoFar;
    CData/*6:0*/ f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__70__KET____DOT__countSoFar;
    CData/*6:0*/ f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__80__KET____DOT__countSoFar;
    CData/*6:0*/ f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__90__KET____DOT__countSoFar;
    CData/*6:0*/ f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__100__KET____DOT__countSoFar;
    CData/*6:0*/ f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__110__KET____DOT__countSoFar;
    CData/*6:0*/ f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__112__KET____DOT__countSoFar;
    SData/*15:0*/ f128ToRecF128__DOT__fNToRecFN__DOT__adjustedExp;
    SData/*15:0*/ f128ToRecF128__DOT__fNToRecFN__DOT__exp;
    WData/*111:0*/ f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[4];
    WData/*112:0*/ f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[4];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vf128ToRecF128__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vf128ToRecF128);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vf128ToRecF128(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vf128ToRecF128();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vf128ToRecF128__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vf128ToRecF128__Syms* symsp, bool first);
  private:
    static QData _change_request(Vf128ToRecF128__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vf128ToRecF128__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vf128ToRecF128__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vf128ToRecF128__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vf128ToRecF128__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif  // guard
