// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi64ToRecF32.h for the primary calling header

#include "Vi64ToRecF32.h"
#include "Vi64ToRecF32__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vi64ToRecF32) {
    Vi64ToRecF32__Syms* __restrict vlSymsp = __VlSymsp = new Vi64ToRecF32__Syms(this, name());
    Vi64ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vi64ToRecF32::__Vconfigure(Vi64ToRecF32__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vi64ToRecF32::~Vi64ToRecF32() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vi64ToRecF32::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vi64ToRecF32::eval\n"); );
    Vi64ToRecF32__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vi64ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../../source/iNToRecFN_spec.v", 223, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vi64ToRecF32::_eval_initial_loop(Vi64ToRecF32__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../../source/iNToRecFN_spec.v", 223, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vi64ToRecF32::_combo__TOP__1(Vi64ToRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi64ToRecF32::_combo__TOP__1\n"); );
    Vi64ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2[3];
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp4[3];
    WData/*95:0*/ __Vtemp7[3];
    WData/*95:0*/ __Vtemp8[3];
    // Body
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(
                                                            (vlTOPp->in 
                                                             >> 0x3fU))) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)((vlTOPp->in >> 0x3fU)))));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
        = ((1U & (IData)((vlTOPp->in >> 0x3fU))) ? 
           VL_NEGATE_Q(vlTOPp->in) : vlTOPp->in);
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffffffe) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (IData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                            >> 0x3fU))))));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffffffd) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x3eU))))) 
              << 1U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffffffb) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x3dU))))) 
              << 2U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffffff7) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x3cU))))) 
              << 3U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffffef) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x3bU))))) 
              << 4U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffffdf) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x3aU))))) 
              << 5U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffffbf) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x39U))))) 
              << 6U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffff7f) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x38U))))) 
              << 7U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffffeff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x37U))))) 
              << 8U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffffdff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x36U))))) 
              << 9U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffffbff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x35U))))) 
              << 0xaU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffff7ff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x34U))))) 
              << 0xbU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffefff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x33U))))) 
              << 0xcU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffdfff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x32U))))) 
              << 0xdU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffbfff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x31U))))) 
              << 0xeU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffff7fff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x30U))))) 
              << 0xfU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffeffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x2fU))))) 
              << 0x10U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffdffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x2eU))))) 
              << 0x11U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffbffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x2dU))))) 
              << 0x12U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffff7ffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x2cU))))) 
              << 0x13U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffefffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x2bU))))) 
              << 0x14U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffdfffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x2aU))))) 
              << 0x15U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffbfffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x29U))))) 
              << 0x16U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffff7fffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x28U))))) 
              << 0x17U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffeffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x27U))))) 
              << 0x18U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffdffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x26U))))) 
              << 0x19U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffbffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x25U))))) 
              << 0x1aU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffff7ffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x24U))))) 
              << 0x1bU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffefffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x23U))))) 
              << 0x1cU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffdfffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x22U))))) 
              << 0x1dU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffbfffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x21U))))) 
              << 0x1eU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffff7fffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x20U))))) 
              << 0x1fU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffeffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x1fU))))) 
              << 0x20U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffdffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x1eU))))) 
              << 0x21U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffbffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x1dU))))) 
              << 0x22U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffff7ffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x1cU))))) 
              << 0x23U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffefffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x1bU))))) 
              << 0x24U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffdfffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x1aU))))) 
              << 0x25U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffbfffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x19U))))) 
              << 0x26U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffff7fffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x18U))))) 
              << 0x27U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffeffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x17U))))) 
              << 0x28U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffdffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x16U))))) 
              << 0x29U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffbffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x15U))))) 
              << 0x2aU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffff7ffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x14U))))) 
              << 0x2bU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffefffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x13U))))) 
              << 0x2cU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffdfffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x12U))))) 
              << 0x2dU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffbfffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x11U))))) 
              << 0x2eU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffff7fffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0x10U))))) 
              << 0x2fU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffeffffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0xfU))))) 
              << 0x30U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffdffffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0xeU))))) 
              << 0x31U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffbffffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0xdU))))) 
              << 0x32U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfff7ffffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0xcU))))) 
              << 0x33U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffefffffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0xbU))))) 
              << 0x34U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffdfffffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 0xaU))))) 
              << 0x35U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffbfffffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 9U))))) 
              << 0x36U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xff7fffffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 8U))))) 
              << 0x37U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfeffffffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 7U))))) 
              << 0x38U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfdffffffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 6U))))) 
              << 0x39U));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfbffffffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 5U))))) 
              << 0x3aU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xf7ffffffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 4U))))) 
              << 0x3bU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xefffffffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 3U))))) 
              << 0x3cU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xdfffffffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 2U))))) 
              << 0x3dU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xbfffffffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                                             >> 1U))))) 
              << 0x3eU));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffffffffff) & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)(vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn)))) 
              << 0x3fU));
    __Vtemp2[0U] = 1U;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp3, (~ vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn));
    VL_ADD_W(3, __Vtemp4, __Vtemp2, __Vtemp3);
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U] 
        = ((IData)(vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           & __Vtemp4[0U]);
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U] 
        = ((IData)((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
                    >> 0x20U)) & __Vtemp4[1U]);
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U] 
        = (1U & __Vtemp4[2U]);
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((2U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                              ? 1U : 0U) | ((4U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                             ? 2U : 0U)) 
                           | ((8U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                               ? 3U : 0U)) | ((0x10U 
                                               & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                             ? 5U : 0U)) | ((0x40U 
                                             & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                             ? 6U : 0U)) 
                       | ((0x80U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                           ? 7U : 0U)) | ((0x100U & 
                                           vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                           ? 8U : 0U)) 
                     | ((0x200U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                         ? 9U : 0U)) | ((0x400U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                         ? 0xaU : 0U)));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((0x800U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                 ? 0xbU : 0U)) | ((0x1000U 
                                                   & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((0x2000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                               ? 0xdU : 0U)) | ((0x4000U 
                                                 & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((0x8000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                             ? 0xfU : 0U)) | ((0x10000U 
                                               & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                               ? 0x10U
                                               : 0U)) 
                       | ((0x20000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                           ? 0x11U : 0U)) | ((0x40000U 
                                              & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                              ? 0x12U
                                              : 0U)) 
                     | ((0x80000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                         ? 0x13U : 0U)) | ((0x100000U 
                                            & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                            ? 0x14U
                                            : 0U)));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                             | ((0x200000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                 ? 0x15U : 0U)) | (
                                                   (0x400000U 
                                                    & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                                    ? 0x16U
                                                    : 0U)) 
                           | ((0x800000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                               ? 0x17U : 0U)) | ((0x1000000U 
                                                  & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                                  ? 0x18U
                                                  : 0U)) 
                         | ((0x2000000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                             ? 0x19U : 0U)) | ((0x4000000U 
                                                & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                                ? 0x1aU
                                                : 0U)) 
                       | ((0x8000000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                           ? 0x1bU : 0U)) | ((0x10000000U 
                                              & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                              ? 0x1cU
                                              : 0U)) 
                     | ((0x20000000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                         ? 0x1dU : 0U)) | ((0x40000000U 
                                            & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                            ? 0x1eU
                                            : 0U)));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__40__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar) 
                             | ((0x80000000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                 ? 0x1fU : 0U)) | (
                                                   (1U 
                                                    & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                    ? 0x20U
                                                    : 0U)) 
                           | ((2U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                               ? 0x21U : 0U)) | ((4U 
                                                  & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                  ? 0x22U
                                                  : 0U)) 
                         | ((8U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                             ? 0x23U : 0U)) | ((0x10U 
                                                & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                ? 0x24U
                                                : 0U)) 
                       | ((0x20U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                           ? 0x25U : 0U)) | ((0x40U 
                                              & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                              ? 0x26U
                                              : 0U)) 
                     | ((0x80U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                         ? 0x27U : 0U)) | ((0x100U 
                                            & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                            ? 0x28U
                                            : 0U)));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__50__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__40__KET____DOT__countSoFar) 
                             | ((0x200U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                 ? 0x29U : 0U)) | (
                                                   (0x400U 
                                                    & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                    ? 0x2aU
                                                    : 0U)) 
                           | ((0x800U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                               ? 0x2bU : 0U)) | ((0x1000U 
                                                  & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                  ? 0x2cU
                                                  : 0U)) 
                         | ((0x2000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                             ? 0x2dU : 0U)) | ((0x4000U 
                                                & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                ? 0x2eU
                                                : 0U)) 
                       | ((0x8000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                           ? 0x2fU : 0U)) | ((0x10000U 
                                              & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                              ? 0x30U
                                              : 0U)) 
                     | ((0x20000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                         ? 0x31U : 0U)) | ((0x40000U 
                                            & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                            ? 0x32U
                                            : 0U)));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__60__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__50__KET____DOT__countSoFar) 
                             | ((0x80000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                 ? 0x33U : 0U)) | (
                                                   (0x100000U 
                                                    & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                    ? 0x34U
                                                    : 0U)) 
                           | ((0x200000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                               ? 0x35U : 0U)) | ((0x400000U 
                                                  & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                  ? 0x36U
                                                  : 0U)) 
                         | ((0x800000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                             ? 0x37U : 0U)) | ((0x1000000U 
                                                & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                ? 0x38U
                                                : 0U)) 
                       | ((0x2000000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                           ? 0x39U : 0U)) | ((0x4000000U 
                                              & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                              ? 0x3aU
                                              : 0U)) 
                     | ((0x8000000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                         ? 0x3bU : 0U)) | ((0x10000000U 
                                            & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                            ? 0x3cU
                                            : 0U)));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__64__KET____DOT__countSoFar 
        = (0x3fU & (((((IData)(vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__60__KET____DOT__countSoFar) 
                       | ((0x20000000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                           ? 0x3dU : 0U)) | ((0x40000000U 
                                              & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                              ? 0x3eU
                                              : 0U)) 
                     | ((0x80000000U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                         ? 0x3fU : 0U)) | ((1U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                            ? 0x40U
                                            : 0U)));
    VL_EXTEND_WQ(65,64, __Vtemp7, vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn);
    VL_SHIFTL_WWI(65,65,6, __Vtemp8, __Vtemp7, (IData)(vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__64__KET____DOT__countSoFar));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__sig[0U] 
        = __Vtemp8[0U];
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__sig[1U] 
        = __Vtemp8[1U];
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__sig[2U] 
        = (1U & __Vtemp8[2U]);
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig 
        = ((0x7fffffeU & ((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__sig[2U] 
                           << 0x1aU) | (0x3fffffeU 
                                        & (vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__sig[1U] 
                                           >> 6U)))) 
           | (0U != (VL_ULL(0x7fffffffff) & (((QData)((IData)(
                                                              vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__sig[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__sig[0U]))))));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__anyRound 
        = ((0U != (2U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig)) 
           | (0U != (1U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig)));
    vlTOPp->exceptionFlags = ((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__sig[1U] 
                               >> 0x1fU) & (IData)(vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__anyRound));
    vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                            | (4U == (IData)(vlTOPp->roundingMode))) 
                           & (0U != (2U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig))) 
                          | ((IData)(vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__roundMagUp) 
                             & (IData)(vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__anyRound)))
                          ? (((IData)(1U) + (vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig 
                                             >> 2U)) 
                             & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                     & (0U != (2U & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig))) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  (1U 
                                                   & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig)))))
                                    ? 1U : 0U))) : 
                         ((0x3fffffffU & (vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig 
                                          >> 2U)) | 
                          (((6U == (IData)(vlTOPp->roundingMode)) 
                            & (IData)(vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__anyRound))
                            ? 1U : 0U))));
    vlTOPp->out = (((QData)((IData)((1U & (IData)((vlTOPp->in 
                                                   >> 0x3fU))))) 
                    << 0x20U) | (QData)((IData)(((0xff800000U 
                                                  & ((((0x3ffU 
                                                        & VL_EXTENDS_II(10,9, 
                                                                        (0x1ffU 
                                                                         & ((IData)(0x80U) 
                                                                            + 
                                                                            VL_EXTENDS_II(9,9, 
                                                                                (0x80U 
                                                                                | (0x3fU 
                                                                                & (~ (IData)(vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__64__KET____DOT__countSoFar))))))))) 
                                                       + 
                                                       (0x3ffffffU 
                                                        & (vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__roundedSig 
                                                           >> 0x18U))) 
                                                      & (~ 
                                                         ((0x80000000U 
                                                           & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__sig[1U])
                                                           ? 0U
                                                           : 0x1c0U))) 
                                                     << 0x17U)) 
                                                 | ((0x400000U 
                                                     & ((vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__sig[1U] 
                                                         >> 9U) 
                                                        & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__roundedSig)) 
                                                    | ((0x80000000U 
                                                        & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__sig[1U])
                                                        ? 
                                                       (0x3fffffU 
                                                        & vlTOPp->i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__roundedSig)
                                                        : 0U))))));
}

void Vi64ToRecF32::_eval(Vi64ToRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi64ToRecF32::_eval\n"); );
    Vi64ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vi64ToRecF32::_eval_initial(Vi64ToRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi64ToRecF32::_eval_initial\n"); );
    Vi64ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vi64ToRecF32::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi64ToRecF32::final\n"); );
    // Variables
    Vi64ToRecF32__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vi64ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vi64ToRecF32::_eval_settle(Vi64ToRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi64ToRecF32::_eval_settle\n"); );
    Vi64ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vi64ToRecF32::_change_request(Vi64ToRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi64ToRecF32::_change_request\n"); );
    Vi64ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vi64ToRecF32::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi64ToRecF32::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif // VL_DEBUG

void Vi64ToRecF32::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi64ToRecF32::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_Q(64);
    roundingMode = VL_RAND_RESET_I(3);
    out = VL_RAND_RESET_Q(33);
    exceptionFlags = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(65, i64ToRecF32__DOT__iNToRecFN__DOT__sig);
    i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn = VL_RAND_RESET_Q(64);
    i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn);
    i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__40__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__50__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__60__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    i64ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__64__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__roundMagUp = VL_RAND_RESET_I(1);
    i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig = VL_RAND_RESET_I(27);
    i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    i64ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_I(26);
}
