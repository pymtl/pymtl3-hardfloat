// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf32ToRecF32.h for the primary calling header

#include "Vf32ToRecF32.h"
#include "Vf32ToRecF32__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vf32ToRecF32) {
    Vf32ToRecF32__Syms* __restrict vlSymsp = __VlSymsp = new Vf32ToRecF32__Syms(this, name());
    Vf32ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vf32ToRecF32::__Vconfigure(Vf32ToRecF32__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vf32ToRecF32::~Vf32ToRecF32() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vf32ToRecF32::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vf32ToRecF32::eval\n"); );
    Vf32ToRecF32__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vf32ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/fNToRecFN_spec.v", 43, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vf32ToRecF32::_eval_initial_loop(Vf32ToRecF32__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/fNToRecFN_spec.v", 43, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vf32ToRecF32::_combo__TOP__1(Vf32ToRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf32ToRecF32::_combo__TOP__1\n"); );
    Vf32ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffffeU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (1U & (vlTOPp->in >> 0x16U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffffdU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (2U & (vlTOPp->in >> 0x14U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffffbU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (4U & (vlTOPp->in >> 0x12U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffff7U & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (8U & (vlTOPp->in >> 0x10U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fffefU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x10U & (vlTOPp->in >> 0xeU)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fffdfU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x20U & (vlTOPp->in >> 0xcU)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fffbfU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x40U & (vlTOPp->in >> 0xaU)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fff7fU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x80U & (vlTOPp->in >> 8U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffeffU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x100U & (vlTOPp->in >> 6U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffdffU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x200U & (vlTOPp->in >> 4U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffbffU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x400U & (vlTOPp->in >> 2U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ff7ffU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x800U & vlTOPp->in));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fefffU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x1000U & (vlTOPp->in << 2U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fdfffU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x2000U & (vlTOPp->in << 4U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fbfffU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x4000U & (vlTOPp->in << 6U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7f7fffU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x8000U & (vlTOPp->in << 8U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7effffU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x10000U & (vlTOPp->in << 0xaU)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7dffffU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x20000U & (vlTOPp->in << 0xcU)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7bffffU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x40000U & (vlTOPp->in << 0xeU)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x77ffffU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x80000U & (vlTOPp->in << 0x10U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x6fffffU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x100000U & (vlTOPp->in << 0x12U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x5fffffU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x200000U & (vlTOPp->in << 0x14U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3fffffU & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x400000U & (vlTOPp->in << 0x16U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn))));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                              ? 1U : 0U) | ((4U & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 2U : 0U)) 
                           | ((8U & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 3U : 0U)) | ((0x10U 
                                               & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 5U : 0U)) | ((0x40U 
                                             & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 6U : 0U)) 
                       | ((0x80U & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 7U : 0U)) | ((0x100U & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 8U : 0U)) 
                     | ((0x200U & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 9U : 0U)) | ((0x400U & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0xaU : 0U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((IData)(vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((0x800U & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 0xbU : 0U)) | ((0x1000U 
                                                   & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((0x2000U & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 0xdU : 0U)) | ((0x4000U 
                                                 & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((0x8000U & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 0xfU : 0U)) | ((0x10000U 
                                               & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 0x10U
                                               : 0U)) 
                       | ((0x20000U & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0x11U : 0U)) | ((0x40000U 
                                              & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                              ? 0x12U
                                              : 0U)) 
                     | ((0x80000U & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0x13U : 0U)) | ((0x100000U 
                                            & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                            ? 0x14U
                                            : 0U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                      | ((0x200000U & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                          ? 0x15U : 0U)) | ((0x400000U 
                                             & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0x16U
                                             : 0U)) 
                    | ((0x800000U & vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                        ? 0x17U : 0U)));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlTOPp->in >> 0x17U)))
                       ? (0x1ffU ^ (IData)(vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))
                       : (0xffU & (vlTOPp->in >> 0x17U))) 
                     + (0x80U | ((0U == (0xffU & (vlTOPp->in 
                                                  >> 0x17U)))
                                  ? 2U : 1U))));
    vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__exp = 
        ((0x1c0U & (((3U == (3U & ((IData)(vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__adjustedExp) 
                                   >> 7U))) ? (6U | 
                                               (0U 
                                                != 
                                                (0x7fffffU 
                                                 & vlTOPp->in)))
                      : (((0U == (0xffU & (vlTOPp->in 
                                           >> 0x17U))) 
                          & (0U == (0x7fffffU & vlTOPp->in)))
                          ? 0U : ((IData)(vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__adjustedExp) 
                                  >> 6U))) << 6U)) 
         | (0x3fU & (IData)(vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__adjustedExp)));
    vlTOPp->out = (((QData)((IData)((1U & (vlTOPp->in 
                                           >> 0x1fU)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__exp) 
                                                  << 0x17U) 
                                                 | (0x7fffffU 
                                                    & ((0U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->in 
                                                            >> 0x17U)))
                                                        ? 
                                                       ((vlTOPp->in 
                                                         << (IData)(vlTOPp->f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)) 
                                                        << 1U)
                                                        : vlTOPp->in))))));
}

void Vf32ToRecF32::_eval(Vf32ToRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf32ToRecF32::_eval\n"); );
    Vf32ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vf32ToRecF32::_eval_initial(Vf32ToRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf32ToRecF32::_eval_initial\n"); );
    Vf32ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vf32ToRecF32::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf32ToRecF32::final\n"); );
    // Variables
    Vf32ToRecF32__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vf32ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vf32ToRecF32::_eval_settle(Vf32ToRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf32ToRecF32::_eval_settle\n"); );
    Vf32ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vf32ToRecF32::_change_request(Vf32ToRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf32ToRecF32::_change_request\n"); );
    Vf32ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vf32ToRecF32::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf32ToRecF32::_eval_debug_assertions\n"); );
}
#endif // VL_DEBUG

void Vf32ToRecF32::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf32ToRecF32::_ctor_var_reset\n"); );
    // Body
    in = VL_RAND_RESET_I(32);
    out = VL_RAND_RESET_Q(33);
    f32ToRecF32__DOT__fNToRecFN__DOT__adjustedExp = VL_RAND_RESET_I(9);
    f32ToRecF32__DOT__fNToRecFN__DOT__exp = VL_RAND_RESET_I(9);
    f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn = VL_RAND_RESET_I(23);
    f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn = VL_RAND_RESET_I(24);
    f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    f32ToRecF32__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
}
