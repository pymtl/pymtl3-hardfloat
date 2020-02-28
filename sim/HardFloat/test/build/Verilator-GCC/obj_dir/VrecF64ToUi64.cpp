// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecF64ToUi64.h for the primary calling header

#include "VrecF64ToUi64.h"
#include "VrecF64ToUi64__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VrecF64ToUi64) {
    VrecF64ToUi64__Syms* __restrict vlSymsp = __VlSymsp = new VrecF64ToUi64__Syms(this, name());
    VrecF64ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VrecF64ToUi64::__Vconfigure(VrecF64ToUi64__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VrecF64ToUi64::~VrecF64ToUi64() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VrecF64ToUi64::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecF64ToUi64::eval\n"); );
    VrecF64ToUi64__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecF64ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/recFNToIN_spec.v", 167, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VrecF64ToUi64::_eval_initial_loop(VrecF64ToUi64__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/recFNToIN_spec.v", 167, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VrecF64ToUi64::_combo__TOP__1(VrecF64ToUi64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToUi64::_combo__TOP__1\n"); );
    VrecF64ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp2[4];
    WData/*127:0*/ __Vtemp3[4];
    // Body
    vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__invalidExc 
        = (((3U == (3U & ((0x3ffffcU & (vlTOPp->in[2U] 
                                        << 2U)) | (
                                                   vlTOPp->in[1U] 
                                                   >> 0x1eU)))) 
            & (vlTOPp->in[1U] >> 0x1dU)) | ((3U == 
                                             (3U & 
                                              ((0x3ffffcU 
                                                & (vlTOPp->in[2U] 
                                                   << 2U)) 
                                               | (vlTOPp->in[1U] 
                                                  >> 0x1eU)))) 
                                            & (~ (vlTOPp->in[1U] 
                                                  >> 0x1dU))));
    vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__magJustBelowOne 
        = ((~ (1U & ((0x1ffffeU & (vlTOPp->in[2U] << 1U)) 
                     | (vlTOPp->in[1U] >> 0x1fU)))) 
           & (0x7ffU == (0x7ffU & ((vlTOPp->in[2U] 
                                    << 0xcU) | (vlTOPp->in[1U] 
                                                >> 0x14U)))));
    VL_EXTEND_WQ(117,53, __Vtemp2, (((QData)((IData)(
                                                     (1U 
                                                      & ((0x1ffffeU 
                                                          & (vlTOPp->in[2U] 
                                                             << 1U)) 
                                                         | (vlTOPp->in[1U] 
                                                            >> 0x1fU))))) 
                                     << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->in[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->in[0U]))))));
    VL_SHIFTL_WWI(117,117,32, __Vtemp3, __Vtemp2, (
                                                   (1U 
                                                    & ((0x1ffffeU 
                                                        & (vlTOPp->in[2U] 
                                                           << 1U)) 
                                                       | (vlTOPp->in[1U] 
                                                          >> 0x1fU)))
                                                    ? 
                                                   (0x3fU 
                                                    & ((vlTOPp->in[2U] 
                                                        << 0xcU) 
                                                       | (vlTOPp->in[1U] 
                                                          >> 0x14U)))
                                                    : 0U));
    vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__shiftedSig[0U] 
        = __Vtemp3[0U];
    vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__shiftedSig[1U] 
        = __Vtemp3[1U];
    vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__shiftedSig[2U] 
        = __Vtemp3[2U];
    vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__shiftedSig[3U] 
        = (0x1fffffU & __Vtemp3[3U]);
    vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[0U] 
        = ((0xfffffffeU & ((vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__shiftedSig[2U] 
                            << 0xeU) | (0x3ffeU & (
                                                   vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__shiftedSig[1U] 
                                                   >> 0x12U)))) 
           | (0U != (VL_ULL(0x7ffffffffffff) & (((QData)((IData)(
                                                                 vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__shiftedSig[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__shiftedSig[0U]))))));
    vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[1U] 
        = ((1U & (vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__shiftedSig[2U] 
                  >> 0x12U)) | (0xfffffffeU & ((vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__shiftedSig[3U] 
                                                << 0xeU) 
                                               | (0x3ffeU 
                                                  & (vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__shiftedSig[2U] 
                                                     >> 0x12U)))));
    vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[2U] 
        = ((1U & (vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__shiftedSig[3U] 
                  >> 0x12U)) | (2U & (vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__shiftedSig[3U] 
                                      >> 0x12U)));
    vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__complUnroundedInt 
        = ((1U & vlTOPp->in[2U]) ? (~ (((QData)((IData)(
                                                        vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[2U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[1U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[0U])) 
                                           >> 2U))))
            : (((QData)((IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[2U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[1U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[0U])) 
                                           >> 2U))));
    vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__common_inexact 
        = ((1U & ((0x1ffffeU & (vlTOPp->in[2U] << 1U)) 
                  | (vlTOPp->in[1U] >> 0x1fU))) ? (0U 
                                                   != 
                                                   (3U 
                                                    & vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[0U]))
            : (0U != (7U & ((0x7ffff8U & (vlTOPp->in[2U] 
                                          << 3U)) | 
                            (vlTOPp->in[1U] >> 0x1dU)))));
    vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__roundIncr 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              & ((1U & (((0x1ffffeU & (vlTOPp->in[2U] 
                                       << 1U)) | (vlTOPp->in[1U] 
                                                  >> 0x1fU)) 
                        & ((3U == (3U & ((vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[0U] 
                                            >> 1U)))) 
                           | (3U == (3U & vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[0U]))))) 
                 | ((IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__magJustBelowOne) 
                    & (0U != (3U & vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[0U]))))) 
             | ((4U == (IData)(vlTOPp->roundingMode)) 
                & ((1U & (((0x1ffffeU & (vlTOPp->in[2U] 
                                         << 1U)) | 
                           (vlTOPp->in[1U] >> 0x1fU)) 
                          & (vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[0U] 
                             >> 1U))) | (IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__magJustBelowOne)))) 
            | (((2U == (IData)(vlTOPp->roundingMode)) 
                | (6U == (IData)(vlTOPp->roundingMode))) 
               & (vlTOPp->in[2U] & (IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__common_inexact)))) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & ((~ vlTOPp->in[2U]) & (IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__common_inexact))));
    vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__common_overflow 
        = (1U & ((1U & ((0x1ffffeU & (vlTOPp->in[2U] 
                                      << 1U)) | (vlTOPp->in[1U] 
                                                 >> 0x1fU)))
                  ? ((0x40U <= (0x7ffU & ((vlTOPp->in[2U] 
                                           << 0xcU) 
                                          | (vlTOPp->in[1U] 
                                             >> 0x14U)))) 
                     | (vlTOPp->in[2U] | (((0x3fU == 
                                            (0x7ffU 
                                             & ((vlTOPp->in[2U] 
                                                 << 0xcU) 
                                                | (vlTOPp->in[1U] 
                                                   >> 0x14U)))) 
                                           & vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[2U]) 
                                          & ((VL_ULL(0x3fffffffffffffff) 
                                              == (VL_ULL(0x3fffffffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[2U])) 
                                                      << 0x3eU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[1U])) 
                                                         << 0x1eU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__alignedSig[0U])) 
                                                           >> 2U))))) 
                                             & (IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__roundIncr)))))
                  : (vlTOPp->in[2U] & (IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__roundIncr))));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__invalidExc) 
                               << 2U) | ((((~ (IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__invalidExc)) 
                                           & (IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__common_overflow)) 
                                          << 1U) | 
                                         (((~ (IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__invalidExc)) 
                                           & (~ (IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__common_overflow))) 
                                          & (IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__common_inexact))));
    vlTOPp->out = (((IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__invalidExc) 
                    | (IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__common_overflow))
                    ? VL_ULL(0xffffffffffffffff) : 
                   (((1U & ((IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__roundIncr) 
                            ^ vlTOPp->in[2U])) ? (VL_ULL(1) 
                                                  + vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__complUnroundedInt)
                      : vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__complUnroundedInt) 
                    | (QData)((IData)(((6U == (IData)(vlTOPp->roundingMode)) 
                                       & (IData)(vlTOPp->recF64ToUi64__DOT__recFNToIN__DOT__common_inexact))))));
}

