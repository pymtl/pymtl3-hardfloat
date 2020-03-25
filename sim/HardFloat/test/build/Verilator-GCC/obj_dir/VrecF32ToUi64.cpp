// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecF32ToUi64.h for the primary calling header

#include "VrecF32ToUi64.h"
#include "VrecF32ToUi64__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VrecF32ToUi64) {
    VrecF32ToUi64__Syms* __restrict vlSymsp = __VlSymsp = new VrecF32ToUi64__Syms(this, name());
    VrecF32ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VrecF32ToUi64::__Vconfigure(VrecF32ToUi64__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VrecF32ToUi64::~VrecF32ToUi64() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VrecF32ToUi64::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecF32ToUi64::eval\n"); );
    VrecF32ToUi64__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecF32ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/recFNToIN_spec.v", 111, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VrecF32ToUi64::_eval_initial_loop(VrecF32ToUi64__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/recFNToIN_spec.v", 111, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VrecF32ToUi64::_combo__TOP__1(VrecF32ToUi64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToUi64::_combo__TOP__1\n"); );
    VrecF32ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2[3];
    WData/*95:0*/ __Vtemp3[3];
    // Body
    vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__invalidExc 
        = (((3U == (3U & ((IData)((vlTOPp->in >> 0x17U)) 
                          >> 7U))) & (IData)((vlTOPp->in 
                                              >> 0x1dU))) 
           | ((3U == (3U & ((IData)((vlTOPp->in >> 0x17U)) 
                            >> 7U))) & (~ (IData)((vlTOPp->in 
                                                   >> 0x1dU)))));
    vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__magJustBelowOne 
        = ((~ (1U & ((IData)((vlTOPp->in >> 0x17U)) 
                     >> 8U))) & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->in 
                                                            >> 0x17U)))));
    VL_EXTEND_WI(88,24, __Vtemp2, ((0x800000U & ((IData)(
                                                         (vlTOPp->in 
                                                          >> 0x17U)) 
                                                 << 0xfU)) 
                                   | (0x7fffffU & (IData)(vlTOPp->in))));
    VL_SHIFTL_WWI(88,88,32, __Vtemp3, __Vtemp2, ((0x100U 
                                                  & (IData)(
                                                            (vlTOPp->in 
                                                             >> 0x17U)))
                                                  ? 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlTOPp->in 
                                                             >> 0x17U)))
                                                  : 0U));
    vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__shiftedSig[0U] 
        = __Vtemp3[0U];
    vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__shiftedSig[1U] 
        = __Vtemp3[1U];
    vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__shiftedSig[2U] 
        = (0xffffffU & __Vtemp3[2U]);
    vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[0U] 
        = ((0xfffffffeU & ((vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__shiftedSig[1U] 
                            << 0xbU) | (0x7feU & (vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__shiftedSig[0U] 
                                                  >> 0x15U)))) 
           | (0U != (0x3fffffU & vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__shiftedSig[0U])));
    vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[1U] 
        = ((1U & (vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__shiftedSig[1U] 
                  >> 0x15U)) | (0xfffffffeU & ((vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__shiftedSig[2U] 
                                                << 0xbU) 
                                               | (0x7feU 
                                                  & (vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__shiftedSig[1U] 
                                                     >> 0x15U)))));
    vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[2U] 
        = ((1U & (vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__shiftedSig[2U] 
                  >> 0x15U)) | (2U & (vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__shiftedSig[2U] 
                                      >> 0x15U)));
    vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__complUnroundedInt 
        = ((1U & (IData)((vlTOPp->in >> 0x20U))) ? 
           (~ (((QData)((IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[2U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[1U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[0U])) 
                                           >> 2U))))
            : (((QData)((IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[2U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[1U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[0U])) 
                                           >> 2U))));
    vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__common_inexact 
        = ((0x100U & (IData)((vlTOPp->in >> 0x17U)))
            ? (0U != (3U & vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[0U]))
            : (0U != (7U & ((IData)((vlTOPp->in >> 0x17U)) 
                            >> 6U))));
    vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__roundIncr 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              & ((1U & (((IData)((vlTOPp->in >> 0x17U)) 
                         >> 8U) & ((3U == (3U & ((vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[1U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[0U] 
                                                    >> 1U)))) 
                                   | (3U == (3U & vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[0U]))))) 
                 | ((IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__magJustBelowOne) 
                    & (0U != (3U & vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[0U]))))) 
             | ((4U == (IData)(vlTOPp->roundingMode)) 
                & ((1U & (((IData)((vlTOPp->in >> 0x17U)) 
                           >> 8U) & (vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[0U] 
                                     >> 1U))) | (IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__magJustBelowOne)))) 
            | (((2U == (IData)(vlTOPp->roundingMode)) 
                | (6U == (IData)(vlTOPp->roundingMode))) 
               & ((IData)((vlTOPp->in >> 0x20U)) & (IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__common_inexact)))) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & ((~ (IData)((vlTOPp->in >> 0x20U))) 
                 & (IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__common_inexact))));
    vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__common_overflow 
        = (1U & ((0x100U & (IData)((vlTOPp->in >> 0x17U)))
                  ? ((0x40U <= (0xffU & (IData)((vlTOPp->in 
                                                 >> 0x17U)))) 
                     | ((IData)((vlTOPp->in >> 0x20U)) 
                        | (((0x3fU == (0xffU & (IData)(
                                                       (vlTOPp->in 
                                                        >> 0x17U)))) 
                            & vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[2U]) 
                           & ((VL_ULL(0x3fffffffffffffff) 
                               == (VL_ULL(0x3fffffffffffffff) 
                                   & (((QData)((IData)(
                                                       vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__alignedSig[0U])) 
                                        >> 2U))))) 
                              & (IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__roundIncr)))))
                  : ((IData)((vlTOPp->in >> 0x20U)) 
                     & (IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__roundIncr))));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__invalidExc) 
                               << 2U) | ((((~ (IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__invalidExc)) 
                                           & (IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__common_overflow)) 
                                          << 1U) | 
                                         (((~ (IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__invalidExc)) 
                                           & (~ (IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__common_overflow))) 
                                          & (IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__common_inexact))));
    vlTOPp->out = (((IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__invalidExc) 
                    | (IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__common_overflow))
                    ? VL_ULL(0xffffffffffffffff) : 
                   (((1U & ((IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__roundIncr) 
                            ^ (IData)((vlTOPp->in >> 0x20U))))
                      ? (VL_ULL(1) + vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__complUnroundedInt)
                      : vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__complUnroundedInt) 
                    | (QData)((IData)(((6U == (IData)(vlTOPp->roundingMode)) 
                                       & (IData)(vlTOPp->recF32ToUi64__DOT__recFNToIN__DOT__common_inexact))))));
}

