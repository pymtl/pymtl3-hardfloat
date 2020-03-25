// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VcompareRecF64.h for the primary calling header

#include "VcompareRecF64.h"
#include "VcompareRecF64__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VcompareRecF64) {
    VcompareRecF64__Syms* __restrict vlSymsp = __VlSymsp = new VcompareRecF64__Syms(this, name());
    VcompareRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VcompareRecF64::__Vconfigure(VcompareRecF64__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VcompareRecF64::~VcompareRecF64() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VcompareRecF64::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VcompareRecF64::eval\n"); );
    VcompareRecF64__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VcompareRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/compareRecFN_spec.v", 72, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VcompareRecF64::_eval_initial_loop(VcompareRecF64__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/compareRecFN_spec.v", 72, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VcompareRecF64::_combo__TOP__1(VcompareRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF64::_combo__TOP__1\n"); );
    VcompareRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->compareRecF64__DOT__compareRecFN__DOT__ordered 
        = (1U & ((~ ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                                 << 2U)) 
                                   | (vlTOPp->a[1U] 
                                      >> 0x1eU)))) 
                     & (vlTOPp->a[1U] >> 0x1dU))) & 
                 (~ ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                                 << 2U)) 
                                   | (vlTOPp->b[1U] 
                                      >> 0x1eU)))) 
                     & (vlTOPp->b[1U] >> 0x1dU)))));
    vlTOPp->compareRecF64__DOT__compareRecFN__DOT__bothInfs 
        = (((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                        << 2U)) | (
                                                   vlTOPp->a[1U] 
                                                   >> 0x1eU)))) 
            & (~ (vlTOPp->a[1U] >> 0x1dU))) & ((3U 
                                                == 
                                                (3U 
                                                 & ((0x3ffffcU 
                                                     & (vlTOPp->b[2U] 
                                                        << 2U)) 
                                                    | (vlTOPp->b[1U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  (vlTOPp->b[1U] 
                                                   >> 0x1dU))));
    vlTOPp->compareRecF64__DOT__compareRecFN__DOT__bothZeros 
        = ((0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                       << 3U)) | (vlTOPp->a[1U] 
                                                  >> 0x1dU)))) 
           & (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                         << 3U)) | 
                           (vlTOPp->b[1U] >> 0x1dU)))));
    vlTOPp->compareRecF64__DOT__compareRecFN__DOT__sigA 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->a[2U] 
                                              << 3U)) 
                                          | (vlTOPp->a[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->a[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->a[0U])))));
    vlTOPp->compareRecF64__DOT__compareRecFN__DOT__sigB 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->b[2U] 
                                              << 3U)) 
                                          | (vlTOPp->b[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->b[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->b[0U])))));
    vlTOPp->compareRecF64__DOT__compareRecFN__DOT__eqExps 
        = ((0xfffU & ((vlTOPp->a[2U] << 0xcU) | (vlTOPp->a[1U] 
                                                 >> 0x14U))) 
           == (0xfffU & ((vlTOPp->b[2U] << 0xcU) | 
                         (vlTOPp->b[1U] >> 0x14U))));
    vlTOPp->unordered = (1U & (~ (IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__ordered)));
    vlTOPp->exceptionFlags = (((((7U == (7U & ((vlTOPp->a[2U] 
                                                << 3U) 
                                               | (vlTOPp->a[1U] 
                                                  >> 0x1dU)))) 
                                 & (~ (vlTOPp->a[1U] 
                                       >> 0x13U))) 
                                | ((7U == (7U & ((vlTOPp->b[2U] 
                                                  << 3U) 
                                                 | (vlTOPp->b[1U] 
                                                    >> 0x1dU)))) 
                                   & (~ (vlTOPp->b[1U] 
                                         >> 0x13U)))) 
                               | ((IData)(vlTOPp->signaling) 
                                  & (~ (IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__ordered)))) 
                              << 4U);
    vlTOPp->compareRecF64__DOT__compareRecFN__DOT__common_ltMags 
        = (VL_LTS_III(1,13,13, (0xfffU & ((vlTOPp->a[2U] 
                                           << 0xcU) 
                                          | (vlTOPp->a[1U] 
                                             >> 0x14U))), 
                      (0xfffU & ((vlTOPp->b[2U] << 0xcU) 
                                 | (vlTOPp->b[1U] >> 0x14U)))) 
           | ((IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__eqExps) 
              & (vlTOPp->compareRecF64__DOT__compareRecFN__DOT__sigA 
                 < vlTOPp->compareRecF64__DOT__compareRecFN__DOT__sigB)));
    vlTOPp->compareRecF64__DOT__compareRecFN__DOT__common_eqMags 
        = ((IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__eqExps) 
           & (vlTOPp->compareRecF64__DOT__compareRecFN__DOT__sigA 
              == vlTOPp->compareRecF64__DOT__compareRecFN__DOT__sigB));
    vlTOPp->compareRecF64__DOT__compareRecFN__DOT__ordered_eq 
        = ((IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__bothZeros) 
           | (((1U & vlTOPp->a[2U]) == (1U & vlTOPp->b[2U])) 
              & ((IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__bothInfs) 
                 | (IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__common_eqMags))));
    vlTOPp->compareRecF64__DOT__compareRecFN__DOT__ordered_lt 
        = (1U & ((~ (IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__bothZeros)) 
                 & ((vlTOPp->a[2U] & (~ vlTOPp->b[2U])) 
                    | ((~ (IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__bothInfs)) 
                       & (((vlTOPp->a[2U] & (~ (IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__common_ltMags))) 
                           & (~ (IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__common_eqMags))) 
                          | ((~ vlTOPp->b[2U]) & (IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__common_ltMags)))))));
    vlTOPp->eq = ((IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__ordered) 
                  & (IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__ordered_eq));
    vlTOPp->lt = ((IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__ordered) 
                  & (IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__ordered_lt));
    vlTOPp->gt = (((IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__ordered) 
                   & (~ (IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__ordered_lt))) 
                  & (~ (IData)(vlTOPp->compareRecF64__DOT__compareRecFN__DOT__ordered_eq)));
}

