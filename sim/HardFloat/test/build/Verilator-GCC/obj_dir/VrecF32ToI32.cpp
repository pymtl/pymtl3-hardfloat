// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecF32ToI32.h for the primary calling header

#include "VrecF32ToI32.h"
#include "VrecF32ToI32__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VrecF32ToI32) {
    VrecF32ToI32__Syms* __restrict vlSymsp = __VlSymsp = new VrecF32ToI32__Syms(this, name());
    VrecF32ToI32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VrecF32ToI32::__Vconfigure(VrecF32ToI32__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VrecF32ToI32::~VrecF32ToI32() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VrecF32ToI32::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecF32ToI32::eval\n"); );
    VrecF32ToI32__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecF32ToI32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/recFNToIN_spec.v", 125, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VrecF32ToI32::_eval_initial_loop(VrecF32ToI32__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/recFNToIN_spec.v", 125, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VrecF32ToI32::_combo__TOP__1(VrecF32ToI32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToI32::_combo__TOP__1\n"); );
    VrecF32ToI32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__invalidExc 
        = (((3U == (3U & ((IData)((vlTOPp->in >> 0x17U)) 
                          >> 7U))) & (IData)((vlTOPp->in 
                                              >> 0x1dU))) 
           | ((3U == (3U & ((IData)((vlTOPp->in >> 0x17U)) 
                            >> 7U))) & (~ (IData)((vlTOPp->in 
                                                   >> 0x1dU)))));
    vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->in >> 0x17U)) 
                     >> 8U))) & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->in 
                                                            >> 0x17U)))));
    vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__shiftedSig 
        = ((0x37U >= ((0x100U & (IData)((vlTOPp->in 
                                         >> 0x17U)))
                       ? (0x1fU & (IData)((vlTOPp->in 
                                           >> 0x17U)))
                       : 0U)) ? (VL_ULL(0xffffffffffffff) 
                                 & ((QData)((IData)(
                                                    ((0x800000U 
                                                      & ((IData)(
                                                                 (vlTOPp->in 
                                                                  >> 0x17U)) 
                                                         << 0xfU)) 
                                                     | (0x7fffffU 
                                                        & (IData)(vlTOPp->in))))) 
                                    << ((0x100U & (IData)(
                                                          (vlTOPp->in 
                                                           >> 0x17U)))
                                         ? (0x1fU & (IData)(
                                                            (vlTOPp->in 
                                                             >> 0x17U)))
                                         : 0U))) : VL_ULL(0));
    vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__shiftedSig 
                                   >> 0x15U)) | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffU 
                                                                  & (IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__shiftedSig))))));
    vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__complUnroundedInt 
        = ((1U & (IData)((vlTOPp->in >> 0x20U))) ? 
           (~ (IData)((vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__alignedSig 
                       >> 2U))) : (IData)((vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__alignedSig 
                                           >> 2U)));
    vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__common_inexact 
        = ((0x100U & (IData)((vlTOPp->in >> 0x17U)))
            ? (0U != (3U & (IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__alignedSig)))
            : (0U != (7U & ((IData)((vlTOPp->in >> 0x17U)) 
                            >> 6U))));
    vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__roundIncr 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              & ((1U & (((IData)((vlTOPp->in >> 0x17U)) 
                         >> 8U) & ((3U == (3U & (IData)(
                                                        (vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__alignedSig 
                                                         >> 1U)))) 
                                   | (3U == (3U & (IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__alignedSig)))))) 
                 | ((IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__magJustBelowOne) 
                    & (0U != (3U & (IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__alignedSig)))))) 
             | ((4U == (IData)(vlTOPp->roundingMode)) 
                & ((1U & (((IData)((vlTOPp->in >> 0x17U)) 
                           >> 8U) & (IData)((vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__alignedSig 
                                             >> 1U)))) 
                   | (IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__magJustBelowOne)))) 
            | (((2U == (IData)(vlTOPp->roundingMode)) 
                | (6U == (IData)(vlTOPp->roundingMode))) 
               & ((IData)((vlTOPp->in >> 0x20U)) & (IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__common_inexact)))) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & ((~ (IData)((vlTOPp->in >> 0x20U))) 
                 & (IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__common_inexact))));
    vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__common_overflow 
        = (1U & (((IData)((vlTOPp->in >> 0x17U)) >> 8U) 
                 & ((0x20U <= (0xffU & (IData)((vlTOPp->in 
                                                >> 0x17U)))) 
                    | ((1U & (IData)((vlTOPp->in >> 0x20U)))
                        ? ((0x1fU == (0xffU & (IData)(
                                                      (vlTOPp->in 
                                                       >> 0x17U)))) 
                           & ((0U != (0x7fffffffU & (IData)(
                                                            (vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__alignedSig 
                                                             >> 2U)))) 
                              | (IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__roundIncr)))
                        : ((0x1fU == (0xffU & (IData)(
                                                      (vlTOPp->in 
                                                       >> 0x17U)))) 
                           | ((0x1eU == (0xffU & (IData)(
                                                         (vlTOPp->in 
                                                          >> 0x17U)))) 
                              & ((0x3fffffffU == (0x3fffffffU 
                                                  & (IData)(
                                                            (vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__alignedSig 
                                                             >> 2U)))) 
                                 & (IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__roundIncr))))))));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__invalidExc) 
                               << 2U) | ((((~ (IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__invalidExc)) 
                                           & (IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__common_overflow)) 
                                          << 1U) | 
                                         (((~ (IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__invalidExc)) 
                                           & (~ (IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__common_overflow))) 
                                          & (IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__common_inexact))));
    vlTOPp->out = (((IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__invalidExc) 
                    | (IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__common_overflow))
                    ? 0x80000000U : (((1U & ((IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__roundIncr) 
                                             ^ (IData)(
                                                       (vlTOPp->in 
                                                        >> 0x20U))))
                                       ? ((IData)(1U) 
                                          + vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__complUnroundedInt)
                                       : vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__complUnroundedInt) 
                                     | ((6U == (IData)(vlTOPp->roundingMode)) 
                                        & (IData)(vlTOPp->recF32ToI32__DOT__recFNToIN__DOT__common_inexact))));
}

