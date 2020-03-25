// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf16ToRecF16.h for the primary calling header

#include "Vf16ToRecF16.h"
#include "Vf16ToRecF16__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vf16ToRecF16) {
    Vf16ToRecF16__Syms* __restrict vlSymsp = __VlSymsp = new Vf16ToRecF16__Syms(this, name());
    Vf16ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vf16ToRecF16::__Vconfigure(Vf16ToRecF16__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vf16ToRecF16::~Vf16ToRecF16() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vf16ToRecF16::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vf16ToRecF16::eval\n"); );
    Vf16ToRecF16__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vf16ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/fNToRecFN_spec.v", 37, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vf16ToRecF16::_eval_initial_loop(Vf16ToRecF16__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/fNToRecFN_spec.v", 37, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vf16ToRecF16::_combo__TOP__1(Vf16ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf16ToRecF16::_combo__TOP__1\n"); );
    Vf16ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3feU & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (1U & ((IData)(vlTOPp->in) >> 9U)));
    vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3fdU & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (2U & ((IData)(vlTOPp->in) >> 7U)));
    vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3fbU & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (4U & ((IData)(vlTOPp->in) >> 5U)));
    vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3f7U & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (8U & ((IData)(vlTOPp->in) >> 3U)));
    vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3efU & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (0x10U & ((IData)(vlTOPp->in) >> 1U)));
    vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3dfU & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (0x20U & ((IData)(vlTOPp->in) << 1U)));
    vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3bfU & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (0x40U & ((IData)(vlTOPp->in) << 3U)));
    vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x37fU & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (0x80U & ((IData)(vlTOPp->in) << 5U)));
    vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x2ffU & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (0x100U & ((IData)(vlTOPp->in) << 7U)));
    vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x1ffU & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn)) 
           | (0x200U & ((IData)(vlTOPp->in) << 9U)));
    vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x400U | (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn)) 
           & ((IData)(1U) + (0x3ffU & (~ (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn)))));
    vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0xfU & (((((((((((2U & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                             ? 1U : 0U) | ((4U & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                                            ? 2U : 0U)) 
                          | ((8U & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                              ? 3U : 0U)) | ((0x10U 
                                              & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                                              ? 4U : 0U)) 
                        | ((0x20U & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                            ? 5U : 0U)) | ((0x40U & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                                            ? 6U : 0U)) 
                      | ((0x80U & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                          ? 7U : 0U)) | ((0x100U & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                                          ? 8U : 0U)) 
                    | ((0x200U & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                        ? 9U : 0U)) | ((0x400U & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn))
                                        ? 0xaU : 0U)));
    vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & ((IData)(vlTOPp->in) 
                                      >> 0xaU))) ? 
                     (0x3fU ^ (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar))
                      : (0x1fU & ((IData)(vlTOPp->in) 
                                  >> 0xaU))) + (0x10U 
                                                | ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->in) 
                                                        >> 0xaU)))
                                                    ? 2U
                                                    : 1U))));
    vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__exp = 
        ((0x38U & (((3U == (3U & ((IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__adjustedExp) 
                                  >> 4U))) ? (6U | 
                                              (0U != 
                                               (0x3ffU 
                                                & (IData)(vlTOPp->in))))
                     : (((0U == (0x1fU & ((IData)(vlTOPp->in) 
                                          >> 0xaU))) 
                         & (0U == (0x3ffU & (IData)(vlTOPp->in))))
                         ? 0U : ((IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__adjustedExp) 
                                 >> 3U))) << 3U)) | 
         (7U & (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__adjustedExp)));
    vlTOPp->out = ((0x10000U & ((IData)(vlTOPp->in) 
                                << 1U)) | (((IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__exp) 
                                            << 0xaU) 
                                           | (0x3ffU 
                                              & ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->in) 
                                                      >> 0xaU)))
                                                  ? 
                                                 (((IData)(vlTOPp->in) 
                                                   << (IData)(vlTOPp->f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar)) 
                                                  << 1U)
                                                  : (IData)(vlTOPp->in)))));
}

void Vf16ToRecF16::_eval(Vf16ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf16ToRecF16::_eval\n"); );
    Vf16ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vf16ToRecF16::_eval_initial(Vf16ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf16ToRecF16::_eval_initial\n"); );
    Vf16ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vf16ToRecF16::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf16ToRecF16::final\n"); );
    // Variables
    Vf16ToRecF16__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vf16ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vf16ToRecF16::_eval_settle(Vf16ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf16ToRecF16::_eval_settle\n"); );
    Vf16ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vf16ToRecF16::_change_request(Vf16ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf16ToRecF16::_change_request\n"); );
    Vf16ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vf16ToRecF16::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf16ToRecF16::_eval_debug_assertions\n"); );
}
#endif // VL_DEBUG

void Vf16ToRecF16::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf16ToRecF16::_ctor_var_reset\n"); );
    // Body
    in = VL_RAND_RESET_I(16);
    out = VL_RAND_RESET_I(17);
    f16ToRecF16__DOT__fNToRecFN__DOT__adjustedExp = VL_RAND_RESET_I(6);
    f16ToRecF16__DOT__fNToRecFN__DOT__exp = VL_RAND_RESET_I(6);
    f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn = VL_RAND_RESET_I(10);
    f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn = VL_RAND_RESET_I(11);
    f16ToRecF16__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(4);
}
