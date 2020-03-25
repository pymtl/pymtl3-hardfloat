// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecF128ToUi32.h for the primary calling header

#include "VrecF128ToUi32.h"
#include "VrecF128ToUi32__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VrecF128ToUi32) {
    VrecF128ToUi32__Syms* __restrict vlSymsp = __VlSymsp = new VrecF128ToUi32__Syms(this, name());
    VrecF128ToUi32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VrecF128ToUi32::__Vconfigure(VrecF128ToUi32__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VrecF128ToUi32::~VrecF128ToUi32() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VrecF128ToUi32::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecF128ToUi32::eval\n"); );
    VrecF128ToUi32__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecF128ToUi32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/recFNToIN_spec.v", 209, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VrecF128ToUi32::_eval_initial_loop(VrecF128ToUi32__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/recFNToIN_spec.v", 209, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VrecF128ToUi32::_combo__TOP__1(VrecF128ToUi32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToUi32::_combo__TOP__1\n"); );
    VrecF128ToUi32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp5[4];
    WData/*159:0*/ __Vtemp6[5];
    WData/*159:0*/ __Vtemp7[5];
    // Body
    vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__invalidExc 
        = (((3U == (3U & ((0x3fffcU & (vlTOPp->in[4U] 
                                       << 2U)) | (vlTOPp->in[3U] 
                                                  >> 0x1eU)))) 
            & (vlTOPp->in[3U] >> 0x1dU)) | ((3U == 
                                             (3U & 
                                              ((0x3fffcU 
                                                & (vlTOPp->in[4U] 
                                                   << 2U)) 
                                               | (vlTOPp->in[3U] 
                                                  >> 0x1eU)))) 
                                            & (~ (vlTOPp->in[3U] 
                                                  >> 0x1dU))));
    vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__magJustBelowOne 
        = ((~ (1U & ((0x1fffeU & (vlTOPp->in[4U] << 1U)) 
                     | (vlTOPp->in[3U] >> 0x1fU)))) 
           & (0x7fffU == (0x7fffU & ((vlTOPp->in[4U] 
                                      << 0x10U) | (
                                                   vlTOPp->in[3U] 
                                                   >> 0x10U)))));
    __Vtemp5[0U] = vlTOPp->in[0U];
    __Vtemp5[1U] = vlTOPp->in[1U];
    __Vtemp5[2U] = vlTOPp->in[2U];
    __Vtemp5[3U] = ((0x10000U & ((0xfffe0000U & (vlTOPp->in[4U] 
                                                 << 0x11U)) 
                                 | (0x10000U & (vlTOPp->in[3U] 
                                                >> 0xfU)))) 
                    | (0xffffU & vlTOPp->in[3U]));
    VL_EXTEND_WW(145,113, __Vtemp6, __Vtemp5);
    VL_SHIFTL_WWI(145,145,32, __Vtemp7, __Vtemp6, (
                                                   (1U 
                                                    & ((0x1fffeU 
                                                        & (vlTOPp->in[4U] 
                                                           << 1U)) 
                                                       | (vlTOPp->in[3U] 
                                                          >> 0x1fU)))
                                                    ? 
                                                   (0x1fU 
                                                    & ((vlTOPp->in[4U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->in[3U] 
                                                          >> 0x10U)))
                                                    : 0U));
    vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__shiftedSig[0U] 
        = __Vtemp7[0U];
    vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__shiftedSig[1U] 
        = __Vtemp7[1U];
    vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__shiftedSig[2U] 
        = __Vtemp7[2U];
    vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__shiftedSig[3U] 
        = __Vtemp7[3U];
    vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__shiftedSig[4U] 
        = (0x1ffffU & __Vtemp7[4U]);
    vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (((QData)((IData)(
                                                    vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__shiftedSig[4U])) 
                                    << 0x12U) | (VL_ULL(0x3fffffffffffe) 
                                                 & ((QData)((IData)(
                                                                    vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__shiftedSig[3U])) 
                                                    >> 0xeU)))) 
           | (QData)((IData)((0U != (((vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__shiftedSig[0U] 
                                       | vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__shiftedSig[1U]) 
                                      | vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__shiftedSig[2U]) 
                                     | (0x7fffU & vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__shiftedSig[3U]))))));
    vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__complUnroundedInt 
        = ((1U & vlTOPp->in[4U]) ? (~ (IData)((vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__alignedSig 
                                               >> 2U)))
            : (IData)((vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__alignedSig 
                       >> 2U)));
    vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__common_inexact 
        = ((1U & ((0x1fffeU & (vlTOPp->in[4U] << 1U)) 
                  | (vlTOPp->in[3U] >> 0x1fU))) ? (0U 
                                                   != 
                                                   (3U 
                                                    & (IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__alignedSig)))
            : (0U != (7U & ((0x7fff8U & (vlTOPp->in[4U] 
                                         << 3U)) | 
                            (vlTOPp->in[3U] >> 0x1dU)))));
    vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__roundIncr 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              & ((1U & (((0x1fffeU & (vlTOPp->in[4U] 
                                      << 1U)) | (vlTOPp->in[3U] 
                                                 >> 0x1fU)) 
                        & ((3U == (3U & (IData)((vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__alignedSig 
                                                 >> 1U)))) 
                           | (3U == (3U & (IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__alignedSig)))))) 
                 | ((IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__magJustBelowOne) 
                    & (0U != (3U & (IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__alignedSig)))))) 
             | ((4U == (IData)(vlTOPp->roundingMode)) 
                & ((1U & (((0x1fffeU & (vlTOPp->in[4U] 
                                        << 1U)) | (
                                                   vlTOPp->in[3U] 
                                                   >> 0x1fU)) 
                          & (IData)((vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__alignedSig 
                                     >> 1U)))) | (IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__magJustBelowOne)))) 
            | (((2U == (IData)(vlTOPp->roundingMode)) 
                | (6U == (IData)(vlTOPp->roundingMode))) 
               & (vlTOPp->in[4U] & (IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__common_inexact)))) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & ((~ vlTOPp->in[4U]) & (IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__common_inexact))));
    vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__common_overflow 
        = (1U & ((1U & ((0x1fffeU & (vlTOPp->in[4U] 
                                     << 1U)) | (vlTOPp->in[3U] 
                                                >> 0x1fU)))
                  ? ((0x20U <= (0x7fffU & ((vlTOPp->in[4U] 
                                            << 0x10U) 
                                           | (vlTOPp->in[3U] 
                                              >> 0x10U)))) 
                     | (vlTOPp->in[4U] | (((0x1fU == 
                                            (0x7fffU 
                                             & ((vlTOPp->in[4U] 
                                                 << 0x10U) 
                                                | (vlTOPp->in[3U] 
                                                   >> 0x10U)))) 
                                           & (IData)(
                                                     (vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__alignedSig 
                                                      >> 0x20U))) 
                                          & ((0x3fffffffU 
                                              == (0x3fffffffU 
                                                  & (IData)(
                                                            (vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__alignedSig 
                                                             >> 2U)))) 
                                             & (IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__roundIncr)))))
                  : (vlTOPp->in[4U] & (IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__roundIncr))));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__invalidExc) 
                               << 2U) | ((((~ (IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__invalidExc)) 
                                           & (IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__common_overflow)) 
                                          << 1U) | 
                                         (((~ (IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__invalidExc)) 
                                           & (~ (IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__common_overflow))) 
                                          & (IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__common_inexact))));
    vlTOPp->out = (((IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__invalidExc) 
                    | (IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__common_overflow))
                    ? 0xffffffffU : (((1U & ((IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__roundIncr) 
                                             ^ vlTOPp->in[4U]))
                                       ? ((IData)(1U) 
                                          + vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__complUnroundedInt)
                                       : vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__complUnroundedInt) 
                                     | ((6U == (IData)(vlTOPp->roundingMode)) 
                                        & (IData)(vlTOPp->recF128ToUi32__DOT__recFNToIN__DOT__common_inexact))));
}

