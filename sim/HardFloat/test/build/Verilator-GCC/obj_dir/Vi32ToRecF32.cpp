// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi32ToRecF32.h for the primary calling header

#include "Vi32ToRecF32.h"
#include "Vi32ToRecF32__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vi32ToRecF32) {
    Vi32ToRecF32__Syms* __restrict vlSymsp = __VlSymsp = new Vi32ToRecF32__Syms(this, name());
    Vi32ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vi32ToRecF32::__Vconfigure(Vi32ToRecF32__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vi32ToRecF32::~Vi32ToRecF32() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vi32ToRecF32::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vi32ToRecF32::eval\n"); );
    Vi32ToRecF32__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vi32ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/iNToRecFN_spec.v", 167, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vi32ToRecF32::_eval_initial_loop(Vi32ToRecF32__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/iNToRecFN_spec.v", 167, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vi32ToRecF32::_combo__TOP__1(Vi32ToRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi32ToRecF32::_combo__TOP__1\n"); );
    Vi32ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & 
            (vlTOPp->in >> 0x1fU)) | ((3U == (IData)(vlTOPp->roundingMode)) 
                                      & (~ (vlTOPp->in 
                                            >> 0x1fU))));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
        = ((0x80000000U & vlTOPp->in) ? VL_NEGATE_I(vlTOPp->in)
            : vlTOPp->in);
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffffffeU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (1U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                    >> 0x1fU)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffffffdU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (2U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                    >> 0x1dU)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffffffbU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (4U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                    >> 0x1bU)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffffff7U & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (8U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                    >> 0x19U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffffffefU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x10U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                       >> 0x17U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffffffdfU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x20U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                       >> 0x15U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffffffbfU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x40U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                       >> 0x13U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffffff7fU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x80U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                       >> 0x11U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffffeffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x100U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                        >> 0xfU)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffffdffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x200U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                        >> 0xdU)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffffbffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x400U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                        >> 0xbU)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffff7ffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x800U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                        >> 9U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffffefffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x1000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                         >> 7U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffffdfffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x2000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                         >> 5U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffffbfffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x4000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                         >> 3U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffff7fffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x8000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                         >> 1U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffeffffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x10000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                          << 1U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffdffffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x20000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                          << 3U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffbffffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x40000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                          << 5U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfff7ffffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x80000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                          << 7U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffefffffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x100000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                           << 9U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffdfffffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x200000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                           << 0xbU)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffbfffffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x400000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                           << 0xdU)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xff7fffffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x800000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                           << 0xfU)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfeffffffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x1000000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                            << 0x11U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfdffffffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x2000000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                            << 0x13U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfbffffffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x4000000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                            << 0x15U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xf7ffffffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x8000000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                            << 0x17U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xefffffffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x10000000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                             << 0x19U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xdfffffffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x20000000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                             << 0x1bU)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xbfffffffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x40000000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                             << 0x1dU)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fffffffU & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x80000000U & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn 
                             << 0x1fU)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((VL_ULL(0x100000000) | (QData)((IData)(vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn))) 
           & (VL_ULL(1) + (QData)((IData)((~ vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn)))));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                            >> 1U)))
                              ? 1U : 0U) | ((1U & (IData)(
                                                          (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                           >> 2U)))
                                             ? 2U : 0U)) 
                           | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                             >> 3U)))
                               ? 3U : 0U)) | ((1U & (IData)(
                                                            (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                             >> 4U)))
                                               ? 4U
                                               : 0U)) 
                         | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                           >> 5U)))
                             ? 5U : 0U)) | ((1U & (IData)(
                                                          (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                           >> 6U)))
                                             ? 6U : 0U)) 
                       | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                         >> 7U))) ? 7U
                           : 0U)) | ((1U & (IData)(
                                                   (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                    >> 8U)))
                                      ? 8U : 0U)) | 
                     ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                     >> 9U))) ? 9U : 0U)) 
                    | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                      >> 0xaU))) ? 0xaU
                        : 0U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((IData)(vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                               >> 0xbU)))
                                 ? 0xbU : 0U)) | ((1U 
                                                   & (IData)(
                                                             (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                              >> 0xcU)))
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                             >> 0xdU)))
                               ? 0xdU : 0U)) | ((1U 
                                                 & (IData)(
                                                           (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                            >> 0xeU)))
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                           >> 0xfU)))
                             ? 0xfU : 0U)) | ((1U & (IData)(
                                                            (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                             >> 0x10U)))
                                               ? 0x10U
                                               : 0U)) 
                       | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                         >> 0x11U)))
                           ? 0x11U : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                            >> 0x12U)))
                                              ? 0x12U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                       >> 0x13U))) ? 0x13U
                         : 0U)) | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                  >> 0x14U)))
                                    ? 0x14U : 0U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((IData)(vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                               >> 0x15U)))
                                 ? 0x15U : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                               >> 0x16U)))
                                                    ? 0x16U
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                             >> 0x17U)))
                               ? 0x17U : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                             >> 0x18U)))
                                                  ? 0x18U
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                           >> 0x19U)))
                             ? 0x19U : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                           >> 0x1aU)))
                                                ? 0x1aU
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                         >> 0x1bU)))
                           ? 0x1bU : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                            >> 0x1cU)))
                                              ? 0x1cU
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                       >> 0x1dU))) ? 0x1dU
                         : 0U)) | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                  >> 0x1eU)))
                                    ? 0x1eU : 0U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__32__KET____DOT__countSoFar 
        = (0x1fU & (((IData)(vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar) 
                     | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                       >> 0x1fU))) ? 0x1fU
                         : 0U)) | ((1U & (IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                  >> 0x20U)))
                                    ? 0x20U : 0U)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__sig = 
        (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn)) 
                                << (IData)(vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__32__KET____DOT__countSoFar)));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig 
        = ((0x7fffffeU & ((IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__sig 
                                   >> 7U)) << 1U)) 
           | (0U != (0x7fU & (IData)(vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__sig))));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__anyRound 
        = ((0U != (2U & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig)) 
           | (0U != (1U & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig)));
    vlTOPp->exceptionFlags = ((IData)((vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__sig 
                                       >> 0x1fU)) & (IData)(vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__anyRound));
    vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                            | (4U == (IData)(vlTOPp->roundingMode))) 
                           & (0U != (2U & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig))) 
                          | ((IData)(vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__roundMagUp) 
                             & (IData)(vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__anyRound)))
                          ? (((IData)(1U) + (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig 
                                             >> 2U)) 
                             & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                     & (0U != (2U & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig))) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  (1U 
                                                   & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig)))))
                                    ? 1U : 0U))) : 
                         ((0x3fffffffU & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig 
                                          >> 2U)) | 
                          (((6U == (IData)(vlTOPp->roundingMode)) 
                            & (IData)(vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__anyRound))
                            ? 1U : 0U))));
    vlTOPp->out = (((QData)((IData)((1U & (vlTOPp->in 
                                           >> 0x1fU)))) 
                    << 0x20U) | (QData)((IData)(((0xff800000U 
                                                  & ((((0x3ffU 
                                                        & VL_EXTENDS_II(10,9, 
                                                                        (0x1ffU 
                                                                         & ((IData)(0xc0U) 
                                                                            + 
                                                                            VL_EXTENDS_II(9,8, 
                                                                                (0x40U 
                                                                                | (0x1fU 
                                                                                & (~ (IData)(vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__32__KET____DOT__countSoFar))))))))) 
                                                       + 
                                                       (0x3ffffffU 
                                                        & (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__roundedSig 
                                                           >> 0x18U))) 
                                                      & (~ 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__sig 
                                                                      >> 0x1fU)))
                                                           ? 0U
                                                           : 0x1c0U))) 
                                                     << 0x17U)) 
                                                 | ((0x400000U 
                                                     & (((IData)(
                                                                 (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__sig 
                                                                  >> 0x1fU)) 
                                                         << 0x16U) 
                                                        & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__roundedSig)) 
                                                    | ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__sig 
                                                                   >> 0x1fU)))
                                                        ? 
                                                       (0x3fffffU 
                                                        & vlTOPp->i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__roundedSig)
                                                        : 0U))))));
}

