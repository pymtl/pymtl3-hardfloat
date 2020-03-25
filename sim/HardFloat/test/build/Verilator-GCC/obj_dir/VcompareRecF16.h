// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VcompareRecF16_H_
#define _VcompareRecF16_H_

#include "verilated.h"

class VcompareRecF16__Syms;

//----------

VL_MODULE(VcompareRecF16) {
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
    VL_IN(a,16,0);
    VL_IN(b,16,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ compareRecF16__DOT__compareRecFN__DOT__ordered;
    CData/*0:0*/ compareRecF16__DOT__compareRecFN__DOT__bothInfs;
    CData/*0:0*/ compareRecF16__DOT__compareRecFN__DOT__bothZeros;
    CData/*0:0*/ compareRecF16__DOT__compareRecFN__DOT__eqExps;
    CData/*0:0*/ compareRecF16__DOT__compareRecFN__DOT__common_ltMags;
    CData/*0:0*/ compareRecF16__DOT__compareRecFN__DOT__common_eqMags;
    CData/*0:0*/ compareRecF16__DOT__compareRecFN__DOT__ordered_lt;
    CData/*0:0*/ compareRecF16__DOT__compareRecFN__DOT__ordered_eq;
    SData/*11:0*/ compareRecF16__DOT__compareRecFN__DOT__sigA;
    SData/*11:0*/ compareRecF16__DOT__compareRecFN__DOT__sigB;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VcompareRecF16__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VcompareRecF16);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VcompareRecF16(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VcompareRecF16();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VcompareRecF16__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VcompareRecF16__Syms* symsp, bool first);
  private:
    static QData _change_request(VcompareRecF16__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VcompareRecF16__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VcompareRecF16__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VcompareRecF16__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VcompareRecF16__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
