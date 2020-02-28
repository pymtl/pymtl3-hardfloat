// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VdivSqrtRecF32_small_sqrt.h for the primary calling header

#include "VdivSqrtRecF32_small_sqrt.h"
#include "VdivSqrtRecF32_small_sqrt__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VdivSqrtRecF32_small_sqrt) {
    VdivSqrtRecF32_small_sqrt__Syms* __restrict vlSymsp = __VlSymsp = new VdivSqrtRecF32_small_sqrt__Syms(this, name());
    VdivSqrtRecF32_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VdivSqrtRecF32_small_sqrt::__Vconfigure(VdivSqrtRecF32_small_sqrt__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VdivSqrtRecF32_small_sqrt::~VdivSqrtRecF32_small_sqrt() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VdivSqrtRecF32_small_sqrt::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VdivSqrtRecF32_small_sqrt::eval\n"); );
    VdivSqrtRecF32_small_sqrt__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VdivSqrtRecF32_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/divSqrtRecFN_small_spec.v", 215, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VdivSqrtRecF32_small_sqrt::_eval_initial_loop(VdivSqrtRecF32_small_sqrt__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/divSqrtRecFN_small_spec.v", 215, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VdivSqrtRecF32_small_sqrt::_settle__TOP__1(VdivSqrtRecF32_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF32_small_sqrt::_settle__TOP__1\n"); );
    VdivSqrtRecF32_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*543:0*/ __Vtemp2[17];
    WData/*543:0*/ __Vtemp3[17];
    // Body
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0U] = 0U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[1U] = 0U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[2U] = 0U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[3U] = 0U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[4U] = 0U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[5U] = 0U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[6U] = 0U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[7U] = 0U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[8U] = 0U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[9U] = 0U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xaU] = 0U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xbU] = 0U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xcU] = 0U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xdU] = 0U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xeU] = 0U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xfU] = 0U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x10U] = 1U;
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->a 
                                                >> 0x1dU))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
        = (((0U != (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->a)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 7U))) & (IData)((vlTOPp->a 
                                             >> 0x1dU)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle 
        = (0U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->outValid = (1U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 
        = ((3U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
           & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
              >> 0x19U));
    vlTOPp->inReady = (1U >= (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z)) 
           | ((3U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
        = ((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
            << 1U) | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt 
        = (((~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)) 
            & (0U != (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                            >> 6U)))) & (IData)((vlTOPp->a 
                                                 >> 0x20U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt 
        = (1U & ((~ (((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
                      | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S)) 
                     | (0U == (7U & ((IData)((vlTOPp->a 
                                              >> 0x17U)) 
                                     >> 6U))))) & (~ (IData)(
                                                             (vlTOPp->a 
                                                              >> 0x20U)))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering 
        = ((IData)(vlTOPp->inReady) & (IData)(vlTOPp->inValid));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem 
        = (0x7ffffffU & (((((IData)(vlTOPp->inReady) 
                            & (~ (0x1ffU & (IData)(
                                                   (vlTOPp->a 
                                                    >> 0x17U)))))
                            ? (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
                               << 1U) : 0U) | ((0x1ffU 
                                                & ((IData)(vlTOPp->inReady) 
                                                   & (IData)(
                                                             (vlTOPp->a 
                                                              >> 0x17U))))
                                                ? (
                                                   (0x6000000U 
                                                    & (((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
                                                         >> 0x16U) 
                                                        - (IData)(1U)) 
                                                       << 0x19U)) 
                                                   | (0x1fffff8U 
                                                      & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
                                                         << 3U)))
                                                : 0U)) 
                         | ((IData)(vlTOPp->inReady)
                             ? 0U : (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z 
                                     << 1U))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            | (4U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
           | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc) 
           | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc) 
           | ((~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc)) 
              & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
           | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem 
        = (0xfffffffU & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem 
                         - (0x3ffffffU & ((((((IData)(vlTOPp->inReady) 
                                              & (~ 
                                                 (0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->a 
                                                             >> 0x17U)))))
                                              ? 0x1000000U
                                              : 0U) 
                                            | ((0x1ffU 
                                                & ((IData)(vlTOPp->inReady) 
                                                   & (IData)(
                                                             (vlTOPp->a 
                                                              >> 0x17U))))
                                                ? 0x2800000U
                                                : 0U)) 
                                           | ((1U & 
                                               ((~ (IData)(vlTOPp->inReady)) 
                                                & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                                               ? (0x1000000U 
                                                  | (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z 
                                                     << 1U))
                                               : 0U)) 
                                          | (((~ (IData)(vlTOPp->inReady)) 
                                              & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                              ? ((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
                                                  << 1U) 
                                                 | (0x1ffffffU 
                                                    & (((IData)(1U) 
                                                        << (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                                       >> 2U)))
                                              : 0U)))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
                 & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z))));
    __Vtemp2[0U] = 0U;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 0U;
    __Vtemp2[3U] = 0U;
    __Vtemp2[4U] = 0U;
    __Vtemp2[5U] = 0U;
    __Vtemp2[6U] = 0U;
    __Vtemp2[7U] = 0U;
    __Vtemp2[8U] = 0U;
    __Vtemp2[9U] = 0U;
    __Vtemp2[0xaU] = 0U;
    __Vtemp2[0xbU] = 0U;
    __Vtemp2[0xcU] = 0U;
    __Vtemp2[0xdU] = 0U;
    __Vtemp2[0xeU] = 0U;
    __Vtemp2[0xfU] = 0U;
    __Vtemp2[0x10U] = 1U;
    VL_SHIFTRS_WWI(513,513,9, __Vtemp3, __Vtemp2, (0x1ffU 
                                                   & (~ 
                                                      (VL_EXTENDS_II(9,10, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)) 
                                                       | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                           ? 0x100U
                                                           : 0U)))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0x1ffffffU & ((__Vtemp3[4U] << 0x16U) | 
                         (__Vtemp3[3U] >> 0xaU)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffeU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (1U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x18U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffdU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (2U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x16U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffbU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (4U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x14U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffff7U & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (8U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x12U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffefU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0x10U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffdfU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xeU)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffbfU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xcU)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffff7fU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xaU)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffeffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 8U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffdffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 6U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffbffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 4U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fff7ffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 2U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffefffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x1000U & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffdfffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x2000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 2U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffbfffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x4000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 4U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ff7fffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x8000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 6U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1feffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 8U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fdffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xaU)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fbffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xcU)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1f7ffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xeU)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1efffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x10U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1dfffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x12U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1bfffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x14U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x17fffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x16U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x1000000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                            << 0x18U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (3U | ((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                  << 2U) | (4U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                  >> 0x18U))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                 >> 3U) & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                           >> 4U)))) 
           | ((0U != (7U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                            & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                               >> 1U)))) & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
               >> 1U)) & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                 & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                >> 3U))) | ((0U != 
                                             (7U & 
                                              (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                               & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask))) 
                                            & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                            | (4U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                           & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                          | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                              | vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                             >> 2U)) 
                             & (~ ((((0U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                     & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                       >> 1U) : 0U)))
                          : (((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                               & (~ vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                              >> 2U) | (((6U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                         & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                         ? (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                            >> 1U) : 0U))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig)
                         ? (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                            >> 1U) : vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)))) 
                     + (0x3ffffffU & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                      >> 0x18U))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & VL_EXTENDS_II(10,10, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)))), 8U))) 
               & ((0x4000000U & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig)
                   ? (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                      >> 3U) : (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x4000000U 
                                                       & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig)
                                                       ? 
                                                      (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 4U)
                                                       : 
                                                      (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 3U)))) 
                                                 & ((0x4000000U 
                                                     & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig)
                                                     ? 
                                                    (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                     >> 0x19U)
                                                     : 
                                                    (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                     >> 0x18U))) 
                                                & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                                                   & ((0x4000000U 
                                                       & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig)
                                                       ? 
                                                      (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                                       >> 2U)
                                                       : 
                                                      (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & (((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                                          >> 0x1aU) 
                                                         & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig)))))))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,11, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 7U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc) 
                                          << 3U) | 
                                         (((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                            << 1U) 
                                           | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(1,32,32, 0x6bU, 
                                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                    | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))))))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((QData)((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z)) 
                    << 0x20U) | (QData)((IData)(((0xff800000U 
                                                  & ((((((((((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                             & (~ 
                                                                (((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z) 
                                                                  | VL_GTS_III(1,32,32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                            & (~ 
                                                               ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                                 ? 0xffffff94U
                                                                 : 0U))) 
                                                           & (~ 
                                                              ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                                ? 0x80U
                                                                : 0U))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                               ? 0x40U
                                                               : 0U))) 
                                                         | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                             ? 0x6bU
                                                             : 0U)) 
                                                        | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                            ? 0x17fU
                                                            : 0U)) 
                                                       | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                           ? 0x180U
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                          ? 0x1c0U
                                                          : 0U)) 
                                                     << 0x17U)) 
                                                 | (0x7fffffU 
                                                    & (((((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                          << 0x16U) 
                                                         | (0xffc00000U 
                                                            & ((((~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                                                 & VL_LTES_III(1,32,32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                << 0x16U) 
                                                               & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))) 
                                                        | (((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                            | ((~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                                               & VL_LTES_III(1,32,32, 0x6bU, 
                                                                             VL_EXTENDS_II(32,11, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                            : 0U)) 
                                                       | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))))));
}

VL_INLINE_OPT void VdivSqrtRecF32_small_sqrt::_sequent__TOP__2(VdivSqrtRecF32_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF32_small_sqrt::_sequent__TOP__2\n"); );
    VdivSqrtRecF32_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*543:0*/ __Vtemp7[17];
    // Body
    if (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z = 1U;
    }
    if (((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) 
         | (2U < (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)))) {
        vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z 
            = (0x3ffffffU & (VL_LTES_III(1,32,32, 0U, 
                                         VL_EXTENDS_II(32,28, vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem))
                              ? vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem
                              : vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem));
    }
    if (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z 
            = (0U == (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                            >> 6U)));
    }
    if (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z 
            = vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S;
    }
    if (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z 
            = (1U & ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)
                      ? ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                          ? (1U & (IData)((vlTOPp->a 
                                           >> 0x20U)))
                          : 1U) : (IData)((vlTOPp->a 
                                           >> 0x20U))));
    }
    if (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) {
        vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z 
            = vlTOPp->roundingMode;
    }
    if (((((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)) 
          | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)) 
         | ((~ (IData)(vlTOPp->inReady)) & VL_LTES_III(1,32,32, 0U, 
                                                       VL_EXTENDS_II(32,28, vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem))))) {
        vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z 
            = (0U != VL_EXTENDS_II(32,28, vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem));
    }
    if (((((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)) 
          | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)) 
         | ((~ (IData)(vlTOPp->inReady)) & VL_LTES_III(1,32,32, 0U, 
                                                       VL_EXTENDS_II(32,28, vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem))))) {
        vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
            = (0x3ffffffU & ((((((IData)(vlTOPp->inReady) 
                                 & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))
                                 ? (0x3000000U | (((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                                    ? 
                                                   (0x3fffffU 
                                                    & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S)
                                                    : 0U) 
                                                  << 2U))
                                 : 0U) | (((IData)(vlTOPp->inReady) 
                                           & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)))
                                           ? 0x1000000U
                                           : 0U)) | 
                              ((0x1ffU & (((IData)(vlTOPp->inReady) 
                                           & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))) 
                                          & (IData)(
                                                    (vlTOPp->a 
                                                     >> 0x17U))))
                                ? (VL_LTES_III(32,32,32, 0U, 
                                               VL_EXTENDS_II(32,28, vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)) 
                                   << 0x17U) : 0U)) 
                             | ((IData)(vlTOPp->inReady)
                                 ? 0U : (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
                                         | (0x1ffffffU 
                                            & (((IData)(1U) 
                                                << (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                               >> 2U))))));
    }
    if (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) {
        vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z 
            = (0x3ffU & ((IData)(0x80U) + VL_SHIFTRS_III(10,32,32, 
                                                         VL_EXTENDS_II(32,10, 
                                                                       (0x1ffU 
                                                                        & (IData)(
                                                                                (vlTOPp->a 
                                                                                >> 0x17U)))), 1U)));
    }
    if (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z 
            = (((7U == (7U & (IData)((vlTOPp->a >> 0x1dU)))) 
                & (~ (IData)((vlTOPp->a >> 0x16U)))) 
               | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt));
    }
    if (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z 
            = vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S;
    }
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z)) 
           | ((3U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
        = ((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
            << 1U) | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            | (4U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
           | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc) 
           | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc) 
           | ((~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc)) 
              & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
                 & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp7, vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)) 
                                 | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0x1ffffffU & ((__Vtemp7[4U] << 0x16U) | 
                         (__Vtemp7[3U] >> 0xaU)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffeU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (1U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x18U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffdU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (2U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x16U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffbU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (4U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x14U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffff7U & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (8U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x12U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffefU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0x10U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffdfU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xeU)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffbfU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xcU)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffff7fU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xaU)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffeffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 8U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffdffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 6U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffbffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 4U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fff7ffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 2U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffefffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x1000U & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffdfffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x2000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 2U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffbfffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x4000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 4U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ff7fffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x8000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 6U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1feffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 8U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fdffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xaU)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fbffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xcU)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1f7ffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xeU)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1efffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x10U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1dfffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x12U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1bfffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x14U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x17fffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x16U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffffffU & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x1000000U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                            << 0x18U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (3U | ((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                  << 2U) | (4U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                  >> 0x18U))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                 >> 3U) & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                           >> 4U)))) 
           | ((0U != (7U & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                            & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                               >> 1U)))) & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
               >> 1U)) & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                 & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                >> 3U))) | ((0U != 
                                             (7U & 
                                              (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                               & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask))) 
                                            & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                            | (4U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                           & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                          | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                              | vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                             >> 2U)) 
                             & (~ ((((0U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                     & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                       >> 1U) : 0U)))
                          : (((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                               & (~ vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                              >> 2U) | (((6U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                         & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                         ? (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                            >> 1U) : 0U))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig)
                         ? (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                            >> 1U) : vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)))) 
                     + (0x3ffffffU & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                      >> 0x18U))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,11, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 7U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((QData)((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z)) 
                    << 0x20U) | (QData)((IData)(((0xff800000U 
                                                  & ((((((((((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                             & (~ 
                                                                (((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z) 
                                                                  | VL_GTS_III(1,32,32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                            & (~ 
                                                               ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                                 ? 0xffffff94U
                                                                 : 0U))) 
                                                           & (~ 
                                                              ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                                ? 0x80U
                                                                : 0U))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                               ? 0x40U
                                                               : 0U))) 
                                                         | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                             ? 0x6bU
                                                             : 0U)) 
                                                        | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                            ? 0x17fU
                                                            : 0U)) 
                                                       | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                           ? 0x180U
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                          ? 0x1c0U
                                                          : 0U)) 
                                                     << 0x17U)) 
                                                 | (0x7fffffU 
                                                    & (((((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                          << 0x16U) 
                                                         | (0xffc00000U 
                                                            & ((((~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                                                 & VL_LTES_III(1,32,32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                << 0x16U) 
                                                               & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))) 
                                                        | (((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                            | ((~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                                               & VL_LTES_III(1,32,32, 0x6bU, 
                                                                             VL_EXTENDS_II(32,11, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                            : 0U)) 
                                                       | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))))));
}

VL_INLINE_OPT void VdivSqrtRecF32_small_sqrt::_sequent__TOP__3(VdivSqrtRecF32_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF32_small_sqrt::_sequent__TOP__3\n"); );
    VdivSqrtRecF32_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->nReset) {
        if ((1U & ((~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                   | (IData)(vlTOPp->inValid)))) {
            vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum 
                = (0x1fU & ((((((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
                                & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt)))
                                ? 1U : 0U) | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlTOPp->a 
                                                              >> 0x17U)))
                                                   ? 0x18U
                                                   : 0x19U)
                                               : 0U)) 
                             | ((1U & ((~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                                       & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2))))
                                 ? ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum) 
                                    - (IData)(1U)) : 0U)) 
                            | (((~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                                & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2))
                                ? 1U : 0U)));
        }
    } else {
        vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum = 0U;
    }
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle 
        = (0U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->outValid = (1U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 
        = ((3U == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
           & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
              >> 0x19U));
    vlTOPp->inReady = (1U >= (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
}

VL_INLINE_OPT void VdivSqrtRecF32_small_sqrt::_combo__TOP__4(VdivSqrtRecF32_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF32_small_sqrt::_combo__TOP__4\n"); );
    VdivSqrtRecF32_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->a 
                                                >> 0x1dU))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
        = (((0U != (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->a)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 7U))) & (IData)((vlTOPp->a 
                                             >> 0x1dU)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & VL_EXTENDS_II(10,10, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)))), 8U))) 
               & ((0x4000000U & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig)
                   ? (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                      >> 3U) : (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x4000000U 
                                                       & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig)
                                                       ? 
                                                      (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 4U)
                                                       : 
                                                      (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 3U)))) 
                                                 & ((0x4000000U 
                                                     & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig)
                                                     ? 
                                                    (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                     >> 0x19U)
                                                     : 
                                                    (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                     >> 0x18U))) 
                                                & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                                                   & ((0x4000000U 
                                                       & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig)
                                                       ? 
                                                      (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                                       >> 2U)
                                                       : 
                                                      (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & (((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                                          >> 0x1aU) 
                                                         & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig)))))))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering 
        = ((IData)(vlTOPp->inReady) & (IData)(vlTOPp->inValid));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem 
        = (0x7ffffffU & (((((IData)(vlTOPp->inReady) 
                            & (~ (0x1ffU & (IData)(
                                                   (vlTOPp->a 
                                                    >> 0x17U)))))
                            ? (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
                               << 1U) : 0U) | ((0x1ffU 
                                                & ((IData)(vlTOPp->inReady) 
                                                   & (IData)(
                                                             (vlTOPp->a 
                                                              >> 0x17U))))
                                                ? (
                                                   (0x6000000U 
                                                    & (((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
                                                         >> 0x16U) 
                                                        - (IData)(1U)) 
                                                       << 0x19U)) 
                                                   | (0x1fffff8U 
                                                      & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
                                                         << 3U)))
                                                : 0U)) 
                         | ((IData)(vlTOPp->inReady)
                             ? 0U : (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z 
                                     << 1U))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt 
        = (((~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)) 
            & (0U != (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                            >> 6U)))) & (IData)((vlTOPp->a 
                                                 >> 0x20U)));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt 
        = (1U & ((~ (((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
                      | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S)) 
                     | (0U == (7U & ((IData)((vlTOPp->a 
                                              >> 0x17U)) 
                                     >> 6U))))) & (~ (IData)(
                                                             (vlTOPp->a 
                                                              >> 0x20U)))));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc) 
                                          << 3U) | 
                                         (((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                            << 1U) 
                                           | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(1,32,32, 0x6bU, 
                                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                    | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))))))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem 
        = (0xfffffffU & (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem 
                         - (0x3ffffffU & ((((((IData)(vlTOPp->inReady) 
                                              & (~ 
                                                 (0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->a 
                                                             >> 0x17U)))))
                                              ? 0x1000000U
                                              : 0U) 
                                            | ((0x1ffU 
                                                & ((IData)(vlTOPp->inReady) 
                                                   & (IData)(
                                                             (vlTOPp->a 
                                                              >> 0x17U))))
                                                ? 0x2800000U
                                                : 0U)) 
                                           | ((1U & 
                                               ((~ (IData)(vlTOPp->inReady)) 
                                                & (~ (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                                               ? (0x1000000U 
                                                  | (vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z 
                                                     << 1U))
                                               : 0U)) 
                                          | (((~ (IData)(vlTOPp->inReady)) 
                                              & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                              ? ((vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
                                                  << 1U) 
                                                 | (0x1ffffffU 
                                                    & (((IData)(1U) 
                                                        << (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                                       >> 2U)))
                                              : 0U)))));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
           | (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt));
    vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase 
        = ((IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt));
}

void VdivSqrtRecF32_small_sqrt::_eval(VdivSqrtRecF32_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF32_small_sqrt::_eval\n"); );
    VdivSqrtRecF32_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))) 
         | ((~ (IData)(vlTOPp->nReset)) & (IData)(vlTOPp->__Vclklast__TOP__nReset)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__nReset = vlTOPp->nReset;
}

void VdivSqrtRecF32_small_sqrt::_eval_initial(VdivSqrtRecF32_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF32_small_sqrt::_eval_initial\n"); );
    VdivSqrtRecF32_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__nReset = vlTOPp->nReset;
}

void VdivSqrtRecF32_small_sqrt::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF32_small_sqrt::final\n"); );
    // Variables
    VdivSqrtRecF32_small_sqrt__Syms* __restrict vlSymsp = this->__VlSymsp;
    VdivSqrtRecF32_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VdivSqrtRecF32_small_sqrt::_eval_settle(VdivSqrtRecF32_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF32_small_sqrt::_eval_settle\n"); );
    VdivSqrtRecF32_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VdivSqrtRecF32_small_sqrt::_change_request(VdivSqrtRecF32_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF32_small_sqrt::_change_request\n"); );
    VdivSqrtRecF32_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VdivSqrtRecF32_small_sqrt::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF32_small_sqrt::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((nReset & 0xfeU))) {
        Verilated::overWidthError("nReset");}
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((inValid & 0xfeU))) {
        Verilated::overWidthError("inValid");}
    if (VL_UNLIKELY((a & VL_ULL(0)))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif  // VL_DEBUG

void VdivSqrtRecF32_small_sqrt::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF32_small_sqrt::_ctor_var_reset\n"); );
    // Body
    nReset = VL_RAND_RESET_I(1);
    clock = VL_RAND_RESET_I(1);
    control = VL_RAND_RESET_I(1);
    inReady = VL_RAND_RESET_I(1);
    inValid = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_Q(33);
    roundingMode = VL_RAND_RESET_I(3);
    outValid = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_Q(33);
    exceptionFlags = VL_RAND_RESET_I(5);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig = VL_RAND_RESET_I(27);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S = VL_RAND_RESET_I(25);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum = VL_RAND_RESET_I(5);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z = VL_RAND_RESET_I(10);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z = VL_RAND_RESET_I(23);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z = VL_RAND_RESET_I(3);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z = VL_RAND_RESET_I(26);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z = VL_RAND_RESET_I(26);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem = VL_RAND_RESET_I(27);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem = VL_RAND_RESET_I(28);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut = VL_RAND_RESET_I(23);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask = VL_RAND_RESET_I(27);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main = VL_RAND_RESET_I(25);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_I(27);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_I(26);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(11);
    VL_RAND_RESET_W(513, divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c);
    divSqrtRecF32_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut = VL_RAND_RESET_I(25);
}
