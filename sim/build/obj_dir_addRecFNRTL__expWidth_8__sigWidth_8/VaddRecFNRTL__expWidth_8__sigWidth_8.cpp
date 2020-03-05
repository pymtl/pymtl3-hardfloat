// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VaddRecFNRTL__expWidth_8__sigWidth_8.h for the primary calling header

#include "VaddRecFNRTL__expWidth_8__sigWidth_8.h"
#include "VaddRecFNRTL__expWidth_8__sigWidth_8__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VaddRecFNRTL__expWidth_8__sigWidth_8) {
    VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp = __VlSymsp = new VaddRecFNRTL__expWidth_8__sigWidth_8__Syms(this, name());
    VaddRecFNRTL__expWidth_8__sigWidth_8* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VaddRecFNRTL__expWidth_8__sigWidth_8::__Vconfigure(VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VaddRecFNRTL__expWidth_8__sigWidth_8::~VaddRecFNRTL__expWidth_8__sigWidth_8() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VaddRecFNRTL__expWidth_8__sigWidth_8::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VaddRecFNRTL__expWidth_8__sigWidth_8::eval\n"); );
    VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VaddRecFNRTL__expWidth_8__sigWidth_8* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("addRecFN.v", 262, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VaddRecFNRTL__expWidth_8__sigWidth_8::_eval_initial_loop(VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("addRecFN.v", 262, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VaddRecFNRTL__expWidth_8__sigWidth_8::_settle__TOP__1(VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFNRTL__expWidth_8__sigWidth_8::_settle__TOP__1\n"); );
    VaddRecFNRTL__expWidth_8__sigWidth_8* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = (6U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = (5U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = (3U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__addZeros 
        = ((0U == (7U & (vlTOPp->a >> 0xdU))) & (0U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->b 
                                                     >> 0xdU))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (~ 
                                                 (vlTOPp->a 
                                                  >> 0xdU)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & (vlTOPp->b >> 0xeU))) & (~ 
                                                 (vlTOPp->b 
                                                  >> 0xdU)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__effSignB 
        = (1U & ((IData)(vlTOPp->subOp) ? (~ (vlTOPp->b 
                                              >> 0x10U))
                  : (vlTOPp->b >> 0x10U)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigA 
        = (((0U != (7U & (vlTOPp->a >> 0xdU))) << 7U) 
           | (0x7fU & vlTOPp->a));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigB 
        = (((0U != (7U & (vlTOPp->b >> 0xdU))) << 7U) 
           | (0x7fU & vlTOPp->b));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps 
        = (0x3ffU & ((0x1ffU & (vlTOPp->a >> 7U)) - 
                     (0x1ffU & (vlTOPp->b >> 7U))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfB));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns 
        = ((1U & (vlTOPp->a >> 0x10U)) == (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__effSignB));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign 
        = ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)), 3U)) 
           & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                             VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)), 3U)) 
              | (0U == (7U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist 
        = (7U & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                  ? ((0x1ffU & (vlTOPp->b >> 7U)) - 
                     (0x1ffU & (vlTOPp->a >> 7U))) : (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
        = (0xffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                     ? (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigA)
                     : (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigB)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum 
        = (0x7ffU & (((((VL_LTES_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                         & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))
                         ? ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigA) 
                            << 2U) : 0U) | ((VL_LTES_III(1,32,32, 0U, 
                                                         VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                                             & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                             ? ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigA) 
                                                << 1U)
                                             : 0U)) 
                      | (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                          ? (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigA)
                          : 0U)) - ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigB) 
                                    << 1U)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase 
        = ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__addZeros));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__invalidExc 
        = ((((7U == (7U & (vlTOPp->a >> 0xdU))) & (~ 
                                                   (vlTOPp->a 
                                                    >> 6U))) 
            | ((7U == (7U & (vlTOPp->b >> 0xdU))) & 
               (~ (vlTOPp->b >> 6U)))) | (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfA) 
                                           & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfB)) 
                                          & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags 
        = (((~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)) 
            & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign))) 
           & (1U >= (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
        = (0x1fffU & (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                       << 5U) >> ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign)
                                   ? 7U : (7U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((6U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (0U != (3U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((5U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                                      >> 2U)))) << 1U));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((3U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                                    >> 6U)))) << 2U));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
        = (0x3ffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,11, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum)))
                      ? VL_NEGATE_I((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum))
                      : (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__invalidExc) 
           | (((3U == (3U & (vlTOPp->a >> 0xeU))) & 
               (vlTOPp->a >> 0xdU)) | ((3U == (3U & 
                                               (vlTOPp->b 
                                                >> 0xeU))) 
                                       & (vlTOPp->b 
                                          >> 0xdU))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller 
        = ((0x7feU & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller) 
                      >> 2U)) | ((0U != (7U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller))) 
                                 | (0U != ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
                                           & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1eU & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | (0U != (3U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1dU & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 2U)))) << 1U));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1bU & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 4U)))) << 2U));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x17U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 6U)))) << 3U));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfU & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 8U)))) << 4U));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum 
        = (0xfffU & (((0x7f8U & ((VL_GTS_III(1,32,32, 0U, 
                                             VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                   ? (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigB)
                                   : (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigA)) 
                                 << 3U)) + ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)
                                             ? (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller)
                                             : (0x800U 
                                                | (0x7ffU 
                                                   & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller)))))) 
                     + (1U & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1eU & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (1U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 4U)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1dU & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (2U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 2U)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1bU & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (4U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x17U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (8U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    << 2U)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfU & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x10U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 4U)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x20U | (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fU & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__5__KET____DOT__countSoFar 
        = (7U & ((((((2U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                      ? 1U : 0U) | ((4U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                     ? 2U : 0U)) | 
                   ((8U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                     ? 3U : 0U)) | ((0x10U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                     ? 4U : 0U)) | 
                 ((0x20U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                   ? 5U : 0U)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut 
        = (0x7ffU & (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                      << (7U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__5__KET____DOT__countSoFar) 
                                << 1U))) << 1U));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__addZeros) 
           | (((~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut)) 
               & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)) 
              & (~ (IData)((0U != (3U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut) 
                                         >> 9U)))))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
        = (0x7ffU & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)
                      ? (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut)
                      : (0xfffU & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)
                                    ? (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum) 
                                        >> 1U) | (1U 
                                                  & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum)))
                                    : (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut 
        = (1U & (((((((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns) 
                      | (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfA)) 
                     & (vlTOPp->a >> 0x10U)) | ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfB) 
                                                & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__effSignB))) 
                   | (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut) 
                       & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))) 
                      & ((2U == (IData)(vlTOPp->roundingMode))
                          ? 1U : 0U))) | ((((~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                            & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)) 
                                           & (0U != 
                                              (3U & 
                                               ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut) 
                                                >> 9U)))) 
                                          & ((vlTOPp->a 
                                              >> 0x10U) 
                                             ^ VL_GTS_III(1,32,32, 0U, 
                                                          VL_EXTENDS_II(32,11, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum)))))) 
                 | (((~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                     & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags))) 
                    & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                        ? (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__effSignB)
                        : (vlTOPp->a >> 0x10U)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = (0U != (7U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                        & (1U | (2U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                       >> 9U))))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (1U | (2U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                           >> 9U)))) & (3U | (4U & 
                                              ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                               >> 8U))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0xffU & (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                             & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)) 
                            >> 3U))) | (0U != (7U & 
                                               ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                                & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x3ffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                        | (4U == (IData)(vlTOPp->roundingMode))) 
                       & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                      | ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                         & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                      ? (((IData)(1U) + (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                          >> 2U) | 
                                         (1U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                                >> 0xaU)))) 
                         & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                 & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                ? (1U | (2U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                               >> 9U)))
                                : 0U))) : ((((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                             & (~ (3U 
                                                   | (4U 
                                                      & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                                         >> 8U))))) 
                                            >> 2U) 
                                           | (((6U 
                                                == (IData)(vlTOPp->roundingMode)) 
                                               & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                               ? ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                                  >> 1U)
                                               : 0U))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x7fU & ((0x400U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut))
                     ? ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                        >> 1U) : (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & ((((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags) 
                                                               | VL_GTS_III(1,32,32, 0U, 
                                                                            VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))))
                                                               ? 
                                                              (0x1ffU 
                                                               & (vlTOPp->b 
                                                                  >> 7U))
                                                               : 
                                                              (0x1ffU 
                                                               & (vlTOPp->a 
                                                                  >> 7U))) 
                                                             - 
                                                             ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)
                                                               ? 
                                                              (7U 
                                                               & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__5__KET____DOT__countSoFar) 
                                                                  << 1U))
                                                               : 
                                                              (1U 
                                                               & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))))))))) 
                     + ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                        >> 8U)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,11, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 7U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          | ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = ((((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                      ? 0U : (1U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut))) 
                    << 0x10U) | ((0xff80U & ((((((((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                        ? 0x1c0U
                                                        : 0U))) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                       ? 0x80U
                                                       : 0U))) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                      ? 0x40U
                                                      : 0U))) 
                                                | ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                    ? 0x17fU
                                                    : 0U)) 
                                               | ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                   ? 0x180U
                                                   : 0U)) 
                                              | ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x1c0U
                                                  : 0U)) 
                                             << 7U)) 
                                 | (0x7fU & (((((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                 ? 0x40U
                                                 : 0U) 
                                               | ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                   ? 0U
                                                   : 
                                                  (0x40U 
                                                   & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)))) 
                                              | ((1U 
                                                  & ((~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                     & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                                                  ? 
                                                 (0xffffffbfU 
                                                  & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))
                                                  : 0U)) 
                                             | VL_NEGATE_I((IData)((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
}

VL_INLINE_OPT void VaddRecFNRTL__expWidth_8__sigWidth_8::_combo__TOP__2(VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFNRTL__expWidth_8__sigWidth_8::_combo__TOP__2\n"); );
    VaddRecFNRTL__expWidth_8__sigWidth_8* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__addZeros 
        = ((0U == (7U & (vlTOPp->a >> 0xdU))) & (0U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->b 
                                                     >> 0xdU))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (~ 
                                                 (vlTOPp->a 
                                                  >> 0xdU)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & (vlTOPp->b >> 0xeU))) & (~ 
                                                 (vlTOPp->b 
                                                  >> 0xdU)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__effSignB 
        = (1U & ((IData)(vlTOPp->subOp) ? (~ (vlTOPp->b 
                                              >> 0x10U))
                  : (vlTOPp->b >> 0x10U)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigA 
        = (((0U != (7U & (vlTOPp->a >> 0xdU))) << 7U) 
           | (0x7fU & vlTOPp->a));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigB 
        = (((0U != (7U & (vlTOPp->b >> 0xdU))) << 7U) 
           | (0x7fU & vlTOPp->b));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps 
        = (0x3ffU & ((0x1ffU & (vlTOPp->a >> 7U)) - 
                     (0x1ffU & (vlTOPp->b >> 7U))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfB));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns 
        = ((1U & (vlTOPp->a >> 0x10U)) == (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__effSignB));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign 
        = ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)), 3U)) 
           & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                             VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)), 3U)) 
              | (0U == (7U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist 
        = (7U & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                  ? ((0x1ffU & (vlTOPp->b >> 7U)) - 
                     (0x1ffU & (vlTOPp->a >> 7U))) : (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
        = (0xffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                     ? (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigA)
                     : (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigB)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum 
        = (0x7ffU & (((((VL_LTES_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                         & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))
                         ? ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigA) 
                            << 2U) : 0U) | ((VL_LTES_III(1,32,32, 0U, 
                                                         VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                                             & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                             ? ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigA) 
                                                << 1U)
                                             : 0U)) 
                      | (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                          ? (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigA)
                          : 0U)) - ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigB) 
                                    << 1U)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase 
        = ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__addZeros));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__invalidExc 
        = ((((7U == (7U & (vlTOPp->a >> 0xdU))) & (~ 
                                                   (vlTOPp->a 
                                                    >> 6U))) 
            | ((7U == (7U & (vlTOPp->b >> 0xdU))) & 
               (~ (vlTOPp->b >> 6U)))) | (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfA) 
                                           & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfB)) 
                                          & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags 
        = (((~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)) 
            & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign))) 
           & (1U >= (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
        = (0x1fffU & (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                       << 5U) >> ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign)
                                   ? 7U : (7U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((6U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (0U != (3U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((5U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                                      >> 2U)))) << 1U));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((3U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                                    >> 6U)))) << 2U));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
        = (0x3ffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,11, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum)))
                      ? VL_NEGATE_I((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum))
                      : (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__invalidExc) 
           | (((3U == (3U & (vlTOPp->a >> 0xeU))) & 
               (vlTOPp->a >> 0xdU)) | ((3U == (3U & 
                                               (vlTOPp->b 
                                                >> 0xeU))) 
                                       & (vlTOPp->b 
                                          >> 0xdU))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller 
        = ((0x7feU & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller) 
                      >> 2U)) | ((0U != (7U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller))) 
                                 | (0U != ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
                                           & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1eU & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | (0U != (3U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1dU & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 2U)))) << 1U));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1bU & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 4U)))) << 2U));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x17U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 6U)))) << 3U));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfU & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 8U)))) << 4U));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum 
        = (0xfffU & (((0x7f8U & ((VL_GTS_III(1,32,32, 0U, 
                                             VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                   ? (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigB)
                                   : (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigA)) 
                                 << 3U)) + ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)
                                             ? (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller)
                                             : (0x800U 
                                                | (0x7ffU 
                                                   & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller)))))) 
                     + (1U & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1eU & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (1U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 4U)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1dU & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (2U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 2U)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1bU & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (4U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x17U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (8U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    << 2U)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfU & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x10U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 4U)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x20U | (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fU & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__5__KET____DOT__countSoFar 
        = (7U & ((((((2U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                      ? 1U : 0U) | ((4U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                     ? 2U : 0U)) | 
                   ((8U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                     ? 3U : 0U)) | ((0x10U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                     ? 4U : 0U)) | 
                 ((0x20U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                   ? 5U : 0U)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut 
        = (0x7ffU & (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                      << (7U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__5__KET____DOT__countSoFar) 
                                << 1U))) << 1U));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__addZeros) 
           | (((~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut)) 
               & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)) 
              & (~ (IData)((0U != (3U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut) 
                                         >> 9U)))))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
        = (0x7ffU & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)
                      ? (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut)
                      : (0xfffU & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)
                                    ? (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum) 
                                        >> 1U) | (1U 
                                                  & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum)))
                                    : (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut 
        = (1U & (((((((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns) 
                      | (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfA)) 
                     & (vlTOPp->a >> 0x10U)) | ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfB) 
                                                & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__effSignB))) 
                   | (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut) 
                       & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))) 
                      & ((2U == (IData)(vlTOPp->roundingMode))
                          ? 1U : 0U))) | ((((~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                            & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)) 
                                           & (0U != 
                                              (3U & 
                                               ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut) 
                                                >> 9U)))) 
                                          & ((vlTOPp->a 
                                              >> 0x10U) 
                                             ^ VL_GTS_III(1,32,32, 0U, 
                                                          VL_EXTENDS_II(32,11, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum)))))) 
                 | (((~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                     & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags))) 
                    & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                        ? (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__effSignB)
                        : (vlTOPp->a >> 0x10U)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = (0U != (7U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                        & (1U | (2U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                       >> 9U))))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (1U | (2U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                           >> 9U)))) & (3U | (4U & 
                                              ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                               >> 8U))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0xffU & (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                             & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)) 
                            >> 3U))) | (0U != (7U & 
                                               ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                                & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x3ffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                        | (4U == (IData)(vlTOPp->roundingMode))) 
                       & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                      | ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                         & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                      ? (((IData)(1U) + (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                          >> 2U) | 
                                         (1U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                                >> 0xaU)))) 
                         & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                 & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                ? (1U | (2U & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                               >> 9U)))
                                : 0U))) : ((((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                             & (~ (3U 
                                                   | (4U 
                                                      & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                                         >> 8U))))) 
                                            >> 2U) 
                                           | (((6U 
                                                == (IData)(vlTOPp->roundingMode)) 
                                               & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                               ? ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                                  >> 1U)
                                               : 0U))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x7fU & ((0x400U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut))
                     ? ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                        >> 1U) : (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & ((((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags) 
                                                               | VL_GTS_III(1,32,32, 0U, 
                                                                            VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))))
                                                               ? 
                                                              (0x1ffU 
                                                               & (vlTOPp->b 
                                                                  >> 7U))
                                                               : 
                                                              (0x1ffU 
                                                               & (vlTOPp->a 
                                                                  >> 7U))) 
                                                             - 
                                                             ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)
                                                               ? 
                                                              (7U 
                                                               & ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__5__KET____DOT__countSoFar) 
                                                                  << 1U))
                                                               : 
                                                              (1U 
                                                               & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))))))))) 
                     + ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                        >> 8U)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,11, (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 7U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          | ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = ((((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                      ? 0U : (1U & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut))) 
                    << 0x10U) | ((0xff80U & ((((((((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                        ? 0x1c0U
                                                        : 0U))) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                       ? 0x80U
                                                       : 0U))) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                      ? 0x40U
                                                      : 0U))) 
                                                | ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                    ? 0x17fU
                                                    : 0U)) 
                                               | ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                   ? 0x180U
                                                   : 0U)) 
                                              | ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x1c0U
                                                  : 0U)) 
                                             << 7U)) 
                                 | (0x7fU & (((((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                 ? 0x40U
                                                 : 0U) 
                                               | ((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                   ? 0U
                                                   : 
                                                  (0x40U 
                                                   & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)))) 
                                              | ((1U 
                                                  & ((~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                     & (~ (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                                                  ? 
                                                 (0xffffffbfU 
                                                  & (IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))
                                                  : 0U)) 
                                             | VL_NEGATE_I((IData)((IData)(vlTOPp->addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
}

void VaddRecFNRTL__expWidth_8__sigWidth_8::_eval(VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFNRTL__expWidth_8__sigWidth_8::_eval\n"); );
    VaddRecFNRTL__expWidth_8__sigWidth_8* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VaddRecFNRTL__expWidth_8__sigWidth_8::_eval_initial(VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFNRTL__expWidth_8__sigWidth_8::_eval_initial\n"); );
    VaddRecFNRTL__expWidth_8__sigWidth_8* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VaddRecFNRTL__expWidth_8__sigWidth_8::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFNRTL__expWidth_8__sigWidth_8::final\n"); );
    // Variables
    VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp = this->__VlSymsp;
    VaddRecFNRTL__expWidth_8__sigWidth_8* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VaddRecFNRTL__expWidth_8__sigWidth_8::_eval_settle(VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFNRTL__expWidth_8__sigWidth_8::_eval_settle\n"); );
    VaddRecFNRTL__expWidth_8__sigWidth_8* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VaddRecFNRTL__expWidth_8__sigWidth_8::_change_request(VaddRecFNRTL__expWidth_8__sigWidth_8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFNRTL__expWidth_8__sigWidth_8::_change_request\n"); );
    VaddRecFNRTL__expWidth_8__sigWidth_8* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VaddRecFNRTL__expWidth_8__sigWidth_8::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFNRTL__expWidth_8__sigWidth_8::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((a & 0xfffe0000U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b & 0xfffe0000U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
    if (VL_UNLIKELY((subOp & 0xfeU))) {
        Verilated::overWidthError("subOp");}
}
#endif  // VL_DEBUG

void VaddRecFNRTL__expWidth_8__sigWidth_8::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFNRTL__expWidth_8__sigWidth_8::_ctor_var_reset\n"); );
    // Body
    reset = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_I(17);
    b = VL_RAND_RESET_I(17);
    control = VL_RAND_RESET_I(1);
    exceptionFlags = VL_RAND_RESET_I(5);
    out = VL_RAND_RESET_I(17);
    roundingMode = VL_RAND_RESET_I(3);
    subOp = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__invalidExc = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfA = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigA = VL_RAND_RESET_I(9);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isInfB = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sigB = VL_RAND_RESET_I(9);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__effSignB = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps = VL_RAND_RESET_I(10);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist = VL_RAND_RESET_I(3);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum = VL_RAND_RESET_I(11);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum = VL_RAND_RESET_I(10);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum = VL_RAND_RESET_I(5);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut = VL_RAND_RESET_I(11);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller = VL_RAND_RESET_I(8);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller = VL_RAND_RESET_I(13);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller = VL_RAND_RESET_I(3);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask = VL_RAND_RESET_I(3);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller = VL_RAND_RESET_I(11);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum = VL_RAND_RESET_I(12);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__addZeros = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut = VL_RAND_RESET_I(11);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn = VL_RAND_RESET_I(5);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = VL_RAND_RESET_I(6);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__5__KET____DOT__countSoFar = VL_RAND_RESET_I(3);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut = VL_RAND_RESET_I(7);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_I(11);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_I(10);
    addRecFNRTL___05FexpWidth_8___05FsigWidth_8__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(11);
}
