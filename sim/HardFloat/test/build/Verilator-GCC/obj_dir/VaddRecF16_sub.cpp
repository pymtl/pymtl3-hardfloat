// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VaddRecF16_sub.h for the primary calling header

#include "VaddRecF16_sub.h"
#include "VaddRecF16_sub__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VaddRecF16_sub) {
    VaddRecF16_sub__Syms* __restrict vlSymsp = __VlSymsp = new VaddRecF16_sub__Syms(this, name());
    VaddRecF16_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VaddRecF16_sub::__Vconfigure(VaddRecF16_sub__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VaddRecF16_sub::~VaddRecF16_sub() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VaddRecF16_sub::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VaddRecF16_sub::eval\n"); );
    VaddRecF16_sub__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VaddRecF16_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/addRecFN_spec.v", 101, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VaddRecF16_sub::_eval_initial_loop(VaddRecF16_sub__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/addRecFN_spec.v", 101, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VaddRecF16_sub::_settle__TOP__1(VaddRecF16_sub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF16_sub::_settle__TOP__1\n"); );
    VaddRecF16_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c = 0x10U;
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros 
        = ((0U == (7U & (vlTOPp->a >> 0xdU))) & (0U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->b 
                                                     >> 0xdU))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (vlTOPp->a 
                                                 >> 0xdU));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB 
        = ((3U == (3U & (vlTOPp->b >> 0xeU))) & (vlTOPp->b 
                                                 >> 0xdU));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (~ 
                                                 (vlTOPp->a 
                                                  >> 0xdU)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & (vlTOPp->b >> 0xeU))) & (~ 
                                                 (vlTOPp->b 
                                                  >> 0xdU)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns 
        = ((1U & (vlTOPp->a >> 0x10U)) == (1U & (~ 
                                                 (vlTOPp->b 
                                                  >> 0x10U))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA 
        = (((0U != (7U & (vlTOPp->a >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->a));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB 
        = (((0U != (7U & (vlTOPp->b >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->b));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps 
        = (0x7fU & ((0x3fU & (vlTOPp->a >> 0xaU)) - 
                    (0x3fU & (vlTOPp->b >> 0xaU))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA) 
            & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB)) 
           & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
        = (0x7ffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                      ? (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA)
                      : (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign 
        = ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)), 4U)) 
           & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                             VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)), 4U)) 
              | (0U == (0xfU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist 
        = (0xfU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                    ? ((0x3fU & (vlTOPp->b >> 0xaU)) 
                       - (0x3fU & (vlTOPp->a >> 0xaU)))
                    : (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum 
        = (0x3fffU & (((((VL_LTES_III(1,32,32, 0U, 
                                      VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                          & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                          ? ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA) 
                             << 2U) : 0U) | ((VL_LTES_III(1,32,32, 0U, 
                                                          VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                                              & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                              ? ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA) 
                                                 << 1U)
                                              : 0U)) 
                       | (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                           ? (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA)
                           : 0U)) - ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB) 
                                     << 1U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__invalidExc 
        = ((((7U == (7U & (vlTOPp->a >> 0xdU))) & (~ 
                                                   (vlTOPp->a 
                                                    >> 9U))) 
            | ((7U == (7U & (vlTOPp->b >> 0xdU))) & 
               (~ (vlTOPp->b >> 9U)))) | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_isNaN 
        = (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA) 
            | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)) 
           | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0xeU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (0U != (3U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0xdU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                                      >> 2U)))) << 1U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0xbU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                                      >> 6U)))) << 2U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((7U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (8U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                    >> 7U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags 
        = (((~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)) 
            & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign))) 
           & (1U >= (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign)
            ? 0xfU : (0xfU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
        = (0x1fffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,14, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)))
                       ? VL_NEGATE_I((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum))
                       : (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_isNaN));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
        = (0xffffU & (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                       << 5U) >> (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
        = (0xfU & VL_SHIFTRS_III(5,5,2, 0x10U, (3U 
                                                & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist) 
                                                   >> 2U))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x7eU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | (0U != (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum) 
                           << 1U))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x7dU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 1U)))) << 1U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x7bU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 3U)))) << 2U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x77U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 5U)))) << 3U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x6fU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 7U)))) << 4U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x5fU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 9U)))) << 5U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x3fU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 0xbU)))) << 6U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0xeU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (1U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 3U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0xdU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (2U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0xbU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (4U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((7U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (8U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    << 3U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x7eU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (1U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 6U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x7dU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (2U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 4U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x7bU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (4U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 2U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x77U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (8U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x6fU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x10U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 2U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x5fU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x20U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 4U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x3fU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x40U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 6U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller 
        = ((0x3ffeU & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller) 
                       >> 2U)) | ((0U != (7U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller))) 
                                  | (0U != ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
                                            & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x80U | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x7fU & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum 
        = (0x7fffU & (((0x3ff8U & ((VL_GTS_III(1,32,32, 0U, 
                                               VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                     ? (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB)
                                     : (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA)) 
                                   << 3U)) + ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                               ? (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller)
                                               : (0x4000U 
                                                  | (0x3fffU 
                                                     & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller)))))) 
                      + (1U & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__7__KET____DOT__countSoFar 
        = (0xfU & ((((((((2U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 1U : 0U) | ((4U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 2U : 0U)) 
                       | ((8U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 3U : 0U)) | ((0x10U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 4U : 0U)) 
                     | ((0x20U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 5U : 0U)) | ((0x40U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 6U : 0U)) 
                   | ((0x80U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                       ? 7U : 0U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut 
        = (0x3fffU & (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum) 
                       << (0xfU & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__7__KET____DOT__countSoFar) 
                                   << 1U))) << 1U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros) 
           | (((~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut)) 
               & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)) 
              & (~ (IData)((0U != (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut) 
                                         >> 0xcU)))))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig 
        = (0x3fffU & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_isNaN)
                       ? (0x1800U | (0x7fcU & (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                                                 ? (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA)
                                                 : 
                                                ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                                  ? (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB)
                                                  : 0U)) 
                                               << 2U)))
                       : ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                           ? (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut)
                           : (0x7fffU & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                          ? (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum) 
                                              >> 1U) 
                                             | (1U 
                                                & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum)))
                                          : (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum))))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sign 
        = (1U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_isNaN)
                  ? ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                      ? (1U & (vlTOPp->a >> 0x10U))
                      : ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                          ? (1U & (vlTOPp->b >> 0x10U))
                          : 1U)) : (((((((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns) 
                                         | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA)) 
                                        & (vlTOPp->a 
                                           >> 0x10U)) 
                                       | ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB) 
                                          & (~ (vlTOPp->b 
                                                >> 0x10U)))) 
                                      | (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut) 
                                          & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))) 
                                         & ((2U == (IData)(vlTOPp->roundingMode))
                                             ? 1U : 0U))) 
                                     | ((((~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                          & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)) 
                                         & (0U != (3U 
                                                   & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut) 
                                                      >> 0xcU)))) 
                                        & ((vlTOPp->a 
                                            >> 0x10U) 
                                           ^ VL_GTS_III(1,32,32, 0U, 
                                                        VL_EXTENDS_II(32,14, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)))))) 
                                    | (((~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                        & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags))) 
                                       & (VL_GTS_III(1,32,32, 0U, 
                                                     VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                           ? (~ (vlTOPp->b 
                                                 >> 0x10U))
                                           : (vlTOPp->a 
                                              >> 0x10U))))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (7U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                         & (1U | (2U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                                        >> 0xcU)))))) 
           & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (1U | (2U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                           >> 0xcU)))) & (3U | (4U 
                                                & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                                                   >> 0xbU))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sign))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                              & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)) 
                             >> 3U))) | ((0U != (7U 
                                                 & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                                                    & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))) 
                                         & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x1fffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                         | (4U == (IData)(vlTOPp->roundingMode))) 
                        & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                       | ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                          & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                       ? (((IData)(1U) + (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                                           >> 2U) | 
                                          (1U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                                                 >> 0xdU)))) 
                          & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                  & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                 & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                 ? (1U | (2U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                                                >> 0xcU)))
                                 : 0U))) : ((((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                                              & (~ 
                                                 (3U 
                                                  | (4U 
                                                     & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                                                        >> 0xbU))))) 
                                             >> 2U) 
                                            | (((6U 
                                                 == (IData)(vlTOPp->roundingMode)) 
                                                & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                ? ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                                   >> 1U)
                                                : 0U))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x3ffU & ((0x2000U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig))
                      ? ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                         >> 1U) : (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0xffU & (VL_EXTENDS_II(8,7, (0x7fU & VL_EXTENDS_II(7,7, 
                                                              (0x7fU 
                                                               & ((((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags) 
                                                                    | VL_GTS_III(1,32,32, 0U, 
                                                                                VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))))
                                                                    ? 
                                                                   (0x3fU 
                                                                    & (vlTOPp->b 
                                                                       >> 0xaU))
                                                                    : 
                                                                   (0x3fU 
                                                                    & (vlTOPp->a 
                                                                       >> 0xaU))) 
                                                                  - 
                                                                  ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                                                    ? 
                                                                   (0xfU 
                                                                    & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__7__KET____DOT__countSoFar) 
                                                                       << 1U))
                                                                    : 
                                                                   (1U 
                                                                    & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))))))))) 
                    + (0x1fffU & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                  >> 0xbU))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 4U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          | ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sign) 
                    << 0x10U) | ((0xfc00U & ((((((((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                        ? 0x38U
                                                        : 0U))) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                       ? 0x10U
                                                       : 0U))) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                      ? 8U
                                                      : 0U))) 
                                                | ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                    ? 0x2fU
                                                    : 0U)) 
                                               | ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                   ? 0x30U
                                                   : 0U)) 
                                              | ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x38U
                                                  : 0U)) 
                                             << 0xaU)) 
                                 | (0x3ffU & (((0x200U 
                                                & (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                    << 9U) 
                                                   | (0xfffffe00U 
                                                      & (((~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                          << 9U) 
                                                         & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))))) 
                                               | ((1U 
                                                   & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                      | (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                                                   ? 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))
                                                   : 0U)) 
                                              | VL_NEGATE_I((IData)((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
}

VL_INLINE_OPT void VaddRecF16_sub::_combo__TOP__2(VaddRecF16_sub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF16_sub::_combo__TOP__2\n"); );
    VaddRecF16_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros 
        = ((0U == (7U & (vlTOPp->a >> 0xdU))) & (0U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->b 
                                                     >> 0xdU))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (vlTOPp->a 
                                                 >> 0xdU));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB 
        = ((3U == (3U & (vlTOPp->b >> 0xeU))) & (vlTOPp->b 
                                                 >> 0xdU));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (~ 
                                                 (vlTOPp->a 
                                                  >> 0xdU)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & (vlTOPp->b >> 0xeU))) & (~ 
                                                 (vlTOPp->b 
                                                  >> 0xdU)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns 
        = ((1U & (vlTOPp->a >> 0x10U)) == (1U & (~ 
                                                 (vlTOPp->b 
                                                  >> 0x10U))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA 
        = (((0U != (7U & (vlTOPp->a >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->a));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB 
        = (((0U != (7U & (vlTOPp->b >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->b));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps 
        = (0x7fU & ((0x3fU & (vlTOPp->a >> 0xaU)) - 
                    (0x3fU & (vlTOPp->b >> 0xaU))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA) 
            & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB)) 
           & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
        = (0x7ffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                      ? (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA)
                      : (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign 
        = ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)), 4U)) 
           & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                             VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)), 4U)) 
              | (0U == (0xfU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist 
        = (0xfU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                    ? ((0x3fU & (vlTOPp->b >> 0xaU)) 
                       - (0x3fU & (vlTOPp->a >> 0xaU)))
                    : (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum 
        = (0x3fffU & (((((VL_LTES_III(1,32,32, 0U, 
                                      VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                          & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                          ? ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA) 
                             << 2U) : 0U) | ((VL_LTES_III(1,32,32, 0U, 
                                                          VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                                              & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                              ? ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA) 
                                                 << 1U)
                                              : 0U)) 
                       | (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                           ? (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA)
                           : 0U)) - ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB) 
                                     << 1U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__invalidExc 
        = ((((7U == (7U & (vlTOPp->a >> 0xdU))) & (~ 
                                                   (vlTOPp->a 
                                                    >> 9U))) 
            | ((7U == (7U & (vlTOPp->b >> 0xdU))) & 
               (~ (vlTOPp->b >> 9U)))) | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_isNaN 
        = (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA) 
            | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)) 
           | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0xeU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (0U != (3U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0xdU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                                      >> 2U)))) << 1U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0xbU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                                      >> 6U)))) << 2U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((7U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (8U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                    >> 7U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags 
        = (((~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)) 
            & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign))) 
           & (1U >= (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign)
            ? 0xfU : (0xfU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
        = (0x1fffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,14, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)))
                       ? VL_NEGATE_I((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum))
                       : (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_isNaN));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
        = (0xffffU & (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller) 
                       << 5U) >> (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
        = (0xfU & VL_SHIFTRS_III(5,5,2, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c), 
                                 (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist) 
                                        >> 2U))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x7eU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | (0U != (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum) 
                           << 1U))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x7dU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 1U)))) << 1U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x7bU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 3U)))) << 2U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x77U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 5U)))) << 3U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x6fU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 7U)))) << 4U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x5fU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 9U)))) << 5U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x3fU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum) 
                                    >> 0xbU)))) << 6U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0xeU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (1U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 3U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0xdU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (2U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0xbU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (4U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((7U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (8U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    << 3U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x7eU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (1U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 6U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x7dU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (2U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 4U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x7bU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (4U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 2U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x77U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (8U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x6fU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x10U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 2U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x5fU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x20U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 4U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x3fU & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x40U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 6U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller 
        = ((0x3ffeU & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller) 
                       >> 2U)) | ((0U != (7U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller))) 
                                  | (0U != ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
                                            & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x80U | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x7fU & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum 
        = (0x7fffU & (((0x3ff8U & ((VL_GTS_III(1,32,32, 0U, 
                                               VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                     ? (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB)
                                     : (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA)) 
                                   << 3U)) + ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                               ? (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller)
                                               : (0x4000U 
                                                  | (0x3fffU 
                                                     & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller)))))) 
                      + (1U & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__7__KET____DOT__countSoFar 
        = (0xfU & ((((((((2U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 1U : 0U) | ((4U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 2U : 0U)) 
                       | ((8U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 3U : 0U)) | ((0x10U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 4U : 0U)) 
                     | ((0x20U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 5U : 0U)) | ((0x40U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 6U : 0U)) 
                   | ((0x80U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                       ? 7U : 0U)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut 
        = (0x3fffU & (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum) 
                       << (0xfU & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__7__KET____DOT__countSoFar) 
                                   << 1U))) << 1U));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros) 
           | (((~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut)) 
               & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)) 
              & (~ (IData)((0U != (3U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut) 
                                         >> 0xcU)))))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig 
        = (0x3fffU & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_isNaN)
                       ? (0x1800U | (0x7fcU & (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                                                 ? (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA)
                                                 : 
                                                ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                                  ? (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB)
                                                  : 0U)) 
                                               << 2U)))
                       : ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                           ? (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut)
                           : (0x7fffU & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                          ? (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum) 
                                              >> 1U) 
                                             | (1U 
                                                & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum)))
                                          : (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum))))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sign 
        = (1U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_isNaN)
                  ? ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                      ? (1U & (vlTOPp->a >> 0x10U))
                      : ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                          ? (1U & (vlTOPp->b >> 0x10U))
                          : 1U)) : (((((((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns) 
                                         | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA)) 
                                        & (vlTOPp->a 
                                           >> 0x10U)) 
                                       | ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB) 
                                          & (~ (vlTOPp->b 
                                                >> 0x10U)))) 
                                      | (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut) 
                                          & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))) 
                                         & ((2U == (IData)(vlTOPp->roundingMode))
                                             ? 1U : 0U))) 
                                     | ((((~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                          & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)) 
                                         & (0U != (3U 
                                                   & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut) 
                                                      >> 0xcU)))) 
                                        & ((vlTOPp->a 
                                            >> 0x10U) 
                                           ^ VL_GTS_III(1,32,32, 0U, 
                                                        VL_EXTENDS_II(32,14, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)))))) 
                                    | (((~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                        & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags))) 
                                       & (VL_GTS_III(1,32,32, 0U, 
                                                     VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                           ? (~ (vlTOPp->b 
                                                 >> 0x10U))
                                           : (vlTOPp->a 
                                              >> 0x10U))))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (7U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                         & (1U | (2U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                                        >> 0xcU)))))) 
           & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (1U | (2U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                           >> 0xcU)))) & (3U | (4U 
                                                & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                                                   >> 0xbU))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sign))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                              & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)) 
                             >> 3U))) | ((0U != (7U 
                                                 & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                                                    & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))) 
                                         & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x1fffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                         | (4U == (IData)(vlTOPp->roundingMode))) 
                        & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                       | ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                          & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                       ? (((IData)(1U) + (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                                           >> 2U) | 
                                          (1U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                                                 >> 0xdU)))) 
                          & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                  & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                 & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                 ? (1U | (2U & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                                                >> 0xcU)))
                                 : 0U))) : ((((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                                              & (~ 
                                                 (3U 
                                                  | (4U 
                                                     & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig) 
                                                        >> 0xbU))))) 
                                             >> 2U) 
                                            | (((6U 
                                                 == (IData)(vlTOPp->roundingMode)) 
                                                & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                ? ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                                   >> 1U)
                                                : 0U))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x3ffU & ((0x2000U & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sig))
                      ? ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                         >> 1U) : (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0xffU & (VL_EXTENDS_II(8,7, (0x7fU & VL_EXTENDS_II(7,7, 
                                                              (0x7fU 
                                                               & ((((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags) 
                                                                    | VL_GTS_III(1,32,32, 0U, 
                                                                                VL_EXTENDS_II(32,7, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))))
                                                                    ? 
                                                                   (0x3fU 
                                                                    & (vlTOPp->b 
                                                                       >> 0xaU))
                                                                    : 
                                                                   (0x3fU 
                                                                    & (vlTOPp->a 
                                                                       >> 0xaU))) 
                                                                  - 
                                                                  ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                                                    ? 
                                                                   (0xfU 
                                                                    & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__7__KET____DOT__countSoFar) 
                                                                       << 1U))
                                                                    : 
                                                                   (1U 
                                                                    & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))))))))) 
                    + (0x1fffU & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                  >> 0xbU))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 4U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          | ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__out_sign) 
                    << 0x10U) | ((0xfc00U & ((((((((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                        ? 0x38U
                                                        : 0U))) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                       ? 0x10U
                                                       : 0U))) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                      ? 8U
                                                      : 0U))) 
                                                | ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                    ? 0x2fU
                                                    : 0U)) 
                                               | ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                   ? 0x30U
                                                   : 0U)) 
                                              | ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x38U
                                                  : 0U)) 
                                             << 0xaU)) 
                                 | (0x3ffU & (((0x200U 
                                                & (((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                    << 9U) 
                                                   | (0xfffffe00U 
                                                      & (((~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                          << 9U) 
                                                         & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))))) 
                                               | ((1U 
                                                   & ((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                      | (~ (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                                                   ? 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))
                                                   : 0U)) 
                                              | VL_NEGATE_I((IData)((IData)(vlTOPp->addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
}

void VaddRecF16_sub::_eval(VaddRecF16_sub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF16_sub::_eval\n"); );
    VaddRecF16_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VaddRecF16_sub::_eval_initial(VaddRecF16_sub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF16_sub::_eval_initial\n"); );
    VaddRecF16_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VaddRecF16_sub::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF16_sub::final\n"); );
    // Variables
    VaddRecF16_sub__Syms* __restrict vlSymsp = this->__VlSymsp;
    VaddRecF16_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VaddRecF16_sub::_eval_settle(VaddRecF16_sub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF16_sub::_eval_settle\n"); );
    VaddRecF16_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VaddRecF16_sub::_change_request(VaddRecF16_sub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF16_sub::_change_request\n"); );
    VaddRecF16_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VaddRecF16_sub::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF16_sub::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((a & 0xfffe0000U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b & 0xfffe0000U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif // VL_DEBUG

void VaddRecF16_sub::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF16_sub::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_I(17);
    b = VL_RAND_RESET_I(17);
    roundingMode = VL_RAND_RESET_I(3);
    out = VL_RAND_RESET_I(17);
    exceptionFlags = VL_RAND_RESET_I(5);
    addRecF16_sub__DOT__addRecFN__DOT__invalidExc = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__out_isNaN = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__out_sign = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__out_sig = VL_RAND_RESET_I(14);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA = VL_RAND_RESET_I(12);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB = VL_RAND_RESET_I(12);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps = VL_RAND_RESET_I(7);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist = VL_RAND_RESET_I(4);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist = VL_RAND_RESET_I(4);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum = VL_RAND_RESET_I(14);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum = VL_RAND_RESET_I(13);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum = VL_RAND_RESET_I(7);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut = VL_RAND_RESET_I(14);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller = VL_RAND_RESET_I(11);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller = VL_RAND_RESET_I(16);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller = VL_RAND_RESET_I(4);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask = VL_RAND_RESET_I(4);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller = VL_RAND_RESET_I(14);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum = VL_RAND_RESET_I(15);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn = VL_RAND_RESET_I(7);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = VL_RAND_RESET_I(8);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__7__KET____DOT__countSoFar = VL_RAND_RESET_I(4);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c = VL_RAND_RESET_I(5);
    addRecF16_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut = VL_RAND_RESET_I(4);
    addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut = VL_RAND_RESET_I(10);
    addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_I(14);
    addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_I(13);
    addRecF16_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(8);
}
