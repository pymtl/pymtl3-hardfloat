// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vui32ToRecF128_H_
#define _Vui32ToRecF128_H_

#include "verilated.h"

class Vui32ToRecF128__Syms;

//----------

VL_MODULE(Vui32ToRecF128) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(control,0,0);
    VL_IN8(roundingMode,2,0);
    VL_OUT8(exceptionFlags,4,0);
    VL_IN(in,31,0);
    VL_OUTW(out,128,0,5);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*4:0*/ ui32ToRecF128__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    CData/*4:0*/ ui32ToRecF128__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar;
    CData/*4:0*/ ui32ToRecF128__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar;
    CData/*4:0*/ ui32ToRecF128__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__32__KET____DOT__countSoFar;
    IData/*31:0*/ ui32ToRecF128__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn;
    QData/*32:0*/ ui32ToRecF128__DOT__iNToRecFN__DOT__sig;
    QData/*32:0*/ ui32ToRecF128__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vui32ToRecF128__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vui32ToRecF128);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vui32ToRecF128(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vui32ToRecF128();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vui32ToRecF128__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vui32ToRecF128__Syms* symsp, bool first);
  private:
    static QData _change_request(Vui32ToRecF128__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vui32ToRecF128__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vui32ToRecF128__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vui32ToRecF128__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vui32ToRecF128__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vui32ToRecF128__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
