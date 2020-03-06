// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VFNTORECFN__EXPWIDTH_5__SIGWIDTH_11_H_
#define _VFNTORECFN__EXPWIDTH_5__SIGWIDTH_11_H_  // guard

#include "verilated.h"

class VfNToRecFN__expWidth_5__sigWidth_11__Syms;

//----------

VL_MODULE(VfNToRecFN__expWidth_5__sigWidth_11) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    VL_IN16(in_,15,0);
    VL_OUT(out,16,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*5:0*/ fNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__adjustedExp;
    CData/*5:0*/ fNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__exp;
    CData/*3:0*/ fNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    SData/*9:0*/ fNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn;
    SData/*10:0*/ fNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VfNToRecFN__expWidth_5__sigWidth_11__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VfNToRecFN__expWidth_5__sigWidth_11);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VfNToRecFN__expWidth_5__sigWidth_11(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VfNToRecFN__expWidth_5__sigWidth_11();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VfNToRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VfNToRecFN__expWidth_5__sigWidth_11__Syms* symsp, bool first);
  private:
    static QData _change_request(VfNToRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VfNToRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VfNToRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VfNToRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VfNToRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif  // guard
