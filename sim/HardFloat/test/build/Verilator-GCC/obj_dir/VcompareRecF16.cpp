// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VcompareRecF16.h for the primary calling header

#include "VcompareRecF16.h"
#include "VcompareRecF16__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VcompareRecF16) {
    VcompareRecF16__Syms* __restrict vlSymsp = __VlSymsp = new VcompareRecF16__Syms(this, name());
    VcompareRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VcompareRecF16::__Vconfigure(VcompareRecF16__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VcompareRecF16::~VcompareRecF16() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VcompareRecF16::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VcompareRecF16::eval\n"); );
    VcompareRecF16__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VcompareRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/compareRecFN_spec.v", 38, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VcompareRecF16::_eval_initial_loop(VcompareRecF16__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/compareRecFN_spec.v", 38, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VcompareRecF16::_combo__TOP__1(VcompareRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF16::_combo__TOP__1\n"); );
    VcompareRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->compareRecF16__DOT__compareRecFN__DOT__ordered 
        = (1U & ((~ ((3U == (3U & (vlTOPp->a >> 0xeU))) 
                     & (vlTOPp->a >> 0xdU))) & (~ (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->b 
                                                        >> 0xeU))) 
                                                   & (vlTOPp->b 
                                                      >> 0xdU)))));
    vlTOPp->compareRecF16__DOT__compareRecFN__DOT__bothInfs 
        = (((3U == (3U & (vlTOPp->a >> 0xeU))) & (~ 
                                                  (vlTOPp->a 
                                                   >> 0xdU))) 
           & ((3U == (3U & (vlTOPp->b >> 0xeU))) & 
              (~ (vlTOPp->b >> 0xdU))));
    vlTOPp->compareRecF16__DOT__compareRecFN__DOT__bothZeros 
        = ((0U == (7U & (vlTOPp->a >> 0xdU))) & (0U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->b 
                                                     >> 0xdU))));
    vlTOPp->compareRecF16__DOT__compareRecFN__DOT__sigA 
        = (((0U != (7U & (vlTOPp->a >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->a));
    vlTOPp->compareRecF16__DOT__compareRecFN__DOT__sigB 
        = (((0U != (7U & (vlTOPp->b >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->b));
    vlTOPp->compareRecF16__DOT__compareRecFN__DOT__eqExps 
        = ((0x3fU & (vlTOPp->a >> 0xaU)) == (0x3fU 
                                             & (vlTOPp->b 
                                                >> 0xaU)));
    vlTOPp->unordered = (1U & (~ (IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__ordered)));
    vlTOPp->exceptionFlags = (((((7U == (7U & (vlTOPp->a 
                                               >> 0xdU))) 
                                 & (~ (vlTOPp->a >> 9U))) 
                                | ((7U == (7U & (vlTOPp->b 
                                                 >> 0xdU))) 
                                   & (~ (vlTOPp->b 
                                         >> 9U)))) 
                               | ((IData)(vlTOPp->signaling) 
                                  & (~ (IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__ordered)))) 
                              << 4U);
    vlTOPp->compareRecF16__DOT__compareRecFN__DOT__common_ltMags 
        = (VL_LTS_III(1,7,7, (0x3fU & (vlTOPp->a >> 0xaU)), 
                      (0x3fU & (vlTOPp->b >> 0xaU))) 
           | ((IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__eqExps) 
              & ((IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__sigA) 
                 < (IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__sigB))));
    vlTOPp->compareRecF16__DOT__compareRecFN__DOT__common_eqMags 
        = ((IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__eqExps) 
           & ((IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__sigA) 
              == (IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__sigB)));
    vlTOPp->compareRecF16__DOT__compareRecFN__DOT__ordered_eq 
        = ((IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__bothZeros) 
           | (((1U & (vlTOPp->a >> 0x10U)) == (1U & 
                                               (vlTOPp->b 
                                                >> 0x10U))) 
              & ((IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__bothInfs) 
                 | (IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__common_eqMags))));
    vlTOPp->compareRecF16__DOT__compareRecFN__DOT__ordered_lt 
        = (1U & ((~ (IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__bothZeros)) 
                 & (((vlTOPp->a >> 0x10U) & (~ (vlTOPp->b 
                                                >> 0x10U))) 
                    | ((~ (IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__bothInfs)) 
                       & ((((vlTOPp->a >> 0x10U) & 
                            (~ (IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__common_ltMags))) 
                           & (~ (IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__common_eqMags))) 
                          | ((~ (vlTOPp->b >> 0x10U)) 
                             & (IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__common_ltMags)))))));
    vlTOPp->eq = ((IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__ordered) 
                  & (IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__ordered_eq));
    vlTOPp->lt = ((IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__ordered) 
                  & (IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__ordered_lt));
    vlTOPp->gt = (((IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__ordered) 
                   & (~ (IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__ordered_lt))) 
                  & (~ (IData)(vlTOPp->compareRecF16__DOT__compareRecFN__DOT__ordered_eq)));
}

void VcompareRecF16::_eval(VcompareRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF16::_eval\n"); );
    VcompareRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VcompareRecF16::_eval_initial(VcompareRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF16::_eval_initial\n"); );
    VcompareRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VcompareRecF16::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF16::final\n"); );
    // Variables
    VcompareRecF16__Syms* __restrict vlSymsp = this->__VlSymsp;
    VcompareRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VcompareRecF16::_eval_settle(VcompareRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF16::_eval_settle\n"); );
    VcompareRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VcompareRecF16::_change_request(VcompareRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF16::_change_request\n"); );
    VcompareRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VcompareRecF16::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF16::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((a & 0xfffe0000U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b & 0xfffe0000U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((signaling & 0xfeU))) {
        Verilated::overWidthError("signaling");}
}
#endif // VL_DEBUG

void VcompareRecF16::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcompareRecF16::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(17);
    b = VL_RAND_RESET_I(17);
    signaling = VL_RAND_RESET_I(1);
    lt = VL_RAND_RESET_I(1);
    eq = VL_RAND_RESET_I(1);
    gt = VL_RAND_RESET_I(1);
    unordered = VL_RAND_RESET_I(1);
    exceptionFlags = VL_RAND_RESET_I(5);
    compareRecF16__DOT__compareRecFN__DOT__sigA = VL_RAND_RESET_I(12);
    compareRecF16__DOT__compareRecFN__DOT__sigB = VL_RAND_RESET_I(12);
    compareRecF16__DOT__compareRecFN__DOT__ordered = VL_RAND_RESET_I(1);
    compareRecF16__DOT__compareRecFN__DOT__bothInfs = VL_RAND_RESET_I(1);
    compareRecF16__DOT__compareRecFN__DOT__bothZeros = VL_RAND_RESET_I(1);
    compareRecF16__DOT__compareRecFN__DOT__eqExps = VL_RAND_RESET_I(1);
    compareRecF16__DOT__compareRecFN__DOT__common_ltMags = VL_RAND_RESET_I(1);
    compareRecF16__DOT__compareRecFN__DOT__common_eqMags = VL_RAND_RESET_I(1);
    compareRecF16__DOT__compareRecFN__DOT__ordered_lt = VL_RAND_RESET_I(1);
    compareRecF16__DOT__compareRecFN__DOT__ordered_eq = VL_RAND_RESET_I(1);
}
