// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRECFNTOFN__EXPWIDTH_8__SIGWIDTH_23_H_
#define _VRECFNTOFN__EXPWIDTH_8__SIGWIDTH_23_H_  // guard

#include "verilated.h"

class VRecFNToFN__expWidth_8__sigWidth_23__Syms;

//----------

VL_MODULE(VRecFNToFN__expWidth_8__sigWidth_23) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    VL_IN(in_,31,0);
    VL_OUT(out,30,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ RecFNToFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__isInf;
    IData/*23:0*/ RecFNToFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__sig;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VRecFNToFN__expWidth_8__sigWidth_23__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VRecFNToFN__expWidth_8__sigWidth_23);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VRecFNToFN__expWidth_8__sigWidth_23(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VRecFNToFN__expWidth_8__sigWidth_23();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VRecFNToFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VRecFNToFN__expWidth_8__sigWidth_23__Syms* symsp, bool first);
  private:
    static QData _change_request(VRecFNToFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VRecFNToFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VRecFNToFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VRecFNToFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VRecFNToFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif  // guard
