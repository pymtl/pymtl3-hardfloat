// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vui32ToRecF64.h for the primary calling header

#include "Vui32ToRecF64.h"
#include "Vui32ToRecF64__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vui32ToRecF64) {
    Vui32ToRecF64__Syms* __restrict vlSymsp = __VlSymsp = new Vui32ToRecF64__Syms(this, name());
    Vui32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vui32ToRecF64::__Vconfigure(Vui32ToRecF64__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vui32ToRecF64::~Vui32ToRecF64() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vui32ToRecF64::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vui32ToRecF64::eval\n"); );
    Vui32ToRecF64__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vui32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/iNToRecFN_spec.v", 69, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vui32ToRecF64::_eval_initial_loop(Vui32ToRecF64__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/iNToRecFN_spec.v", 69, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void Vui32ToRecF64::_initial__TOP__1(Vui32ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui32ToRecF64::_initial__TOP__1\n"); );
    Vui32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->exceptionFlags = 0U;
}

VL_INLINE_OPT void Vui32ToRecF64::_combo__TOP__2(Vui32ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui32ToRecF64::_combo__TOP__2\n"); );
    Vui32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    // Body
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffffffeU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (1U & (vlTOPp->in >> 0x1fU)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffffffdU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (2U & (vlTOPp->in >> 0x1dU)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffffffbU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (4U & (vlTOPp->in >> 0x1bU)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffffff7U & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (8U & (vlTOPp->in >> 0x19U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffffffefU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x10U & (vlTOPp->in >> 0x17U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffffffdfU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x20U & (vlTOPp->in >> 0x15U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffffffbfU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x40U & (vlTOPp->in >> 0x13U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffffff7fU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x80U & (vlTOPp->in >> 0x11U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffffeffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x100U & (vlTOPp->in >> 0xfU)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffffdffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x200U & (vlTOPp->in >> 0xdU)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffffbffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x400U & (vlTOPp->in >> 0xbU)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffff7ffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x800U & (vlTOPp->in >> 9U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffffefffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x1000U & (vlTOPp->in >> 7U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffffdfffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x2000U & (vlTOPp->in >> 5U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffffbfffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x4000U & (vlTOPp->in >> 3U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffff7fffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x8000U & (vlTOPp->in >> 1U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffeffffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x10000U & (vlTOPp->in << 1U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffdffffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x20000U & (vlTOPp->in << 3U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfffbffffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x40000U & (vlTOPp->in << 5U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfff7ffffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x80000U & (vlTOPp->in << 7U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffefffffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x100000U & (vlTOPp->in << 9U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffdfffffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x200000U & (vlTOPp->in << 0xbU)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xffbfffffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x400000U & (vlTOPp->in << 0xdU)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xff7fffffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x800000U & (vlTOPp->in << 0xfU)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfeffffffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x1000000U & (vlTOPp->in << 0x11U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfdffffffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x2000000U & (vlTOPp->in << 0x13U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xfbffffffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x4000000U & (vlTOPp->in << 0x15U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xf7ffffffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x8000000U & (vlTOPp->in << 0x17U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xefffffffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x10000000U & (vlTOPp->in << 0x19U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xdfffffffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x20000000U & (vlTOPp->in << 0x1bU)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0xbfffffffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x40000000U & (vlTOPp->in << 0x1dU)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fffffffU & vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x80000000U & (vlTOPp->in << 0x1fU)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((VL_ULL(0x100000000) | (QData)((IData)(vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn))) 
           & (VL_ULL(1) + (QData)((IData)((~ vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn)))));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                            >> 1U)))
                              ? 1U : 0U) | ((1U & (IData)(
                                                          (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                           >> 2U)))
                                             ? 2U : 0U)) 
                           | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                             >> 3U)))
                               ? 3U : 0U)) | ((1U & (IData)(
                                                            (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                             >> 4U)))
                                               ? 4U
                                               : 0U)) 
                         | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                           >> 5U)))
                             ? 5U : 0U)) | ((1U & (IData)(
                                                          (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                           >> 6U)))
                                             ? 6U : 0U)) 
                       | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                         >> 7U))) ? 7U
                           : 0U)) | ((1U & (IData)(
                                                   (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                    >> 8U)))
                                      ? 8U : 0U)) | 
                     ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                     >> 9U))) ? 9U : 0U)) 
                    | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                      >> 0xaU))) ? 0xaU
                        : 0U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((IData)(vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                               >> 0xbU)))
                                 ? 0xbU : 0U)) | ((1U 
                                                   & (IData)(
                                                             (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                              >> 0xcU)))
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                             >> 0xdU)))
                               ? 0xdU : 0U)) | ((1U 
                                                 & (IData)(
                                                           (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                            >> 0xeU)))
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                           >> 0xfU)))
                             ? 0xfU : 0U)) | ((1U & (IData)(
                                                            (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                             >> 0x10U)))
                                               ? 0x10U
                                               : 0U)) 
                       | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                         >> 0x11U)))
                           ? 0x11U : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                            >> 0x12U)))
                                              ? 0x12U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                       >> 0x13U))) ? 0x13U
                         : 0U)) | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                  >> 0x14U)))
                                    ? 0x14U : 0U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((IData)(vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                               >> 0x15U)))
                                 ? 0x15U : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                               >> 0x16U)))
                                                    ? 0x16U
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                             >> 0x17U)))
                               ? 0x17U : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                             >> 0x18U)))
                                                  ? 0x18U
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                           >> 0x19U)))
                             ? 0x19U : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                           >> 0x1aU)))
                                                ? 0x1aU
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                         >> 0x1bU)))
                           ? 0x1bU : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                            >> 0x1cU)))
                                              ? 0x1cU
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                       >> 0x1dU))) ? 0x1dU
                         : 0U)) | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                  >> 0x1eU)))
                                    ? 0x1eU : 0U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__32__KET____DOT__countSoFar 
        = (0x1fU & (((IData)(vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar) 
                     | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                       >> 0x1fU))) ? 0x1fU
                         : 0U)) | ((1U & (IData)((vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                  >> 0x20U)))
                                    ? 0x20U : 0U)));
    vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__sig 
        = (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->in)) 
                                  << (IData)(vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__32__KET____DOT__countSoFar)));
    VL_EXTEND_WQ(65,64, __Vtemp1, (((QData)((IData)(
                                                    (0xfffU 
                                                     & (((IData)(0x7c0U) 
                                                         + 
                                                         VL_EXTENDS_II(12,8, 
                                                                       (0x40U 
                                                                        | (0x1fU 
                                                                           & (~ (IData)(vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__32__KET____DOT__countSoFar)))))) 
                                                        & (~ 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__sig 
                                                                        >> 0x1fU)))
                                                             ? 0U
                                                             : 0xe00U)))))) 
                                    << 0x34U) | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(
                                                                              (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__sig 
                                                                               >> 0x1fU)) 
                                                                      & (IData)(
                                                                                (VL_ULL(7) 
                                                                                & (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__sig 
                                                                                >> 0x1eU))))))) 
                                                  << 0x33U) 
                                                 | ((1U 
                                                     & (IData)(
                                                               (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__sig 
                                                                >> 0x1fU)))
                                                     ? 
                                                    (VL_ULL(0x7ffffffe00000) 
                                                     & (vlTOPp->ui32ToRecF64__DOT__iNToRecFN__DOT__sig 
                                                        << 0x15U))
                                                     : VL_ULL(0)))));
    vlTOPp->out[0U] = __Vtemp1[0U];
    vlTOPp->out[1U] = __Vtemp1[1U];
    vlTOPp->out[2U] = __Vtemp1[2U];
}

void Vui32ToRecF64::_eval(Vui32ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui32ToRecF64::_eval\n"); );
    Vui32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void Vui32ToRecF64::_eval_initial(Vui32ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui32ToRecF64::_eval_initial\n"); );
    Vui32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void Vui32ToRecF64::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui32ToRecF64::final\n"); );
    // Variables
    Vui32ToRecF64__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vui32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vui32ToRecF64::_eval_settle(Vui32ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui32ToRecF64::_eval_settle\n"); );
    Vui32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData Vui32ToRecF64::_change_request(Vui32ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui32ToRecF64::_change_request\n"); );
    Vui32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vui32ToRecF64::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui32ToRecF64::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif // VL_DEBUG

void Vui32ToRecF64::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui32ToRecF64::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_I(32);
    roundingMode = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(65, out);
    exceptionFlags = VL_RAND_RESET_I(5);
    ui32ToRecF64__DOT__iNToRecFN__DOT__sig = VL_RAND_RESET_Q(33);
    ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn = VL_RAND_RESET_I(32);
    ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn = VL_RAND_RESET_Q(33);
    ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    ui32ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__32__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
}
