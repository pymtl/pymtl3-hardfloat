// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VaddRecF32_sub.h for the primary calling header

#include "VaddRecF32_sub.h"
#include "VaddRecF32_sub__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VaddRecF32_sub) {
    VaddRecF32_sub__Syms* __restrict vlSymsp = __VlSymsp = new VaddRecF32_sub__Syms(this, name());
    VaddRecF32_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VaddRecF32_sub::__Vconfigure(VaddRecF32_sub__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VaddRecF32_sub::~VaddRecF32_sub() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VaddRecF32_sub::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VaddRecF32_sub::eval\n"); );
    VaddRecF32_sub__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VaddRecF32_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/addRecFN_spec.v", 116, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VaddRecF32_sub::_eval_initial_loop(VaddRecF32_sub__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/addRecFN_spec.v", 116, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VaddRecF32_sub::_settle__TOP__1(VaddRecF32_sub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF32_sub::_settle__TOP__1\n"); );
    VaddRecF32_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c = 0x100U;
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros 
        = ((0U == (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 6U))) & (0U == (7U & ((IData)(
                                                          (vlTOPp->b 
                                                           >> 0x17U)) 
                                                  >> 6U))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 7U))) & (IData)((vlTOPp->a 
                                             >> 0x1dU)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB 
        = ((3U == (3U & ((IData)((vlTOPp->b >> 0x17U)) 
                         >> 7U))) & (IData)((vlTOPp->b 
                                             >> 0x1dU)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->a 
                                                >> 0x1dU))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & ((IData)((vlTOPp->b >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->b 
                                                >> 0x1dU))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns 
        = ((1U & (IData)((vlTOPp->a >> 0x20U))) == 
           (1U & (~ (IData)((vlTOPp->b >> 0x20U)))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA 
        = (((0U != (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->a)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB 
        = (((0U != (7U & ((IData)((vlTOPp->b >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->b)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps 
        = (0x3ffU & ((0x1ffU & (IData)((vlTOPp->a >> 0x17U))) 
                     - (0x1ffU & (IData)((vlTOPp->b 
                                          >> 0x17U)))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA) 
            & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB)) 
           & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
        = (0xffffffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                         ? vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA
                         : vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign 
        = ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)), 5U)) 
           & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                             VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)), 5U)) 
              | (0U == (0x1fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist 
        = (0x1fU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                     ? ((0x1ffU & (IData)((vlTOPp->b 
                                           >> 0x17U))) 
                        - (0x1ffU & (IData)((vlTOPp->a 
                                             >> 0x17U))))
                     : (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum 
        = (0x7ffffffU & (((((VL_LTES_III(1,32,32, 0U, 
                                         VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                             & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                             ? (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA 
                                << 2U) : 0U) | ((VL_LTES_III(1,32,32, 0U, 
                                                             VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                                                 & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                                 ? 
                                                (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA 
                                                 << 1U)
                                                 : 0U)) 
                          | (VL_GTS_III(1,32,32, 0U, 
                                        VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                              ? vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA
                              : 0U)) - (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB 
                                        << 1U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__invalidExc 
        = ((((7U == (7U & (IData)((vlTOPp->a >> 0x1dU)))) 
             & (~ (IData)((vlTOPp->a >> 0x16U)))) | 
            ((7U == (7U & (IData)((vlTOPp->b >> 0x1dU)))) 
             & (~ (IData)((vlTOPp->b >> 0x16U))))) 
           | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_isNaN 
        = (((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA) 
            | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)) 
           | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x7eU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (0U != (3U & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x7dU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 2U)))) << 1U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x7bU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 6U)))) << 2U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x77U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 0xaU)))) << 3U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x6fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 0xeU)))) << 4U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x5fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 0x12U)))) 
              << 5U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                    >> 0x16U)))) << 6U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags 
        = (((~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)) 
            & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign))) 
           & (1U >= (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign)
            ? 0x1fU : (0x1fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
        = (0x3ffffffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,27, vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum))
                          ? VL_NEGATE_I(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)
                          : vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_isNaN));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
        = (0x1fffffffU & ((vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                           << 5U) >> (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
        = (0x7fU & (VL_SHIFTRS_III(9,9,3, 0x100U, (7U 
                                                   & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist) 
                                                      >> 2U))) 
                    >> 1U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1ffeU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | (0U != (3U & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1ffdU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 2U)))) << 1U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1ffbU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 4U)))) << 2U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1ff7U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 6U)))) << 3U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1fefU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 8U)))) << 4U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1fdfU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0xaU)))) << 5U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1fbfU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0xcU)))) << 6U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1f7fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0xeU)))) << 7U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1effU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x10U)))) << 8U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1dffU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x12U)))) << 9U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1bffU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x14U)))) << 0xaU));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x17ffU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x16U)))) << 0xbU));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x18U)))) << 0xcU));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x7eU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (1U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 6U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x7dU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (2U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 4U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x7bU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (4U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 2U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x77U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (8U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x6fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       << 2U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x5fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       << 4U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x40U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       << 6U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1ffeU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (1U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 0xcU)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1ffdU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (2U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 0xaU)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1ffbU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (4U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 8U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1ff7U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (8U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 6U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1fefU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x10U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       >> 4U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1fdfU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x20U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       >> 2U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1fbfU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x40U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1f7fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x80U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 2U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1effU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x100U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                        << 4U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1dffU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x200U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                        << 6U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1bffU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x400U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                        << 8U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x17ffU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x800U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                        << 0xaU)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x1000U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                         << 0xcU)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller 
        = ((0x7fffffeU & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
                          >> 2U)) | ((0U != (7U & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller)) 
                                     | (0U != ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
                                               & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum 
        = (0xfffffffU & (((0x7fffff8U & ((VL_GTS_III(1,32,32, 0U, 
                                                     VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                           ? vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB
                                           : vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA) 
                                         << 3U)) + 
                          ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                            ? vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller
                            : (0x8000000U | (0x7ffffffU 
                                             & (~ vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller))))) 
                         + (1U & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut 
        = (0x7ffffffU & ((vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                          << (0x1fU & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar) 
                                       << 1U))) << 1U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros) 
           | (((~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut)) 
               & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)) 
              & (~ (IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut 
                                         >> 0x19U)))))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
        = (0x7ffffffU & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_isNaN)
                          ? (0x3000000U | (0xfffffcU 
                                           & (((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                                                ? vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA
                                                : ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                                    ? vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB
                                                    : 0U)) 
                                              << 2U)))
                          : ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                              ? vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut
                              : (0xfffffffU & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                                ? (
                                                   (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum 
                                                    >> 1U) 
                                                   | (1U 
                                                      & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum))
                                                : vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum)))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sign 
        = (1U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_isNaN)
                  ? ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                      ? (1U & (IData)((vlTOPp->a >> 0x20U)))
                      : ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                          ? (1U & (IData)((vlTOPp->b 
                                           >> 0x20U)))
                          : 1U)) : (((((((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns) 
                                         | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA)) 
                                        & (IData)((vlTOPp->a 
                                                   >> 0x20U))) 
                                       | ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB) 
                                          & (~ (IData)(
                                                       (vlTOPp->b 
                                                        >> 0x20U))))) 
                                      | (((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut) 
                                          & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))) 
                                         & ((2U == (IData)(vlTOPp->roundingMode))
                                             ? 1U : 0U))) 
                                     | ((((~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                          & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)) 
                                         & (0U != (3U 
                                                   & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut 
                                                      >> 0x19U)))) 
                                        & ((IData)(
                                                   (vlTOPp->a 
                                                    >> 0x20U)) 
                                           ^ VL_GTS_III(1,32,32, 0U, 
                                                        VL_EXTENDS_II(32,27, vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum))))) 
                                    | (((~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                        & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags))) 
                                       & (VL_GTS_III(1,32,32, 0U, 
                                                     VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                           ? (~ (IData)(
                                                        (vlTOPp->b 
                                                         >> 0x20U)))
                                           : (IData)(
                                                     (vlTOPp->a 
                                                      >> 0x20U)))))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (7U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                         & (1U | (2U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                        >> 0x19U)))))) 
           & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (1U | (2U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                           >> 0x19U)))) & (3U | (4U 
                                                 & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                                    >> 0x18U))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sign))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                 & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                >> 3U))) | ((0U != 
                                             (7U & 
                                              (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                               & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask))) 
                                            & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                            | (4U == (IData)(vlTOPp->roundingMode))) 
                           & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                          | ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                              >> 2U) 
                                             | (1U 
                                                & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                                   >> 0x1aU)))) 
                             & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                     & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? (1U | (2U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                                   >> 0x19U)))
                                    : 0U))) : (((vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                                 & (~ 
                                                    (3U 
                                                     | (4U 
                                                        & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                                           >> 0x18U))))) 
                                                >> 2U) 
                                               | (((6U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                   ? 
                                                  (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig)
                         ? (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                            >> 1U) : vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & ((((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags) 
                                                               | VL_GTS_III(1,32,32, 0U, 
                                                                            VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))))
                                                               ? 
                                                              (0x1ffU 
                                                               & (IData)(
                                                                         (vlTOPp->b 
                                                                          >> 0x17U)))
                                                               : 
                                                              (0x1ffU 
                                                               & (IData)(
                                                                         (vlTOPp->a 
                                                                          >> 0x17U)))) 
                                                             - 
                                                             ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                                               ? 
                                                              (0x1fU 
                                                               & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar) 
                                                                  << 1U))
                                                               : 
                                                              (1U 
                                                               & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))))))))) 
                     + (0x3ffffffU & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                      >> 0x18U))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,11, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 7U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          | ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((QData)((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sign)) 
                    << 0x20U) | (QData)((IData)(((0xff800000U 
                                                  & ((((((((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                           & (~ 
                                                              ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                                ? 0x1c0U
                                                                : 0U))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                               ? 0x80U
                                                               : 0U))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                              ? 0x40U
                                                              : 0U))) 
                                                        | ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                            ? 0x17fU
                                                            : 0U)) 
                                                       | ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                           ? 0x180U
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                          ? 0x1c0U
                                                          : 0U)) 
                                                     << 0x17U)) 
                                                 | (0x7fffffU 
                                                    & (((0x400000U 
                                                         & (((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                             << 0x16U) 
                                                            | (0xffc00000U 
                                                               & (((~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                                   << 0x16U) 
                                                                  & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)))) 
                                                        | ((1U 
                                                            & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                               | (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                            : 0U)) 
                                                       | VL_NEGATE_I((IData)((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))))));
}

VL_INLINE_OPT void VaddRecF32_sub::_combo__TOP__2(VaddRecF32_sub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF32_sub::_combo__TOP__2\n"); );
    VaddRecF32_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros 
        = ((0U == (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 6U))) & (0U == (7U & ((IData)(
                                                          (vlTOPp->b 
                                                           >> 0x17U)) 
                                                  >> 6U))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 7U))) & (IData)((vlTOPp->a 
                                             >> 0x1dU)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB 
        = ((3U == (3U & ((IData)((vlTOPp->b >> 0x17U)) 
                         >> 7U))) & (IData)((vlTOPp->b 
                                             >> 0x1dU)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->a 
                                                >> 0x1dU))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & ((IData)((vlTOPp->b >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->b 
                                                >> 0x1dU))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns 
        = ((1U & (IData)((vlTOPp->a >> 0x20U))) == 
           (1U & (~ (IData)((vlTOPp->b >> 0x20U)))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA 
        = (((0U != (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->a)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB 
        = (((0U != (7U & ((IData)((vlTOPp->b >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->b)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps 
        = (0x3ffU & ((0x1ffU & (IData)((vlTOPp->a >> 0x17U))) 
                     - (0x1ffU & (IData)((vlTOPp->b 
                                          >> 0x17U)))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA) 
            & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB)) 
           & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
        = (0xffffffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                         ? vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA
                         : vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign 
        = ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)), 5U)) 
           & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                             VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)), 5U)) 
              | (0U == (0x1fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist 
        = (0x1fU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                     ? ((0x1ffU & (IData)((vlTOPp->b 
                                           >> 0x17U))) 
                        - (0x1ffU & (IData)((vlTOPp->a 
                                             >> 0x17U))))
                     : (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum 
        = (0x7ffffffU & (((((VL_LTES_III(1,32,32, 0U, 
                                         VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                             & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                             ? (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA 
                                << 2U) : 0U) | ((VL_LTES_III(1,32,32, 0U, 
                                                             VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                                                 & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                                 ? 
                                                (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA 
                                                 << 1U)
                                                 : 0U)) 
                          | (VL_GTS_III(1,32,32, 0U, 
                                        VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                              ? vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA
                              : 0U)) - (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB 
                                        << 1U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__invalidExc 
        = ((((7U == (7U & (IData)((vlTOPp->a >> 0x1dU)))) 
             & (~ (IData)((vlTOPp->a >> 0x16U)))) | 
            ((7U == (7U & (IData)((vlTOPp->b >> 0x1dU)))) 
             & (~ (IData)((vlTOPp->b >> 0x16U))))) 
           | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_isNaN 
        = (((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA) 
            | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)) 
           | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x7eU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (0U != (3U & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x7dU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 2U)))) << 1U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x7bU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 6U)))) << 2U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x77U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 0xaU)))) << 3U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x6fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 0xeU)))) << 4U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x5fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 0x12U)))) 
              << 5U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                    >> 0x16U)))) << 6U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags 
        = (((~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)) 
            & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign))) 
           & (1U >= (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign)
            ? 0x1fU : (0x1fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
        = (0x3ffffffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,27, vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum))
                          ? VL_NEGATE_I(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)
                          : vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_isNaN));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
        = (0x1fffffffU & ((vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                           << 5U) >> (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
        = (0x7fU & (VL_SHIFTRS_III(9,9,3, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c), 
                                   (7U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist) 
                                          >> 2U))) 
                    >> 1U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1ffeU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | (0U != (3U & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1ffdU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 2U)))) << 1U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1ffbU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 4U)))) << 2U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1ff7U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 6U)))) << 3U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1fefU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 8U)))) << 4U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1fdfU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0xaU)))) << 5U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1fbfU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0xcU)))) << 6U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1f7fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0xeU)))) << 7U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1effU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x10U)))) << 8U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1dffU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x12U)))) << 9U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1bffU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x14U)))) << 0xaU));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x17ffU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x16U)))) << 0xbU));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x18U)))) << 0xcU));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x7eU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (1U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 6U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x7dU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (2U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 4U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x7bU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (4U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 2U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x77U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (8U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x6fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       << 2U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x5fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       << 4U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x40U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       << 6U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1ffeU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (1U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 0xcU)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1ffdU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (2U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 0xaU)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1ffbU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (4U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 8U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1ff7U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (8U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 6U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1fefU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x10U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       >> 4U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1fdfU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x20U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       >> 2U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1fbfU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x40U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1f7fU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x80U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 2U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1effU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x100U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                        << 4U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1dffU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x200U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                        << 6U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1bffU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x400U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                        << 8U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x17ffU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x800U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                        << 0xaU)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffU & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x1000U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                         << 0xcU)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller 
        = ((0x7fffffeU & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
                          >> 2U)) | ((0U != (7U & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller)) 
                                     | (0U != ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
                                               & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum 
        = (0xfffffffU & (((0x7fffff8U & ((VL_GTS_III(1,32,32, 0U, 
                                                     VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                           ? vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB
                                           : vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA) 
                                         << 3U)) + 
                          ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                            ? vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller
                            : (0x8000000U | (0x7ffffffU 
                                             & (~ vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller))))) 
                         + (1U & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut 
        = (0x7ffffffU & ((vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                          << (0x1fU & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar) 
                                       << 1U))) << 1U));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros) 
           | (((~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut)) 
               & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)) 
              & (~ (IData)((0U != (3U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut 
                                         >> 0x19U)))))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
        = (0x7ffffffU & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_isNaN)
                          ? (0x3000000U | (0xfffffcU 
                                           & (((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                                                ? vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA
                                                : ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                                    ? vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB
                                                    : 0U)) 
                                              << 2U)))
                          : ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                              ? vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut
                              : (0xfffffffU & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                                ? (
                                                   (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum 
                                                    >> 1U) 
                                                   | (1U 
                                                      & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum))
                                                : vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum)))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sign 
        = (1U & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_isNaN)
                  ? ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                      ? (1U & (IData)((vlTOPp->a >> 0x20U)))
                      : ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                          ? (1U & (IData)((vlTOPp->b 
                                           >> 0x20U)))
                          : 1U)) : (((((((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns) 
                                         | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA)) 
                                        & (IData)((vlTOPp->a 
                                                   >> 0x20U))) 
                                       | ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB) 
                                          & (~ (IData)(
                                                       (vlTOPp->b 
                                                        >> 0x20U))))) 
                                      | (((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut) 
                                          & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))) 
                                         & ((2U == (IData)(vlTOPp->roundingMode))
                                             ? 1U : 0U))) 
                                     | ((((~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                          & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)) 
                                         & (0U != (3U 
                                                   & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut 
                                                      >> 0x19U)))) 
                                        & ((IData)(
                                                   (vlTOPp->a 
                                                    >> 0x20U)) 
                                           ^ VL_GTS_III(1,32,32, 0U, 
                                                        VL_EXTENDS_II(32,27, vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum))))) 
                                    | (((~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                        & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags))) 
                                       & (VL_GTS_III(1,32,32, 0U, 
                                                     VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                           ? (~ (IData)(
                                                        (vlTOPp->b 
                                                         >> 0x20U)))
                                           : (IData)(
                                                     (vlTOPp->a 
                                                      >> 0x20U)))))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (7U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                         & (1U | (2U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                        >> 0x19U)))))) 
           & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (1U | (2U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                           >> 0x19U)))) & (3U | (4U 
                                                 & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                                    >> 0x18U))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sign))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                 & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                >> 3U))) | ((0U != 
                                             (7U & 
                                              (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                               & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask))) 
                                            & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                            | (4U == (IData)(vlTOPp->roundingMode))) 
                           & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                          | ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                              >> 2U) 
                                             | (1U 
                                                & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                                   >> 0x1aU)))) 
                             & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                     & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? (1U | (2U & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                                   >> 0x19U)))
                                    : 0U))) : (((vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                                 & (~ 
                                                    (3U 
                                                     | (4U 
                                                        & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig 
                                                           >> 0x18U))))) 
                                                >> 2U) 
                                               | (((6U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                   ? 
                                                  (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sig)
                         ? (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                            >> 1U) : vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & ((((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags) 
                                                               | VL_GTS_III(1,32,32, 0U, 
                                                                            VL_EXTENDS_II(32,10, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))))
                                                               ? 
                                                              (0x1ffU 
                                                               & (IData)(
                                                                         (vlTOPp->b 
                                                                          >> 0x17U)))
                                                               : 
                                                              (0x1ffU 
                                                               & (IData)(
                                                                         (vlTOPp->a 
                                                                          >> 0x17U)))) 
                                                             - 
                                                             ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                                               ? 
                                                              (0x1fU 
                                                               & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar) 
                                                                  << 1U))
                                                               : 
                                                              (1U 
                                                               & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))))))))) 
                     + (0x3ffffffU & (vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                      >> 0x18U))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,11, (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 7U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          | ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((QData)((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__out_sign)) 
                    << 0x20U) | (QData)((IData)(((0xff800000U 
                                                  & ((((((((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                           & (~ 
                                                              ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                                ? 0x1c0U
                                                                : 0U))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                               ? 0x80U
                                                               : 0U))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                              ? 0x40U
                                                              : 0U))) 
                                                        | ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                            ? 0x17fU
                                                            : 0U)) 
                                                       | ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                           ? 0x180U
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                          ? 0x1c0U
                                                          : 0U)) 
                                                     << 0x17U)) 
                                                 | (0x7fffffU 
                                                    & (((0x400000U 
                                                         & (((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                             << 0x16U) 
                                                            | (0xffc00000U 
                                                               & (((~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                                   << 0x16U) 
                                                                  & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)))) 
                                                        | ((1U 
                                                            & ((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                               | (~ (IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                            : 0U)) 
                                                       | VL_NEGATE_I((IData)((IData)(vlTOPp->addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))))));
}

void VaddRecF32_sub::_eval(VaddRecF32_sub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF32_sub::_eval\n"); );
    VaddRecF32_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VaddRecF32_sub::_eval_initial(VaddRecF32_sub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF32_sub::_eval_initial\n"); );
    VaddRecF32_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VaddRecF32_sub::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF32_sub::final\n"); );
    // Variables
    VaddRecF32_sub__Syms* __restrict vlSymsp = this->__VlSymsp;
    VaddRecF32_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VaddRecF32_sub::_eval_settle(VaddRecF32_sub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF32_sub::_eval_settle\n"); );
    VaddRecF32_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VaddRecF32_sub::_change_request(VaddRecF32_sub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF32_sub::_change_request\n"); );
    VaddRecF32_sub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VaddRecF32_sub::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF32_sub::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((a & VL_ULL(0)))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b & VL_ULL(0)))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif  // VL_DEBUG

void VaddRecF32_sub::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF32_sub::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_Q(33);
    b = VL_RAND_RESET_Q(33);
    roundingMode = VL_RAND_RESET_I(3);
    out = VL_RAND_RESET_Q(33);
    exceptionFlags = VL_RAND_RESET_I(5);
    addRecF32_sub__DOT__addRecFN__DOT__invalidExc = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__out_isNaN = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__out_sign = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__out_sig = VL_RAND_RESET_I(27);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA = VL_RAND_RESET_I(25);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB = VL_RAND_RESET_I(25);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps = VL_RAND_RESET_I(10);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist = VL_RAND_RESET_I(5);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist = VL_RAND_RESET_I(5);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum = VL_RAND_RESET_I(27);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum = VL_RAND_RESET_I(26);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum = VL_RAND_RESET_I(13);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut = VL_RAND_RESET_I(27);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller = VL_RAND_RESET_I(24);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller = VL_RAND_RESET_I(29);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller = VL_RAND_RESET_I(7);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask = VL_RAND_RESET_I(7);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller = VL_RAND_RESET_I(27);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum = VL_RAND_RESET_I(28);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn = VL_RAND_RESET_I(13);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = VL_RAND_RESET_I(14);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c = VL_RAND_RESET_I(9);
    addRecF32_sub__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut = VL_RAND_RESET_I(7);
    addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut = VL_RAND_RESET_I(23);
    addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_I(27);
    addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_I(26);
    addRecF32_sub__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(11);
}
