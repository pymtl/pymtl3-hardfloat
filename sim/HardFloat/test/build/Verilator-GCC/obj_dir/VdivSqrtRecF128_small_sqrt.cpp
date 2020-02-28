// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VdivSqrtRecF128_small_sqrt.h for the primary calling header

#include "VdivSqrtRecF128_small_sqrt.h"
#include "VdivSqrtRecF128_small_sqrt__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VdivSqrtRecF128_small_sqrt) {
    VdivSqrtRecF128_small_sqrt__Syms* __restrict vlSymsp = __VlSymsp = new VdivSqrtRecF128_small_sqrt__Syms(this, name());
    VdivSqrtRecF128_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VdivSqrtRecF128_small_sqrt::__Vconfigure(VdivSqrtRecF128_small_sqrt__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VdivSqrtRecF128_small_sqrt::~VdivSqrtRecF128_small_sqrt() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VdivSqrtRecF128_small_sqrt::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VdivSqrtRecF128_small_sqrt::eval\n"); );
    VdivSqrtRecF128_small_sqrt__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VdivSqrtRecF128_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/divSqrtRecFN_small_spec.v", 283, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VdivSqrtRecF128_small_sqrt::_eval_initial_loop(VdivSqrtRecF128_small_sqrt__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/divSqrtRecFN_small_spec.v", 283, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VdivSqrtRecF128_small_sqrt::_settle__TOP__1(VdivSqrtRecF128_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_sqrt::_settle__TOP__1\n"); );
    VdivSqrtRecF128_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp7[4];
    WData/*127:0*/ __Vtemp8[4];
    WData/*127:0*/ __Vtemp22[4];
    WData/*127:0*/ __Vtemp23[4];
    WData/*127:0*/ __Vtemp28[4];
    WData/*127:0*/ __Vtemp39[4];
    WData/*127:0*/ __Vtemp40[4];
    WData/*127:0*/ __Vtemp41[4];
    WData/*127:0*/ __Vtemp46[4];
    WData/*127:0*/ __Vtemp49[4];
    WData/*127:0*/ __Vtemp50[4];
    WData/*127:0*/ __Vtemp53[4];
    WData/*127:0*/ __Vtemp54[4];
    WData/*127:0*/ __Vtemp60[4];
    WData/*127:0*/ __Vtemp61[4];
    WData/*127:0*/ __Vtemp62[4];
    WData/*65567:0*/ __Vtemp66[2049];
    WData/*65567:0*/ __Vtemp67[2049];
    WData/*127:0*/ __Vtemp71[4];
    WData/*127:0*/ __Vtemp77[4];
    WData/*127:0*/ __Vtemp82[4];
    WData/*127:0*/ __Vtemp92[4];
    WData/*127:0*/ __Vtemp93[4];
    WData/*127:0*/ __Vtemp94[4];
    WData/*127:0*/ __Vtemp95[4];
    WData/*127:0*/ __Vtemp96[4];
    WData/*127:0*/ __Vtemp103[4];
    WData/*127:0*/ __Vtemp104[4];
    WData/*127:0*/ __Vtemp105[4];
    WData/*127:0*/ __Vtemp117[4];
    WData/*127:0*/ __Vtemp124[4];
    WData/*127:0*/ __Vtemp137[4];
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x7ffU)) {
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x800U] = 1U;
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                      << 2U)) | (vlTOPp->a[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->a[3U] >> 0x1dU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[0U] 
        = vlTOPp->a[0U];
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[1U] 
        = vlTOPp->a[1U];
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[2U] 
        = vlTOPp->a[2U];
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->a[4U] 
                                             << 3U)) 
                                         | (vlTOPp->a[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->a[3U]));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                      << 2U)) | (vlTOPp->a[3U] 
                                                 >> 0x1eU)))) 
           & (vlTOPp->a[3U] >> 0x1dU));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle 
        = (0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->outValid = (1U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 
        = ((3U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
           & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[3U] 
              >> 0x12U));
    vlTOPp->inReady = (1U >= (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z)) 
           | ((3U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z))));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
        = ((0xfffffffeU & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[0U] 
                           << 1U)) | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[1U] 
        = ((1U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[0U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[1U] 
                                               << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[2U] 
        = ((1U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[1U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[2U] 
                                               << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
        = ((1U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[2U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[3U] 
                                               << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt 
        = (((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)) 
            & (0U != (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                         << 3U)) | 
                            (vlTOPp->a[3U] >> 0x1dU))))) 
           & vlTOPp->a[4U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt 
        = (1U & ((~ (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
                      | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S)) 
                     | (0U == (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                                  << 3U)) 
                                     | (vlTOPp->a[3U] 
                                        >> 0x1dU)))))) 
                 & (~ vlTOPp->a[4U])));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering 
        = ((IData)(vlTOPp->inReady) & (IData)(vlTOPp->inValid));
    VL_EXTEND_WW(116,114, __Vtemp7, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S);
    VL_SHIFTL_WWI(116,116,32, __Vtemp8, __Vtemp7, 1U);
    VL_EXTEND_WW(116,115, __Vtemp22, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z);
    VL_SHIFTL_WWI(116,116,32, __Vtemp23, __Vtemp22, 1U);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem[0U] 
        = (((((IData)(vlTOPp->inReady) & (~ (0xffffU 
                                             & ((vlTOPp->a[4U] 
                                                 << 0x10U) 
                                                | (vlTOPp->a[3U] 
                                                   >> 0x10U)))))
              ? __Vtemp8[0U] : 0U) | ((0xffffU & ((IData)(vlTOPp->inReady) 
                                                  & ((vlTOPp->a[4U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->a[3U] 
                                                        >> 0x10U))))
                                       ? (0xfffffff8U 
                                          & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[0U] 
                                             << 3U))
                                       : 0U)) | ((IData)(vlTOPp->inReady)
                                                  ? 0U
                                                  : 
                                                 __Vtemp23[0U]));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem[1U] 
        = (((((IData)(vlTOPp->inReady) & (~ (0xffffU 
                                             & ((vlTOPp->a[4U] 
                                                 << 0x10U) 
                                                | (vlTOPp->a[3U] 
                                                   >> 0x10U)))))
              ? __Vtemp8[1U] : 0U) | ((0xffffU & ((IData)(vlTOPp->inReady) 
                                                  & ((vlTOPp->a[4U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->a[3U] 
                                                        >> 0x10U))))
                                       ? ((7U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[0U] 
                                                 >> 0x1dU)) 
                                          | (0xfffffff8U 
                                             & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[1U] 
                                                << 3U)))
                                       : 0U)) | ((IData)(vlTOPp->inReady)
                                                  ? 0U
                                                  : 
                                                 __Vtemp23[1U]));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem[2U] 
        = (((((IData)(vlTOPp->inReady) & (~ (0xffffU 
                                             & ((vlTOPp->a[4U] 
                                                 << 0x10U) 
                                                | (vlTOPp->a[3U] 
                                                   >> 0x10U)))))
              ? __Vtemp8[2U] : 0U) | ((0xffffU & ((IData)(vlTOPp->inReady) 
                                                  & ((vlTOPp->a[4U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->a[3U] 
                                                        >> 0x10U))))
                                       ? ((7U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[1U] 
                                                 >> 0x1dU)) 
                                          | (0xfffffff8U 
                                             & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[2U] 
                                                << 3U)))
                                       : 0U)) | ((IData)(vlTOPp->inReady)
                                                  ? 0U
                                                  : 
                                                 __Vtemp23[2U]));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem[3U] 
        = (0xfffffU & (((((IData)(vlTOPp->inReady) 
                          & (~ (0xffffU & ((vlTOPp->a[4U] 
                                            << 0x10U) 
                                           | (vlTOPp->a[3U] 
                                              >> 0x10U)))))
                          ? __Vtemp8[3U] : 0U) | ((0xffffU 
                                                   & ((IData)(vlTOPp->inReady) 
                                                      & ((vlTOPp->a[4U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->a[3U] 
                                                            >> 0x10U))))
                                                   ? 
                                                  ((0xc0000U 
                                                    & (((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[3U] 
                                                         >> 0xfU) 
                                                        - (IData)(1U)) 
                                                       << 0x12U)) 
                                                   | ((7U 
                                                       & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[2U] 
                                                          >> 0x1dU)) 
                                                      | (0x3fff8U 
                                                         & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[3U] 
                                                            << 3U))))
                                                   : 0U)) 
                       | ((IData)(vlTOPp->inReady) ? 0U
                           : __Vtemp23[3U])));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            | (4U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
           | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc) 
           | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc) 
           | ((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc)) 
              & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
           | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt));
    VL_EXTEND_WW(117,116, __Vtemp28, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem);
    __Vtemp39[0U] = vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[0U];
    __Vtemp39[1U] = vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[1U];
    __Vtemp39[2U] = vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[2U];
    __Vtemp39[3U] = (0x10000U | vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[3U]);
    VL_EXTEND_WW(115,113, __Vtemp40, __Vtemp39);
    VL_SHIFTL_WWI(115,115,32, __Vtemp41, __Vtemp40, 1U);
    VL_SHIFTL_WWI(115,115,32, __Vtemp46, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z, 1U);
    __Vtemp49[0U] = 1U;
    __Vtemp49[1U] = 0U;
    __Vtemp49[2U] = 0U;
    __Vtemp49[3U] = 0U;
    VL_SHIFTL_WWI(116,116,7, __Vtemp50, __Vtemp49, (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    __Vtemp53[0U] = ((__Vtemp50[1U] << 0x1eU) | (__Vtemp50[0U] 
                                                 >> 2U));
    __Vtemp53[1U] = ((__Vtemp50[2U] << 0x1eU) | (__Vtemp50[1U] 
                                                 >> 2U));
    __Vtemp53[2U] = ((0xc0000000U & (__Vtemp50[3U] 
                                     << 0x1eU)) | (
                                                   __Vtemp50[2U] 
                                                   >> 2U));
    __Vtemp53[3U] = (0x3ffffU & (__Vtemp50[3U] >> 2U));
    VL_EXTEND_WW(115,114, __Vtemp54, __Vtemp53);
    __Vtemp60[0U] = (((1U & ((~ (IData)(vlTOPp->inReady)) 
                             & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                       ? __Vtemp41[0U] : 0U) | (((~ (IData)(vlTOPp->inReady)) 
                                                 & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                                 ? 
                                                (__Vtemp46[0U] 
                                                 | __Vtemp54[0U])
                                                 : 0U));
    __Vtemp60[1U] = (((1U & ((~ (IData)(vlTOPp->inReady)) 
                             & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                       ? __Vtemp41[1U] : 0U) | (((~ (IData)(vlTOPp->inReady)) 
                                                 & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                                 ? 
                                                (__Vtemp46[1U] 
                                                 | __Vtemp54[1U])
                                                 : 0U));
    __Vtemp60[2U] = (((1U & ((~ (IData)(vlTOPp->inReady)) 
                             & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                       ? __Vtemp41[2U] : 0U) | (((~ (IData)(vlTOPp->inReady)) 
                                                 & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                                 ? 
                                                (__Vtemp46[2U] 
                                                 | __Vtemp54[2U])
                                                 : 0U));
    __Vtemp60[3U] = (0x7ffffU & ((((((IData)(vlTOPp->inReady) 
                                     & (~ (0xffffU 
                                           & ((vlTOPp->a[4U] 
                                               << 0x10U) 
                                              | (vlTOPp->a[3U] 
                                                 >> 0x10U)))))
                                     ? 0x20000U : 0U) 
                                   | ((0xffffU & ((IData)(vlTOPp->inReady) 
                                                  & ((vlTOPp->a[4U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->a[3U] 
                                                        >> 0x10U))))
                                       ? 0x50000U : 0U)) 
                                  | ((1U & ((~ (IData)(vlTOPp->inReady)) 
                                            & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                                      ? __Vtemp41[3U]
                                      : 0U)) | (((~ (IData)(vlTOPp->inReady)) 
                                                 & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                                 ? 
                                                (__Vtemp46[3U] 
                                                 | __Vtemp54[3U])
                                                 : 0U)));
    VL_EXTEND_WW(117,115, __Vtemp61, __Vtemp60);
    VL_SUB_W(4, __Vtemp62, __Vtemp28, __Vtemp61);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[0U] 
        = __Vtemp62[0U];
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[1U] 
        = __Vtemp62[1U];
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[2U] 
        = __Vtemp62[2U];
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[3U] 
        = (0x1fffffU & __Vtemp62[3U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
                 & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z))));
    __Vilp = 0U;
    while ((__Vilp <= 0x7ffU)) {
        __Vtemp66[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtemp66[0x800U] = 1U;
    VL_SHIFTRS_WWI(65537,65537,16, __Vtemp67, __Vtemp66, 
                   (0xffffU & (~ (VL_EXTENDS_II(16,17, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z) 
                                  | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                      ? 0x8000U : 0U)))));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
        = ((__Vtemp67[0x1fdU] << 0xfU) | (__Vtemp67[0x1fcU] 
                                          >> 0x11U));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
        = ((__Vtemp67[0x1feU] << 0xfU) | (__Vtemp67[0x1fdU] 
                                          >> 0x11U));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
        = ((__Vtemp67[0x1ffU] << 0xfU) | (__Vtemp67[0x1feU] 
                                          >> 0x11U));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
        = (0x3ffffU & ((__Vtemp67[0x200U] << 0xfU) 
                       | (__Vtemp67[0x1ffU] >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffeU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (1U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffdU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (2U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xfU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffbU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (4U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffff7U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (8U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffefU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffdfU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffbfU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffff7fU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffeffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x100U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        >> 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffdffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x200U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffbffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x400U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffff7ffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x800U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffefffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x1000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffdfffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x2000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffbfffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x4000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffff7fffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x8000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffeffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                          << 0xfU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffdffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                          << 0x11U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffbffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfff7ffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffefffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x100000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffdfffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x200000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffbfffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x400000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xff7fffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x800000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfeffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x1000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            >> 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfdffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x2000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfbffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x4000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xf7ffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x8000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xefffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xdfffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xbfffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0x7fffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffeU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (1U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffdU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (2U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xfU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffbU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (4U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffff7U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (8U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffefU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffdfU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffbfU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffff7fU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffeffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x100U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        >> 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffdffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x200U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffbffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x400U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffff7ffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x800U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffefffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x1000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffdfffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x2000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffbfffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x4000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffff7fffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x8000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffeffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          << 0xfU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffdffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          << 0x11U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffbffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfff7ffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffefffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x100000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffdfffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x200000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffbfffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x400000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xff7fffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x800000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfeffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x1000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            >> 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfdffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x2000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfbffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x4000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xf7ffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x8000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xefffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xdfffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xbfffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0x7fffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffeU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (1U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffdU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (2U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xfU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffbU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (4U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffff7U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (8U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffefU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffdfU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffbfU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffff7fU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffeffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x100U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        >> 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffdffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x200U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffbffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x400U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffff7ffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x800U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffefffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x1000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffdfffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x2000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffbfffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x4000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffff7fffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x8000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffeffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          << 0xfU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffdffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          << 0x11U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffbffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfff7ffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffefffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x100000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffdfffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x200000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffbfffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x400000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xff7fffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x800000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfeffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x1000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            >> 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfdffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x2000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfbffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x4000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xf7ffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x8000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xefffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xdfffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xbfffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0x7fffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffeU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (1U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffdU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (2U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xfU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffbU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (4U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fff7U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (8U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffefU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x10U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffdfU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x20U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffbfU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x40U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ff7fU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x80U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3feffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x100U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        >> 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fdffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x200U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fbffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x400U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3f7ffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x800U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3efffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x1000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3dfffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x2000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3bfffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x4000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x37fffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x8000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x2ffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x10000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          << 0xfU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x1ffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x20000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          << 0x11U)));
    VL_EXTEND_WI(114,1, __Vtemp71, (1U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                                          >> 0x13U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
        = (3U | (0xfffffffcU & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
                                 | __Vtemp71[0U]) << 2U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U] 
        = ((3U & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
                   | __Vtemp71[0U]) >> 0x1eU)) | (0xfffffffcU 
                                                  & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
                                                      | __Vtemp71[1U]) 
                                                     << 2U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U] 
        = ((3U & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
                   | __Vtemp71[1U]) >> 0x1eU)) | (0xfffffffcU 
                                                  & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
                                                      | __Vtemp71[2U]) 
                                                     << 2U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U] 
        = ((3U & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
                   | __Vtemp71[2U]) >> 0x1eU)) | (0xfffffffcU 
                                                  & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
                                                      | __Vtemp71[3U]) 
                                                     << 2U)));
    VL_SHIFTR_WWI(116,116,32, __Vtemp77, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != ((((((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                        << 0x1dU) | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                     >> 3U)) & ((__Vtemp77[1U] 
                                                 << 0x1dU) 
                                                | (__Vtemp77[0U] 
                                                   >> 3U))) 
                     | (((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                          << 0x1dU) | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                                       >> 3U)) & ((
                                                   __Vtemp77[2U] 
                                                   << 0x1dU) 
                                                  | (__Vtemp77[1U] 
                                                     >> 3U)))) 
                    | (((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                         << 0x1dU) | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                                      >> 3U)) & ((0xe0000000U 
                                                  & (__Vtemp77[3U] 
                                                     << 0x1dU)) 
                                                 | (__Vtemp77[2U] 
                                                    >> 3U)))) 
                   | (0x1ffffU & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                                   >> 3U) & (__Vtemp77[3U] 
                                             >> 3U))))) 
           | ((0U != (7U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                            & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U] 
                                << 0x1fU) | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                             >> 1U))))) 
              & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    VL_SHIFTR_WWI(116,116,32, __Vtemp82, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U] 
        = ((~ __Vtemp82[0U]) & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
        = ((~ __Vtemp82[1U]) & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
        = ((~ __Vtemp82[2U]) & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U] 
        = ((~ __Vtemp82[3U]) & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != ((((((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                        << 0x1dU) | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                     >> 3U)) & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U] 
                                                   >> 3U))) 
                     | (((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                          << 0x1dU) | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                                       >> 3U)) & ((
                                                   vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
                                                     >> 3U)))) 
                    | (((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                         << 0x1dU) | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                                      >> 3U)) & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U] 
                                                  << 0x1dU) 
                                                 | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
                                                    >> 3U)))) 
                   | (0x1ffffU & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                                   & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U]) 
                                  >> 3U)))) | ((0U 
                                                != 
                                                (7U 
                                                 & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                                    & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U]))) 
                                               & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    __Vtemp92[0U] = 1U;
    __Vtemp92[1U] = 0U;
    __Vtemp92[2U] = 0U;
    __Vtemp92[3U] = 0U;
    __Vtemp93[0U] = (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                     | vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]);
    __Vtemp93[1U] = (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                     | vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]);
    __Vtemp93[2U] = (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                     | vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]);
    __Vtemp93[3U] = (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                     | vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]);
    VL_SHIFTR_WWI(116,116,32, __Vtemp94, __Vtemp93, 2U);
    VL_ADD_W(4, __Vtemp95, __Vtemp92, __Vtemp94);
    VL_SHIFTR_WWI(116,116,32, __Vtemp96, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    __Vtemp103[0U] = (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                      & (~ vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]));
    __Vtemp103[1U] = (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                      & (~ vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]));
    __Vtemp103[2U] = (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                      & (~ vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]));
    __Vtemp103[3U] = (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                      & (~ vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]));
    VL_SHIFTR_WWI(116,116,32, __Vtemp104, __Vtemp103, 2U);
    VL_SHIFTR_WWI(116,116,32, __Vtemp105, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask, 1U);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[0U] 
        = (((((0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              | (4U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
             & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp95[0U] & (~ ((((0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                     & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? __Vtemp96[0U]
                                    : 0U))) : (__Vtemp104[0U] 
                                               | (((6U 
                                                    == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                   & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                   ? 
                                                  __Vtemp105[0U]
                                                   : 0U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[1U] 
        = (((((0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              | (4U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
             & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp95[1U] & (~ ((((0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                     & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? __Vtemp96[1U]
                                    : 0U))) : (__Vtemp104[1U] 
                                               | (((6U 
                                                    == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                   & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                   ? 
                                                  __Vtemp105[1U]
                                                   : 0U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[2U] 
        = (((((0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              | (4U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
             & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp95[2U] & (~ ((((0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                     & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? __Vtemp96[2U]
                                    : 0U))) : (__Vtemp104[2U] 
                                               | (((6U 
                                                    == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                   & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                   ? 
                                                  __Vtemp105[2U]
                                                   : 0U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
        = (0x7ffffU & (((((0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                          | (4U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                         & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                        | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                           & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                        ? (__Vtemp95[3U] & (~ ((((0U 
                                                  == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                 & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                                & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                                ? __Vtemp96[3U]
                                                : 0U)))
                        : (__Vtemp104[3U] | (((6U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                              & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                              ? __Vtemp105[3U]
                                              : 0U))));
    VL_SHIFTR_WWI(115,115,32, __Vtemp117, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig, 1U);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[0U] 
        = ((0x80000U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U])
            ? __Vtemp117[0U] : vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[0U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[1U] 
        = ((0x80000U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U])
            ? __Vtemp117[1U] : vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[1U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[2U] 
        = ((0x80000U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U])
            ? __Vtemp117[2U] : vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[2U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U] 
        = (0xffffU & ((0x80000U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U])
                       ? __Vtemp117[3U] : vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U]));
    VL_SHIFTR_WWI(115,115,32, __Vtemp124, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig, 0x71U);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x3ffffU & (VL_EXTENDS_II(18,17, (0x1ffffU 
                                             & VL_EXTENDS_II(17,17, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))) 
                       + __Vtemp124[0U]));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x3f92U, VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           & ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x3f92U, VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)) 
           | ((((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,17, 
                                                                        (0x1ffffU 
                                                                         & VL_EXTENDS_II(17,17, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))), 0xfU))) 
               & ((0x80000U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U])
                   ? (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                      >> 3U) : (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x80000U 
                                                       & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U])
                                                       ? 
                                                      (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                                       >> 4U)
                                                       : 
                                                      (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                                       >> 3U)))) 
                                                 & ((0x80000U 
                                                     & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U])
                                                     ? 
                                                    (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
                                                     >> 0x12U)
                                                     : 
                                                    (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
                                                     >> 0x11U))) 
                                                & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                                                   & ((0x80000U 
                                                       & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U])
                                                       ? 
                                                      (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                                       >> 2U)
                                                       : 
                                                      (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & (((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                                                          >> 0x13U) 
                                                         & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U])))))))));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp), 0xeU)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc) 
                                          << 3U) | 
                                         (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                            << 1U) 
                                           | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(1,32,32, 0x3f92U, 
                                                               VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)) 
                                                    | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))))))));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp137[3U] = ((0xffff0000U & (((((((((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
                                              & (~ 
                                                 (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z) 
                                                   | VL_GTS_III(1,32,32, 0x3f92U, 
                                                                VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))
                                                   ? 0xe000U
                                                   : 0U))) 
                                             & (~ ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                    ? 0xffffc06dU
                                                    : 0U))) 
                                            & (~ ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                   ? 0x4000U
                                                   : 0U))) 
                                           & (~ ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                  ? 0x2000U
                                                  : 0U))) 
                                          | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                              ? 0x3f92U
                                              : 0U)) 
                                         | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                             ? 0xbfffU
                                             : 0U)) 
                                        | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                            ? 0xc000U
                                            : 0U)) 
                                       | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                           ? 0xe000U
                                           : 0U)) << 0x10U)) 
                      | (0xffffU & (((0xffff8000U & 
                                      (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                        << 0xfU) | 
                                       (0xffff8000U 
                                        & ((((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                             & VL_LTES_III(1,32,32, 0x3f92U, 
                                                           VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                            << 0xfU) 
                                           & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U])))) 
                                     | (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                         | ((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                                          VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                         ? (0x7fffU 
                                            & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U])
                                         : 0U)) | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))))));
    vlTOPp->out[0U] = ((((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[0U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[1U] = ((((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[1U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[2U] = ((((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[2U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[3U] = __Vtemp137[3U];
    vlTOPp->out[4U] = vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z;
}

VL_INLINE_OPT void VdivSqrtRecF128_small_sqrt::_sequent__TOP__2(VdivSqrtRecF128_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_sqrt::_sequent__TOP__2\n"); );
    VdivSqrtRecF128_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp140[4];
    WData/*127:0*/ __Vtemp141[4];
    WData/*127:0*/ __Vtemp146[4];
    WData/*127:0*/ __Vtemp148[4];
    WData/*127:0*/ __Vtemp149[4];
    WData/*127:0*/ __Vtemp167[4];
    WData/*127:0*/ __Vtemp168[4];
    WData/*127:0*/ __Vtemp169[4];
    WData/*127:0*/ __Vtemp177[4];
    WData/*127:0*/ __Vtemp178[4];
    WData/*127:0*/ __Vtemp181[4];
    WData/*127:0*/ __Vtemp182[4];
    WData/*65567:0*/ __Vtemp189[2049];
    WData/*127:0*/ __Vtemp193[4];
    WData/*127:0*/ __Vtemp199[4];
    WData/*127:0*/ __Vtemp204[4];
    WData/*127:0*/ __Vtemp214[4];
    WData/*127:0*/ __Vtemp215[4];
    WData/*127:0*/ __Vtemp216[4];
    WData/*127:0*/ __Vtemp217[4];
    WData/*127:0*/ __Vtemp218[4];
    WData/*127:0*/ __Vtemp225[4];
    WData/*127:0*/ __Vtemp226[4];
    WData/*127:0*/ __Vtemp227[4];
    WData/*127:0*/ __Vtemp239[4];
    WData/*127:0*/ __Vtemp246[4];
    WData/*127:0*/ __Vtemp259[4];
    // Body
    if (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z = 1U;
    }
    if (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) 
         | (2U < (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)))) {
        __Vtemp140[0U] = 0U;
        __Vtemp140[1U] = 0U;
        __Vtemp140[2U] = 0U;
        __Vtemp140[3U] = 0U;
        VL_EXTEND_WW(117,116, __Vtemp141, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem);
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z[0U] 
            = (VL_LTES_IWW(1,117,117, __Vtemp140, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)
                ? vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[0U]
                : __Vtemp141[0U]);
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z[1U] 
            = (VL_LTES_IWW(1,117,117, __Vtemp140, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)
                ? vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[1U]
                : __Vtemp141[1U]);
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z[2U] 
            = (VL_LTES_IWW(1,117,117, __Vtemp140, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)
                ? vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[2U]
                : __Vtemp141[2U]);
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z[3U] 
            = (0x7ffffU & (VL_LTES_IWW(1,117,117, __Vtemp140, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)
                            ? vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[3U]
                            : __Vtemp141[3U]));
    }
    if (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z 
            = (0U == (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                         << 3U)) | 
                            (vlTOPp->a[3U] >> 0x1dU))));
    }
    if (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z 
            = vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S;
    }
    if (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z 
            = (1U & ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)
                      ? ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                          ? (1U & vlTOPp->a[4U]) : 1U)
                      : vlTOPp->a[4U]));
    }
    if (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) {
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z 
            = vlTOPp->roundingMode;
    }
    __Vtemp146[0U] = 0U;
    __Vtemp146[1U] = 0U;
    __Vtemp146[2U] = 0U;
    __Vtemp146[3U] = 0U;
    if (((((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)) 
          | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)) 
         | ((~ (IData)(vlTOPp->inReady)) & VL_LTES_IWW(1,117,117, __Vtemp146, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)))) {
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z 
            = (0U != (((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[0U] 
                        | vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[1U]) 
                       | vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[2U]) 
                      | vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[3U]));
    }
    __Vtemp148[0U] = 0U;
    __Vtemp148[1U] = 0U;
    __Vtemp148[2U] = 0U;
    __Vtemp148[3U] = 0U;
    if (((((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)) 
          | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)) 
         | ((~ (IData)(vlTOPp->inReady)) & VL_LTES_IWW(1,117,117, __Vtemp148, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)))) {
        __Vtemp167[0U] = 0U;
        __Vtemp167[1U] = 0U;
        __Vtemp167[2U] = 0U;
        __Vtemp167[3U] = 0U;
        VL_EXTEND_WI(115,1, __Vtemp168, VL_LTES_IWW(1,117,117, __Vtemp167, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem));
        VL_SHIFTL_WWI(115,115,32, __Vtemp169, __Vtemp168, 0x70U);
        __Vtemp177[0U] = 1U;
        __Vtemp177[1U] = 0U;
        __Vtemp177[2U] = 0U;
        __Vtemp177[3U] = 0U;
        VL_SHIFTL_WWI(116,116,7, __Vtemp178, __Vtemp177, (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
        __Vtemp181[0U] = ((__Vtemp178[1U] << 0x1eU) 
                          | (__Vtemp178[0U] >> 2U));
        __Vtemp181[1U] = ((__Vtemp178[2U] << 0x1eU) 
                          | (__Vtemp178[1U] >> 2U));
        __Vtemp181[2U] = ((0xc0000000U & (__Vtemp178[3U] 
                                          << 0x1eU)) 
                          | (__Vtemp178[2U] >> 2U));
        __Vtemp181[3U] = (0x3ffffU & (__Vtemp178[3U] 
                                      >> 2U));
        VL_EXTEND_WW(115,114, __Vtemp182, __Vtemp181);
        __Vtemp149[1U] = (((((IData)(vlTOPp->inReady) 
                             & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))
                             ? ((3U & (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                         ? vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[0U]
                                         : 0U) >> 0x1eU)) 
                                | (0xfffffffcU & (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                                    ? 
                                                   vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[1U]
                                                    : 0U) 
                                                  << 2U)))
                             : 0U) | ((0xffffU & (((IData)(vlTOPp->inReady) 
                                                   & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))) 
                                                  & ((vlTOPp->a[4U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->a[3U] 
                                                        >> 0x10U))))
                                       ? __Vtemp169[1U]
                                       : 0U)) | ((IData)(vlTOPp->inReady)
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[1U] 
                                                  | __Vtemp182[1U])));
        __Vtemp149[2U] = (((((IData)(vlTOPp->inReady) 
                             & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))
                             ? ((3U & (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                         ? vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[1U]
                                         : 0U) >> 0x1eU)) 
                                | (0xfffffffcU & (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                                    ? 
                                                   vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[2U]
                                                    : 0U) 
                                                  << 2U)))
                             : 0U) | ((0xffffU & (((IData)(vlTOPp->inReady) 
                                                   & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))) 
                                                  & ((vlTOPp->a[4U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->a[3U] 
                                                        >> 0x10U))))
                                       ? __Vtemp169[2U]
                                       : 0U)) | ((IData)(vlTOPp->inReady)
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[2U] 
                                                  | __Vtemp182[2U])));
        __Vtemp149[3U] = (0x7ffffU & ((((((IData)(vlTOPp->inReady) 
                                          & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))
                                          ? (0x60000U 
                                             | ((3U 
                                                 & (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                                      ? 
                                                     vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[2U]
                                                      : 0U) 
                                                    >> 0x1eU)) 
                                                | (0xfffffffcU 
                                                   & (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                                        ? 
                                                       (0x7fffU 
                                                        & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[3U])
                                                        : 0U) 
                                                      << 2U))))
                                          : 0U) | (
                                                   ((IData)(vlTOPp->inReady) 
                                                    & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)))
                                                    ? 0x20000U
                                                    : 0U)) 
                                       | ((0xffffU 
                                           & (((IData)(vlTOPp->inReady) 
                                               & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))) 
                                              & ((vlTOPp->a[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->a[3U] 
                                                    >> 0x10U))))
                                           ? __Vtemp169[3U]
                                           : 0U)) | 
                                      ((IData)(vlTOPp->inReady)
                                        ? 0U : (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[3U] 
                                                | __Vtemp182[3U]))));
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[0U] 
            = (((((IData)(vlTOPp->inReady) & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))
                  ? (0xfffffffcU & (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                      ? vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[0U]
                                      : 0U) << 2U))
                  : 0U) | ((0xffffU & (((IData)(vlTOPp->inReady) 
                                        & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))) 
                                       & ((vlTOPp->a[4U] 
                                           << 0x10U) 
                                          | (vlTOPp->a[3U] 
                                             >> 0x10U))))
                            ? __Vtemp169[0U] : 0U)) 
               | ((IData)(vlTOPp->inReady) ? 0U : (
                                                   vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[0U] 
                                                   | __Vtemp182[0U])));
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[1U] 
            = __Vtemp149[1U];
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[2U] 
            = __Vtemp149[2U];
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[3U] 
            = __Vtemp149[3U];
    }
    if (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) {
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z 
            = (0x1ffffU & ((IData)(0x4000U) + VL_SHIFTRS_III(17,32,32, 
                                                             VL_EXTENDS_II(32,17, 
                                                                           (0xffffU 
                                                                            & ((vlTOPp->a[4U] 
                                                                                << 0x10U) 
                                                                               | (vlTOPp->a[3U] 
                                                                                >> 0x10U)))), 1U)));
    }
    if (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z 
            = (((7U == (7U & ((vlTOPp->a[4U] << 3U) 
                              | (vlTOPp->a[3U] >> 0x1dU)))) 
                & (~ (vlTOPp->a[3U] >> 0xfU))) | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt));
    }
    if (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z 
            = vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S;
    }
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z)) 
           | ((3U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z))));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
        = ((0xfffffffeU & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[0U] 
                           << 1U)) | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[1U] 
        = ((1U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[0U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[1U] 
                                               << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[2U] 
        = ((1U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[1U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[2U] 
                                               << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
        = ((1U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[2U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[3U] 
                                               << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            | (4U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
           | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc) 
           | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc) 
           | ((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc)) 
              & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
                 & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z))));
    VL_SHIFTRS_WWI(65537,65537,16, __Vtemp189, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0xffffU & (~ (VL_EXTENDS_II(16,17, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z) 
                                  | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                      ? 0x8000U : 0U)))));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
        = ((__Vtemp189[0x1fdU] << 0xfU) | (__Vtemp189[0x1fcU] 
                                           >> 0x11U));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
        = ((__Vtemp189[0x1feU] << 0xfU) | (__Vtemp189[0x1fdU] 
                                           >> 0x11U));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
        = ((__Vtemp189[0x1ffU] << 0xfU) | (__Vtemp189[0x1feU] 
                                           >> 0x11U));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
        = (0x3ffffU & ((__Vtemp189[0x200U] << 0xfU) 
                       | (__Vtemp189[0x1ffU] >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffeU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (1U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffdU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (2U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xfU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffbU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (4U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffff7U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (8U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffefU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffdfU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffbfU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffff7fU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffeffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x100U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        >> 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffdffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x200U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffbffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x400U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffff7ffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x800U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffefffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x1000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffdfffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x2000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffbfffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x4000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffff7fffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x8000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffeffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                          << 0xfU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffdffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                          << 0x11U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffbffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfff7ffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffefffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x100000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffdfffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x200000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffbfffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x400000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xff7fffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x800000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfeffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x1000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            >> 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfdffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x2000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfbffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x4000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xf7ffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x8000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xefffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xdfffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xbfffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0x7fffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffeU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (1U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffdU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (2U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xfU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffbU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (4U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffff7U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (8U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffefU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffdfU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffbfU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffff7fU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffeffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x100U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        >> 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffdffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x200U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffbffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x400U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffff7ffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x800U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffefffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x1000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffdfffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x2000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffbfffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x4000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffff7fffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x8000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffeffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          << 0xfU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffdffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          << 0x11U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffbffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfff7ffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffefffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x100000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffdfffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x200000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffbfffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x400000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xff7fffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x800000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfeffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x1000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            >> 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfdffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x2000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfbffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x4000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xf7ffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x8000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xefffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xdfffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xbfffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0x7fffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffeU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (1U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffdU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (2U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xfU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffbU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (4U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffff7U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (8U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffefU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffdfU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffbfU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffff7fU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffeffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x100U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        >> 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffdffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x200U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffbffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x400U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffff7ffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x800U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffefffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x1000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffdfffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x2000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffbfffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x4000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffff7fffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x8000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffeffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          << 0xfU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffdffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          << 0x11U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffbffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfff7ffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffefffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x100000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffdfffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x200000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffbfffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x400000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xff7fffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x800000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfeffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x1000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            >> 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfdffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x2000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfbffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x4000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xf7ffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x8000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xefffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xdfffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xbfffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0x7fffffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80000000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffeU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (1U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffdU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (2U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xfU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffbU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (4U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fff7U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (8U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffefU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x10U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffdfU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x20U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffbfU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x40U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ff7fU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x80U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3feffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x100U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        >> 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fdffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x200U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 1U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fbffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x400U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 3U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3f7ffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x800U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 5U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3efffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x1000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 7U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3dfffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x2000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 9U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3bfffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x4000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 0xbU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x37fffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x8000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 0xdU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x2ffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x10000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          << 0xfU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x1ffffU & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x20000U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          << 0x11U)));
    VL_EXTEND_WI(114,1, __Vtemp193, (1U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                                           >> 0x13U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
        = (3U | (0xfffffffcU & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
                                 | __Vtemp193[0U]) 
                                << 2U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U] 
        = ((3U & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
                   | __Vtemp193[0U]) >> 0x1eU)) | (0xfffffffcU 
                                                   & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
                                                       | __Vtemp193[1U]) 
                                                      << 2U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U] 
        = ((3U & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
                   | __Vtemp193[1U]) >> 0x1eU)) | (0xfffffffcU 
                                                   & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
                                                       | __Vtemp193[2U]) 
                                                      << 2U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U] 
        = ((3U & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
                   | __Vtemp193[2U]) >> 0x1eU)) | (0xfffffffcU 
                                                   & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
                                                       | __Vtemp193[3U]) 
                                                      << 2U)));
    VL_SHIFTR_WWI(116,116,32, __Vtemp199, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != ((((((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                        << 0x1dU) | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                     >> 3U)) & ((__Vtemp199[1U] 
                                                 << 0x1dU) 
                                                | (__Vtemp199[0U] 
                                                   >> 3U))) 
                     | (((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                          << 0x1dU) | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                                       >> 3U)) & ((
                                                   __Vtemp199[2U] 
                                                   << 0x1dU) 
                                                  | (__Vtemp199[1U] 
                                                     >> 3U)))) 
                    | (((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                         << 0x1dU) | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                                      >> 3U)) & ((0xe0000000U 
                                                  & (__Vtemp199[3U] 
                                                     << 0x1dU)) 
                                                 | (__Vtemp199[2U] 
                                                    >> 3U)))) 
                   | (0x1ffffU & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                                   >> 3U) & (__Vtemp199[3U] 
                                             >> 3U))))) 
           | ((0U != (7U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                            & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U] 
                                << 0x1fU) | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                             >> 1U))))) 
              & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    VL_SHIFTR_WWI(116,116,32, __Vtemp204, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U] 
        = ((~ __Vtemp204[0U]) & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
        = ((~ __Vtemp204[1U]) & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
        = ((~ __Vtemp204[2U]) & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U] 
        = ((~ __Vtemp204[3U]) & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != ((((((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                        << 0x1dU) | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                     >> 3U)) & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U] 
                                                   >> 3U))) 
                     | (((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                          << 0x1dU) | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                                       >> 3U)) & ((
                                                   vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
                                                     >> 3U)))) 
                    | (((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                         << 0x1dU) | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                                      >> 3U)) & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U] 
                                                  << 0x1dU) 
                                                 | (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
                                                    >> 3U)))) 
                   | (0x1ffffU & ((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                                   & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U]) 
                                  >> 3U)))) | ((0U 
                                                != 
                                                (7U 
                                                 & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                                    & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U]))) 
                                               & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    __Vtemp214[0U] = 1U;
    __Vtemp214[1U] = 0U;
    __Vtemp214[2U] = 0U;
    __Vtemp214[3U] = 0U;
    __Vtemp215[0U] = (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                      | vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]);
    __Vtemp215[1U] = (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                      | vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]);
    __Vtemp215[2U] = (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                      | vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]);
    __Vtemp215[3U] = (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                      | vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]);
    VL_SHIFTR_WWI(116,116,32, __Vtemp216, __Vtemp215, 2U);
    VL_ADD_W(4, __Vtemp217, __Vtemp214, __Vtemp216);
    VL_SHIFTR_WWI(116,116,32, __Vtemp218, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    __Vtemp225[0U] = (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                      & (~ vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]));
    __Vtemp225[1U] = (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                      & (~ vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]));
    __Vtemp225[2U] = (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                      & (~ vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]));
    __Vtemp225[3U] = (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                      & (~ vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]));
    VL_SHIFTR_WWI(116,116,32, __Vtemp226, __Vtemp225, 2U);
    VL_SHIFTR_WWI(116,116,32, __Vtemp227, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask, 1U);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[0U] 
        = (((((0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              | (4U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
             & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp217[0U] & (~ ((((0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                      & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                     & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                     ? __Vtemp218[0U]
                                     : 0U))) : (__Vtemp226[0U] 
                                                | (((6U 
                                                     == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                    & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                    ? 
                                                   __Vtemp227[0U]
                                                    : 0U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[1U] 
        = (((((0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              | (4U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
             & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp217[1U] & (~ ((((0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                      & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                     & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                     ? __Vtemp218[1U]
                                     : 0U))) : (__Vtemp226[1U] 
                                                | (((6U 
                                                     == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                    & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                    ? 
                                                   __Vtemp227[1U]
                                                    : 0U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[2U] 
        = (((((0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              | (4U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
             & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp217[2U] & (~ ((((0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                      & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                     & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                     ? __Vtemp218[2U]
                                     : 0U))) : (__Vtemp226[2U] 
                                                | (((6U 
                                                     == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                    & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                    ? 
                                                   __Vtemp227[2U]
                                                    : 0U)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
        = (0x7ffffU & (((((0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                          | (4U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                         & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                        | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                           & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                        ? (__Vtemp217[3U] & (~ ((((0U 
                                                   == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                  & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                                 & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                                 ? 
                                                __Vtemp218[3U]
                                                 : 0U)))
                        : (__Vtemp226[3U] | (((6U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                              & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                              ? __Vtemp227[3U]
                                              : 0U))));
    VL_SHIFTR_WWI(115,115,32, __Vtemp239, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig, 1U);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[0U] 
        = ((0x80000U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U])
            ? __Vtemp239[0U] : vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[0U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[1U] 
        = ((0x80000U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U])
            ? __Vtemp239[1U] : vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[1U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[2U] 
        = ((0x80000U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U])
            ? __Vtemp239[2U] : vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[2U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U] 
        = (0xffffU & ((0x80000U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U])
                       ? __Vtemp239[3U] : vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U]));
    VL_SHIFTR_WWI(115,115,32, __Vtemp246, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig, 0x71U);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x3ffffU & (VL_EXTENDS_II(18,17, (0x1ffffU 
                                             & VL_EXTENDS_II(17,17, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))) 
                       + __Vtemp246[0U]));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x3f92U, VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           & ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp), 0xeU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp259[3U] = ((0xffff0000U & (((((((((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
                                              & (~ 
                                                 (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z) 
                                                   | VL_GTS_III(1,32,32, 0x3f92U, 
                                                                VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))
                                                   ? 0xe000U
                                                   : 0U))) 
                                             & (~ ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                    ? 0xffffc06dU
                                                    : 0U))) 
                                            & (~ ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                   ? 0x4000U
                                                   : 0U))) 
                                           & (~ ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                  ? 0x2000U
                                                  : 0U))) 
                                          | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                              ? 0x3f92U
                                              : 0U)) 
                                         | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                             ? 0xbfffU
                                             : 0U)) 
                                        | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                            ? 0xc000U
                                            : 0U)) 
                                       | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                           ? 0xe000U
                                           : 0U)) << 0x10U)) 
                      | (0xffffU & (((0xffff8000U & 
                                      (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                        << 0xfU) | 
                                       (0xffff8000U 
                                        & ((((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                             & VL_LTES_III(1,32,32, 0x3f92U, 
                                                           VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                            << 0xfU) 
                                           & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U])))) 
                                     | (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                         | ((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                                          VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                         ? (0x7fffU 
                                            & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U])
                                         : 0U)) | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))))));
    vlTOPp->out[0U] = ((((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[0U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[1U] = ((((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[1U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[2U] = ((((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[2U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[3U] = __Vtemp259[3U];
    vlTOPp->out[4U] = vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z;
}

VL_INLINE_OPT void VdivSqrtRecF128_small_sqrt::_sequent__TOP__3(VdivSqrtRecF128_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_sqrt::_sequent__TOP__3\n"); );
    VdivSqrtRecF128_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->nReset) {
        if ((1U & ((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                   | (IData)(vlTOPp->inValid)))) {
            vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum 
                = (0x7fU & ((((((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
                                & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt)))
                                ? 1U : 0U) | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)
                                               ? ((1U 
                                                   & ((vlTOPp->a[4U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->a[3U] 
                                                         >> 0x10U)))
                                                   ? 0x71U
                                                   : 0x72U)
                                               : 0U)) 
                             | ((1U & ((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                                       & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2))))
                                 ? ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum) 
                                    - (IData)(1U)) : 0U)) 
                            | (((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                                & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2))
                                ? 1U : 0U)));
        }
    } else {
        vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum = 0U;
    }
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle 
        = (0U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->outValid = (1U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 
        = ((3U == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
           & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[3U] 
              >> 0x12U));
    vlTOPp->inReady = (1U >= (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
}

VL_INLINE_OPT void VdivSqrtRecF128_small_sqrt::_combo__TOP__4(VdivSqrtRecF128_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_sqrt::_combo__TOP__4\n"); );
    VdivSqrtRecF128_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp267[4];
    WData/*127:0*/ __Vtemp268[4];
    WData/*127:0*/ __Vtemp282[4];
    WData/*127:0*/ __Vtemp283[4];
    WData/*127:0*/ __Vtemp288[4];
    WData/*127:0*/ __Vtemp299[4];
    WData/*127:0*/ __Vtemp300[4];
    WData/*127:0*/ __Vtemp301[4];
    WData/*127:0*/ __Vtemp306[4];
    WData/*127:0*/ __Vtemp309[4];
    WData/*127:0*/ __Vtemp310[4];
    WData/*127:0*/ __Vtemp313[4];
    WData/*127:0*/ __Vtemp314[4];
    WData/*127:0*/ __Vtemp320[4];
    WData/*127:0*/ __Vtemp321[4];
    WData/*127:0*/ __Vtemp322[4];
    // Body
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                      << 2U)) | (vlTOPp->a[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->a[3U] >> 0x1dU)));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[0U] 
        = vlTOPp->a[0U];
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[1U] 
        = vlTOPp->a[1U];
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[2U] 
        = vlTOPp->a[2U];
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->a[4U] 
                                             << 3U)) 
                                         | (vlTOPp->a[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->a[3U]));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                      << 2U)) | (vlTOPp->a[3U] 
                                                 >> 0x1eU)))) 
           & (vlTOPp->a[3U] >> 0x1dU));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x3f92U, VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)) 
           | ((((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,17, 
                                                                        (0x1ffffU 
                                                                         & VL_EXTENDS_II(17,17, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))), 0xfU))) 
               & ((0x80000U & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U])
                   ? (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                      >> 3U) : (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x80000U 
                                                       & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U])
                                                       ? 
                                                      (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                                       >> 4U)
                                                       : 
                                                      (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                                       >> 3U)))) 
                                                 & ((0x80000U 
                                                     & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U])
                                                     ? 
                                                    (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
                                                     >> 0x12U)
                                                     : 
                                                    (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
                                                     >> 0x11U))) 
                                                & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                                                   & ((0x80000U 
                                                       & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U])
                                                       ? 
                                                      (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                                       >> 2U)
                                                       : 
                                                      (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & (((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                                                          >> 0x13U) 
                                                         & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig[0U])))))))));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering 
        = ((IData)(vlTOPp->inReady) & (IData)(vlTOPp->inValid));
    VL_EXTEND_WW(116,114, __Vtemp267, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S);
    VL_SHIFTL_WWI(116,116,32, __Vtemp268, __Vtemp267, 1U);
    VL_EXTEND_WW(116,115, __Vtemp282, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z);
    VL_SHIFTL_WWI(116,116,32, __Vtemp283, __Vtemp282, 1U);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem[0U] 
        = (((((IData)(vlTOPp->inReady) & (~ (0xffffU 
                                             & ((vlTOPp->a[4U] 
                                                 << 0x10U) 
                                                | (vlTOPp->a[3U] 
                                                   >> 0x10U)))))
              ? __Vtemp268[0U] : 0U) | ((0xffffU & 
                                         ((IData)(vlTOPp->inReady) 
                                          & ((vlTOPp->a[4U] 
                                              << 0x10U) 
                                             | (vlTOPp->a[3U] 
                                                >> 0x10U))))
                                         ? (0xfffffff8U 
                                            & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[0U] 
                                               << 3U))
                                         : 0U)) | ((IData)(vlTOPp->inReady)
                                                    ? 0U
                                                    : 
                                                   __Vtemp283[0U]));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem[1U] 
        = (((((IData)(vlTOPp->inReady) & (~ (0xffffU 
                                             & ((vlTOPp->a[4U] 
                                                 << 0x10U) 
                                                | (vlTOPp->a[3U] 
                                                   >> 0x10U)))))
              ? __Vtemp268[1U] : 0U) | ((0xffffU & 
                                         ((IData)(vlTOPp->inReady) 
                                          & ((vlTOPp->a[4U] 
                                              << 0x10U) 
                                             | (vlTOPp->a[3U] 
                                                >> 0x10U))))
                                         ? ((7U & (
                                                   vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[0U] 
                                                   >> 0x1dU)) 
                                            | (0xfffffff8U 
                                               & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[1U] 
                                                  << 3U)))
                                         : 0U)) | ((IData)(vlTOPp->inReady)
                                                    ? 0U
                                                    : 
                                                   __Vtemp283[1U]));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem[2U] 
        = (((((IData)(vlTOPp->inReady) & (~ (0xffffU 
                                             & ((vlTOPp->a[4U] 
                                                 << 0x10U) 
                                                | (vlTOPp->a[3U] 
                                                   >> 0x10U)))))
              ? __Vtemp268[2U] : 0U) | ((0xffffU & 
                                         ((IData)(vlTOPp->inReady) 
                                          & ((vlTOPp->a[4U] 
                                              << 0x10U) 
                                             | (vlTOPp->a[3U] 
                                                >> 0x10U))))
                                         ? ((7U & (
                                                   vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[1U] 
                                                   >> 0x1dU)) 
                                            | (0xfffffff8U 
                                               & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[2U] 
                                                  << 3U)))
                                         : 0U)) | ((IData)(vlTOPp->inReady)
                                                    ? 0U
                                                    : 
                                                   __Vtemp283[2U]));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem[3U] 
        = (0xfffffU & (((((IData)(vlTOPp->inReady) 
                          & (~ (0xffffU & ((vlTOPp->a[4U] 
                                            << 0x10U) 
                                           | (vlTOPp->a[3U] 
                                              >> 0x10U)))))
                          ? __Vtemp268[3U] : 0U) | 
                        ((0xffffU & ((IData)(vlTOPp->inReady) 
                                     & ((vlTOPp->a[4U] 
                                         << 0x10U) 
                                        | (vlTOPp->a[3U] 
                                           >> 0x10U))))
                          ? ((0xc0000U & (((vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[3U] 
                                            >> 0xfU) 
                                           - (IData)(1U)) 
                                          << 0x12U)) 
                             | ((7U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[2U] 
                                       >> 0x1dU)) | 
                                (0x3fff8U & (vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[3U] 
                                             << 3U))))
                          : 0U)) | ((IData)(vlTOPp->inReady)
                                     ? 0U : __Vtemp283[3U])));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt 
        = (((~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)) 
            & (0U != (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                         << 3U)) | 
                            (vlTOPp->a[3U] >> 0x1dU))))) 
           & vlTOPp->a[4U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt 
        = (1U & ((~ (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
                      | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S)) 
                     | (0U == (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                                  << 3U)) 
                                     | (vlTOPp->a[3U] 
                                        >> 0x1dU)))))) 
                 & (~ vlTOPp->a[4U])));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc) 
                                          << 3U) | 
                                         (((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                            << 1U) 
                                           | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(1,32,32, 0x3f92U, 
                                                               VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)) 
                                                    | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))))))));
    VL_EXTEND_WW(117,116, __Vtemp288, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem);
    __Vtemp299[0U] = vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[0U];
    __Vtemp299[1U] = vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[1U];
    __Vtemp299[2U] = vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[2U];
    __Vtemp299[3U] = (0x10000U | vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[3U]);
    VL_EXTEND_WW(115,113, __Vtemp300, __Vtemp299);
    VL_SHIFTL_WWI(115,115,32, __Vtemp301, __Vtemp300, 1U);
    VL_SHIFTL_WWI(115,115,32, __Vtemp306, vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z, 1U);
    __Vtemp309[0U] = 1U;
    __Vtemp309[1U] = 0U;
    __Vtemp309[2U] = 0U;
    __Vtemp309[3U] = 0U;
    VL_SHIFTL_WWI(116,116,7, __Vtemp310, __Vtemp309, (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    __Vtemp313[0U] = ((__Vtemp310[1U] << 0x1eU) | (
                                                   __Vtemp310[0U] 
                                                   >> 2U));
    __Vtemp313[1U] = ((__Vtemp310[2U] << 0x1eU) | (
                                                   __Vtemp310[1U] 
                                                   >> 2U));
    __Vtemp313[2U] = ((0xc0000000U & (__Vtemp310[3U] 
                                      << 0x1eU)) | 
                      (__Vtemp310[2U] >> 2U));
    __Vtemp313[3U] = (0x3ffffU & (__Vtemp310[3U] >> 2U));
    VL_EXTEND_WW(115,114, __Vtemp314, __Vtemp313);
    __Vtemp320[0U] = (((1U & ((~ (IData)(vlTOPp->inReady)) 
                              & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                        ? __Vtemp301[0U] : 0U) | ((
                                                   (~ (IData)(vlTOPp->inReady)) 
                                                   & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                                   ? 
                                                  (__Vtemp306[0U] 
                                                   | __Vtemp314[0U])
                                                   : 0U));
    __Vtemp320[1U] = (((1U & ((~ (IData)(vlTOPp->inReady)) 
                              & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                        ? __Vtemp301[1U] : 0U) | ((
                                                   (~ (IData)(vlTOPp->inReady)) 
                                                   & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                                   ? 
                                                  (__Vtemp306[1U] 
                                                   | __Vtemp314[1U])
                                                   : 0U));
    __Vtemp320[2U] = (((1U & ((~ (IData)(vlTOPp->inReady)) 
                              & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                        ? __Vtemp301[2U] : 0U) | ((
                                                   (~ (IData)(vlTOPp->inReady)) 
                                                   & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                                   ? 
                                                  (__Vtemp306[2U] 
                                                   | __Vtemp314[2U])
                                                   : 0U));
    __Vtemp320[3U] = (0x7ffffU & ((((((IData)(vlTOPp->inReady) 
                                      & (~ (0xffffU 
                                            & ((vlTOPp->a[4U] 
                                                << 0x10U) 
                                               | (vlTOPp->a[3U] 
                                                  >> 0x10U)))))
                                      ? 0x20000U : 0U) 
                                    | ((0xffffU & ((IData)(vlTOPp->inReady) 
                                                   & ((vlTOPp->a[4U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->a[3U] 
                                                         >> 0x10U))))
                                        ? 0x50000U : 0U)) 
                                   | ((1U & ((~ (IData)(vlTOPp->inReady)) 
                                             & (~ (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                                       ? __Vtemp301[3U]
                                       : 0U)) | (((~ (IData)(vlTOPp->inReady)) 
                                                  & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                                  ? 
                                                 (__Vtemp306[3U] 
                                                  | __Vtemp314[3U])
                                                  : 0U)));
    VL_EXTEND_WW(117,115, __Vtemp321, __Vtemp320);
    VL_SUB_W(4, __Vtemp322, __Vtemp288, __Vtemp321);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[0U] 
        = __Vtemp322[0U];
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[1U] 
        = __Vtemp322[1U];
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[2U] 
        = __Vtemp322[2U];
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[3U] 
        = (0x1fffffU & __Vtemp322[3U]);
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
           | (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt));
    vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase 
        = ((IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt));
}

void VdivSqrtRecF128_small_sqrt::_eval(VdivSqrtRecF128_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_sqrt::_eval\n"); );
    VdivSqrtRecF128_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VdivSqrtRecF128_small_sqrt::_eval_initial(VdivSqrtRecF128_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_sqrt::_eval_initial\n"); );
    VdivSqrtRecF128_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__nReset = vlTOPp->nReset;
}

void VdivSqrtRecF128_small_sqrt::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_sqrt::final\n"); );
    // Variables
    VdivSqrtRecF128_small_sqrt__Syms* __restrict vlSymsp = this->__VlSymsp;
    VdivSqrtRecF128_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VdivSqrtRecF128_small_sqrt::_eval_settle(VdivSqrtRecF128_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_sqrt::_eval_settle\n"); );
    VdivSqrtRecF128_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VdivSqrtRecF128_small_sqrt::_change_request(VdivSqrtRecF128_small_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_sqrt::_change_request\n"); );
    VdivSqrtRecF128_small_sqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VdivSqrtRecF128_small_sqrt::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_sqrt::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((nReset & 0xfeU))) {
        Verilated::overWidthError("nReset");}
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((inValid & 0xfeU))) {
        Verilated::overWidthError("inValid");}
    if (VL_UNLIKELY((a[4U] & 0xfffffffeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif  // VL_DEBUG

void VdivSqrtRecF128_small_sqrt::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_sqrt::_ctor_var_reset\n"); );
    // Body
    nReset = VL_RAND_RESET_I(1);
    clock = VL_RAND_RESET_I(1);
    control = VL_RAND_RESET_I(1);
    inReady = VL_RAND_RESET_I(1);
    inValid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, a);
    roundingMode = VL_RAND_RESET_I(3);
    outValid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, out);
    exceptionFlags = VL_RAND_RESET_I(5);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__invalidExc = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__infiniteExc = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(116, divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__out_sig);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(114, divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_sqrt = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum = VL_RAND_RESET_I(7);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z = VL_RAND_RESET_I(17);
    VL_RAND_RESET_W(112, divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(115, divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(115, divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(116, divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem);
    VL_RAND_RESET_W(117, divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(116, divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    VL_RAND_RESET_W(114, divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main);
    VL_RAND_RESET_W(116, divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(115, divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig);
    divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(18);
    VL_RAND_RESET_W(65537, divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c);
    VL_RAND_RESET_W(114, divSqrtRecF128_small_sqrt__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut);
}