void VcompareRecF64::_eval(VcompareRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF64::_eval\n"); );
    VcompareRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VcompareRecF64::_eval_initial(VcompareRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF64::_eval_initial\n"); );
    VcompareRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VcompareRecF64::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF64::final\n"); );
    // Variables
    VcompareRecF64__Syms* __restrict vlSymsp = this->__VlSymsp;
    VcompareRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VcompareRecF64::_eval_settle(VcompareRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF64::_eval_settle\n"); );
    VcompareRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VcompareRecF64::_change_request(VcompareRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF64::_change_request\n"); );
    VcompareRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VcompareRecF64::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF64::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((a[2U] & 0xfffffffeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b[2U] & 0xfffffffeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((signaling & 0xfeU))) {
        Verilated::overWidthError("signaling");}
}
#endif // VL_DEBUG

void VcompareRecF64::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF64::_ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(65, a);
    VL_RAND_RESET_W(65, b);
    signaling = VL_RAND_RESET_I(1);
    lt = VL_RAND_RESET_I(1);
    eq = VL_RAND_RESET_I(1);
    gt = VL_RAND_RESET_I(1);
    unordered = VL_RAND_RESET_I(1);
    exceptionFlags = VL_RAND_RESET_I(5);
    compareRecF64__DOT__compareRecFN__DOT__sigA = VL_RAND_RESET_Q(54);
    compareRecF64__DOT__compareRecFN__DOT__sigB = VL_RAND_RESET_Q(54);
    compareRecF64__DOT__compareRecFN__DOT__ordered = VL_RAND_RESET_I(1);
    compareRecF64__DOT__compareRecFN__DOT__bothInfs = VL_RAND_RESET_I(1);
    compareRecF64__DOT__compareRecFN__DOT__bothZeros = VL_RAND_RESET_I(1);
    compareRecF64__DOT__compareRecFN__DOT__eqExps = VL_RAND_RESET_I(1);
    compareRecF64__DOT__compareRecFN__DOT__common_ltMags = VL_RAND_RESET_I(1);
    compareRecF64__DOT__compareRecFN__DOT__common_eqMags = VL_RAND_RESET_I(1);
    compareRecF64__DOT__compareRecFN__DOT__ordered_lt = VL_RAND_RESET_I(1);
    compareRecF64__DOT__compareRecFN__DOT__ordered_eq = VL_RAND_RESET_I(1);
}
