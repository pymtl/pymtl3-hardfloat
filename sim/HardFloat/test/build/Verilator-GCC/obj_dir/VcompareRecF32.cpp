// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VcompareRecF32.h for the primary calling header

#include "VcompareRecF32.h"
#include "VcompareRecF32__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VcompareRecF32) {
    VcompareRecF32__Syms* __restrict vlSymsp = __VlSymsp = new VcompareRecF32__Syms(this, name());
    VcompareRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VcompareRecF32::__Vconfigure(VcompareRecF32__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VcompareRecF32::~VcompareRecF32() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VcompareRecF32::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VcompareRecF32::eval\n"); );
    VcompareRecF32__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VcompareRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/compareRecFN_spec.v", 55, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VcompareRecF32::_eval_initial_loop(VcompareRecF32__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/compareRecFN_spec.v", 55, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VcompareRecF32::_combo__TOP__1(VcompareRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF32::_combo__TOP__1\n"); );
    VcompareRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->compareRecF32__DOT__compareRecFN__DOT__ordered 
        = (1U & ((~ ((3U == (3U & ((IData)((vlTOPp->a 
                                            >> 0x17U)) 
                                   >> 7U))) & (IData)(
                                                      (vlTOPp->a 
                                                       >> 0x1dU)))) 
                 & (~ ((3U == (3U & ((IData)((vlTOPp->b 
                                              >> 0x17U)) 
                                     >> 7U))) & (IData)(
                                                        (vlTOPp->b 
                                                         >> 0x1dU))))));
    vlTOPp->compareRecF32__DOT__compareRecFN__DOT__bothInfs 
        = (((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                          >> 7U))) & (~ (IData)((vlTOPp->a 
                                                 >> 0x1dU)))) 
           & ((3U == (3U & ((IData)((vlTOPp->b >> 0x17U)) 
                            >> 7U))) & (~ (IData)((vlTOPp->b 
                                                   >> 0x1dU)))));
    vlTOPp->compareRecF32__DOT__compareRecFN__DOT__bothZeros 
        = ((0U == (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 6U))) & (0U == (7U & ((IData)(
                                                          (vlTOPp->b 
                                                           >> 0x17U)) 
                                                  >> 6U))));
    vlTOPp->compareRecF32__DOT__compareRecFN__DOT__sigA 
        = (((0U != (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->a)));
    vlTOPp->compareRecF32__DOT__compareRecFN__DOT__sigB 
        = (((0U != (7U & ((IData)((vlTOPp->b >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->b)));
    vlTOPp->compareRecF32__DOT__compareRecFN__DOT__eqExps 
        = ((0x1ffU & (IData)((vlTOPp->a >> 0x17U))) 
           == (0x1ffU & (IData)((vlTOPp->b >> 0x17U))));
    vlTOPp->unordered = (1U & (~ (IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__ordered)));
    vlTOPp->exceptionFlags = (((((7U == (7U & (IData)(
                                                      (vlTOPp->a 
                                                       >> 0x1dU)))) 
                                 & (~ (IData)((vlTOPp->a 
                                               >> 0x16U)))) 
                                | ((7U == (7U & (IData)(
                                                        (vlTOPp->b 
                                                         >> 0x1dU)))) 
                                   & (~ (IData)((vlTOPp->b 
                                                 >> 0x16U))))) 
                               | ((IData)(vlTOPp->signaling) 
                                  & (~ (IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__ordered)))) 
                              << 4U);
    vlTOPp->compareRecF32__DOT__compareRecFN__DOT__common_ltMags 
        = (VL_LTS_III(1,10,10, (0x1ffU & (IData)((vlTOPp->a 
                                                  >> 0x17U))), 
                      (0x1ffU & (IData)((vlTOPp->b 
                                         >> 0x17U)))) 
           | ((IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__eqExps) 
              & (vlTOPp->compareRecF32__DOT__compareRecFN__DOT__sigA 
                 < vlTOPp->compareRecF32__DOT__compareRecFN__DOT__sigB)));
    vlTOPp->compareRecF32__DOT__compareRecFN__DOT__common_eqMags 
        = ((IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__eqExps) 
           & (vlTOPp->compareRecF32__DOT__compareRecFN__DOT__sigA 
              == vlTOPp->compareRecF32__DOT__compareRecFN__DOT__sigB));
    vlTOPp->compareRecF32__DOT__compareRecFN__DOT__ordered_eq 
        = ((IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__bothZeros) 
           | (((1U & (IData)((vlTOPp->a >> 0x20U))) 
               == (1U & (IData)((vlTOPp->b >> 0x20U)))) 
              & ((IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__bothInfs) 
                 | (IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__common_eqMags))));
    vlTOPp->compareRecF32__DOT__compareRecFN__DOT__ordered_lt 
        = (1U & ((~ (IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__bothZeros)) 
                 & (((IData)((vlTOPp->a >> 0x20U)) 
                     & (~ (IData)((vlTOPp->b >> 0x20U)))) 
                    | ((~ (IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__bothInfs)) 
                       & ((((IData)((vlTOPp->a >> 0x20U)) 
                            & (~ (IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__common_ltMags))) 
                           & (~ (IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__common_eqMags))) 
                          | ((~ (IData)((vlTOPp->b 
                                         >> 0x20U))) 
                             & (IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__common_ltMags)))))));
    vlTOPp->eq = ((IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__ordered) 
                  & (IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__ordered_eq));
    vlTOPp->lt = ((IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__ordered) 
                  & (IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__ordered_lt));
    vlTOPp->gt = (((IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__ordered) 
                   & (~ (IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__ordered_lt))) 
                  & (~ (IData)(vlTOPp->compareRecF32__DOT__compareRecFN__DOT__ordered_eq)));
}

void VcompareRecF32::_eval(VcompareRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF32::_eval\n"); );
    VcompareRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VcompareRecF32::_eval_initial(VcompareRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF32::_eval_initial\n"); );
    VcompareRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VcompareRecF32::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF32::final\n"); );
    // Variables
    VcompareRecF32__Syms* __restrict vlSymsp = this->__VlSymsp;
    VcompareRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VcompareRecF32::_eval_settle(VcompareRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF32::_eval_settle\n"); );
    VcompareRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VcompareRecF32::_change_request(VcompareRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF32::_change_request\n"); );
    VcompareRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VcompareRecF32::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF32::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((a & VL_ULL(0)))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b & VL_ULL(0)))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((signaling & 0xfeU))) {
        Verilated::overWidthError("signaling");}
}
#endif // VL_DEBUG

void VcompareRecF32::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF32::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_Q(33);
    b = VL_RAND_RESET_Q(33);
    signaling = VL_RAND_RESET_I(1);
    lt = VL_RAND_RESET_I(1);
    eq = VL_RAND_RESET_I(1);
    gt = VL_RAND_RESET_I(1);
    unordered = VL_RAND_RESET_I(1);
    exceptionFlags = VL_RAND_RESET_I(5);
    compareRecF32__DOT__compareRecFN__DOT__sigA = VL_RAND_RESET_I(25);
    compareRecF32__DOT__compareRecFN__DOT__sigB = VL_RAND_RESET_I(25);
    compareRecF32__DOT__compareRecFN__DOT__ordered = VL_RAND_RESET_I(1);
    compareRecF32__DOT__compareRecFN__DOT__bothInfs = VL_RAND_RESET_I(1);
    compareRecF32__DOT__compareRecFN__DOT__bothZeros = VL_RAND_RESET_I(1);
    compareRecF32__DOT__compareRecFN__DOT__eqExps = VL_RAND_RESET_I(1);
    compareRecF32__DOT__compareRecFN__DOT__common_ltMags = VL_RAND_RESET_I(1);
    compareRecF32__DOT__compareRecFN__DOT__common_eqMags = VL_RAND_RESET_I(1);
    compareRecF32__DOT__compareRecFN__DOT__ordered_lt = VL_RAND_RESET_I(1);
    compareRecF32__DOT__compareRecFN__DOT__ordered_eq = VL_RAND_RESET_I(1);
}
