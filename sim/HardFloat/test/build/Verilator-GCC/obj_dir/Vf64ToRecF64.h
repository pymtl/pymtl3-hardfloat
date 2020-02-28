// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VF64TORECF64_H_
#define _VF64TORECF64_H_  // guard

#include "verilated.h"

class Vf64ToRecF64__Syms;

//----------

VL_MODULE(Vf64ToRecF64) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_OUTW(out,64,0,3);
    VL_IN64(in,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*5:0*/ f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    CData/*5:0*/ f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar;
    CData/*5:0*/ f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar;
    CData/*5:0*/ f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__40__KET____DOT__countSoFar;
    CData/*5:0*/ f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__50__KET____DOT__countSoFar;
    CData/*5:0*/ f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__52__KET____DOT__countSoFar;
    SData/*11:0*/ f64ToRecF64__DOT__fNToRecFN__DOT__adjustedExp;
    SData/*11:0*/ f64ToRecF64__DOT__fNToRecFN__DOT__exp;
    QData/*51:0*/ f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn;
    QData/*52:0*/ f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vf64ToRecF64__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vf64ToRecF64);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vf64ToRecF64(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vf64ToRecF64();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vf64ToRecF64__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vf64ToRecF64__Syms* symsp, bool first);
  private:
    static QData _change_request(Vf64ToRecF64__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vf64ToRecF64__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vf64ToRecF64__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vf64ToRecF64__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vf64ToRecF64__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif  // guard
