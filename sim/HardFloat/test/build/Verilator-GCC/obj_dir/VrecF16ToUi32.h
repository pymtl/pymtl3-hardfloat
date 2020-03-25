// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VrecF16ToUi32_H_
#define _VrecF16ToUi32_H_

#include "verilated.h"

class VrecF16ToUi32__Syms;

//----------

VL_MODULE(VrecF16ToUi32) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(control,0,0);
    VL_IN8(roundingMode,2,0);
    VL_OUT8(exceptionFlags,2,0);
    VL_IN(in,16,0);
    VL_OUT(out,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ recF16ToUi32__DOT__recFNToIN__DOT__magJustBelowOne;
    CData/*0:0*/ recF16ToUi32__DOT__recFNToIN__DOT__common_inexact;
    CData/*0:0*/ recF16ToUi32__DOT__recFNToIN__DOT__roundIncr;
    CData/*0:0*/ recF16ToUi32__DOT__recFNToIN__DOT__common_overflow;
    CData/*0:0*/ recF16ToUi32__DOT__recFNToIN__DOT__invalidExc;
    IData/*31:0*/ recF16ToUi32__DOT__recFNToIN__DOT__complUnroundedInt;
    QData/*42:0*/ recF16ToUi32__DOT__recFNToIN__DOT__shiftedSig;
    QData/*33:0*/ recF16ToUi32__DOT__recFNToIN__DOT__alignedSig;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VrecF16ToUi32__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VrecF16ToUi32);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VrecF16ToUi32(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VrecF16ToUi32();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VrecF16ToUi32__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VrecF16ToUi32__Syms* symsp, bool first);
  private:
    static QData _change_request(VrecF16ToUi32__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VrecF16ToUi32__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VrecF16ToUi32__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VrecF16ToUi32__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VrecF16ToUi32__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