void VrecF64ToUi64::_eval(VrecF64ToUi64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToUi64::_eval\n"); );
    VrecF64ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VrecF64ToUi64::_eval_initial(VrecF64ToUi64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToUi64::_eval_initial\n"); );
    VrecF64ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF64ToUi64::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToUi64::final\n"); );
    // Variables
    VrecF64ToUi64__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecF64ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF64ToUi64::_eval_settle(VrecF64ToUi64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToUi64::_eval_settle\n"); );
    VrecF64ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VrecF64ToUi64::_change_request(VrecF64ToUi64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToUi64::_change_request\n"); );
    VrecF64ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecF64ToUi64::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToUi64::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((in[2U] & 0xfffffffeU))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif  // VL_DEBUG

void VrecF64ToUi64::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToUi64::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, in);
    roundingMode = VL_RAND_RESET_I(3);
    out = VL_RAND_RESET_Q(64);
    exceptionFlags = VL_RAND_RESET_I(3);
    recF64ToUi64__DOT__recFNToIN__DOT__magJustBelowOne = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(117, recF64ToUi64__DOT__recFNToIN__DOT__shiftedSig);
    VL_RAND_RESET_W(66, recF64ToUi64__DOT__recFNToIN__DOT__alignedSig);
    recF64ToUi64__DOT__recFNToIN__DOT__common_inexact = VL_RAND_RESET_I(1);
    recF64ToUi64__DOT__recFNToIN__DOT__roundIncr = VL_RAND_RESET_I(1);
    recF64ToUi64__DOT__recFNToIN__DOT__complUnroundedInt = VL_RAND_RESET_Q(64);
    recF64ToUi64__DOT__recFNToIN__DOT__common_overflow = VL_RAND_RESET_I(1);
    recF64ToUi64__DOT__recFNToIN__DOT__invalidExc = VL_RAND_RESET_I(1);
}
