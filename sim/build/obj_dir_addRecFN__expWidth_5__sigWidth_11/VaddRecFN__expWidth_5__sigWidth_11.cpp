// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VaddRecFN__expWidth_5__sigWidth_11.h for the primary calling header

#include "VaddRecFN__expWidth_5__sigWidth_11.h"
#include "VaddRecFN__expWidth_5__sigWidth_11__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VaddRecFN__expWidth_5__sigWidth_11) {
    VaddRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp = __VlSymsp = new VaddRecFN__expWidth_5__sigWidth_11__Syms(this, name());
    VaddRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VaddRecFN__expWidth_5__sigWidth_11::__Vconfigure(VaddRecFN__expWidth_5__sigWidth_11__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VaddRecFN__expWidth_5__sigWidth_11::~VaddRecFN__expWidth_5__sigWidth_11() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VaddRecFN__expWidth_5__sigWidth_11::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VaddRecFN__expWidth_5__sigWidth_11::eval\n"); );
    VaddRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VaddRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VaddRecFN__expWidth_5__sigWidth_11::_eval_initial_loop(VaddRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
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

void VaddRecFN__expWidth_5__sigWidth_11::_settle__TOP__1(VaddRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFN__expWidth_5__sigWidth_11::_settle__TOP__1\n"); );
    VaddRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c = 0x10U;
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__addZeros 
        = ((0U == (7U & (vlTOPp->a >> 0xdU))) & (0U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->b 
                                                     >> 0xdU))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (~ 
                                                 (vlTOPp->a 
                                                  >> 0xdU)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & (vlTOPp->b >> 0xeU))) & (~ 
                                                 (vlTOPp->b 
                                                  >> 0xdU)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__effSignB 
        = (1U & ((IData)(vlTOPp->subOp) ? (~ (vlTOPp->b 
                                              >> 0x10U))
                  : (vlTOPp->b >> 0x10U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigA 
        = (((0U != (7U & (vlTOPp->a >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->a));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigB 
        = (((0U != (7U & (vlTOPp->b >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->b));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps 
        = (0x7fU & ((0x3fU & (vlTOPp->a >> 0xaU)) - 
                    (0x3fU & (vlTOPp->b >> 0xaU))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfB));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns 
        = ((1U & (vlTOPp->a >> 0x10U)) == (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__effSignB));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
        = (0x7ffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                      ? (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigA)
                      : (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigB)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign 
        = ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)), 4U)) 
           & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                             VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)), 4U)) 
              | (0U == (0xfU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist 
        = (0xfU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                    ? ((0x3fU & (vlTOPp->b >> 0xaU)) 
                       - (0x3fU & (vlTOPp->a >> 0xaU)))
                    : (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum 
        = (0x3fffU & (((((VL_LTES_III(1,32,32, 0U, 
                                      VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                          & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))
                          ? ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigA) 
                             << 2U) : 0U) | ((VL_LTES_III(1,32,32, 0U, 
                                                          VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                                              & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                              ? ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigA) 
                                                 << 1U)
                                              : 0U)) 
                       | (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                           ? (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigA)
                           : 0U)) - ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigB) 
                                     << 1U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__addZeros));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__invalidExc 
        = ((((7U == (7U & (vlTOPp->a >> 0xdU))) & (~ 
                                                   (vlTOPp->a 
                                                    >> 9U))) 
            | ((7U == (7U & (vlTOPp->b >> 0xdU))) & 
               (~ (vlTOPp->b >> 9U)))) | (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfA) 
                                           & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfB)) 
                                          & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0xeU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (0U != (3U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0xdU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                                      >> 2U)))) << 1U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0xbU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                                      >> 6U)))) << 2U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((7U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (8U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                    >> 7U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags 
        = (((~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)) 
            & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign))) 
           & (1U >= (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__alignDist 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign)
            ? 0xfU : (0xfU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
        = (0x1fffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,14, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum)))
                       ? VL_NEGATE_I((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum))
                       : (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__invalidExc) 
           | (((3U == (3U & (vlTOPp->a >> 0xeU))) & 
               (vlTOPp->a >> 0xdU)) | ((3U == (3U & 
                                               (vlTOPp->b 
                                                >> 0xeU))) 
                                       & (vlTOPp->b 
                                          >> 0xdU))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
        = (0xffffU & (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                       << 5U) >> (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__alignDist)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
        = (0xfU & VL_SHIFTRS_III(5,5,2, 0x10U, (3U 
                                                & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__alignDist) 
                                                   >> 2U))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x7eU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | (0U != (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                           << 1U))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x7dU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 1U)))) << 1U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x7bU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 3U)))) << 2U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x77U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 5U)))) << 3U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x6fU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 7U)))) << 4U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x5fU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 9U)))) << 5U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x3fU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 0xbU)))) << 6U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0xeU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (1U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 3U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0xdU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (2U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0xbU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (4U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((7U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (8U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    << 3U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x7eU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (1U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 6U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x7dU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (2U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 4U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x7bU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (4U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 2U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x77U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (8U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x6fU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x10U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 2U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x5fU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x20U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 4U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x3fU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x40U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 6U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller 
        = ((0x3ffeU & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller) 
                       >> 2U)) | ((0U != (7U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller))) 
                                  | (0U != ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
                                            & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x80U | (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x7fU & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum 
        = (0x7fffU & (((0x3ff8U & ((VL_GTS_III(1,32,32, 0U, 
                                               VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                     ? (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigB)
                                     : (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigA)) 
                                   << 3U)) + ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)
                                               ? (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller)
                                               : (0x4000U 
                                                  | (0x3fffU 
                                                     & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller)))))) 
                      + (1U & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__7__KET____DOT__countSoFar 
        = (0xfU & ((((((((2U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 1U : 0U) | ((4U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 2U : 0U)) 
                       | ((8U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 3U : 0U)) | ((0x10U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 4U : 0U)) 
                     | ((0x20U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 5U : 0U)) | ((0x40U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 6U : 0U)) 
                   | ((0x80U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                       ? 7U : 0U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut 
        = (0x3fffU & (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                       << (0xfU & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__7__KET____DOT__countSoFar) 
                                   << 1U))) << 1U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__addZeros) 
           | (((~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut)) 
               & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)) 
              & (~ (IData)((0U != (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut) 
                                         >> 0xcU)))))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
        = (0x3fffU & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)
                       ? (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut)
                       : (0x7fffU & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)
                                      ? (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum) 
                                          >> 1U) | 
                                         (1U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum)))
                                      : (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum)))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut 
        = (1U & (((((((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns) 
                      | (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfA)) 
                     & (vlTOPp->a >> 0x10U)) | ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfB) 
                                                & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__effSignB))) 
                   | (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut) 
                       & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))) 
                      & ((2U == (IData)(vlTOPp->roundingMode))
                          ? 1U : 0U))) | ((((~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                            & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)) 
                                           & (0U != 
                                              (3U & 
                                               ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut) 
                                                >> 0xcU)))) 
                                          & ((vlTOPp->a 
                                              >> 0x10U) 
                                             ^ VL_GTS_III(1,32,32, 0U, 
                                                          VL_EXTENDS_II(32,14, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum)))))) 
                 | (((~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                     & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags))) 
                    & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                        ? (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__effSignB)
                        : (vlTOPp->a >> 0x10U)))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = (0U != (7U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                        & (1U | (2U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                       >> 0xcU))))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (1U | (2U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                           >> 0xcU)))) & (3U | (4U 
                                                & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                                   >> 0xbU))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                              & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)) 
                             >> 3U))) | (0U != (7U 
                                                & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                                   & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x1fffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                         | (4U == (IData)(vlTOPp->roundingMode))) 
                        & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                       | ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                          & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                       ? (((IData)(1U) + (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                           >> 2U) | 
                                          (1U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                                 >> 0xdU)))) 
                          & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                  & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                 & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                 ? (1U | (2U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                                >> 0xcU)))
                                 : 0U))) : ((((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                              & (~ 
                                                 (3U 
                                                  | (4U 
                                                     & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                                        >> 0xbU))))) 
                                             >> 2U) 
                                            | (((6U 
                                                 == (IData)(vlTOPp->roundingMode)) 
                                                & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                ? ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                                   >> 1U)
                                                : 0U))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x3ffU & ((0x2000U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut))
                      ? ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                         >> 1U) : (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0xffU & (VL_EXTENDS_II(8,7, (0x7fU & VL_EXTENDS_II(7,7, 
                                                              (0x7fU 
                                                               & ((((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags) 
                                                                    | VL_GTS_III(1,32,32, 0U, 
                                                                                VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))))
                                                                    ? 
                                                                   (0x3fU 
                                                                    & (vlTOPp->b 
                                                                       >> 0xaU))
                                                                    : 
                                                                   (0x3fU 
                                                                    & (vlTOPp->a 
                                                                       >> 0xaU))) 
                                                                  - 
                                                                  ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)
                                                                    ? 
                                                                   (0xfU 
                                                                    & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__7__KET____DOT__countSoFar) 
                                                                       << 1U))
                                                                    : 
                                                                   (1U 
                                                                    & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))))))))) 
                    + (0x1fffU & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                  >> 0xbU))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 4U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          | ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = ((((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                      ? 0U : (1U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut))) 
                    << 0x10U) | ((0xfc00U & ((((((((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                        ? 0x38U
                                                        : 0U))) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                       ? 0x10U
                                                       : 0U))) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                      ? 8U
                                                      : 0U))) 
                                                | ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                    ? 0x2fU
                                                    : 0U)) 
                                               | ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                   ? 0x30U
                                                   : 0U)) 
                                              | ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x38U
                                                  : 0U)) 
                                             << 0xaU)) 
                                 | (0x3ffU & (((((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x200U
                                                  : 0U) 
                                                | ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                    ? 0U
                                                    : 
                                                   (0x200U 
                                                    & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)))) 
                                               | ((1U 
                                                   & ((~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                      & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                                                   ? 
                                                  (0xfffffdffU 
                                                   & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))
                                                   : 0U)) 
                                              | VL_NEGATE_I((IData)((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
}

VL_INLINE_OPT void VaddRecFN__expWidth_5__sigWidth_11::_combo__TOP__2(VaddRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFN__expWidth_5__sigWidth_11::_combo__TOP__2\n"); );
    VaddRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__addZeros 
        = ((0U == (7U & (vlTOPp->a >> 0xdU))) & (0U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->b 
                                                     >> 0xdU))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (~ 
                                                 (vlTOPp->a 
                                                  >> 0xdU)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & (vlTOPp->b >> 0xeU))) & (~ 
                                                 (vlTOPp->b 
                                                  >> 0xdU)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__effSignB 
        = (1U & ((IData)(vlTOPp->subOp) ? (~ (vlTOPp->b 
                                              >> 0x10U))
                  : (vlTOPp->b >> 0x10U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigA 
        = (((0U != (7U & (vlTOPp->a >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->a));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigB 
        = (((0U != (7U & (vlTOPp->b >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->b));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps 
        = (0x7fU & ((0x3fU & (vlTOPp->a >> 0xaU)) - 
                    (0x3fU & (vlTOPp->b >> 0xaU))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfB));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns 
        = ((1U & (vlTOPp->a >> 0x10U)) == (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__effSignB));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
        = (0x7ffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                      ? (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigA)
                      : (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigB)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign 
        = ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)), 4U)) 
           & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                             VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)), 4U)) 
              | (0U == (0xfU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist 
        = (0xfU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                    ? ((0x3fU & (vlTOPp->b >> 0xaU)) 
                       - (0x3fU & (vlTOPp->a >> 0xaU)))
                    : (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum 
        = (0x3fffU & (((((VL_LTES_III(1,32,32, 0U, 
                                      VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                          & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))
                          ? ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigA) 
                             << 2U) : 0U) | ((VL_LTES_III(1,32,32, 0U, 
                                                          VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                                              & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                              ? ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigA) 
                                                 << 1U)
                                              : 0U)) 
                       | (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                           ? (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigA)
                           : 0U)) - ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigB) 
                                     << 1U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__addZeros));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__invalidExc 
        = ((((7U == (7U & (vlTOPp->a >> 0xdU))) & (~ 
                                                   (vlTOPp->a 
                                                    >> 9U))) 
            | ((7U == (7U & (vlTOPp->b >> 0xdU))) & 
               (~ (vlTOPp->b >> 9U)))) | (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfA) 
                                           & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfB)) 
                                          & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0xeU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (0U != (3U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0xdU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                                      >> 2U)))) << 1U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0xbU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                                      >> 6U)))) << 2U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((7U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (8U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                    >> 7U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags 
        = (((~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)) 
            & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign))) 
           & (1U >= (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__alignDist 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign)
            ? 0xfU : (0xfU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
        = (0x1fffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,14, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum)))
                       ? VL_NEGATE_I((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum))
                       : (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__invalidExc) 
           | (((3U == (3U & (vlTOPp->a >> 0xeU))) & 
               (vlTOPp->a >> 0xdU)) | ((3U == (3U & 
                                               (vlTOPp->b 
                                                >> 0xeU))) 
                                       & (vlTOPp->b 
                                          >> 0xdU))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
        = (0xffffU & (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                       << 5U) >> (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__alignDist)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
        = (0xfU & VL_SHIFTRS_III(5,5,2, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c), 
                                 (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__alignDist) 
                                        >> 2U))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x7eU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | (0U != (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                           << 1U))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x7dU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 1U)))) << 1U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x7bU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 3U)))) << 2U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x77U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 5U)))) << 3U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x6fU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 7U)))) << 4U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x5fU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 9U)))) << 5U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x3fU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 0xbU)))) << 6U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0xeU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (1U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 3U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0xdU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (2U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0xbU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (4U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((7U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (8U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    << 3U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x7eU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (1U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 6U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x7dU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (2U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 4U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x7bU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (4U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 2U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x77U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (8U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x6fU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x10U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 2U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x5fU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x20U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 4U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x3fU & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x40U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 6U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller 
        = ((0x3ffeU & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller) 
                       >> 2U)) | ((0U != (7U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller))) 
                                  | (0U != ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
                                            & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x80U | (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x7fU & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum 
        = (0x7fffU & (((0x3ff8U & ((VL_GTS_III(1,32,32, 0U, 
                                               VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                     ? (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigB)
                                     : (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigA)) 
                                   << 3U)) + ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)
                                               ? (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller)
                                               : (0x4000U 
                                                  | (0x3fffU 
                                                     & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller)))))) 
                      + (1U & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__7__KET____DOT__countSoFar 
        = (0xfU & ((((((((2U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 1U : 0U) | ((4U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 2U : 0U)) 
                       | ((8U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 3U : 0U)) | ((0x10U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 4U : 0U)) 
                     | ((0x20U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 5U : 0U)) | ((0x40U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 6U : 0U)) 
                   | ((0x80U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                       ? 7U : 0U)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut 
        = (0x3fffU & (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum) 
                       << (0xfU & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__7__KET____DOT__countSoFar) 
                                   << 1U))) << 1U));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__addZeros) 
           | (((~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut)) 
               & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)) 
              & (~ (IData)((0U != (3U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut) 
                                         >> 0xcU)))))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
        = (0x3fffU & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)
                       ? (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut)
                       : (0x7fffU & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)
                                      ? (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum) 
                                          >> 1U) | 
                                         (1U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum)))
                                      : (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum)))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut 
        = (1U & (((((((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns) 
                      | (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfA)) 
                     & (vlTOPp->a >> 0x10U)) | ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfB) 
                                                & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__effSignB))) 
                   | (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut) 
                       & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))) 
                      & ((2U == (IData)(vlTOPp->roundingMode))
                          ? 1U : 0U))) | ((((~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                            & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)) 
                                           & (0U != 
                                              (3U & 
                                               ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut) 
                                                >> 0xcU)))) 
                                          & ((vlTOPp->a 
                                              >> 0x10U) 
                                             ^ VL_GTS_III(1,32,32, 0U, 
                                                          VL_EXTENDS_II(32,14, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum)))))) 
                 | (((~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                     & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags))) 
                    & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                        ? (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__effSignB)
                        : (vlTOPp->a >> 0x10U)))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = (0U != (7U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                        & (1U | (2U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                       >> 0xcU))))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (1U | (2U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                           >> 0xcU)))) & (3U | (4U 
                                                & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                                   >> 0xbU))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                              & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)) 
                             >> 3U))) | (0U != (7U 
                                                & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                                   & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x1fffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                         | (4U == (IData)(vlTOPp->roundingMode))) 
                        & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                       | ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                          & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                       ? (((IData)(1U) + (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                           >> 2U) | 
                                          (1U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                                 >> 0xdU)))) 
                          & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                  & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                 & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                 ? (1U | (2U & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                                >> 0xcU)))
                                 : 0U))) : ((((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                              & (~ 
                                                 (3U 
                                                  | (4U 
                                                     & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut) 
                                                        >> 0xbU))))) 
                                             >> 2U) 
                                            | (((6U 
                                                 == (IData)(vlTOPp->roundingMode)) 
                                                & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                ? ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                                   >> 1U)
                                                : 0U))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x3ffU & ((0x2000U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut))
                      ? ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                         >> 1U) : (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0xffU & (VL_EXTENDS_II(8,7, (0x7fU & VL_EXTENDS_II(7,7, 
                                                              (0x7fU 
                                                               & ((((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags) 
                                                                    | VL_GTS_III(1,32,32, 0U, 
                                                                                VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))))
                                                                    ? 
                                                                   (0x3fU 
                                                                    & (vlTOPp->b 
                                                                       >> 0xaU))
                                                                    : 
                                                                   (0x3fU 
                                                                    & (vlTOPp->a 
                                                                       >> 0xaU))) 
                                                                  - 
                                                                  ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)
                                                                    ? 
                                                                   (0xfU 
                                                                    & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__7__KET____DOT__countSoFar) 
                                                                       << 1U))
                                                                    : 
                                                                   (1U 
                                                                    & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))))))))) 
                    + (0x1fffU & ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                  >> 0xbU))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 4U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          | ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = ((((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                      ? 0U : (1U & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut))) 
                    << 0x10U) | ((0xfc00U & ((((((((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                        ? 0x38U
                                                        : 0U))) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                       ? 0x10U
                                                       : 0U))) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                      ? 8U
                                                      : 0U))) 
                                                | ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                    ? 0x2fU
                                                    : 0U)) 
                                               | ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                   ? 0x30U
                                                   : 0U)) 
                                              | ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x38U
                                                  : 0U)) 
                                             << 0xaU)) 
                                 | (0x3ffU & (((((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x200U
                                                  : 0U) 
                                                | ((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                    ? 0U
                                                    : 
                                                   (0x200U 
                                                    & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)))) 
                                               | ((1U 
                                                   & ((~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                      & (~ (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                                                   ? 
                                                  (0xfffffdffU 
                                                   & (IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))
                                                   : 0U)) 
                                              | VL_NEGATE_I((IData)((IData)(vlTOPp->addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
}

void VaddRecFN__expWidth_5__sigWidth_11::_eval(VaddRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFN__expWidth_5__sigWidth_11::_eval\n"); );
    VaddRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VaddRecFN__expWidth_5__sigWidth_11::_eval_initial(VaddRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFN__expWidth_5__sigWidth_11::_eval_initial\n"); );
    VaddRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VaddRecFN__expWidth_5__sigWidth_11::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFN__expWidth_5__sigWidth_11::final\n"); );
    // Variables
    VaddRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp = this->__VlSymsp;
    VaddRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VaddRecFN__expWidth_5__sigWidth_11::_eval_settle(VaddRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFN__expWidth_5__sigWidth_11::_eval_settle\n"); );
    VaddRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VaddRecFN__expWidth_5__sigWidth_11::_change_request(VaddRecFN__expWidth_5__sigWidth_11__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFN__expWidth_5__sigWidth_11::_change_request\n"); );
    VaddRecFN__expWidth_5__sigWidth_11* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VaddRecFN__expWidth_5__sigWidth_11::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFN__expWidth_5__sigWidth_11::_eval_debug_assertions\n"); );
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

void VaddRecFN__expWidth_5__sigWidth_11::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecFN__expWidth_5__sigWidth_11::_ctor_var_reset\n"); );
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
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__invalidExc = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfA = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigA = VL_RAND_RESET_I(12);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isInfB = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sigB = VL_RAND_RESET_I(12);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__effSignB = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps = VL_RAND_RESET_I(7);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist = VL_RAND_RESET_I(4);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__alignDist = VL_RAND_RESET_I(4);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum = VL_RAND_RESET_I(14);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum = VL_RAND_RESET_I(13);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum = VL_RAND_RESET_I(7);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut = VL_RAND_RESET_I(14);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller = VL_RAND_RESET_I(11);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller = VL_RAND_RESET_I(16);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller = VL_RAND_RESET_I(4);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask = VL_RAND_RESET_I(4);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller = VL_RAND_RESET_I(14);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum = VL_RAND_RESET_I(15);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__addZeros = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut = VL_RAND_RESET_I(14);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn = VL_RAND_RESET_I(7);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = VL_RAND_RESET_I(8);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__7__KET____DOT__countSoFar = VL_RAND_RESET_I(4);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c = VL_RAND_RESET_I(5);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut = VL_RAND_RESET_I(4);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut = VL_RAND_RESET_I(10);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_I(14);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_I(13);
    addRecFN___05FexpWidth_5___05FsigWidth_11__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(8);
}
