// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VcompareRecF128.h for the primary calling header

#include "VcompareRecF128.h"
#include "VcompareRecF128__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VcompareRecF128) {
    VcompareRecF128__Syms* __restrict vlSymsp = __VlSymsp = new VcompareRecF128__Syms(this, name());
    VcompareRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VcompareRecF128::__Vconfigure(VcompareRecF128__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VcompareRecF128::~VcompareRecF128() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VcompareRecF128::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VcompareRecF128::eval\n"); );
    VcompareRecF128__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VcompareRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/compareRecFN_spec.v", 89, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VcompareRecF128::_eval_initial_loop(VcompareRecF128__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/compareRecFN_spec.v", 89, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VcompareRecF128::_combo__TOP__1(VcompareRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF128::_combo__TOP__1\n"); );
    VcompareRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->compareRecF128__DOT__compareRecFN__DOT__ordered 
        = (1U & ((~ ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                                << 2U)) 
                                   | (vlTOPp->a[3U] 
                                      >> 0x1eU)))) 
                     & (vlTOPp->a[3U] >> 0x1dU))) & 
                 (~ ((3U == (3U & ((0x3fffcU & (vlTOPp->b[4U] 
                                                << 2U)) 
                                   | (vlTOPp->b[3U] 
                                      >> 0x1eU)))) 
                     & (vlTOPp->b[3U] >> 0x1dU)))));
    vlTOPp->compareRecF128__DOT__compareRecFN__DOT__bothInfs 
        = (((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                       << 2U)) | (vlTOPp->a[3U] 
                                                  >> 0x1eU)))) 
            & (~ (vlTOPp->a[3U] >> 0x1dU))) & ((3U 
                                                == 
                                                (3U 
                                                 & ((0x3fffcU 
                                                     & (vlTOPp->b[4U] 
                                                        << 2U)) 
                                                    | (vlTOPp->b[3U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  (vlTOPp->b[3U] 
                                                   >> 0x1dU))));
    vlTOPp->compareRecF128__DOT__compareRecFN__DOT__bothZeros 
        = ((0U == (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                      << 3U)) | (vlTOPp->a[3U] 
                                                 >> 0x1dU)))) 
           & (0U == (7U & ((0x7fff8U & (vlTOPp->b[4U] 
                                        << 3U)) | (
                                                   vlTOPp->b[3U] 
                                                   >> 0x1dU)))));
    vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigA[0U] 
        = vlTOPp->a[0U];
    vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigA[1U] 
        = vlTOPp->a[1U];
    vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigA[2U] 
        = vlTOPp->a[2U];
    vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigA[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->a[4U] 
                                             << 3U)) 
                                         | (vlTOPp->a[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->a[3U]));
    vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigB[0U] 
        = vlTOPp->b[0U];
    vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigB[1U] 
        = vlTOPp->b[1U];
    vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigB[2U] 
        = vlTOPp->b[2U];
    vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigB[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->b[4U] 
                                             << 3U)) 
                                         | (vlTOPp->b[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->b[3U]));
    vlTOPp->compareRecF128__DOT__compareRecFN__DOT__eqExps 
        = ((0xffffU & ((vlTOPp->a[4U] << 0x10U) | (
                                                   vlTOPp->a[3U] 
                                                   >> 0x10U))) 
           == (0xffffU & ((vlTOPp->b[4U] << 0x10U) 
                          | (vlTOPp->b[3U] >> 0x10U))));
    vlTOPp->unordered = (1U & (~ (IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__ordered)));
    vlTOPp->exceptionFlags = (((((7U == (7U & ((vlTOPp->a[4U] 
                                                << 3U) 
                                               | (vlTOPp->a[3U] 
                                                  >> 0x1dU)))) 
                                 & (~ (vlTOPp->a[3U] 
                                       >> 0xfU))) | 
                                ((7U == (7U & ((vlTOPp->b[4U] 
                                                << 3U) 
                                               | (vlTOPp->b[3U] 
                                                  >> 0x1dU)))) 
                                 & (~ (vlTOPp->b[3U] 
                                       >> 0xfU)))) 
                               | ((IData)(vlTOPp->signaling) 
                                  & (~ (IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__ordered)))) 
                              << 4U);
    vlTOPp->compareRecF128__DOT__compareRecFN__DOT__common_ltMags 
        = (VL_LTS_III(1,17,17, (0xffffU & ((vlTOPp->a[4U] 
                                            << 0x10U) 
                                           | (vlTOPp->a[3U] 
                                              >> 0x10U))), 
                      (0xffffU & ((vlTOPp->b[4U] << 0x10U) 
                                  | (vlTOPp->b[3U] 
                                     >> 0x10U)))) | 
           ((IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__eqExps) 
            & VL_LT_W(4, vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigA, vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigB)));
    vlTOPp->compareRecF128__DOT__compareRecFN__DOT__common_eqMags 
        = ((IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__eqExps) 
           & (0U == ((((vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigA[0U] 
                        ^ vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigB[0U]) 
                       | (vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigA[1U] 
                          ^ vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigB[1U])) 
                      | (vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigA[2U] 
                         ^ vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigB[2U])) 
                     | (vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigA[3U] 
                        ^ vlTOPp->compareRecF128__DOT__compareRecFN__DOT__sigB[3U]))));
    vlTOPp->compareRecF128__DOT__compareRecFN__DOT__ordered_eq 
        = ((IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__bothZeros) 
           | (((1U & vlTOPp->a[4U]) == (1U & vlTOPp->b[4U])) 
              & ((IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__bothInfs) 
                 | (IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__common_eqMags))));
    vlTOPp->compareRecF128__DOT__compareRecFN__DOT__ordered_lt 
        = (1U & ((~ (IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__bothZeros)) 
                 & ((vlTOPp->a[4U] & (~ vlTOPp->b[4U])) 
                    | ((~ (IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__bothInfs)) 
                       & (((vlTOPp->a[4U] & (~ (IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__common_ltMags))) 
                           & (~ (IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__common_eqMags))) 
                          | ((~ vlTOPp->b[4U]) & (IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__common_ltMags)))))));
    vlTOPp->eq = ((IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__ordered) 
                  & (IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__ordered_eq));
    vlTOPp->lt = ((IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__ordered) 
                  & (IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__ordered_lt));
    vlTOPp->gt = (((IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__ordered) 
                   & (~ (IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__ordered_lt))) 
                  & (~ (IData)(vlTOPp->compareRecF128__DOT__compareRecFN__DOT__ordered_eq)));
}

