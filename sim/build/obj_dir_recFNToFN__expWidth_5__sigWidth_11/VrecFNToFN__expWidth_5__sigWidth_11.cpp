// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecFNToFN__expWidth_5__sigWidth_11.h for the primary calling header

#include "VrecFNToFN__expWidth_5__sigWidth_11.h"
#include "VrecFNToFN__expWidth_5__sigWidth_11__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VrecFNToFN__expWidth_5__sigWidth_11) {
    VrecFNToFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp = __VlSymsp = new VrecFNToFN__expWidth_5__sigWidth_11__Syms(this, name());
    VrecFNToFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VrecFNToFN__expWidth_5__sigWidth_11::__Vconfigure(VrecFNToFN__expWidth_5__sigWidth_11__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VrecFNToFN__expWidth_5__sigWidth_11::~VrecFNToFN__expWidth_5__sigWidth_11() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VrecFNToFN__expWidth_5__sigWidth_11::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecFNToFN__expWidth_5__sigWidth_11::eval\n"); );
    VrecFNToFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecFNToFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VrecFNToFN__expWidth_5__sigWidth_11::_eval_initial_loop(VrecFNToFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VrecFNToFN__expWidth_5__sigWidth_11::_combo__TOP__1(VrecFNToFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToFN__expWidth_5__sigWidth_11::_combo__TOP__1\n"); );
    VrecFNToFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->recFNToFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__isInf 
        = ((3U == (3U & (vlTOPp->in_ >> 0xeU))) & (~ 
                                                   (vlTOPp->in_ 
                                                    >> 0xdU)));
    vlTOPp->recFNToFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__sig 
        = (((0U != (7U & (vlTOPp->in_ >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->in_));
    vlTOPp->out = ((0x8000U & (vlTOPp->in_ >> 1U)) 
                   | ((0x7c00U & ((((0x12U > (0x3fU 
                                              & (vlTOPp->in_ 
                                                 >> 0xaU)))
                                     ? 0U : ((IData)(1U) 
                                             + ((0x3fU 
                                                 & (vlTOPp->in_ 
                                                    >> 0xaU)) 
                                                - (IData)(0x12U)))) 
                                   | ((((3U == (3U 
                                                & (vlTOPp->in_ 
                                                   >> 0xeU))) 
                                        & (vlTOPp->in_ 
                                           >> 0xdU)) 
                                       | (IData)(vlTOPp->recFNToFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__isInf))
                                       ? 0x1fU : 0U)) 
                                  << 0xaU)) | (0x3ffU 
                                               & ((0x12U 
                                                   > 
                                                   (0x3fU 
                                                    & (vlTOPp->in_ 
                                                       >> 0xaU)))
                                                   ? 
                                                  (((IData)(vlTOPp->recFNToFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__sig) 
                                                    >> 1U) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (0x3fU 
                                                        & (vlTOPp->in_ 
                                                           >> 0xaU)))))
                                                   : 
                                                  ((IData)(vlTOPp->recFNToFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__isInf)
                                                    ? 0U
                                                    : (IData)(vlTOPp->recFNToFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__sig))))));
}

void VrecFNToFN__expWidth_5__sigWidth_11::_eval(VrecFNToFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToFN__expWidth_5__sigWidth_11::_eval\n"); );
    VrecFNToFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VrecFNToFN__expWidth_5__sigWidth_11::_eval_initial(VrecFNToFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToFN__expWidth_5__sigWidth_11::_eval_initial\n"); );
    VrecFNToFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecFNToFN__expWidth_5__sigWidth_11::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToFN__expWidth_5__sigWidth_11::final\n"); );
    // Variables
    VrecFNToFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecFNToFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecFNToFN__expWidth_5__sigWidth_11::_eval_settle(VrecFNToFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToFN__expWidth_5__sigWidth_11::_eval_settle\n"); );
    VrecFNToFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VrecFNToFN__expWidth_5__sigWidth_11::_change_request(VrecFNToFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToFN__expWidth_5__sigWidth_11::_change_request\n"); );
    VrecFNToFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecFNToFN__expWidth_5__sigWidth_11::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToFN__expWidth_5__sigWidth_11::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((in_ & 0xfffe0000U))) {
        Verilated::overWidthError("in_");}
}
#endif  // VL_DEBUG

void VrecFNToFN__expWidth_5__sigWidth_11::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToFN__expWidth_5__sigWidth_11::_ctor_var_reset\n"); );
    // Body
    reset = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    in_ = VL_RAND_RESET_I(17);
    out = VL_RAND_RESET_I(16);
    recFNToFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__isInf = VL_RAND_RESET_I(1);
    recFNToFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__sig = VL_RAND_RESET_I(12);
}
