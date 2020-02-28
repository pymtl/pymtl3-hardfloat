// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecF16ToUi64.h for the primary calling header

#include "VrecF16ToUi64.h"
#include "VrecF16ToUi64__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VrecF16ToUi64) {
    VrecF16ToUi64__Syms* __restrict vlSymsp = __VlSymsp = new VrecF16ToUi64__Syms(this, name());
    VrecF16ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VrecF16ToUi64::__Vconfigure(VrecF16ToUi64__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VrecF16ToUi64::~VrecF16ToUi64() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VrecF16ToUi64::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecF16ToUi64::eval\n"); );
    VrecF16ToUi64__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecF16ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/recFNToIN_spec.v", 55, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VrecF16ToUi64::_eval_initial_loop(VrecF16ToUi64__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/recFNToIN_spec.v", 55, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VrecF16ToUi64::_combo__TOP__1(VrecF16ToUi64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToUi64::_combo__TOP__1\n"); );
    VrecF16ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2[3];
    WData/*95:0*/ __Vtemp3[3];
    // Body
    vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__invalidExc 
        = (((3U == (3U & (vlTOPp->in >> 0xeU))) & (vlTOPp->in 
                                                   >> 0xdU)) 
           | ((3U == (3U & (vlTOPp->in >> 0xeU))) & 
              (~ (vlTOPp->in >> 0xdU))));
    vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__magJustBelowOne 
        = ((~ (1U & (vlTOPp->in >> 0xfU))) & (0x1fU 
                                              == (0x1fU 
                                                  & (vlTOPp->in 
                                                     >> 0xaU))));
    VL_EXTEND_WI(75,11, __Vtemp2, ((0x400U & (vlTOPp->in 
                                              >> 5U)) 
                                   | (0x3ffU & vlTOPp->in)));
    VL_SHIFTL_WWI(75,75,32, __Vtemp3, __Vtemp2, ((0x8000U 
                                                  & vlTOPp->in)
                                                  ? 
                                                 (0xfU 
                                                  & (vlTOPp->in 
                                                     >> 0xaU))
                                                  : 0U));
    vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__shiftedSig[0U] 
        = __Vtemp3[0U];
    vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__shiftedSig[1U] 
        = __Vtemp3[1U];
    vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__shiftedSig[2U] 
        = (0x7ffU & __Vtemp3[2U]);
    vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__alignedSig[0U] 
        = ((0xfffffffeU & ((vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__shiftedSig[1U] 
                            << 0x18U) | (0xfffffeU 
                                         & (vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__shiftedSig[0U] 
                                            >> 8U)))) 
           | (0U != (0x1ffU & vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__shiftedSig[0U])));
    vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__alignedSig[1U] 
        = ((1U & (vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__shiftedSig[1U] 
                  >> 8U)) | (0xfffffffeU & ((vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__shiftedSig[2U] 
                                             << 0x18U) 
                                            | (0xfffffeU 
                                               & (vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__shiftedSig[1U] 
                                                  >> 8U)))));
    vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__alignedSig[2U] 
        = ((1U & (vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__shiftedSig[2U] 
                  >> 8U)) | (2U & (vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__shiftedSig[2U] 
                                   >> 8U)));
    vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__complUnroundedInt 
        = ((0x10000U & vlTOPp->in) ? (~ (((QData)((IData)(
                                                          vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__alignedSig[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__alignedSig[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__alignedSig[0U])) 
                                               >> 2U))))
            : (((QData)((IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__alignedSig[2U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__alignedSig[1U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__alignedSig[0U])) 
                                           >> 2U))));
    vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__common_inexact 
        = ((0x8000U & vlTOPp->in) ? (0U != (3U & vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__alignedSig[0U]))
            : (0U != (7U & (vlTOPp->in >> 0xdU))));
    vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__roundIncr 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              & ((1U & ((vlTOPp->in >> 0xfU) & ((3U 
                                                 == 
                                                 (3U 
                                                  & ((vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__alignedSig[1U] 
                                                      << 0x1fU) 
                                                     | (vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__alignedSig[0U] 
                                                        >> 1U)))) 
                                                | (3U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__alignedSig[0U]))))) 
                 | ((IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__magJustBelowOne) 
                    & (0U != (3U & vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__alignedSig[0U]))))) 
             | ((4U == (IData)(vlTOPp->roundingMode)) 
                & ((1U & ((vlTOPp->in >> 0xfU) & (vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__alignedSig[0U] 
                                                  >> 1U))) 
                   | (IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__magJustBelowOne)))) 
            | (((2U == (IData)(vlTOPp->roundingMode)) 
                | (6U == (IData)(vlTOPp->roundingMode))) 
               & ((vlTOPp->in >> 0x10U) & (IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__common_inexact)))) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & ((~ (vlTOPp->in >> 0x10U)) & (IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__common_inexact))));
    vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__common_overflow 
        = (1U & ((0x8000U & vlTOPp->in) ? (vlTOPp->in 
                                           >> 0x10U)
                  : ((vlTOPp->in >> 0x10U) & (IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__roundIncr))));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__invalidExc) 
                               << 2U) | ((((~ (IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__invalidExc)) 
                                           & (IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__common_overflow)) 
                                          << 1U) | 
                                         (((~ (IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__invalidExc)) 
                                           & (~ (IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__common_overflow))) 
                                          & (IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__common_inexact))));
    vlTOPp->out = (((IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__invalidExc) 
                    | (IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__common_overflow))
                    ? VL_ULL(0xffffffffffffffff) : 
                   (((1U & ((IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__roundIncr) 
                            ^ (vlTOPp->in >> 0x10U)))
                      ? (VL_ULL(1) + vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__complUnroundedInt)
                      : vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__complUnroundedInt) 
                    | (QData)((IData)(((6U == (IData)(vlTOPp->roundingMode)) 
                                       & (IData)(vlTOPp->recF16ToUi64__DOT__recFNToIN__DOT__common_inexact))))));
}

