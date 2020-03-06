// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRecFNToFN__expWidth_8__sigWidth_23.h for the primary calling header

#include "VRecFNToFN__expWidth_8__sigWidth_23.h"
#include "VRecFNToFN__expWidth_8__sigWidth_23__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VRecFNToFN__expWidth_8__sigWidth_23) {
    VRecFNToFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp = __VlSymsp = new VRecFNToFN__expWidth_8__sigWidth_23__Syms(this, name());
    VRecFNToFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VRecFNToFN__expWidth_8__sigWidth_23::__Vconfigure(VRecFNToFN__expWidth_8__sigWidth_23__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VRecFNToFN__expWidth_8__sigWidth_23::~VRecFNToFN__expWidth_8__sigWidth_23() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VRecFNToFN__expWidth_8__sigWidth_23::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRecFNToFN__expWidth_8__sigWidth_23::eval\n"); );
    VRecFNToFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VRecFNToFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("recFNToFN.v", 78, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VRecFNToFN__expWidth_8__sigWidth_23::_eval_initial_loop(VRecFNToFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("recFNToFN.v", 78, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VRecFNToFN__expWidth_8__sigWidth_23::_combo__TOP__1(VRecFNToFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecFNToFN__expWidth_8__sigWidth_23::_combo__TOP__1\n"); );
    VRecFNToFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->RecFNToFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__isInf 
        = ((3U == (3U & (vlTOPp->in_ >> 0x1dU))) & 
           (~ (vlTOPp->in_ >> 0x1cU)));
    vlTOPp->RecFNToFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__sig 
        = (((0U != (7U & (vlTOPp->in_ >> 0x1cU))) << 0x16U) 
           | (0x3fffffU & vlTOPp->in_));
    vlTOPp->out = ((0x40000000U & (vlTOPp->in_ >> 1U)) 
                   | ((0x3fc00000U & ((((0x82U > (0x1ffU 
                                                  & (vlTOPp->in_ 
                                                     >> 0x16U)))
                                         ? 0U : ((IData)(1U) 
                                                 + 
                                                 ((0x1ffU 
                                                   & (vlTOPp->in_ 
                                                      >> 0x16U)) 
                                                  - (IData)(0x82U)))) 
                                       | ((((3U == 
                                             (3U & 
                                              (vlTOPp->in_ 
                                               >> 0x1dU))) 
                                            & (vlTOPp->in_ 
                                               >> 0x1cU)) 
                                           | (IData)(vlTOPp->RecFNToFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__isInf))
                                           ? 0xffU : 0U)) 
                                      << 0x16U)) | 
                      (0x3fffffU & ((0x82U > (0x1ffU 
                                              & (vlTOPp->in_ 
                                                 >> 0x16U)))
                                     ? ((vlTOPp->RecFNToFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__sig 
                                         >> 1U) >> 
                                        (0x1fU & ((IData)(1U) 
                                                  - 
                                                  (0x1ffU 
                                                   & (vlTOPp->in_ 
                                                      >> 0x16U)))))
                                     : ((IData)(vlTOPp->RecFNToFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__isInf)
                                         ? 0U : vlTOPp->RecFNToFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__sig)))));
}

void VRecFNToFN__expWidth_8__sigWidth_23::_eval(VRecFNToFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecFNToFN__expWidth_8__sigWidth_23::_eval\n"); );
    VRecFNToFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VRecFNToFN__expWidth_8__sigWidth_23::_eval_initial(VRecFNToFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecFNToFN__expWidth_8__sigWidth_23::_eval_initial\n"); );
    VRecFNToFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRecFNToFN__expWidth_8__sigWidth_23::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecFNToFN__expWidth_8__sigWidth_23::final\n"); );
    // Variables
    VRecFNToFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRecFNToFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRecFNToFN__expWidth_8__sigWidth_23::_eval_settle(VRecFNToFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecFNToFN__expWidth_8__sigWidth_23::_eval_settle\n"); );
    VRecFNToFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VRecFNToFN__expWidth_8__sigWidth_23::_change_request(VRecFNToFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecFNToFN__expWidth_8__sigWidth_23::_change_request\n"); );
    VRecFNToFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VRecFNToFN__expWidth_8__sigWidth_23::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecFNToFN__expWidth_8__sigWidth_23::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG

void VRecFNToFN__expWidth_8__sigWidth_23::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecFNToFN__expWidth_8__sigWidth_23::_ctor_var_reset\n"); );
    // Body
    reset = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    in_ = VL_RAND_RESET_I(32);
    out = VL_RAND_RESET_I(31);
    RecFNToFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__isInf = VL_RAND_RESET_I(1);
    RecFNToFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__sig = VL_RAND_RESET_I(24);
}
