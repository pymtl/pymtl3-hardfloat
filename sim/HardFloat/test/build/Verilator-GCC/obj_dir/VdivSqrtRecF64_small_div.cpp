// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VdivSqrtRecF64_small_div.h for the primary calling header

#include "VdivSqrtRecF64_small_div.h"
#include "VdivSqrtRecF64_small_div__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VdivSqrtRecF64_small_div) {
    VdivSqrtRecF64_small_div__Syms* __restrict vlSymsp = __VlSymsp = new VdivSqrtRecF64_small_div__Syms(this, name());
    VdivSqrtRecF64_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VdivSqrtRecF64_small_div::__Vconfigure(VdivSqrtRecF64_small_div__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VdivSqrtRecF64_small_div::~VdivSqrtRecF64_small_div() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VdivSqrtRecF64_small_div::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VdivSqrtRecF64_small_div::eval\n"); );
    VdivSqrtRecF64_small_div__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VdivSqrtRecF64_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/divSqrtRecFN_small_spec.v", 111, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VdivSqrtRecF64_small_div::_eval_initial_loop(VdivSqrtRecF64_small_div__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/divSqrtRecFN_small_spec.v", 111, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VdivSqrtRecF64_small_div::_settle__TOP__1(VdivSqrtRecF64_small_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF64_small_div::_settle__TOP__1\n"); );
    VdivSqrtRecF64_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*4127:0*/ __Vtemp2[129];
    WData/*4127:0*/ __Vtemp3[129];
    WData/*95:0*/ __Vtemp5[3];
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x80U] = 1U;
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div 
        = (0x3fffU & ((0xfffU & ((vlTOPp->a[2U] << 0xcU) 
                                 | (vlTOPp->a[1U] >> 0x14U))) 
                      + ((0x3800U & (VL_NEGATE_I((IData)(
                                                         (1U 
                                                          & ((0x1ffffeU 
                                                              & (vlTOPp->b[2U] 
                                                                 << 1U)) 
                                                             | (vlTOPp->b[1U] 
                                                                >> 0x1fU))))) 
                                     << 0xbU)) | (0x7ffU 
                                                  & (~ 
                                                     (0xfffU 
                                                      & ((vlTOPp->b[2U] 
                                                          << 0xcU) 
                                                         | (vlTOPp->b[1U] 
                                                            >> 0x14U))))))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->b[2U] 
                                              << 3U)) 
                                          | (vlTOPp->b[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->b[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->b[0U])))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                       << 2U)) | (vlTOPp->b[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->b[1U] >> 0x1dU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->a[2U] 
                                              << 3U)) 
                                          | (vlTOPp->a[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->a[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->a[0U])))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                       << 2U)) | (vlTOPp->b[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->b[1U] >> 0x1dU)));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                       << 2U)) | (vlTOPp->a[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->a[1U] >> 0x1dU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                       << 2U)) | (vlTOPp->a[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->a[1U] >> 0x1dU)));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle 
        = (0U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->outValid = (1U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 
        = ((3U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
           & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
                      >> 0x36U)));
    vlTOPp->inReady = (1U >= (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z)) 
           | ((3U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
        = ((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
            << 1U) | (QData)((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z)));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__invalidExc 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__infiniteExc 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div 
        = (((0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                        << 3U)) | (
                                                   vlTOPp->a[1U] 
                                                   >> 0x1dU)))) 
            & (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                          << 3U)) | 
                            (vlTOPp->b[1U] >> 0x1dU))))) 
           | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S) 
              & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S)));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S 
        = (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
            | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S)) 
           | (0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                         << 3U)) | 
                           (vlTOPp->a[1U] >> 0x1dU)))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering 
        = ((IData)(vlTOPp->inReady) & (IData)(vlTOPp->inValid));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem 
        = (VL_ULL(0xffffffffffffff) & (((IData)(vlTOPp->inReady)
                                         ? (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
                                            << 1U) : VL_ULL(0)) 
                                       | ((IData)(vlTOPp->inReady)
                                           ? VL_ULL(0)
                                           : (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z 
                                              << 1U))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            | (4U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
           | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__infiniteExc) 
           | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__invalidExc) 
           | ((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__infiniteExc)) 
              & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S 
        = (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
            | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S)) 
           | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_div 
        = (1U & ((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S)) 
                 & (~ (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S) 
                        | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S)) 
                       | (0U == (7U & ((0x7ffff8U & 
                                        (vlTOPp->b[2U] 
                                         << 3U)) | 
                                       (vlTOPp->b[1U] 
                                        >> 0x1dU))))))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem 
        = (VL_ULL(0x1ffffffffffffff) & (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem 
                                        - (VL_ULL(0x7fffffffffffff) 
                                           & ((((IData)(vlTOPp->inReady)
                                                 ? 
                                                (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S 
                                                 << 1U)
                                                 : VL_ULL(0)) 
                                               | ((1U 
                                                   & ((~ (IData)(vlTOPp->inReady)) 
                                                      & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                                                   ? 
                                                  (VL_ULL(0x20000000000000) 
                                                   | (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z 
                                                      << 1U))
                                                   : VL_ULL(0))) 
                                              | (((~ (IData)(vlTOPp->inReady)) 
                                                  & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                                  ? 
                                                 ((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
                                                   << 1U) 
                                                  | (VL_ULL(0x3fffffffffffff) 
                                                     & ((VL_ULL(1) 
                                                         << (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                                        >> 2U)))
                                                  : VL_ULL(0))))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
                 & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z))));
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtemp2[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtemp2[0x80U] = 1U;
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp3, __Vtemp2, 
                   (0xfffU & (~ (VL_EXTENDS_II(12,13, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)) 
                                 | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x800U : 0U)))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (VL_ULL(0x3fffffffffffff) & (((QData)((IData)(
                                                        __Vtemp3[0x20U])) 
                                        << 0x33U) | 
                                       (((QData)((IData)(
                                                         __Vtemp3[0x1fU])) 
                                         << 0x13U) 
                                        | ((QData)((IData)(
                                                           __Vtemp3[0x1eU])) 
                                           >> 0xdU))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_div));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffe) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (IData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                            >> 0x35U))))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffd) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x34U))))) 
              << 1U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffb) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x33U))))) 
              << 2U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffff7) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x32U))))) 
              << 3U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffef) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x31U))))) 
              << 4U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffdf) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x30U))))) 
              << 5U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffbf) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2fU))))) 
              << 6U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffff7f) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2eU))))) 
              << 7U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffeff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2dU))))) 
              << 8U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffdff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2cU))))) 
              << 9U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffbff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2bU))))) 
              << 0xaU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffff7ff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2aU))))) 
              << 0xbU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffefff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x29U))))) 
              << 0xcU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffdfff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x28U))))) 
              << 0xdU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffbfff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x27U))))) 
              << 0xeU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffff7fff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x26U))))) 
              << 0xfU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffeffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x25U))))) 
              << 0x10U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffdffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x24U))))) 
              << 0x11U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffbffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x23U))))) 
              << 0x12U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffff7ffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x22U))))) 
              << 0x13U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffefffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x21U))))) 
              << 0x14U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffdfffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x20U))))) 
              << 0x15U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffbfffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1fU))))) 
              << 0x16U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffff7fffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1eU))))) 
              << 0x17U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffeffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1dU))))) 
              << 0x18U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffdffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1cU))))) 
              << 0x19U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffbffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1bU))))) 
              << 0x1aU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffff7ffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1aU))))) 
              << 0x1bU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffefffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x19U))))) 
              << 0x1cU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffdfffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x18U))))) 
              << 0x1dU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffbfffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x17U))))) 
              << 0x1eU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffff7fffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x16U))))) 
              << 0x1fU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffeffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x15U))))) 
              << 0x20U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffdffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x14U))))) 
              << 0x21U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffbffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x13U))))) 
              << 0x22U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffff7ffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x12U))))) 
              << 0x23U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffefffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x11U))))) 
              << 0x24U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffdfffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x10U))))) 
              << 0x25U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffbfffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xfU))))) 
              << 0x26U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fff7fffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xeU))))) 
              << 0x27U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffeffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xdU))))) 
              << 0x28U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffdffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xcU))))) 
              << 0x29U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffbffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xbU))))) 
              << 0x2aU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ff7ffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xaU))))) 
              << 0x2bU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fefffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 9U))))) 
              << 0x2cU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fdfffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 8U))))) 
              << 0x2dU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fbfffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 7U))))) 
              << 0x2eU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3f7fffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 6U))))) 
              << 0x2fU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3effffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 5U))))) 
              << 0x30U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3dffffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 4U))))) 
              << 0x31U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3bffffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 3U))))) 
              << 0x32U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x37ffffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 2U))))) 
              << 0x33U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x2fffffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 1U))))) 
              << 0x34U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x1fffffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut)))) 
              << 0x35U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (VL_ULL(3) | ((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                         | (QData)((IData)((1U & (IData)(
                                                         (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                          >> 0x37U)))))) 
                        << 2U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                >> 3U) 
                                               & (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                  >> 4U)))) 
           | ((0U != (7U & ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig) 
                            & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                       >> 1U))))) & 
              (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
               >> 1U)) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                               >> 3U))) 
           | ((0U != (7U & ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig) 
                            & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))) 
              & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                          | (4U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                                         & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                        | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                           & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                                        ? ((VL_ULL(1) 
                                            + ((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                | vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                               >> 2U)) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                   & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                                  & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                                  ? 
                                                 (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                  >> 1U)
                                                  : VL_ULL(0))))
                                        : (((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                             & (~ vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                                            >> 2U) 
                                           | (((6U 
                                                == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                               & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                               ? (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                                  >> 1U)
                                               : VL_ULL(0)))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (VL_ULL(0xfffffffffffff) & ((1U & (IData)(
                                                    (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                     >> 0x37U)))
                                       ? (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                          >> 1U) : vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (0x1fffU 
                                            & VL_EXTENDS_II(13,13, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)))) 
                      + (IData)((VL_ULL(0x7fffffffffffff) 
                                 & (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                    >> 0x35U)))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,13, 
                                                                        (0x1fffU 
                                                                         & VL_EXTENDS_II(13,13, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)))), 0xbU))) 
               & ((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                 >> 0x37U))) ? (IData)(
                                                       (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                        >> 3U))
                   : (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                              >> 2U)))) & (~ (((((0U 
                                                  != 
                                                  (1U 
                                                   & (IData)(vlTOPp->control))) 
                                                 & (~ 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                                 >> 0x37U)))
                                                      ? (IData)(
                                                                (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                                 >> 4U))
                                                      : (IData)(
                                                                (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                                 >> 3U))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                               >> 0x37U)))
                                                    ? (IData)(
                                                              (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                               >> 0x36U))
                                                    : (IData)(
                                                              (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                               >> 0x35U)))) 
                                               & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                              & ((((0U 
                                                    == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                   | (4U 
                                                      == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                                 >> 0x37U)))
                                                      ? (IData)(
                                                                (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                                 >> 2U))
                                                      : (IData)(
                                                                (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                                 >> 1U)))) 
                                                 | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                    & (((IData)(
                                                                (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                                 >> 0x37U)) 
                                                        & (IData)(
                                                                  (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                                   >> 2U))) 
                                                       | (0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig))))))))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 0xaU)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__infiniteExc) 
                                          << 3U) | 
                                         (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                            << 1U) 
                                           | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(1,32,32, 0x3ceU, 
                                                               VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                    | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))))))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp5[0U] = (IData)((((QData)((IData)((0xfffU 
                                              & (((((((((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                        & (~ 
                                                           (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z) 
                                                             | VL_GTS_III(1,32,32, 0x3ceU, 
                                                                          VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                             ? 0xe00U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                            ? 0xfffffc31U
                                                            : 0U))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                           ? 0x400U
                                                           : 0U))) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                          ? 0x200U
                                                          : 0U))) 
                                                    | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                        ? 0x3ceU
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                       ? 0xbffU
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                      ? 0xc00U
                                                      : 0U)) 
                                                 | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                     ? 0xe00U
                                                     : 0U))))) 
                             << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                          & ((((QData)((IData)(
                                                               ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                | (((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                                                    & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                   & (IData)(
                                                                             (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
                                                                              >> 0x33U)))))) 
                                               << 0x33U) 
                                              | (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                  | ((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                                     & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                   VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                  ? 
                                                 (VL_ULL(0x7ffffffffffff) 
                                                  & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                  : VL_ULL(0))) 
                                             | VL_NEGATE_Q((QData)((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
    __Vtemp5[1U] = (IData)(((((QData)((IData)((0xfffU 
                                               & (((((((((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                         & (~ 
                                                            (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z) 
                                                              | VL_GTS_III(1,32,32, 0x3ceU, 
                                                                           VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                              ? 0xe00U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                             ? 0xfffffc31U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                            ? 0x400U
                                                            : 0U))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                           ? 0x200U
                                                           : 0U))) 
                                                     | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                         ? 0x3ceU
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                        ? 0xbffU
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                       ? 0xc00U
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                      ? 0xe00U
                                                      : 0U))))) 
                              << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                           & ((((QData)((IData)(
                                                                ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                 | (((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                                                     & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                    & (IData)(
                                                                              (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
                                                                               >> 0x33U)))))) 
                                                << 0x33U) 
                                               | (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                   | ((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                                      & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                    VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                   ? 
                                                  (VL_ULL(0x7ffffffffffff) 
                                                   & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                   : VL_ULL(0))) 
                                              | VL_NEGATE_Q((QData)((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))) 
                            >> 0x20U));
    vlTOPp->out[0U] = __Vtemp5[0U];
    vlTOPp->out[1U] = __Vtemp5[1U];
    vlTOPp->out[2U] = vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z;
}

VL_INLINE_OPT void VdivSqrtRecF64_small_div::_sequent__TOP__2(VdivSqrtRecF64_small_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF64_small_div::_sequent__TOP__2\n"); );
    VdivSqrtRecF64_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*4127:0*/ __Vtemp8[129];
    WData/*95:0*/ __Vtemp10[3];
    // Body
    if (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z = 0U;
    }
    if (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) {
        vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z 
            = (VL_ULL(0xfffffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S);
    }
    if (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) 
         | (2U < (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)))) {
        vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z 
            = (VL_ULL(0x7fffffffffffff) & (VL_LTES_IQQ(1,57,57, VL_ULL(0), vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)
                                            ? vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem
                                            : vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem));
    }
    if (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z 
            = ((0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                           << 3U)) 
                             | (vlTOPp->a[1U] >> 0x1dU)))) 
               | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S));
    }
    if (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z 
            = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S) 
               | (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                             << 3U)) 
                               | (vlTOPp->b[1U] >> 0x1dU)))));
    }
    if (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z 
            = (1U & ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)
                      ? ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                          ? (1U & vlTOPp->a[2U]) : 
                         ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S)
                           ? (1U & vlTOPp->b[2U]) : 1U))
                      : (vlTOPp->a[2U] ^ vlTOPp->b[2U])));
    }
    if (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) {
        vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z 
            = vlTOPp->roundingMode;
    }
    if (((((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)) 
          | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)) 
         | ((~ (IData)(vlTOPp->inReady)) & VL_LTES_IQQ(1,57,57, VL_ULL(0), vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)))) {
        vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z 
            = (VL_ULL(0) != vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem);
    }
    if (((((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)) 
          | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)) 
         | ((~ (IData)(vlTOPp->inReady)) & VL_LTES_IQQ(1,57,57, VL_ULL(0), vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)))) {
        vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
            = (VL_ULL(0x7fffffffffffff) & (((((IData)(vlTOPp->inReady) 
                                              & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))
                                              ? (VL_ULL(0x60000000000000) 
                                                 | (VL_ULL(0x1ffffffffffffc) 
                                                    & (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                                         ? vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S
                                                         : 
                                                        ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S)
                                                          ? vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S
                                                          : VL_ULL(0))) 
                                                       << 2U)))
                                              : VL_ULL(0)) 
                                            | (((IData)(vlTOPp->inReady) 
                                                & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)))
                                                ? ((QData)((IData)(
                                                                   VL_LTES_IQQ(1,57,57, VL_ULL(0), vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem))) 
                                                   << 0x36U)
                                                : VL_ULL(0))) 
                                           | ((IData)(vlTOPp->inReady)
                                               ? VL_ULL(0)
                                               : (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
                                                  | (VL_ULL(0x3fffffffffffff) 
                                                     & ((VL_ULL(1) 
                                                         << (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                                        >> 2U))))));
    }
    if (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) {
        vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z 
            = (0x1fffU & VL_EXTENDS_II(13,13, (((VL_LTES_III(1,32,32, 0xe00U, 
                                                             VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div)))
                                                  ? 6U
                                                  : 
                                                 (0xfU 
                                                  & ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div) 
                                                     >> 9U))) 
                                                << 9U) 
                                               | (0x1ffU 
                                                  & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div)))));
    }
    if (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z 
            = (((((7U == (7U & ((vlTOPp->a[2U] << 3U) 
                                | (vlTOPp->a[1U] >> 0x1dU)))) 
                  & (~ (vlTOPp->a[1U] >> 0x13U))) | 
                 ((7U == (7U & ((vlTOPp->b[2U] << 3U) 
                                | (vlTOPp->b[1U] >> 0x1dU)))) 
                  & (~ (vlTOPp->b[1U] >> 0x13U)))) 
                | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div)) 
               | (((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)) 
                   & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S))) 
                  & (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                                << 3U)) 
                                  | (vlTOPp->b[1U] 
                                     >> 0x1dU))))));
    }
    if (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z 
            = vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S;
    }
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z)) 
           | ((3U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
        = ((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
            << 1U) | (QData)((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z)));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__invalidExc 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__infiniteExc 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            | (4U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
           | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__infiniteExc) 
           | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__invalidExc) 
           | ((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__infiniteExc)) 
              & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
                 & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z))));
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp8, vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0xfffU & (~ (VL_EXTENDS_II(12,13, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)) 
                                 | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x800U : 0U)))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (VL_ULL(0x3fffffffffffff) & (((QData)((IData)(
                                                        __Vtemp8[0x20U])) 
                                        << 0x33U) | 
                                       (((QData)((IData)(
                                                         __Vtemp8[0x1fU])) 
                                         << 0x13U) 
                                        | ((QData)((IData)(
                                                           __Vtemp8[0x1eU])) 
                                           >> 0xdU))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffe) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (IData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                            >> 0x35U))))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffd) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x34U))))) 
              << 1U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffb) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x33U))))) 
              << 2U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffff7) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x32U))))) 
              << 3U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffef) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x31U))))) 
              << 4U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffdf) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x30U))))) 
              << 5U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffbf) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2fU))))) 
              << 6U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffff7f) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2eU))))) 
              << 7U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffeff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2dU))))) 
              << 8U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffdff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2cU))))) 
              << 9U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffbff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2bU))))) 
              << 0xaU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffff7ff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2aU))))) 
              << 0xbU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffefff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x29U))))) 
              << 0xcU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffdfff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x28U))))) 
              << 0xdU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffbfff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x27U))))) 
              << 0xeU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffff7fff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x26U))))) 
              << 0xfU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffeffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x25U))))) 
              << 0x10U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffdffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x24U))))) 
              << 0x11U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffbffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x23U))))) 
              << 0x12U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffff7ffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x22U))))) 
              << 0x13U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffefffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x21U))))) 
              << 0x14U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffdfffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x20U))))) 
              << 0x15U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffbfffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1fU))))) 
              << 0x16U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffff7fffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1eU))))) 
              << 0x17U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffeffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1dU))))) 
              << 0x18U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffdffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1cU))))) 
              << 0x19U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffbffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1bU))))) 
              << 0x1aU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffff7ffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1aU))))) 
              << 0x1bU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffefffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x19U))))) 
              << 0x1cU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffdfffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x18U))))) 
              << 0x1dU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffbfffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x17U))))) 
              << 0x1eU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffff7fffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x16U))))) 
              << 0x1fU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffeffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x15U))))) 
              << 0x20U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffdffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x14U))))) 
              << 0x21U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffbffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x13U))))) 
              << 0x22U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffff7ffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x12U))))) 
              << 0x23U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffefffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x11U))))) 
              << 0x24U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffdfffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x10U))))) 
              << 0x25U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffbfffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xfU))))) 
              << 0x26U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fff7fffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xeU))))) 
              << 0x27U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffeffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xdU))))) 
              << 0x28U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffdffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xcU))))) 
              << 0x29U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffbffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xbU))))) 
              << 0x2aU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ff7ffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xaU))))) 
              << 0x2bU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fefffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 9U))))) 
              << 0x2cU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fdfffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 8U))))) 
              << 0x2dU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fbfffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 7U))))) 
              << 0x2eU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3f7fffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 6U))))) 
              << 0x2fU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3effffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 5U))))) 
              << 0x30U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3dffffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 4U))))) 
              << 0x31U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3bffffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 3U))))) 
              << 0x32U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x37ffffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 2U))))) 
              << 0x33U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x2fffffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 1U))))) 
              << 0x34U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x1fffffffffffff) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut)))) 
              << 0x35U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (VL_ULL(3) | ((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                         | (QData)((IData)((1U & (IData)(
                                                         (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                          >> 0x37U)))))) 
                        << 2U));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                >> 3U) 
                                               & (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                  >> 4U)))) 
           | ((0U != (7U & ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig) 
                            & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                       >> 1U))))) & 
              (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
               >> 1U)) & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                               >> 3U))) 
           | ((0U != (7U & ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig) 
                            & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))) 
              & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                          | (4U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                                         & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                        | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                           & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                                        ? ((VL_ULL(1) 
                                            + ((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                | vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                               >> 2U)) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                   & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                                  & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                                  ? 
                                                 (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                  >> 1U)
                                                  : VL_ULL(0))))
                                        : (((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                             & (~ vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                                            >> 2U) 
                                           | (((6U 
                                                == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                               & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                               ? (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                                  >> 1U)
                                               : VL_ULL(0)))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (VL_ULL(0xfffffffffffff) & ((1U & (IData)(
                                                    (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                     >> 0x37U)))
                                       ? (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                          >> 1U) : vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (0x1fffU 
                                            & VL_EXTENDS_II(13,13, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)))) 
                      + (IData)((VL_ULL(0x7fffffffffffff) 
                                 & (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                    >> 0x35U)))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 0xaU)));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp10[0U] = (IData)((((QData)((IData)((0xfffU 
                                               & (((((((((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                         & (~ 
                                                            (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z) 
                                                              | VL_GTS_III(1,32,32, 0x3ceU, 
                                                                           VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                              ? 0xe00U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                             ? 0xfffffc31U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                            ? 0x400U
                                                            : 0U))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                           ? 0x200U
                                                           : 0U))) 
                                                     | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                         ? 0x3ceU
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                        ? 0xbffU
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                       ? 0xc00U
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                      ? 0xe00U
                                                      : 0U))))) 
                              << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                           & ((((QData)((IData)(
                                                                ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                 | (((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                                                     & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                    & (IData)(
                                                                              (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
                                                                               >> 0x33U)))))) 
                                                << 0x33U) 
                                               | (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                   | ((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                                      & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                    VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                   ? 
                                                  (VL_ULL(0x7ffffffffffff) 
                                                   & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                   : VL_ULL(0))) 
                                              | VL_NEGATE_Q((QData)((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
    __Vtemp10[1U] = (IData)(((((QData)((IData)((0xfffU 
                                                & (((((((((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                          & (~ 
                                                             (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z) 
                                                               | VL_GTS_III(1,32,32, 0x3ceU, 
                                                                            VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                               ? 0xe00U
                                                               : 0U))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                              ? 0xfffffc31U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                             ? 0x400U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x200U
                                                            : 0U))) 
                                                      | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                          ? 0x3ceU
                                                          : 0U)) 
                                                     | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                         ? 0xbffU
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                        ? 0xc00U
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                       ? 0xe00U
                                                       : 0U))))) 
                               << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                            & ((((QData)((IData)(
                                                                 ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                  | (((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                                                      & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                     & (IData)(
                                                                               (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
                                                                                >> 0x33U)))))) 
                                                 << 0x33U) 
                                                | (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                    | ((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                                       & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                     VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                    ? 
                                                   (VL_ULL(0x7ffffffffffff) 
                                                    & vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                    : VL_ULL(0))) 
                                               | VL_NEGATE_Q((QData)((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))) 
                             >> 0x20U));
    vlTOPp->out[0U] = __Vtemp10[0U];
    vlTOPp->out[1U] = __Vtemp10[1U];
    vlTOPp->out[2U] = vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z;
}

VL_INLINE_OPT void VdivSqrtRecF64_small_div::_sequent__TOP__3(VdivSqrtRecF64_small_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF64_small_div::_sequent__TOP__3\n"); );
    VdivSqrtRecF64_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->nReset) {
        if ((1U & ((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                   | (IData)(vlTOPp->inValid)))) {
            vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum 
                = (0x3fU & ((((((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
                                & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_div)))
                                ? 1U : 0U) | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)
                                               ? 0x37U
                                               : 0U)) 
                             | ((1U & ((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                                       & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2))))
                                 ? ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum) 
                                    - (IData)(1U)) : 0U)) 
                            | (((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                                & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2))
                                ? 1U : 0U)));
        }
    } else {
        vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum = 0U;
    }
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle 
        = (0U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->outValid = (1U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 
        = ((3U == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
           & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
                      >> 0x36U)));
    vlTOPp->inReady = (1U >= (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
}

VL_INLINE_OPT void VdivSqrtRecF64_small_div::_combo__TOP__4(VdivSqrtRecF64_small_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF64_small_div::_combo__TOP__4\n"); );
    VdivSqrtRecF64_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                       << 2U)) | (vlTOPp->b[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->b[1U] >> 0x1dU)));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->b[2U] 
                                              << 3U)) 
                                          | (vlTOPp->b[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->b[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->b[0U])))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                       << 2U)) | (vlTOPp->b[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->b[1U] >> 0x1dU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->a[2U] 
                                              << 3U)) 
                                          | (vlTOPp->a[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->a[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->a[0U])))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div 
        = (0x3fffU & ((0xfffU & ((vlTOPp->a[2U] << 0xcU) 
                                 | (vlTOPp->a[1U] >> 0x14U))) 
                      + ((0x3800U & (VL_NEGATE_I((IData)(
                                                         (1U 
                                                          & ((0x1ffffeU 
                                                              & (vlTOPp->b[2U] 
                                                                 << 1U)) 
                                                             | (vlTOPp->b[1U] 
                                                                >> 0x1fU))))) 
                                     << 0xbU)) | (0x7ffU 
                                                  & (~ 
                                                     (0xfffU 
                                                      & ((vlTOPp->b[2U] 
                                                          << 0xcU) 
                                                         | (vlTOPp->b[1U] 
                                                            >> 0x14U))))))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                       << 2U)) | (vlTOPp->a[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->a[1U] >> 0x1dU));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                       << 2U)) | (vlTOPp->a[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->a[1U] >> 0x1dU)));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,13, 
                                                                        (0x1fffU 
                                                                         & VL_EXTENDS_II(13,13, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)))), 0xbU))) 
               & ((1U & (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                 >> 0x37U))) ? (IData)(
                                                       (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                        >> 3U))
                   : (IData)((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                              >> 2U)))) & (~ (((((0U 
                                                  != 
                                                  (1U 
                                                   & (IData)(vlTOPp->control))) 
                                                 & (~ 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                                 >> 0x37U)))
                                                      ? (IData)(
                                                                (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                                 >> 4U))
                                                      : (IData)(
                                                                (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                                 >> 3U))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                               >> 0x37U)))
                                                    ? (IData)(
                                                              (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                               >> 0x36U))
                                                    : (IData)(
                                                              (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                               >> 0x35U)))) 
                                               & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                              & ((((0U 
                                                    == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                   | (4U 
                                                      == (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                                 >> 0x37U)))
                                                      ? (IData)(
                                                                (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                                 >> 2U))
                                                      : (IData)(
                                                                (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                                 >> 1U)))) 
                                                 | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                    & (((IData)(
                                                                (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                                 >> 0x37U)) 
                                                        & (IData)(
                                                                  (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig 
                                                                   >> 2U))) 
                                                       | (0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig))))))))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering 
        = ((IData)(vlTOPp->inReady) & (IData)(vlTOPp->inValid));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem 
        = (VL_ULL(0xffffffffffffff) & (((IData)(vlTOPp->inReady)
                                         ? (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
                                            << 1U) : VL_ULL(0)) 
                                       | ((IData)(vlTOPp->inReady)
                                           ? VL_ULL(0)
                                           : (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z 
                                              << 1U))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div 
        = (((0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                        << 3U)) | (
                                                   vlTOPp->a[1U] 
                                                   >> 0x1dU)))) 
            & (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                          << 3U)) | 
                            (vlTOPp->b[1U] >> 0x1dU))))) 
           | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S) 
              & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S)));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S 
        = (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
            | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S)) 
           | (0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                         << 3U)) | 
                           (vlTOPp->a[1U] >> 0x1dU)))));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__infiniteExc) 
                                          << 3U) | 
                                         (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                            << 1U) 
                                           | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(1,32,32, 0x3ceU, 
                                                               VL_EXTENDS_II(32,14, (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                    | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))))))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem 
        = (VL_ULL(0x1ffffffffffffff) & (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem 
                                        - (VL_ULL(0x7fffffffffffff) 
                                           & ((((IData)(vlTOPp->inReady)
                                                 ? 
                                                (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S 
                                                 << 1U)
                                                 : VL_ULL(0)) 
                                               | ((1U 
                                                   & ((~ (IData)(vlTOPp->inReady)) 
                                                      & (~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                                                   ? 
                                                  (VL_ULL(0x20000000000000) 
                                                   | (vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z 
                                                      << 1U))
                                                   : VL_ULL(0))) 
                                              | (((~ (IData)(vlTOPp->inReady)) 
                                                  & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                                  ? 
                                                 ((vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
                                                   << 1U) 
                                                  | (VL_ULL(0x3fffffffffffff) 
                                                     & ((VL_ULL(1) 
                                                         << (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                                        >> 2U)))
                                                  : VL_ULL(0))))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S 
        = (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
            | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S)) 
           | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_div 
        = (1U & ((~ (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S)) 
                 & (~ (((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S) 
                        | (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S)) 
                       | (0U == (7U & ((0x7ffff8U & 
                                        (vlTOPp->b[2U] 
                                         << 3U)) | 
                                       (vlTOPp->b[1U] 
                                        >> 0x1dU))))))));
    vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase 
        = ((IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_div));
}

void VdivSqrtRecF64_small_div::_eval(VdivSqrtRecF64_small_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF64_small_div::_eval\n"); );
    VdivSqrtRecF64_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VdivSqrtRecF64_small_div::_eval_initial(VdivSqrtRecF64_small_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF64_small_div::_eval_initial\n"); );
    VdivSqrtRecF64_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__nReset = vlTOPp->nReset;
}

void VdivSqrtRecF64_small_div::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF64_small_div::final\n"); );
    // Variables
    VdivSqrtRecF64_small_div__Syms* __restrict vlSymsp = this->__VlSymsp;
    VdivSqrtRecF64_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VdivSqrtRecF64_small_div::_eval_settle(VdivSqrtRecF64_small_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF64_small_div::_eval_settle\n"); );
    VdivSqrtRecF64_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VdivSqrtRecF64_small_div::_change_request(VdivSqrtRecF64_small_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF64_small_div::_change_request\n"); );
    VdivSqrtRecF64_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VdivSqrtRecF64_small_div::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF64_small_div::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((nReset & 0xfeU))) {
        Verilated::overWidthError("nReset");}
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((inValid & 0xfeU))) {
        Verilated::overWidthError("inValid");}
    if (VL_UNLIKELY((a[2U] & 0xfffffffeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b[2U] & 0xfffffffeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif // VL_DEBUG

void VdivSqrtRecF64_small_div::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF64_small_div::_ctor_var_reset\n"); );
    // Body
    nReset = VL_RAND_RESET_I(1);
    clock = VL_RAND_RESET_I(1);
    control = VL_RAND_RESET_I(1);
    inReady = VL_RAND_RESET_I(1);
    inValid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, a);
    VL_RAND_RESET_W(65, b);
    roundingMode = VL_RAND_RESET_I(3);
    outValid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, out);
    exceptionFlags = VL_RAND_RESET_I(5);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__invalidExc = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__infiniteExc = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__out_sig = VL_RAND_RESET_Q(56);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S = VL_RAND_RESET_Q(54);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S = VL_RAND_RESET_Q(54);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_div = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div = VL_RAND_RESET_I(14);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum = VL_RAND_RESET_I(6);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z = VL_RAND_RESET_I(13);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z = VL_RAND_RESET_Q(52);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z = VL_RAND_RESET_I(3);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z = VL_RAND_RESET_Q(55);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z = VL_RAND_RESET_Q(55);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem = VL_RAND_RESET_Q(56);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem = VL_RAND_RESET_Q(57);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut = VL_RAND_RESET_Q(52);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask = VL_RAND_RESET_Q(56);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main = VL_RAND_RESET_Q(54);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_Q(56);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_Q(55);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(14);
    VL_RAND_RESET_W(4097, divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c);
    divSqrtRecF64_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut = VL_RAND_RESET_Q(54);
}
