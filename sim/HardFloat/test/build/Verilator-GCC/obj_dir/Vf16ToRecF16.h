// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vf16ToRecF16_H_
#define _Vf16ToRecF16_H_

#include "verilated.h"

class Vf16ToRecF16__Syms;

//----------

VL_MODULE(Vf16ToRecF16) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN16(in,15,0);
    VL_OUT(out,16,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*5:0*/ f16ToRecF16__DOT__fNToRecFN__DOT__adjustedExp;
    CData/*5:0*/ f16ToRecF16__DOT__fNToRecFN__DOT__exp;
    CData/*3:0*/ f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    SData/*9:0*/ f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn;
    SData/*10:0*/ f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vf16ToRecF16__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vf16ToRecF16);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vf16ToRecF16(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vf16ToRecF16();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vf16ToRecF16__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vf16ToRecF16__Syms* symsp, bool first);
  private:
    static QData _change_request(Vf16ToRecF16__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vf16ToRecF16__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vf16ToRecF16__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vf16ToRecF16__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vf16ToRecF16__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
