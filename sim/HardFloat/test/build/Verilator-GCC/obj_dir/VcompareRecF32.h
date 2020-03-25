// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VcompareRecF32_H_
#define _VcompareRecF32_H_

#include "verilated.h"

class VcompareRecF32__Syms;

//----------

VL_MODULE(VcompareRecF32) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(signaling,0,0);
    VL_OUT8(lt,0,0);
    VL_OUT8(eq,0,0);
    VL_OUT8(gt,0,0);
    VL_OUT8(unordered,0,0);
    VL_OUT8(exceptionFlags,4,0);
    VL_IN64(a,32,0);
    VL_IN64(b,32,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ compareRecF32__DOT__compareRecFN__DOT__ordered;
    CData/*0:0*/ compareRecF32__DOT__compareRecFN__DOT__bothInfs;
    CData/*0:0*/ compareRecF32__DOT__compareRecFN__DOT__bothZeros;
    CData/*0:0*/ compareRecF32__DOT__compareRecFN__DOT__eqExps;
    CData/*0:0*/ compareRecF32__DOT__compareRecFN__DOT__common_ltMags;
    CData/*0:0*/ compareRecF32__DOT__compareRecFN__DOT__common_eqMags;
    CData/*0:0*/ compareRecF32__DOT__compareRecFN__DOT__ordered_lt;
    CData/*0:0*/ compareRecF32__DOT__compareRecFN__DOT__ordered_eq;
    IData/*24:0*/ compareRecF32__DOT__compareRecFN__DOT__sigA;
    IData/*24:0*/ compareRecF32__DOT__compareRecFN__DOT__sigB;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VcompareRecF32__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VcompareRecF32);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VcompareRecF32(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VcompareRecF32();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VcompareRecF32__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VcompareRecF32__Syms* symsp, bool first);
  private:
    static QData _change_request(VcompareRecF32__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VcompareRecF32__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VcompareRecF32__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VcompareRecF32__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VcompareRecF32__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
