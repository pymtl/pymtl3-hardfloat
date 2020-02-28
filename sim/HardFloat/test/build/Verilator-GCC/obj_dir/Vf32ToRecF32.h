// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VF32TORECF32_H_
#define _VF32TORECF32_H_  // guard

#include "verilated.h"

class Vf32ToRecF32__Syms;

//----------

VL_MODULE(Vf32ToRecF32) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN(in,31,0);
    VL_OUT64(out,32,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*4:0*/ f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    CData/*4:0*/ f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar;
    CData/*4:0*/ f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar;
    SData/*8:0*/ f32ToRecF32__DOT__fNToRecFN__DOT__adjustedExp;
    SData/*8:0*/ f32ToRecF32__DOT__fNToRecFN__DOT__exp;
    IData/*22:0*/ f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn;
    IData/*23:0*/ f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vf32ToRecF32__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vf32ToRecF32);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vf32ToRecF32(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vf32ToRecF32();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vf32ToRecF32__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vf32ToRecF32__Syms* symsp, bool first);
  private:
    static QData _change_request(Vf32ToRecF32__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vf32ToRecF32__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vf32ToRecF32__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vf32ToRecF32__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vf32ToRecF32__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif  // guard