void VrecF16ToUi64::_eval(VrecF16ToUi64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToUi64::_eval\n"); );
    VrecF16ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VrecF16ToUi64::_eval_initial(VrecF16ToUi64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToUi64::_eval_initial\n"); );
    VrecF16ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF16ToUi64::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToUi64::final\n"); );
    // Variables
    VrecF16ToUi64__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecF16ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF16ToUi64::_eval_settle(VrecF16ToUi64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToUi64::_eval_settle\n"); );
    VrecF16ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VrecF16ToUi64::_change_request(VrecF16ToUi64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToUi64::_change_request\n"); );
    VrecF16ToUi64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecF16ToUi64::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToUi64::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((in & 0xfffe0000U))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif  // VL_DEBUG

void VrecF16ToUi64::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToUi64::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_I(17);
    roundingMode = VL_RAND_RESET_I(3);
    out = VL_RAND_RESET_Q(64);
    exceptionFlags = VL_RAND_RESET_I(3);
    recF16ToUi64__DOT__recFNToIN__DOT__magJustBelowOne = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(75, recF16ToUi64__DOT__recFNToIN__DOT__shiftedSig);
    VL_RAND_RESET_W(66, recF16ToUi64__DOT__recFNToIN__DOT__alignedSig);
    recF16ToUi64__DOT__recFNToIN__DOT__common_inexact = VL_RAND_RESET_I(1);
    recF16ToUi64__DOT__recFNToIN__DOT__roundIncr = VL_RAND_RESET_I(1);
    recF16ToUi64__DOT__recFNToIN__DOT__complUnroundedInt = VL_RAND_RESET_Q(64);
    recF16ToUi64__DOT__recFNToIN__DOT__common_overflow = VL_RAND_RESET_I(1);
    recF16ToUi64__DOT__recFNToIN__DOT__invalidExc = VL_RAND_RESET_I(1);
}
