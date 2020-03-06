// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfNToRecFN__expWidth_8__sigWidth_23.h for the primary calling header

#include "VfNToRecFN__expWidth_8__sigWidth_23.h"
#include "VfNToRecFN__expWidth_8__sigWidth_23__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VfNToRecFN__expWidth_8__sigWidth_23) {
    VfNToRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp = __VlSymsp = new VfNToRecFN__expWidth_8__sigWidth_23__Syms(this, name());
    VfNToRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VfNToRecFN__expWidth_8__sigWidth_23::__Vconfigure(VfNToRecFN__expWidth_8__sigWidth_23__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VfNToRecFN__expWidth_8__sigWidth_23::~VfNToRecFN__expWidth_8__sigWidth_23() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VfNToRecFN__expWidth_8__sigWidth_23::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VfNToRecFN__expWidth_8__sigWidth_23::eval\n"); );
    VfNToRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VfNToRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VfNToRecFN__expWidth_8__sigWidth_23::_eval_initial_loop(VfNToRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VfNToRecFN__expWidth_8__sigWidth_23::_combo__TOP__1(VfNToRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfNToRecFN__expWidth_8__sigWidth_23::_combo__TOP__1\n"); );
    VfNToRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3ffffeU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (1U & (vlTOPp->in_ >> 0x15U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3ffffdU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (2U & (vlTOPp->in_ >> 0x13U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3ffffbU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (4U & (vlTOPp->in_ >> 0x11U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3ffff7U & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (8U & (vlTOPp->in_ >> 0xfU)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3fffefU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x10U & (vlTOPp->in_ >> 0xdU)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3fffdfU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x20U & (vlTOPp->in_ >> 0xbU)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3fffbfU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x40U & (vlTOPp->in_ >> 9U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3fff7fU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x80U & (vlTOPp->in_ >> 7U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3ffeffU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x100U & (vlTOPp->in_ >> 5U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3ffdffU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x200U & (vlTOPp->in_ >> 3U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3ffbffU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x400U & (vlTOPp->in_ >> 1U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3ff7ffU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x800U & (vlTOPp->in_ << 1U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3fefffU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x1000U & (vlTOPp->in_ << 3U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3fdfffU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x2000U & (vlTOPp->in_ << 5U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3fbfffU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x4000U & (vlTOPp->in_ << 7U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3f7fffU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x8000U & (vlTOPp->in_ << 9U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3effffU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x10000U & (vlTOPp->in_ << 0xbU)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3dffffU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x20000U & (vlTOPp->in_ << 0xdU)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3bffffU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x40000U & (vlTOPp->in_ << 0xfU)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x37ffffU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x80000U & (vlTOPp->in_ << 0x11U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x2fffffU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x100000U & (vlTOPp->in_ << 0x13U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x1fffffU & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x200000U & (vlTOPp->in_ << 0x15U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x400000U | vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x3fffffU & (~ vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn))));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                              ? 1U : 0U) | ((4U & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 2U : 0U)) 
                           | ((8U & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 3U : 0U)) | ((0x10U 
                                               & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 5U : 0U)) | ((0x40U 
                                             & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 6U : 0U)) 
                       | ((0x80U & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 7U : 0U)) | ((0x100U & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 8U : 0U)) 
                     | ((0x200U & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 9U : 0U)) | ((0x400U & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0xaU : 0U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((IData)(vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((0x800U & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 0xbU : 0U)) | ((0x1000U 
                                                   & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((0x2000U & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 0xdU : 0U)) | ((0x4000U 
                                                 & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((0x8000U & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 0xfU : 0U)) | ((0x10000U 
                                               & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 0x10U
                                               : 0U)) 
                       | ((0x20000U & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0x11U : 0U)) | ((0x40000U 
                                              & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                              ? 0x12U
                                              : 0U)) 
                     | ((0x80000U & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0x13U : 0U)) | ((0x100000U 
                                            & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                            ? 0x14U
                                            : 0U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__Bit__BRA__22__KET____DOT__countSoFar 
        = (0x1fU & (((IData)(vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                     | ((0x200000U & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0x15U : 0U)) | ((0x400000U 
                                            & vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                            ? 0x16U
                                            : 0U)));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlTOPp->in_ 
                                       >> 0x16U))) ? 
                      (0x1ffU ^ (IData)(vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__Bit__BRA__22__KET____DOT__countSoFar))
                       : (0xffU & (vlTOPp->in_ >> 0x16U))) 
                     + (0x80U | ((0U == (0xffU & (vlTOPp->in_ 
                                                  >> 0x16U)))
                                  ? 2U : 1U))));
    vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__exp 
        = ((0x1c0U & (((3U == (3U & ((IData)(vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__adjustedExp) 
                                     >> 7U))) ? (6U 
                                                 | (0U 
                                                    != 
                                                    (0x3fffffU 
                                                     & vlTOPp->in_)))
                        : (((0U == (0xffU & (vlTOPp->in_ 
                                             >> 0x16U))) 
                            & (0U == (0x3fffffU & vlTOPp->in_)))
                            ? 0U : ((IData)(vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__adjustedExp) 
                                    >> 6U))) << 6U)) 
           | (0x3fU & (IData)(vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__adjustedExp)));
    vlTOPp->out = ((0x80000000U & (vlTOPp->in_ << 1U)) 
                   | (((IData)(vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__exp) 
                       << 0x16U) | (0x3fffffU & ((0U 
                                                  == 
                                                  (0xffU 
                                                   & (vlTOPp->in_ 
                                                      >> 0x16U)))
                                                  ? 
                                                 ((vlTOPp->in_ 
                                                   << (IData)(vlTOPp->fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__Bit__BRA__22__KET____DOT__countSoFar)) 
                                                  << 1U)
                                                  : vlTOPp->in_))));
}

void VfNToRecFN__expWidth_8__sigWidth_23::_eval(VfNToRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfNToRecFN__expWidth_8__sigWidth_23::_eval\n"); );
    VfNToRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VfNToRecFN__expWidth_8__sigWidth_23::_eval_initial(VfNToRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfNToRecFN__expWidth_8__sigWidth_23::_eval_initial\n"); );
    VfNToRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VfNToRecFN__expWidth_8__sigWidth_23::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfNToRecFN__expWidth_8__sigWidth_23::final\n"); );
    // Variables
    VfNToRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp = this->__VlSymsp;
    VfNToRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VfNToRecFN__expWidth_8__sigWidth_23::_eval_settle(VfNToRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfNToRecFN__expWidth_8__sigWidth_23::_eval_settle\n"); );
    VfNToRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VfNToRecFN__expWidth_8__sigWidth_23::_change_request(VfNToRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfNToRecFN__expWidth_8__sigWidth_23::_change_request\n"); );
    VfNToRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VfNToRecFN__expWidth_8__sigWidth_23::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfNToRecFN__expWidth_8__sigWidth_23::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((in_ & 0x80000000U))) {
        Verilated::overWidthError("in_");}
}
#endif  // VL_DEBUG

void VfNToRecFN__expWidth_8__sigWidth_23::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfNToRecFN__expWidth_8__sigWidth_23::_ctor_var_reset\n"); );
    // Body
    reset = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    in_ = VL_RAND_RESET_I(31);
    out = VL_RAND_RESET_I(32);
    fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__adjustedExp = VL_RAND_RESET_I(9);
    fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__exp = VL_RAND_RESET_I(9);
    fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__reverseIn = VL_RAND_RESET_I(22);
    fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__oneLeastReverseIn = VL_RAND_RESET_I(23);
    fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    fNToRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__countLeadingZeros__DOT__Bit__BRA__22__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
}
