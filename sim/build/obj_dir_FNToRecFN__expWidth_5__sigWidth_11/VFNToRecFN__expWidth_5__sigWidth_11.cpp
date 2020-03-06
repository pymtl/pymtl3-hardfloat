// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFNToRecFN__expWidth_5__sigWidth_11.h for the primary calling header

#include "VFNToRecFN__expWidth_5__sigWidth_11.h"
#include "VFNToRecFN__expWidth_5__sigWidth_11__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VFNToRecFN__expWidth_5__sigWidth_11) {
    VFNToRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp = __VlSymsp = new VFNToRecFN__expWidth_5__sigWidth_11__Syms(this, name());
    VFNToRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VFNToRecFN__expWidth_5__sigWidth_11::__Vconfigure(VFNToRecFN__expWidth_5__sigWidth_11__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VFNToRecFN__expWidth_5__sigWidth_11::~VFNToRecFN__expWidth_5__sigWidth_11() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VFNToRecFN__expWidth_5__sigWidth_11::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFNToRecFN__expWidth_5__sigWidth_11::eval\n"); );
    VFNToRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VFNToRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("fNToRecFN.v", 87, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VFNToRecFN__expWidth_5__sigWidth_11::_eval_initial_loop(VFNToRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("fNToRecFN.v", 87, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VFNToRecFN__expWidth_5__sigWidth_11::_combo__TOP__1(VFNToRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFNToRecFN__expWidth_5__sigWidth_11::_combo__TOP__1\n"); );
    VFNToRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3feU & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (1U & ((IData)(vlTOPp->in_) >> 9U)));
    vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3fdU & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (2U & ((IData)(vlTOPp->in_) >> 7U)));
    vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3fbU & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (4U & ((IData)(vlTOPp->in_) >> 5U)));
    vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3f7U & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (8U & ((IData)(vlTOPp->in_) >> 3U)));
    vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3efU & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (0x10U & ((IData)(vlTOPp->in_) >> 1U)));
    vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3dfU & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (0x20U & ((IData)(vlTOPp->in_) << 1U)));
    vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3bfU & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (0x40U & ((IData)(vlTOPp->in_) << 3U)));
    vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x37fU & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (0x80U & ((IData)(vlTOPp->in_) << 5U)));
    vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x2ffU & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (0x100U & ((IData)(vlTOPp->in_) << 7U)));
    vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x1ffU & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (0x200U & ((IData)(vlTOPp->in_) << 9U)));
    vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x400U | (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn)) 
           & ((IData)(1U) + (0x3ffU & (~ (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn)))));
    vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0xfU & (((((((((((2U & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                             ? 1U : 0U) | ((4U & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                                            ? 2U : 0U)) 
                          | ((8U & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                              ? 3U : 0U)) | ((0x10U 
                                              & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                                              ? 4U : 0U)) 
                        | ((0x20U & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                            ? 5U : 0U)) | ((0x40U & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                                            ? 6U : 0U)) 
                      | ((0x80U & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                          ? 7U : 0U)) | ((0x100U & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                                          ? 8U : 0U)) 
                    | ((0x200U & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                        ? 9U : 0U)) | ((0x400U & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                                        ? 0xaU : 0U)));
    vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & ((IData)(vlTOPp->in_) 
                                      >> 0xaU))) ? 
                     (0x3fU ^ (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar))
                      : (0x1fU & ((IData)(vlTOPp->in_) 
                                  >> 0xaU))) + (0x10U 
                                                | ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->in_) 
                                                        >> 0xaU)))
                                                    ? 2U
                                                    : 1U))));
    vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__exp 
        = ((0x38U & (((3U == (3U & ((IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__adjustedExp) 
                                    >> 4U))) ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlTOPp->in_))))
                       : (((0U == (0x1fU & ((IData)(vlTOPp->in_) 
                                            >> 0xaU))) 
                           & (0U == (0x3ffU & (IData)(vlTOPp->in_))))
                           ? 0U : ((IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__adjustedExp) 
                                   >> 3U))) << 3U)) 
           | (7U & (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__adjustedExp)));
    vlTOPp->out = ((0x10000U & ((IData)(vlTOPp->in_) 
                                << 1U)) | (((IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__exp) 
                                            << 0xaU) 
                                           | (0x3ffU 
                                              & ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->in_) 
                                                      >> 0xaU)))
                                                  ? 
                                                 (((IData)(vlTOPp->in_) 
                                                   << (IData)(vlTOPp->FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar)) 
                                                  << 1U)
                                                  : (IData)(vlTOPp->in_)))));
}

void VFNToRecFN__expWidth_5__sigWidth_11::_eval(VFNToRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFNToRecFN__expWidth_5__sigWidth_11::_eval\n"); );
    VFNToRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VFNToRecFN__expWidth_5__sigWidth_11::_eval_initial(VFNToRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFNToRecFN__expWidth_5__sigWidth_11::_eval_initial\n"); );
    VFNToRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFNToRecFN__expWidth_5__sigWidth_11::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFNToRecFN__expWidth_5__sigWidth_11::final\n"); );
    // Variables
    VFNToRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp = this->__VlSymsp;
    VFNToRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFNToRecFN__expWidth_5__sigWidth_11::_eval_settle(VFNToRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFNToRecFN__expWidth_5__sigWidth_11::_eval_settle\n"); );
    VFNToRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VFNToRecFN__expWidth_5__sigWidth_11::_change_request(VFNToRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFNToRecFN__expWidth_5__sigWidth_11::_change_request\n"); );
    VFNToRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFNToRecFN__expWidth_5__sigWidth_11::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFNToRecFN__expWidth_5__sigWidth_11::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG

void VFNToRecFN__expWidth_5__sigWidth_11::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFNToRecFN__expWidth_5__sigWidth_11::_ctor_var_reset\n"); );
    // Body
    reset = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    in_ = VL_RAND_RESET_I(16);
    out = VL_RAND_RESET_I(17);
    FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__adjustedExp = VL_RAND_RESET_I(6);
    FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__exp = VL_RAND_RESET_I(6);
    FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__reverseIn = VL_RAND_RESET_I(10);
    FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn = VL_RAND_RESET_I(11);
    FNToRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(4);
}