void VcompareRecF128::_eval(VcompareRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF128::_eval\n"); );
    VcompareRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VcompareRecF128::_eval_initial(VcompareRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF128::_eval_initial\n"); );
    VcompareRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VcompareRecF128::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF128::final\n"); );
    // Variables
    VcompareRecF128__Syms* __restrict vlSymsp = this->__VlSymsp;
    VcompareRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VcompareRecF128::_eval_settle(VcompareRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF128::_eval_settle\n"); );
    VcompareRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VcompareRecF128::_change_request(VcompareRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF128::_change_request\n"); );
    VcompareRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VcompareRecF128::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF128::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((a[4U] & 0xfffffffeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b[4U] & 0xfffffffeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((signaling & 0xfeU))) {
        Verilated::overWidthError("signaling");}
}
#endif // VL_DEBUG

void VcompareRecF128::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF128::_ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(129, a);
    VL_RAND_RESET_W(129, b);
    signaling = VL_RAND_RESET_I(1);
    lt = VL_RAND_RESET_I(1);
    eq = VL_RAND_RESET_I(1);
    gt = VL_RAND_RESET_I(1);
    unordered = VL_RAND_RESET_I(1);
    exceptionFlags = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(114, compareRecF128__DOT__compareRecFN__DOT__sigA);
    VL_RAND_RESET_W(114, compareRecF128__DOT__compareRecFN__DOT__sigB);
    compareRecF128__DOT__compareRecFN__DOT__ordered = VL_RAND_RESET_I(1);
    compareRecF128__DOT__compareRecFN__DOT__bothInfs = VL_RAND_RESET_I(1);
    compareRecF128__DOT__compareRecFN__DOT__bothZeros = VL_RAND_RESET_I(1);
    compareRecF128__DOT__compareRecFN__DOT__eqExps = VL_RAND_RESET_I(1);
    compareRecF128__DOT__compareRecFN__DOT__common_ltMags = VL_RAND_RESET_I(1);
    compareRecF128__DOT__compareRecFN__DOT__common_eqMags = VL_RAND_RESET_I(1);
    compareRecF128__DOT__compareRecFN__DOT__ordered_lt = VL_RAND_RESET_I(1);
    compareRecF128__DOT__compareRecFN__DOT__ordered_eq = VL_RAND_RESET_I(1);
}