void Vi32ToRecF32::_eval(Vi32ToRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi32ToRecF32::_eval\n"); );
    Vi32ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vi32ToRecF32::_eval_initial(Vi32ToRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi32ToRecF32::_eval_initial\n"); );
    Vi32ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vi32ToRecF32::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi32ToRecF32::final\n"); );
    // Variables
    Vi32ToRecF32__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vi32ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vi32ToRecF32::_eval_settle(Vi32ToRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi32ToRecF32::_eval_settle\n"); );
    Vi32ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vi32ToRecF32::_change_request(Vi32ToRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi32ToRecF32::_change_request\n"); );
    Vi32ToRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vi32ToRecF32::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi32ToRecF32::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif // VL_DEBUG

void Vi32ToRecF32::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi32ToRecF32::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_I(32);
    roundingMode = VL_RAND_RESET_I(3);
    out = VL_RAND_RESET_Q(33);
    exceptionFlags = VL_RAND_RESET_I(5);
    i32ToRecF32__DOT__iNToRecFN__DOT__sig = VL_RAND_RESET_Q(33);
    i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__absIn = VL_RAND_RESET_I(32);
    i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn = VL_RAND_RESET_I(32);
    i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn = VL_RAND_RESET_Q(33);
    i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    i32ToRecF32__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__32__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__roundMagUp = VL_RAND_RESET_I(1);
    i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig = VL_RAND_RESET_I(27);
    i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    i32ToRecF32__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_I(26);
}
