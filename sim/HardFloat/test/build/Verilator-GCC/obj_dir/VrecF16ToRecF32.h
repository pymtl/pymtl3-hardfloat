// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRECF16TORECF32_H_
#define _VRECF16TORECF32_H_  // guard

#include "verilated.h"

class VrecF16ToRecF32__Syms;

//----------

VL_MODULE(VrecF16ToRecF32) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(control,0,0);
    VL_IN8(roundingMode,2,0);
    VL_OUT8(exceptionFlags,4,0);
    VL_IN(in,16,0);
    VL_OUT64(out,32,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ recF16ToRecF32__DOT__recFNToRecFN__DOT__isInf;
    CData/*0:0*/ recF16ToRecF32__DOT__recFNToRecFN__DOT__isSigNaN;
    CData/*0:0*/ recF16ToRecF32__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VrecF16ToRecF32__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VrecF16ToRecF32);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VrecF16ToRecF32(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VrecF16ToRecF32();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VrecF16ToRecF32__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VrecF16ToRecF32__Syms* symsp, bool first);
  private:
    static QData _change_request(VrecF16ToRecF32__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VrecF16ToRecF32__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VrecF16ToRecF32__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VrecF16ToRecF32__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VrecF16ToRecF32__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif  // guard