void VrecF128ToUi32::_eval(VrecF128ToUi32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToUi32::_eval\n"); );
    VrecF128ToUi32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VrecF128ToUi32::_eval_initial(VrecF128ToUi32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToUi32::_eval_initial\n"); );
    VrecF128ToUi32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF128ToUi32::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToUi32::final\n"); );
    // Variables
    VrecF128ToUi32__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecF128ToUi32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF128ToUi32::_eval_settle(VrecF128ToUi32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToUi32::_eval_settle\n"); );
    VrecF128ToUi32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VrecF128ToUi32::_change_request(VrecF128ToUi32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToUi32::_change_request\n"); );
    VrecF128ToUi32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecF128ToUi32::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToUi32::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((in[4U] & 0xfffffffeU))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif // VL_DEBUG

void VrecF128ToUi32::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToUi32::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, in);
    roundingMode = VL_RAND_RESET_I(3);
    out = VL_RAND_RESET_I(32);
    exceptionFlags = VL_RAND_RESET_I(3);
    recF128ToUi32__DOT__recFNToIN__DOT__magJustBelowOne = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(145, recF128ToUi32__DOT__recFNToIN__DOT__shiftedSig);
    recF128ToUi32__DOT__recFNToIN__DOT__alignedSig = VL_RAND_RESET_Q(34);
    recF128ToUi32__DOT__recFNToIN__DOT__common_inexact = VL_RAND_RESET_I(1);
    recF128ToUi32__DOT__recFNToIN__DOT__roundIncr = VL_RAND_RESET_I(1);
    recF128ToUi32__DOT__recFNToIN__DOT__complUnroundedInt = VL_RAND_RESET_I(32);
    recF128ToUi32__DOT__recFNToIN__DOT__common_overflow = VL_RAND_RESET_I(1);
    recF128ToUi32__DOT__recFNToIN__DOT__invalidExc = VL_RAND_RESET_I(1);
}