void VrecF32ToUi64::_eval(VrecF32ToUi64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToUi64::_eval\n"); );
    VrecF32ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VrecF32ToUi64::_eval_initial(VrecF32ToUi64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToUi64::_eval_initial\n"); );
    VrecF32ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF32ToUi64::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToUi64::final\n"); );
    // Variables
    VrecF32ToUi64__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecF32ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF32ToUi64::_eval_settle(VrecF32ToUi64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToUi64::_eval_settle\n"); );
    VrecF32ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VrecF32ToUi64::_change_request(VrecF32ToUi64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToUi64::_change_request\n"); );
    VrecF32ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecF32ToUi64::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToUi64::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((in & VL_ULL(0)))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif // VL_DEBUG

void VrecF32ToUi64::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToUi64::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_Q(33);
    roundingMode = VL_RAND_RESET_I(3);
    out = VL_RAND_RESET_Q(64);
    exceptionFlags = VL_RAND_RESET_I(3);
    recF32ToUi64__DOT__recFNToIN__DOT__magJustBelowOne = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(88, recF32ToUi64__DOT__recFNToIN__DOT__shiftedSig);
    VL_RAND_RESET_W(66, recF32ToUi64__DOT__recFNToIN__DOT__alignedSig);
    recF32ToUi64__DOT__recFNToIN__DOT__common_inexact = VL_RAND_RESET_I(1);
    recF32ToUi64__DOT__recFNToIN__DOT__roundIncr = VL_RAND_RESET_I(1);
    recF32ToUi64__DOT__recFNToIN__DOT__complUnroundedInt = VL_RAND_RESET_Q(64);
    recF32ToUi64__DOT__recFNToIN__DOT__common_overflow = VL_RAND_RESET_I(1);
    recF32ToUi64__DOT__recFNToIN__DOT__invalidExc = VL_RAND_RESET_I(1);
}
