// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VdivSqrtRecF16_small_sqrt.h for the primary calling header

#include "VdivSqrtRecF16_small_sqrt.h"
#include "VdivSqrtRecF16_small_sqrt__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VdivSqrtRecF16_small_sqrt) {
    VdivSqrtRecF16_small_sqrt__Syms* __restrict vlSymsp = __VlSymsp = new VdivSqrtRecF16_small_sqrt__Syms(this, name());
    VdivSqrtRecF16_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VdivSqrtRecF16_small_sqrt::__Vconfigure(VdivSqrtRecF16_small_sqrt__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VdivSqrtRecF16_small_sqrt::~VdivSqrtRecF16_small_sqrt() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VdivSqrtRecF16_small_sqrt::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VdivSqrtRecF16_small_sqrt::eval\n"); );
    VdivSqrtRecF16_small_sqrt__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VdivSqrtRecF16_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/divSqrtRecFN_small_spec.v", 181, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VdivSqrtRecF16_small_sqrt::_eval_initial_loop(VdivSqrtRecF16_small_sqrt__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/divSqrtRecFN_small_spec.v", 181, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VdivSqrtRecF16_small_sqrt::_settle__TOP__1(VdivSqrtRecF16_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF16_small_sqrt::_settle__TOP__1\n"); );
    VdivSqrtRecF16_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2[3];
    WData/*95:0*/ __Vtemp3[3];
    // Body
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0U] = 0U;
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[1U] = 0U;
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[2U] = 1U;
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (~ 
                                                 (vlTOPp->a 
                                                  >> 0xdU)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
        = (((0U != (7U & (vlTOPp->a >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->a));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (vlTOPp->a 
                                                 >> 0xdU));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle 
        = (0U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->outValid = (1U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 
        = ((3U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
           & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z) 
              >> 0xcU));
    vlTOPp->inReady = (1U >= (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z)) 
           | ((3U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
        = (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z) 
            << 1U) | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt 
        = (((~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)) 
            & (0U != (7U & (vlTOPp->a >> 0xdU)))) & 
           (vlTOPp->a >> 0x10U));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt 
        = (1U & ((~ (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
                      | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S)) 
                     | (0U == (7U & (vlTOPp->a >> 0xdU))))) 
                 & (~ (vlTOPp->a >> 0x10U))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering 
        = ((IData)(vlTOPp->inReady) & (IData)(vlTOPp->inValid));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem 
        = (0x3fffU & (((((IData)(vlTOPp->inReady) & 
                         (~ (0x3fU & (vlTOPp->a >> 0xaU))))
                         ? ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S) 
                            << 1U) : 0U) | ((0x3fU 
                                             & ((IData)(vlTOPp->inReady) 
                                                & (vlTOPp->a 
                                                   >> 0xaU)))
                                             ? ((0x3000U 
                                                 & ((((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S) 
                                                      >> 9U) 
                                                     - (IData)(1U)) 
                                                    << 0xcU)) 
                                                | (0xff8U 
                                                   & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S) 
                                                      << 3U)))
                                             : 0U)) 
                      | ((IData)(vlTOPp->inReady) ? 0U
                          : ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z) 
                             << 1U))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            | (4U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
           | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc) 
           | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc) 
           | ((~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc)) 
              & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
           | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem 
        = (0x7fffU & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem) 
                      - (0x1fffU & ((((((IData)(vlTOPp->inReady) 
                                        & (~ (0x3fU 
                                              & (vlTOPp->a 
                                                 >> 0xaU))))
                                        ? 0x800U : 0U) 
                                      | ((0x3fU & ((IData)(vlTOPp->inReady) 
                                                   & (vlTOPp->a 
                                                      >> 0xaU)))
                                          ? 0x1400U
                                          : 0U)) | 
                                     ((1U & ((~ (IData)(vlTOPp->inReady)) 
                                             & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                                       ? (0x800U | 
                                          ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z) 
                                           << 1U)) : 0U)) 
                                    | (((~ (IData)(vlTOPp->inReady)) 
                                        & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                        ? (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z) 
                                            << 1U) 
                                           | (0xfffU 
                                              & (((IData)(1U) 
                                                  << (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                                 >> 2U)))
                                        : 0U)))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
                 & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z))));
    __Vtemp2[0U] = 0U;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp3, __Vtemp2, (0x3fU 
                                                 & (~ 
                                                    (VL_EXTENDS_II(6,7, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)) 
                                                     | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                         ? 0x20U
                                                         : 0U)))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0xfffU & ((__Vtemp3[1U] << 0x19U) | (__Vtemp3[0U] 
                                                >> 7U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffeU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (1U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffdU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (2U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 9U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffbU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (4U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 7U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xff7U & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (8U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfefU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x10U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 3U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfdfU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x20U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 1U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfbfU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x40U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 1U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xf7fU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x80U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xeffU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x100U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 5U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xdffU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x200U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 7U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xbffU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x400U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 9U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x7ffU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x800U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 0xbU)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (3U | (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                  << 2U) | (4U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                                  >> 0xbU))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                              >> 3U) & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                        >> 4U)))) | 
           ((0U != (7U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                          & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                             >> 1U)))) & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
               >> 1U)) & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                              & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)) 
                             >> 3U))) | ((0U != (7U 
                                                 & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                                                    & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))) 
                                         & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x1fffU & (((((0U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                         | (4U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                        & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                       | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                          & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                       ? (((IData)(1U) + (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                                           | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                                          >> 2U)) & 
                          (~ ((((0U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                               & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                               ? ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                  >> 1U) : 0U))) : 
                      ((((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                         & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask))) 
                        >> 2U) | (((6U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                   & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                   ? ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                      >> 1U) : 0U))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x3ffU & ((0x2000U & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig))
                      ? ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                         >> 1U) : (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0xffU & (VL_EXTENDS_II(8,7, (0x7fU & VL_EXTENDS_II(7,7, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)))) 
                    + (0x1fffU & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                  >> 0xbU))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 8U, VL_EXTENDS_II(32,8, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 8U, VL_EXTENDS_II(32,8, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,7, 
                                                                        (0x7fU 
                                                                         & VL_EXTENDS_II(7,7, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)))), 5U))) 
               & ((0x2000U & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig))
                   ? ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                      >> 3U) : ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x2000U 
                                                       & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig))
                                                       ? 
                                                      ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                                       >> 4U)
                                                       : 
                                                      ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                                       >> 3U)))) 
                                                 & ((0x2000U 
                                                     & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig))
                                                     ? 
                                                    ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                                     >> 0xcU)
                                                     : 
                                                    ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                                     >> 0xbU))) 
                                                & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                                                   & ((0x2000U 
                                                       & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig))
                                                       ? 
                                                      ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                                                       >> 2U)
                                                       : 
                                                      ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & ((((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                                                          >> 0xdU) 
                                                         & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig))))))))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 4U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc) 
                                          << 3U) | 
                                         (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                            << 1U) 
                                           | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(1,32,32, 8U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                    | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))))))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z) 
                    << 0x10U) | ((0xfc00U & (((((((
                                                   (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                     & (~ 
                                                        (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z) 
                                                          | VL_GTS_III(1,32,32, 8U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                          ? 0x38U
                                                          : 0U))) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                         ? 0xfffffff7U
                                                         : 0U))) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                        ? 0x10U
                                                        : 0U))) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                       ? 8U
                                                       : 0U))) 
                                                 | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                     ? 8U
                                                     : 0U)) 
                                                | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                    ? 0x2fU
                                                    : 0U)) 
                                               | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                   ? 0x30U
                                                   : 0U)) 
                                              | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x38U
                                                  : 0U)) 
                                             << 0xaU)) 
                                 | (0x3ffU & (((((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                 << 9U) 
                                                | (0xfffffe00U 
                                                   & ((((~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                                        & VL_LTES_III(1,32,32, 8U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                       << 9U) 
                                                      & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)))) 
                                               | (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                   | ((~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                                      & VL_LTES_III(1,32,32, 8U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                   ? 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))
                                                   : 0U)) 
                                              | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
}

VL_INLINE_OPT void VdivSqrtRecF16_small_sqrt::_sequent__TOP__2(VdivSqrtRecF16_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF16_small_sqrt::_sequent__TOP__2\n"); );
    VdivSqrtRecF16_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp7[3];
    // Body
    if (vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z = 1U;
    }
    if (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) 
         | (2U < (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)))) {
        vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z 
            = (0x1fffU & (VL_LTES_III(1,32,32, 0U, 
                                      VL_EXTENDS_II(32,15, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)))
                           ? (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)
                           : (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem)));
    }
    if (vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z 
            = (0U == (7U & (vlTOPp->a >> 0xdU)));
    }
    if (vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z 
            = vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S;
    }
    if (vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z 
            = (1U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)
                      ? ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                          ? (1U & (vlTOPp->a >> 0x10U))
                          : 1U) : (vlTOPp->a >> 0x10U)));
    }
    if (vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) {
        vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z 
            = vlTOPp->roundingMode;
    }
    if (((((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)) 
          | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)) 
         | ((~ (IData)(vlTOPp->inReady)) & VL_LTES_III(1,32,32, 0U, 
                                                       VL_EXTENDS_II(32,15, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)))))) {
        vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z 
            = (0U != VL_EXTENDS_II(32,15, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)));
    }
    if (((((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)) 
          | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)) 
         | ((~ (IData)(vlTOPp->inReady)) & VL_LTES_III(1,32,32, 0U, 
                                                       VL_EXTENDS_II(32,15, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)))))) {
        vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
            = (0x1fffU & ((((((IData)(vlTOPp->inReady) 
                              & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))
                              ? (0x1800U | (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                              ? (0x1ffU 
                                                 & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S))
                                              : 0U) 
                                            << 2U))
                              : 0U) | (((IData)(vlTOPp->inReady) 
                                        & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)))
                                        ? 0x800U : 0U)) 
                           | ((0x3fU & (((IData)(vlTOPp->inReady) 
                                         & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))) 
                                        & (vlTOPp->a 
                                           >> 0xaU)))
                               ? (VL_LTES_III(32,32,32, 0U, 
                                              VL_EXTENDS_II(32,15, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem))) 
                                  << 0xaU) : 0U)) | 
                          ((IData)(vlTOPp->inReady)
                            ? 0U : ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z) 
                                    | (0xfffU & (((IData)(1U) 
                                                  << (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                                 >> 2U))))));
    }
    if (vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) {
        vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z 
            = (0x7fU & ((IData)(0x10U) + VL_SHIFTRS_III(7,32,32, 
                                                        VL_EXTENDS_II(32,7, 
                                                                      (0x3fU 
                                                                       & (vlTOPp->a 
                                                                          >> 0xaU))), 1U)));
    }
    if (vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z 
            = (((7U == (7U & (vlTOPp->a >> 0xdU))) 
                & (~ (vlTOPp->a >> 9U))) | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt));
    }
    if (vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z 
            = vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S;
    }
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z)) 
           | ((3U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig 
        = (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z) 
            << 1U) | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            | (4U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
           | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc) 
           | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc) 
           | ((~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc)) 
              & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
                 & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z))));
    VL_SHIFTRS_WWI(65,65,6, __Vtemp7, vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0x3fU & (~ (VL_EXTENDS_II(6,7, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)) 
                                | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                    ? 0x20U : 0U)))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0xfffU & ((__Vtemp7[1U] << 0x19U) | (__Vtemp7[0U] 
                                                >> 7U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffeU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (1U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffdU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (2U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 9U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffbU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (4U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 7U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xff7U & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (8U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfefU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x10U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 3U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfdfU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x20U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 1U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfbfU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x40U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 1U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xf7fU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x80U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xeffU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x100U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 5U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xdffU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x200U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 7U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xbffU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x400U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 9U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x7ffU & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x800U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 0xbU)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (3U | (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                  << 2U) | (4U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                                  >> 0xbU))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                              >> 3U) & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                        >> 4U)))) | 
           ((0U != (7U & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                          & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                             >> 1U)))) & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
               >> 1U)) & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                              & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)) 
                             >> 3U))) | ((0U != (7U 
                                                 & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                                                    & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))) 
                                         & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x1fffU & (((((0U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                         | (4U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                        & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                       | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                          & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                       ? (((IData)(1U) + (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                                           | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                                          >> 2U)) & 
                          (~ ((((0U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                               & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                               ? ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                  >> 1U) : 0U))) : 
                      ((((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                         & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask))) 
                        >> 2U) | (((6U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                   & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                   ? ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                      >> 1U) : 0U))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x3ffU & ((0x2000U & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig))
                      ? ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                         >> 1U) : (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0xffU & (VL_EXTENDS_II(8,7, (0x7fU & VL_EXTENDS_II(7,7, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)))) 
                    + (0x1fffU & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                  >> 0xbU))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 8U, VL_EXTENDS_II(32,8, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 4U)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z) 
                    << 0x10U) | ((0xfc00U & (((((((
                                                   (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                     & (~ 
                                                        (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z) 
                                                          | VL_GTS_III(1,32,32, 8U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                          ? 0x38U
                                                          : 0U))) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                         ? 0xfffffff7U
                                                         : 0U))) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                        ? 0x10U
                                                        : 0U))) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                       ? 8U
                                                       : 0U))) 
                                                 | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                     ? 8U
                                                     : 0U)) 
                                                | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                    ? 0x2fU
                                                    : 0U)) 
                                               | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                   ? 0x30U
                                                   : 0U)) 
                                              | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x38U
                                                  : 0U)) 
                                             << 0xaU)) 
                                 | (0x3ffU & (((((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                 << 9U) 
                                                | (0xfffffe00U 
                                                   & ((((~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                                        & VL_LTES_III(1,32,32, 8U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                       << 9U) 
                                                      & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)))) 
                                               | (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                   | ((~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                                      & VL_LTES_III(1,32,32, 8U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                   ? 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))
                                                   : 0U)) 
                                              | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
}

VL_INLINE_OPT void VdivSqrtRecF16_small_sqrt::_sequent__TOP__3(VdivSqrtRecF16_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF16_small_sqrt::_sequent__TOP__3\n"); );
    VdivSqrtRecF16_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->nReset) {
        if ((1U & ((~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                   | (IData)(vlTOPp->inValid)))) {
            vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum 
                = (0xfU & ((((((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
                               & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt)))
                               ? 1U : 0U) | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)
                                              ? ((0x400U 
                                                  & vlTOPp->a)
                                                  ? 0xbU
                                                  : 0xcU)
                                              : 0U)) 
                            | ((1U & ((~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                                      & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2))))
                                ? ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum) 
                                   - (IData)(1U)) : 0U)) 
                           | (((~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                               & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2))
                               ? 1U : 0U)));
        }
    } else {
        vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum = 0U;
    }
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle 
        = (0U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->outValid = (1U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 
        = ((3U == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
           & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z) 
              >> 0xcU));
    vlTOPp->inReady = (1U >= (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
}

VL_INLINE_OPT void VdivSqrtRecF16_small_sqrt::_combo__TOP__4(VdivSqrtRecF16_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF16_small_sqrt::_combo__TOP__4\n"); );
    VdivSqrtRecF16_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (~ 
                                                 (vlTOPp->a 
                                                  >> 0xdU)));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
        = (((0U != (7U & (vlTOPp->a >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->a));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (vlTOPp->a 
                                                 >> 0xdU));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 8U, VL_EXTENDS_II(32,8, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,7, 
                                                                        (0x7fU 
                                                                         & VL_EXTENDS_II(7,7, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)))), 5U))) 
               & ((0x2000U & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig))
                   ? ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                      >> 3U) : ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x2000U 
                                                       & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig))
                                                       ? 
                                                      ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                                       >> 4U)
                                                       : 
                                                      ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                                       >> 3U)))) 
                                                 & ((0x2000U 
                                                     & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig))
                                                     ? 
                                                    ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                                     >> 0xcU)
                                                     : 
                                                    ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                                     >> 0xbU))) 
                                                & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                                                   & ((0x2000U 
                                                       & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig))
                                                       ? 
                                                      ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                                                       >> 2U)
                                                       : 
                                                      ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & ((((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                                                          >> 0xdU) 
                                                         & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig) 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig))))))))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering 
        = ((IData)(vlTOPp->inReady) & (IData)(vlTOPp->inValid));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem 
        = (0x3fffU & (((((IData)(vlTOPp->inReady) & 
                         (~ (0x3fU & (vlTOPp->a >> 0xaU))))
                         ? ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S) 
                            << 1U) : 0U) | ((0x3fU 
                                             & ((IData)(vlTOPp->inReady) 
                                                & (vlTOPp->a 
                                                   >> 0xaU)))
                                             ? ((0x3000U 
                                                 & ((((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S) 
                                                      >> 9U) 
                                                     - (IData)(1U)) 
                                                    << 0xcU)) 
                                                | (0xff8U 
                                                   & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S) 
                                                      << 3U)))
                                             : 0U)) 
                      | ((IData)(vlTOPp->inReady) ? 0U
                          : ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z) 
                             << 1U))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt 
        = (((~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)) 
            & (0U != (7U & (vlTOPp->a >> 0xdU)))) & 
           (vlTOPp->a >> 0x10U));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt 
        = (1U & ((~ (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
                      | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S)) 
                     | (0U == (7U & (vlTOPp->a >> 0xdU))))) 
                 & (~ (vlTOPp->a >> 0x10U))));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc) 
                                          << 3U) | 
                                         (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                            << 1U) 
                                           | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(1,32,32, 8U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                    | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))))))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem 
        = (0x7fffU & ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem) 
                      - (0x1fffU & ((((((IData)(vlTOPp->inReady) 
                                        & (~ (0x3fU 
                                              & (vlTOPp->a 
                                                 >> 0xaU))))
                                        ? 0x800U : 0U) 
                                      | ((0x3fU & ((IData)(vlTOPp->inReady) 
                                                   & (vlTOPp->a 
                                                      >> 0xaU)))
                                          ? 0x1400U
                                          : 0U)) | 
                                     ((1U & ((~ (IData)(vlTOPp->inReady)) 
                                             & (~ (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                                       ? (0x800U | 
                                          ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z) 
                                           << 1U)) : 0U)) 
                                    | (((~ (IData)(vlTOPp->inReady)) 
                                        & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                        ? (((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z) 
                                            << 1U) 
                                           | (0xfffU 
                                              & (((IData)(1U) 
                                                  << (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                                 >> 2U)))
                                        : 0U)))));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
           | (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt));
    vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase 
        = ((IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt));
}

void VdivSqrtRecF16_small_sqrt::_eval(VdivSqrtRecF16_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF16_small_sqrt::_eval\n"); );
    VdivSqrtRecF16_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VdivSqrtRecF16_small_sqrt::_eval_initial(VdivSqrtRecF16_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF16_small_sqrt::_eval_initial\n"); );
    VdivSqrtRecF16_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__nReset = vlTOPp->nReset;
}

void VdivSqrtRecF16_small_sqrt::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF16_small_sqrt::final\n"); );
    // Variables
    VdivSqrtRecF16_small_sqrt__Syms* __restrict vlSymsp = this->__VlSymsp;
    VdivSqrtRecF16_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VdivSqrtRecF16_small_sqrt::_eval_settle(VdivSqrtRecF16_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF16_small_sqrt::_eval_settle\n"); );
    VdivSqrtRecF16_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VdivSqrtRecF16_small_sqrt::_change_request(VdivSqrtRecF16_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF16_small_sqrt::_change_request\n"); );
    VdivSqrtRecF16_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VdivSqrtRecF16_small_sqrt::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF16_small_sqrt::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((nReset & 0xfeU))) {
        Verilated::overWidthError("nReset");}
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((inValid & 0xfeU))) {
        Verilated::overWidthError("inValid");}
    if (VL_UNLIKELY((a & 0xfffe0000U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif // VL_DEBUG

void VdivSqrtRecF16_small_sqrt::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF16_small_sqrt::_ctor_var_reset\n"); );
    // Body
    nReset = VL_RAND_RESET_I(1);
    clock = VL_RAND_RESET_I(1);
    control = VL_RAND_RESET_I(1);
    inReady = VL_RAND_RESET_I(1);
    inValid = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_I(17);
    roundingMode = VL_RAND_RESET_I(3);
    outValid = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(17);
    exceptionFlags = VL_RAND_RESET_I(5);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig = VL_RAND_RESET_I(14);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S = VL_RAND_RESET_I(12);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum = VL_RAND_RESET_I(4);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z = VL_RAND_RESET_I(7);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z = VL_RAND_RESET_I(10);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z = VL_RAND_RESET_I(3);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z = VL_RAND_RESET_I(13);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z = VL_RAND_RESET_I(13);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem = VL_RAND_RESET_I(14);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem = VL_RAND_RESET_I(15);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut = VL_RAND_RESET_I(10);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask = VL_RAND_RESET_I(14);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main = VL_RAND_RESET_I(12);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_I(14);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_I(13);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(65, divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c);
    divSqrtRecF16_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut = VL_RAND_RESET_I(12);
}