void VrecF32ToI32::_eval(VrecF32ToI32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToI32::_eval\n"); );
    VrecF32ToI32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VrecF32ToI32::_eval_initial(VrecF32ToI32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToI32::_eval_initial\n"); );
    VrecF32ToI32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF32ToI32::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToI32::final\n"); );
    // Variables
    VrecF32ToI32__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecF32ToI32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF32ToI32::_eval_settle(VrecF32ToI32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToI32::_eval_settle\n"); );
    VrecF32ToI32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VrecF32ToI32::_change_request(VrecF32ToI32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToI32::_change_request\n"); );
    VrecF32ToI32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecF32ToI32::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToI32::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((in & VL_ULL(0)))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif  // VL_DEBUG

void VrecF32ToI32::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToI32::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_Q(33);
    roundingMode = VL_RAND_RESET_I(3);
    out = VL_RAND_RESET_I(32);
    exceptionFlags = VL_RAND_RESET_I(3);
    recF32ToI32__DOT__recFNToIN__DOT__magJustBelowOne = VL_RAND_RESET_I(1);
    recF32ToI32__DOT__recFNToIN__DOT__shiftedSig = VL_RAND_RESET_Q(56);
    recF32ToI32__DOT__recFNToIN__DOT__alignedSig = VL_RAND_RESET_Q(34);
    recF32ToI32__DOT__recFNToIN__DOT__common_inexact = VL_RAND_RESET_I(1);
    recF32ToI32__DOT__recFNToIN__DOT__roundIncr = VL_RAND_RESET_I(1);
    recF32ToI32__DOT__recFNToIN__DOT__complUnroundedInt = VL_RAND_RESET_I(32);
    recF32ToI32__DOT__recFNToIN__DOT__common_overflow = VL_RAND_RESET_I(1);
    recF32ToI32__DOT__recFNToIN__DOT__invalidExc = VL_RAND_RESET_I(1);
}
