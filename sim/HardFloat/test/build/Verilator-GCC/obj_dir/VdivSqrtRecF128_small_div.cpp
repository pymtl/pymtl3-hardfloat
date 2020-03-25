// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VdivSqrtRecF128_small_div.h for the primary calling header

#include "VdivSqrtRecF128_small_div.h"
#include "VdivSqrtRecF128_small_div__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VdivSqrtRecF128_small_div) {
    VdivSqrtRecF128_small_div__Syms* __restrict vlSymsp = __VlSymsp = new VdivSqrtRecF128_small_div__Syms(this, name());
    VdivSqrtRecF128_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VdivSqrtRecF128_small_div::__Vconfigure(VdivSqrtRecF128_small_div__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VdivSqrtRecF128_small_div::~VdivSqrtRecF128_small_div() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VdivSqrtRecF128_small_div::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VdivSqrtRecF128_small_div::eval\n"); );
    VdivSqrtRecF128_small_div__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VdivSqrtRecF128_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/divSqrtRecFN_small_spec.v", 146, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VdivSqrtRecF128_small_div::_eval_initial_loop(VdivSqrtRecF128_small_div__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/divSqrtRecFN_small_spec.v", 146, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VdivSqrtRecF128_small_div::_settle__TOP__1(VdivSqrtRecF128_small_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_div::_settle__TOP__1\n"); );
    VdivSqrtRecF128_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp11[4];
    WData/*127:0*/ __Vtemp12[4];
    WData/*127:0*/ __Vtemp16[4];
    WData/*127:0*/ __Vtemp17[4];
    WData/*127:0*/ __Vtemp22[4];
    WData/*127:0*/ __Vtemp24[4];
    WData/*127:0*/ __Vtemp25[4];
    WData/*127:0*/ __Vtemp28[4];
    WData/*127:0*/ __Vtemp29[4];
    WData/*127:0*/ __Vtemp30[4];
    WData/*127:0*/ __Vtemp35[4];
    WData/*127:0*/ __Vtemp38[4];
    WData/*127:0*/ __Vtemp39[4];
    WData/*127:0*/ __Vtemp42[4];
    WData/*127:0*/ __Vtemp43[4];
    WData/*127:0*/ __Vtemp49[4];
    WData/*127:0*/ __Vtemp50[4];
    WData/*127:0*/ __Vtemp51[4];
    WData/*65567:0*/ __Vtemp55[2049];
    WData/*65567:0*/ __Vtemp56[2049];
    WData/*127:0*/ __Vtemp60[4];
    WData/*127:0*/ __Vtemp66[4];
    WData/*127:0*/ __Vtemp71[4];
    WData/*127:0*/ __Vtemp81[4];
    WData/*127:0*/ __Vtemp82[4];
    WData/*127:0*/ __Vtemp83[4];
    WData/*127:0*/ __Vtemp84[4];
    WData/*127:0*/ __Vtemp85[4];
    WData/*127:0*/ __Vtemp92[4];
    WData/*127:0*/ __Vtemp93[4];
    WData/*127:0*/ __Vtemp94[4];
    WData/*127:0*/ __Vtemp106[4];
    WData/*127:0*/ __Vtemp113[4];
    WData/*127:0*/ __Vtemp126[4];
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x7ffU)) {
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x800U] = 1U;
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div 
        = (0x3ffffU & ((0xffffU & ((vlTOPp->a[4U] << 0x10U) 
                                   | (vlTOPp->a[3U] 
                                      >> 0x10U))) + 
                       ((0x38000U & (VL_NEGATE_I((IData)(
                                                         (1U 
                                                          & ((0x1fffeU 
                                                              & (vlTOPp->b[4U] 
                                                                 << 1U)) 
                                                             | (vlTOPp->b[3U] 
                                                                >> 0x1fU))))) 
                                     << 0xfU)) | (0x7fffU 
                                                  & (~ 
                                                     (0xffffU 
                                                      & ((vlTOPp->b[4U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->b[3U] 
                                                            >> 0x10U))))))));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[0U] 
        = vlTOPp->b[0U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[1U] 
        = vlTOPp->b[1U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[2U] 
        = vlTOPp->b[2U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->b[4U] 
                                             << 3U)) 
                                         | (vlTOPp->b[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->b[3U]));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->b[4U] 
                                      << 2U)) | (vlTOPp->b[3U] 
                                                 >> 0x1eU)))) 
           & (vlTOPp->b[3U] >> 0x1dU));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[0U] 
        = vlTOPp->a[0U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[1U] 
        = vlTOPp->a[1U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[2U] 
        = vlTOPp->a[2U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->a[4U] 
                                             << 3U)) 
                                         | (vlTOPp->a[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->a[3U]));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->b[4U] 
                                      << 2U)) | (vlTOPp->b[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->b[3U] >> 0x1dU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                      << 2U)) | (vlTOPp->a[3U] 
                                                 >> 0x1eU)))) 
           & (vlTOPp->a[3U] >> 0x1dU));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                      << 2U)) | (vlTOPp->a[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->a[3U] >> 0x1dU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle 
        = (0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->outValid = (1U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 
        = ((3U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
           & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[3U] 
              >> 0x12U));
    vlTOPp->inReady = (1U >= (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z)) 
           | ((3U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z))));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
        = ((0xfffffffeU & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[0U] 
                           << 1U)) | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[1U] 
        = ((1U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[0U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[1U] 
                                               << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[2U] 
        = ((1U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[1U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[2U] 
                                               << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
        = ((1U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[2U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[3U] 
                                               << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__invalidExc 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__infiniteExc 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div 
        = (((0U == (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                       << 3U)) | (vlTOPp->a[3U] 
                                                  >> 0x1dU)))) 
            & (0U == (7U & ((0x7fff8U & (vlTOPp->b[4U] 
                                         << 3U)) | 
                            (vlTOPp->b[3U] >> 0x1dU))))) 
           | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S) 
              & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S 
        = (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
            | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S)) 
           | (0U == (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                        << 3U)) | (
                                                   vlTOPp->a[3U] 
                                                   >> 0x1dU)))));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering 
        = ((IData)(vlTOPp->inReady) & (IData)(vlTOPp->inValid));
    VL_EXTEND_WW(116,114, __Vtemp11, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S);
    VL_SHIFTL_WWI(116,116,32, __Vtemp12, __Vtemp11, 1U);
    VL_EXTEND_WW(116,115, __Vtemp16, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z);
    VL_SHIFTL_WWI(116,116,32, __Vtemp17, __Vtemp16, 1U);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem[0U] 
        = (((IData)(vlTOPp->inReady) ? __Vtemp12[0U]
             : 0U) | ((IData)(vlTOPp->inReady) ? 0U
                       : __Vtemp17[0U]));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem[1U] 
        = (((IData)(vlTOPp->inReady) ? __Vtemp12[1U]
             : 0U) | ((IData)(vlTOPp->inReady) ? 0U
                       : __Vtemp17[1U]));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem[2U] 
        = (((IData)(vlTOPp->inReady) ? __Vtemp12[2U]
             : 0U) | ((IData)(vlTOPp->inReady) ? 0U
                       : __Vtemp17[2U]));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem[3U] 
        = (0xfffffU & (((IData)(vlTOPp->inReady) ? 
                        __Vtemp12[3U] : 0U) | ((IData)(vlTOPp->inReady)
                                                ? 0U
                                                : __Vtemp17[3U])));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            | (4U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
           | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__infiniteExc) 
           | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__invalidExc) 
           | ((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__infiniteExc)) 
              & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S 
        = (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
            | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S)) 
           | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_div 
        = (1U & ((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S)) 
                 & (~ (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S) 
                        | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S)) 
                       | (0U == (7U & ((0x7fff8U & 
                                        (vlTOPp->b[4U] 
                                         << 3U)) | 
                                       (vlTOPp->b[3U] 
                                        >> 0x1dU))))))));
    VL_EXTEND_WW(117,116, __Vtemp22, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem);
    VL_EXTEND_WW(115,114, __Vtemp24, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S);
    VL_SHIFTL_WWI(115,115,32, __Vtemp25, __Vtemp24, 1U);
    __Vtemp28[0U] = vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[0U];
    __Vtemp28[1U] = vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[1U];
    __Vtemp28[2U] = vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[2U];
    __Vtemp28[3U] = (0x10000U | vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[3U]);
    VL_EXTEND_WW(115,113, __Vtemp29, __Vtemp28);
    VL_SHIFTL_WWI(115,115,32, __Vtemp30, __Vtemp29, 1U);
    VL_SHIFTL_WWI(115,115,32, __Vtemp35, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z, 1U);
    __Vtemp38[0U] = 1U;
    __Vtemp38[1U] = 0U;
    __Vtemp38[2U] = 0U;
    __Vtemp38[3U] = 0U;
    VL_SHIFTL_WWI(116,116,7, __Vtemp39, __Vtemp38, (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    __Vtemp42[0U] = ((__Vtemp39[1U] << 0x1eU) | (__Vtemp39[0U] 
                                                 >> 2U));
    __Vtemp42[1U] = ((__Vtemp39[2U] << 0x1eU) | (__Vtemp39[1U] 
                                                 >> 2U));
    __Vtemp42[2U] = ((0xc0000000U & (__Vtemp39[3U] 
                                     << 0x1eU)) | (
                                                   __Vtemp39[2U] 
                                                   >> 2U));
    __Vtemp42[3U] = (0x3ffffU & (__Vtemp39[3U] >> 2U));
    VL_EXTEND_WW(115,114, __Vtemp43, __Vtemp42);
    __Vtemp49[0U] = ((((IData)(vlTOPp->inReady) ? __Vtemp25[0U]
                        : 0U) | ((1U & ((~ (IData)(vlTOPp->inReady)) 
                                        & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                                  ? __Vtemp30[0U] : 0U)) 
                     | (((~ (IData)(vlTOPp->inReady)) 
                         & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                         ? (__Vtemp35[0U] | __Vtemp43[0U])
                         : 0U));
    __Vtemp49[1U] = ((((IData)(vlTOPp->inReady) ? __Vtemp25[1U]
                        : 0U) | ((1U & ((~ (IData)(vlTOPp->inReady)) 
                                        & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                                  ? __Vtemp30[1U] : 0U)) 
                     | (((~ (IData)(vlTOPp->inReady)) 
                         & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                         ? (__Vtemp35[1U] | __Vtemp43[1U])
                         : 0U));
    __Vtemp49[2U] = ((((IData)(vlTOPp->inReady) ? __Vtemp25[2U]
                        : 0U) | ((1U & ((~ (IData)(vlTOPp->inReady)) 
                                        & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                                  ? __Vtemp30[2U] : 0U)) 
                     | (((~ (IData)(vlTOPp->inReady)) 
                         & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                         ? (__Vtemp35[2U] | __Vtemp43[2U])
                         : 0U));
    __Vtemp49[3U] = (0x7ffffU & ((((IData)(vlTOPp->inReady)
                                    ? __Vtemp25[3U]
                                    : 0U) | ((1U & 
                                              ((~ (IData)(vlTOPp->inReady)) 
                                               & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                                              ? __Vtemp30[3U]
                                              : 0U)) 
                                 | (((~ (IData)(vlTOPp->inReady)) 
                                     & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                     ? (__Vtemp35[3U] 
                                        | __Vtemp43[3U])
                                     : 0U)));
    VL_EXTEND_WW(117,115, __Vtemp50, __Vtemp49);
    VL_SUB_W(4, __Vtemp51, __Vtemp22, __Vtemp50);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[0U] 
        = __Vtemp51[0U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[1U] 
        = __Vtemp51[1U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[2U] 
        = __Vtemp51[2U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[3U] 
        = (0x1fffffU & __Vtemp51[3U]);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
                 & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z))));
    __Vilp = 0U;
    while ((__Vilp <= 0x7ffU)) {
        __Vtemp55[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtemp55[0x800U] = 1U;
    VL_SHIFTRS_WWI(65537,65537,16, __Vtemp56, __Vtemp55, 
                   (0xffffU & (~ (VL_EXTENDS_II(16,17, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z) 
                                  | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                      ? 0x8000U : 0U)))));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
        = ((__Vtemp56[0x1fdU] << 0xfU) | (__Vtemp56[0x1fcU] 
                                          >> 0x11U));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
        = ((__Vtemp56[0x1feU] << 0xfU) | (__Vtemp56[0x1fdU] 
                                          >> 0x11U));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
        = ((__Vtemp56[0x1ffU] << 0xfU) | (__Vtemp56[0x1feU] 
                                          >> 0x11U));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
        = (0x3ffffU & ((__Vtemp56[0x200U] << 0xfU) 
                       | (__Vtemp56[0x1ffU] >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_div));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffeU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (1U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffdU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (2U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xfU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffbU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (4U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffff7U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (8U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffefU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffdfU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffbfU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffff7fU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffeffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x100U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        >> 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffdffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x200U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffbffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x400U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffff7ffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x800U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffefffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x1000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffdfffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x2000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffbfffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x4000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffff7fffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x8000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffeffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                          << 0xfU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffdffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                          << 0x11U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffbffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfff7ffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffefffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x100000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffdfffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x200000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffbfffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x400000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xff7fffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x800000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfeffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x1000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            >> 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfdffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x2000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfbffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x4000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xf7ffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x8000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xefffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xdfffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xbfffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0x7fffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffeU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (1U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffdU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (2U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xfU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffbU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (4U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffff7U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (8U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffefU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffdfU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffbfU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffff7fU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffeffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x100U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        >> 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffdffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x200U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffbffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x400U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffff7ffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x800U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffefffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x1000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffdfffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x2000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffbfffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x4000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffff7fffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x8000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffeffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          << 0xfU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffdffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          << 0x11U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffbffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfff7ffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffefffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x100000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffdfffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x200000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffbfffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x400000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xff7fffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x800000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfeffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x1000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            >> 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfdffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x2000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfbffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x4000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xf7ffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x8000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xefffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xdfffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xbfffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0x7fffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffeU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (1U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffdU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (2U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xfU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffbU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (4U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffff7U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (8U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffefU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffdfU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffbfU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffff7fU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffeffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x100U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        >> 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffdffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x200U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffbffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x400U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffff7ffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x800U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffefffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x1000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffdfffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x2000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffbfffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x4000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffff7fffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x8000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffeffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          << 0xfU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffdffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          << 0x11U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffbffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfff7ffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffefffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x100000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffdfffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x200000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffbfffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x400000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xff7fffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x800000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfeffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x1000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            >> 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfdffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x2000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfbffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x4000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xf7ffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x8000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xefffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xdfffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xbfffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0x7fffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffeU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (1U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffdU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (2U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xfU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffbU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (4U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fff7U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (8U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffefU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x10U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffdfU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x20U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffbfU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x40U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ff7fU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x80U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3feffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x100U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        >> 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fdffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x200U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fbffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x400U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3f7ffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x800U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3efffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x1000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3dfffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x2000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3bfffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x4000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x37fffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x8000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x2ffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x10000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          << 0xfU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x1ffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x20000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          << 0x11U)));
    VL_EXTEND_WI(114,1, __Vtemp60, (1U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                                          >> 0x13U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
        = (3U | (0xfffffffcU & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
                                 | __Vtemp60[0U]) << 2U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U] 
        = ((3U & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
                   | __Vtemp60[0U]) >> 0x1eU)) | (0xfffffffcU 
                                                  & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
                                                      | __Vtemp60[1U]) 
                                                     << 2U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U] 
        = ((3U & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
                   | __Vtemp60[1U]) >> 0x1eU)) | (0xfffffffcU 
                                                  & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
                                                      | __Vtemp60[2U]) 
                                                     << 2U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U] 
        = ((3U & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
                   | __Vtemp60[2U]) >> 0x1eU)) | (0xfffffffcU 
                                                  & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
                                                      | __Vtemp60[3U]) 
                                                     << 2U)));
    VL_SHIFTR_WWI(116,116,32, __Vtemp66, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != ((((((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                        << 0x1dU) | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                     >> 3U)) & ((__Vtemp66[1U] 
                                                 << 0x1dU) 
                                                | (__Vtemp66[0U] 
                                                   >> 3U))) 
                     | (((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                          << 0x1dU) | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                                       >> 3U)) & ((
                                                   __Vtemp66[2U] 
                                                   << 0x1dU) 
                                                  | (__Vtemp66[1U] 
                                                     >> 3U)))) 
                    | (((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                         << 0x1dU) | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                                      >> 3U)) & ((0xe0000000U 
                                                  & (__Vtemp66[3U] 
                                                     << 0x1dU)) 
                                                 | (__Vtemp66[2U] 
                                                    >> 3U)))) 
                   | (0x1ffffU & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                                   >> 3U) & (__Vtemp66[3U] 
                                             >> 3U))))) 
           | ((0U != (7U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                            & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U] 
                                << 0x1fU) | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                             >> 1U))))) 
              & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    VL_SHIFTR_WWI(116,116,32, __Vtemp71, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U] 
        = ((~ __Vtemp71[0U]) & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
        = ((~ __Vtemp71[1U]) & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
        = ((~ __Vtemp71[2U]) & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U] 
        = ((~ __Vtemp71[3U]) & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != ((((((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                        << 0x1dU) | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                     >> 3U)) & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U] 
                                                   >> 3U))) 
                     | (((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                          << 0x1dU) | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                                       >> 3U)) & ((
                                                   vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
                                                     >> 3U)))) 
                    | (((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                         << 0x1dU) | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                                      >> 3U)) & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U] 
                                                  << 0x1dU) 
                                                 | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
                                                    >> 3U)))) 
                   | (0x1ffffU & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                                   & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U]) 
                                  >> 3U)))) | ((0U 
                                                != 
                                                (7U 
                                                 & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                                    & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U]))) 
                                               & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    __Vtemp81[0U] = 1U;
    __Vtemp81[1U] = 0U;
    __Vtemp81[2U] = 0U;
    __Vtemp81[3U] = 0U;
    __Vtemp82[0U] = (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                     | vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]);
    __Vtemp82[1U] = (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                     | vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]);
    __Vtemp82[2U] = (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                     | vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]);
    __Vtemp82[3U] = (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                     | vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]);
    VL_SHIFTR_WWI(116,116,32, __Vtemp83, __Vtemp82, 2U);
    VL_ADD_W(4, __Vtemp84, __Vtemp81, __Vtemp83);
    VL_SHIFTR_WWI(116,116,32, __Vtemp85, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    __Vtemp92[0U] = (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                     & (~ vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]));
    __Vtemp92[1U] = (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                     & (~ vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]));
    __Vtemp92[2U] = (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                     & (~ vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]));
    __Vtemp92[3U] = (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                     & (~ vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]));
    VL_SHIFTR_WWI(116,116,32, __Vtemp93, __Vtemp92, 2U);
    VL_SHIFTR_WWI(116,116,32, __Vtemp94, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask, 1U);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[0U] 
        = (((((0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              | (4U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
             & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp84[0U] & (~ ((((0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                     & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? __Vtemp85[0U]
                                    : 0U))) : (__Vtemp93[0U] 
                                               | (((6U 
                                                    == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                   & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                   ? 
                                                  __Vtemp94[0U]
                                                   : 0U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[1U] 
        = (((((0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              | (4U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
             & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp84[1U] & (~ ((((0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                     & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? __Vtemp85[1U]
                                    : 0U))) : (__Vtemp93[1U] 
                                               | (((6U 
                                                    == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                   & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                   ? 
                                                  __Vtemp94[1U]
                                                   : 0U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[2U] 
        = (((((0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              | (4U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
             & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp84[2U] & (~ ((((0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                     & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? __Vtemp85[2U]
                                    : 0U))) : (__Vtemp93[2U] 
                                               | (((6U 
                                                    == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                   & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                   ? 
                                                  __Vtemp94[2U]
                                                   : 0U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
        = (0x7ffffU & (((((0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                          | (4U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                         & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                        | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                           & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                        ? (__Vtemp84[3U] & (~ ((((0U 
                                                  == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                 & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                                & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                                ? __Vtemp85[3U]
                                                : 0U)))
                        : (__Vtemp93[3U] | (((6U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                             & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                             ? __Vtemp94[3U]
                                             : 0U))));
    VL_SHIFTR_WWI(115,115,32, __Vtemp106, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig, 1U);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[0U] 
        = ((0x80000U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U])
            ? __Vtemp106[0U] : vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[0U]);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[1U] 
        = ((0x80000U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U])
            ? __Vtemp106[1U] : vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[1U]);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[2U] 
        = ((0x80000U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U])
            ? __Vtemp106[2U] : vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[2U]);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U] 
        = (0xffffU & ((0x80000U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U])
                       ? __Vtemp106[3U] : vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U]));
    VL_SHIFTR_WWI(115,115,32, __Vtemp113, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig, 0x71U);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x3ffffU & (VL_EXTENDS_II(18,17, (0x1ffffU 
                                             & VL_EXTENDS_II(17,17, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))) 
                       + __Vtemp113[0U]));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x3f92U, VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           & ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x3f92U, VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)) 
           | ((((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,17, 
                                                                        (0x1ffffU 
                                                                         & VL_EXTENDS_II(17,17, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))), 0xfU))) 
               & ((0x80000U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U])
                   ? (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                      >> 3U) : (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x80000U 
                                                       & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U])
                                                       ? 
                                                      (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                                       >> 4U)
                                                       : 
                                                      (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                                       >> 3U)))) 
                                                 & ((0x80000U 
                                                     & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U])
                                                     ? 
                                                    (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
                                                     >> 0x12U)
                                                     : 
                                                    (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
                                                     >> 0x11U))) 
                                                & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                                                   & ((0x80000U 
                                                       & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U])
                                                       ? 
                                                      (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                                       >> 2U)
                                                       : 
                                                      (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & (((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                                                          >> 0x13U) 
                                                         & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U])))))))));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp), 0xeU)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__infiniteExc) 
                                          << 3U) | 
                                         (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                            << 1U) 
                                           | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(1,32,32, 0x3f92U, 
                                                               VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)) 
                                                    | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))))))));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp126[3U] = ((0xffff0000U & (((((((((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
                                              & (~ 
                                                 (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z) 
                                                   | VL_GTS_III(1,32,32, 0x3f92U, 
                                                                VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))
                                                   ? 0xe000U
                                                   : 0U))) 
                                             & (~ ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                    ? 0xffffc06dU
                                                    : 0U))) 
                                            & (~ ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                   ? 0x4000U
                                                   : 0U))) 
                                           & (~ ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                  ? 0x2000U
                                                  : 0U))) 
                                          | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                              ? 0x3f92U
                                              : 0U)) 
                                         | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                             ? 0xbfffU
                                             : 0U)) 
                                        | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                            ? 0xc000U
                                            : 0U)) 
                                       | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                           ? 0xe000U
                                           : 0U)) << 0x10U)) 
                      | (0xffffU & (((0xffff8000U & 
                                      (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                        << 0xfU) | 
                                       (0xffff8000U 
                                        & ((((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                             & VL_LTES_III(1,32,32, 0x3f92U, 
                                                           VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                            << 0xfU) 
                                           & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U])))) 
                                     | (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                         | ((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                                          VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                         ? (0x7fffU 
                                            & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U])
                                         : 0U)) | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))))));
    vlTOPp->out[0U] = ((((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[0U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[1U] = ((((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[1U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[2U] = ((((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[2U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[3U] = __Vtemp126[3U];
    vlTOPp->out[4U] = vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z;
}

VL_INLINE_OPT void VdivSqrtRecF128_small_div::_sequent__TOP__2(VdivSqrtRecF128_small_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_div::_sequent__TOP__2\n"); );
    VdivSqrtRecF128_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp132[4];
    WData/*127:0*/ __Vtemp133[4];
    WData/*127:0*/ __Vtemp138[4];
    WData/*127:0*/ __Vtemp140[4];
    WData/*127:0*/ __Vtemp141[4];
    WData/*127:0*/ __Vtemp156[4];
    WData/*127:0*/ __Vtemp157[4];
    WData/*127:0*/ __Vtemp158[4];
    WData/*127:0*/ __Vtemp166[4];
    WData/*127:0*/ __Vtemp167[4];
    WData/*127:0*/ __Vtemp170[4];
    WData/*127:0*/ __Vtemp171[4];
    WData/*65567:0*/ __Vtemp178[2049];
    WData/*127:0*/ __Vtemp182[4];
    WData/*127:0*/ __Vtemp188[4];
    WData/*127:0*/ __Vtemp193[4];
    WData/*127:0*/ __Vtemp203[4];
    WData/*127:0*/ __Vtemp204[4];
    WData/*127:0*/ __Vtemp205[4];
    WData/*127:0*/ __Vtemp206[4];
    WData/*127:0*/ __Vtemp207[4];
    WData/*127:0*/ __Vtemp214[4];
    WData/*127:0*/ __Vtemp215[4];
    WData/*127:0*/ __Vtemp216[4];
    WData/*127:0*/ __Vtemp228[4];
    WData/*127:0*/ __Vtemp235[4];
    WData/*127:0*/ __Vtemp248[4];
    // Body
    if (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z = 0U;
    }
    if (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) {
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[0U] 
            = vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[0U];
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[1U] 
            = vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[1U];
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[2U] 
            = vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[2U];
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[3U] 
            = (0xffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[3U]);
    }
    if (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) 
         | (2U < (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)))) {
        __Vtemp132[0U] = 0U;
        __Vtemp132[1U] = 0U;
        __Vtemp132[2U] = 0U;
        __Vtemp132[3U] = 0U;
        VL_EXTEND_WW(117,116, __Vtemp133, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem);
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z[0U] 
            = (VL_LTES_IWW(1,117,117, __Vtemp132, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)
                ? vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[0U]
                : __Vtemp133[0U]);
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z[1U] 
            = (VL_LTES_IWW(1,117,117, __Vtemp132, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)
                ? vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[1U]
                : __Vtemp133[1U]);
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z[2U] 
            = (VL_LTES_IWW(1,117,117, __Vtemp132, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)
                ? vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[2U]
                : __Vtemp133[2U]);
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z[3U] 
            = (0x7ffffU & (VL_LTES_IWW(1,117,117, __Vtemp132, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)
                            ? vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[3U]
                            : __Vtemp133[3U]));
    }
    if (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z 
            = ((0U == (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                          << 3U)) | 
                             (vlTOPp->a[3U] >> 0x1dU)))) 
               | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S));
    }
    if (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z 
            = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S) 
               | (0U == (7U & ((0x7fff8U & (vlTOPp->b[4U] 
                                            << 3U)) 
                               | (vlTOPp->b[3U] >> 0x1dU)))));
    }
    if (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z 
            = (1U & ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)
                      ? ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                          ? (1U & vlTOPp->a[4U]) : 
                         ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S)
                           ? (1U & vlTOPp->b[4U]) : 1U))
                      : (vlTOPp->a[4U] ^ vlTOPp->b[4U])));
    }
    if (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) {
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z 
            = vlTOPp->roundingMode;
    }
    __Vtemp138[0U] = 0U;
    __Vtemp138[1U] = 0U;
    __Vtemp138[2U] = 0U;
    __Vtemp138[3U] = 0U;
    if (((((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)) 
          | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)) 
         | ((~ (IData)(vlTOPp->inReady)) & VL_LTES_IWW(1,117,117, __Vtemp138, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)))) {
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z 
            = (0U != (((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[0U] 
                        | vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[1U]) 
                       | vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[2U]) 
                      | vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[3U]));
    }
    __Vtemp140[0U] = 0U;
    __Vtemp140[1U] = 0U;
    __Vtemp140[2U] = 0U;
    __Vtemp140[3U] = 0U;
    if (((((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)) 
          | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)) 
         | ((~ (IData)(vlTOPp->inReady)) & VL_LTES_IWW(1,117,117, __Vtemp140, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem)))) {
        __Vtemp156[0U] = 0U;
        __Vtemp156[1U] = 0U;
        __Vtemp156[2U] = 0U;
        __Vtemp156[3U] = 0U;
        VL_EXTEND_WI(115,1, __Vtemp157, VL_LTES_IWW(1,117,117, __Vtemp156, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem));
        VL_SHIFTL_WWI(115,115,32, __Vtemp158, __Vtemp157, 0x72U);
        __Vtemp166[0U] = 1U;
        __Vtemp166[1U] = 0U;
        __Vtemp166[2U] = 0U;
        __Vtemp166[3U] = 0U;
        VL_SHIFTL_WWI(116,116,7, __Vtemp167, __Vtemp166, (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
        __Vtemp170[0U] = ((__Vtemp167[1U] << 0x1eU) 
                          | (__Vtemp167[0U] >> 2U));
        __Vtemp170[1U] = ((__Vtemp167[2U] << 0x1eU) 
                          | (__Vtemp167[1U] >> 2U));
        __Vtemp170[2U] = ((0xc0000000U & (__Vtemp167[3U] 
                                          << 0x1eU)) 
                          | (__Vtemp167[2U] >> 2U));
        __Vtemp170[3U] = (0x3ffffU & (__Vtemp167[3U] 
                                      >> 2U));
        VL_EXTEND_WW(115,114, __Vtemp171, __Vtemp170);
        __Vtemp141[1U] = (((((IData)(vlTOPp->inReady) 
                             & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))
                             ? ((3U & (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                         ? vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[0U]
                                         : ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S)
                                             ? vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[0U]
                                             : 0U)) 
                                       >> 0x1eU)) | 
                                (0xfffffffcU & (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                                  ? 
                                                 vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[1U]
                                                  : 
                                                 ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S)
                                                   ? 
                                                  vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[1U]
                                                   : 0U)) 
                                                << 2U)))
                             : 0U) | (((IData)(vlTOPp->inReady) 
                                       & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)))
                                       ? __Vtemp158[1U]
                                       : 0U)) | ((IData)(vlTOPp->inReady)
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[1U] 
                                                  | __Vtemp171[1U])));
        __Vtemp141[2U] = (((((IData)(vlTOPp->inReady) 
                             & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))
                             ? ((3U & (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                         ? vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[1U]
                                         : ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S)
                                             ? vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[1U]
                                             : 0U)) 
                                       >> 0x1eU)) | 
                                (0xfffffffcU & (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                                  ? 
                                                 vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[2U]
                                                  : 
                                                 ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S)
                                                   ? 
                                                  vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[2U]
                                                   : 0U)) 
                                                << 2U)))
                             : 0U) | (((IData)(vlTOPp->inReady) 
                                       & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)))
                                       ? __Vtemp158[2U]
                                       : 0U)) | ((IData)(vlTOPp->inReady)
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[2U] 
                                                  | __Vtemp171[2U])));
        __Vtemp141[3U] = (0x7ffffU & (((((IData)(vlTOPp->inReady) 
                                         & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))
                                         ? (0x60000U 
                                            | ((3U 
                                                & (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                                     ? 
                                                    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[2U]
                                                     : 
                                                    ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S)
                                                      ? 
                                                     vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[2U]
                                                      : 0U)) 
                                                   >> 0x1eU)) 
                                               | (0x1fffcU 
                                                  & (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                                       ? 
                                                      vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[3U]
                                                       : 
                                                      ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S)
                                                        ? 
                                                       vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[3U]
                                                        : 0U)) 
                                                     << 2U))))
                                         : 0U) | (((IData)(vlTOPp->inReady) 
                                                   & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)))
                                                   ? 
                                                  __Vtemp158[3U]
                                                   : 0U)) 
                                      | ((IData)(vlTOPp->inReady)
                                          ? 0U : (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[3U] 
                                                  | __Vtemp171[3U]))));
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[0U] 
            = (((((IData)(vlTOPp->inReady) & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S))
                  ? (0xfffffffcU & (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)
                                      ? vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[0U]
                                      : ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S)
                                          ? vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[0U]
                                          : 0U)) << 2U))
                  : 0U) | (((IData)(vlTOPp->inReady) 
                            & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S)))
                            ? __Vtemp158[0U] : 0U)) 
               | ((IData)(vlTOPp->inReady) ? 0U : (
                                                   vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[0U] 
                                                   | __Vtemp171[0U])));
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[1U] 
            = __Vtemp141[1U];
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[2U] 
            = __Vtemp141[2U];
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[3U] 
            = __Vtemp141[3U];
    }
    if (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) {
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z 
            = (0x1ffffU & VL_EXTENDS_II(17,17, (((VL_LTES_III(1,32,32, 0xe000U, 
                                                              VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div))
                                                   ? 6U
                                                   : 
                                                  (0xfU 
                                                   & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div 
                                                      >> 0xdU))) 
                                                 << 0xdU) 
                                                | (0x1fffU 
                                                   & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div))));
    }
    if (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z 
            = (((((7U == (7U & ((vlTOPp->a[4U] << 3U) 
                                | (vlTOPp->a[3U] >> 0x1dU)))) 
                  & (~ (vlTOPp->a[3U] >> 0xfU))) | 
                 ((7U == (7U & ((vlTOPp->b[4U] << 3U) 
                                | (vlTOPp->b[3U] >> 0x1dU)))) 
                  & (~ (vlTOPp->b[3U] >> 0xfU)))) | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div)) 
               | (((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)) 
                   & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S))) 
                  & (0U == (7U & ((0x7fff8U & (vlTOPp->b[4U] 
                                               << 3U)) 
                                  | (vlTOPp->b[3U] 
                                     >> 0x1dU))))));
    }
    if (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) {
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z 
            = vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S;
    }
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z)) 
           | ((3U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z))));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
        = ((0xfffffffeU & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[0U] 
                           << 1U)) | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[1U] 
        = ((1U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[0U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[1U] 
                                               << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[2U] 
        = ((1U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[1U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[2U] 
                                               << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
        = ((1U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[2U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[3U] 
                                               << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__invalidExc 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__infiniteExc 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
           & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
            | (4U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
           | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__infiniteExc) 
           | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__invalidExc) 
           | ((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__infiniteExc)) 
              & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
                 & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z))));
    VL_SHIFTRS_WWI(65537,65537,16, __Vtemp178, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0xffffU & (~ (VL_EXTENDS_II(16,17, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z) 
                                  | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                      ? 0x8000U : 0U)))));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
        = ((__Vtemp178[0x1fdU] << 0xfU) | (__Vtemp178[0x1fcU] 
                                           >> 0x11U));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
        = ((__Vtemp178[0x1feU] << 0xfU) | (__Vtemp178[0x1fdU] 
                                           >> 0x11U));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
        = ((__Vtemp178[0x1ffU] << 0xfU) | (__Vtemp178[0x1feU] 
                                           >> 0x11U));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
        = (0x3ffffU & ((__Vtemp178[0x200U] << 0xfU) 
                       | (__Vtemp178[0x1ffU] >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffeU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (1U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffdU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (2U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xfU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffbU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (4U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffff7U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (8U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffefU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffdfU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffbfU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffff7fU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffeffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x100U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        >> 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffdffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x200U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffbffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x400U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffff7ffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x800U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffefffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x1000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffdfffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x2000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffbfffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x4000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffff7fffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x8000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffeffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                          << 0xfU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffdffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                          << 0x11U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffbffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfff7ffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffefffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x100000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffdfffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x200000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffbfffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x400000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xff7fffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x800000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfeffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x1000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            >> 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfdffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x2000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfbffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x4000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xf7ffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x8000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xefffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xdfffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xbfffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0x7fffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffeU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (1U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffdU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (2U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xfU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffbU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (4U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffff7U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (8U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffefU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffdfU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffbfU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffff7fU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffeffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x100U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        >> 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffdffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x200U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffbffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x400U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffff7ffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x800U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffefffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x1000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffdfffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x2000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffbfffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x4000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffff7fffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x8000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffeffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          << 0xfU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffdffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          << 0x11U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffbffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfff7ffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffefffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x100000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffdfffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x200000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffbfffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x400000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xff7fffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x800000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfeffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x1000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            >> 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfdffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x2000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfbffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x4000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xf7ffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x8000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xefffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xdfffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xbfffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0x7fffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffeU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (1U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffdU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (2U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xfU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffbU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (4U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffff7U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (8U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffefU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffdfU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffbfU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffff7fU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffeffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x100U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        >> 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffdffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x200U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffbffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x400U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffff7ffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x800U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffefffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x1000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffdfffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x2000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffbfffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x4000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffff7fffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x8000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffeffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          << 0xfU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffdffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          << 0x11U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffbffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfff7ffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffefffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x100000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffdfffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x200000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffbfffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x400000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xff7fffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x800000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfeffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x1000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            >> 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfdffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x2000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfbffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x4000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xf7ffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x8000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xefffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xdfffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xbfffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0x7fffffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80000000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffeU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (1U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0x11U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffdU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (2U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xfU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffbU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (4U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fff7U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (8U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffefU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x10U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffdfU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x20U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffbfU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x40U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ff7fU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x80U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3feffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x100U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        >> 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fdffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x200U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 1U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fbffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x400U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 3U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3f7ffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x800U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 5U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3efffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x1000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 7U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3dfffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x2000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 9U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3bfffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x4000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 0xbU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x37fffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x8000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 0xdU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x2ffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x10000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          << 0xfU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x1ffffU & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x20000U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          << 0x11U)));
    VL_EXTEND_WI(114,1, __Vtemp182, (1U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                                           >> 0x13U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
        = (3U | (0xfffffffcU & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
                                 | __Vtemp182[0U]) 
                                << 2U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U] 
        = ((3U & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
                   | __Vtemp182[0U]) >> 0x1eU)) | (0xfffffffcU 
                                                   & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
                                                       | __Vtemp182[1U]) 
                                                      << 2U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U] 
        = ((3U & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
                   | __Vtemp182[1U]) >> 0x1eU)) | (0xfffffffcU 
                                                   & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
                                                       | __Vtemp182[2U]) 
                                                      << 2U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U] 
        = ((3U & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
                   | __Vtemp182[2U]) >> 0x1eU)) | (0xfffffffcU 
                                                   & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
                                                       | __Vtemp182[3U]) 
                                                      << 2U)));
    VL_SHIFTR_WWI(116,116,32, __Vtemp188, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != ((((((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                        << 0x1dU) | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                     >> 3U)) & ((__Vtemp188[1U] 
                                                 << 0x1dU) 
                                                | (__Vtemp188[0U] 
                                                   >> 3U))) 
                     | (((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                          << 0x1dU) | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                                       >> 3U)) & ((
                                                   __Vtemp188[2U] 
                                                   << 0x1dU) 
                                                  | (__Vtemp188[1U] 
                                                     >> 3U)))) 
                    | (((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                         << 0x1dU) | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                                      >> 3U)) & ((0xe0000000U 
                                                  & (__Vtemp188[3U] 
                                                     << 0x1dU)) 
                                                 | (__Vtemp188[2U] 
                                                    >> 3U)))) 
                   | (0x1ffffU & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                                   >> 3U) & (__Vtemp188[3U] 
                                             >> 3U))))) 
           | ((0U != (7U & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                            & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U] 
                                << 0x1fU) | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                             >> 1U))))) 
              & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    VL_SHIFTR_WWI(116,116,32, __Vtemp193, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U] 
        = ((~ __Vtemp193[0U]) & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
        = ((~ __Vtemp193[1U]) & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
        = ((~ __Vtemp193[2U]) & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U] 
        = ((~ __Vtemp193[3U]) & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != ((((((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                        << 0x1dU) | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                     >> 3U)) & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U] 
                                                   >> 3U))) 
                     | (((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                          << 0x1dU) | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                                       >> 3U)) & ((
                                                   vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
                                                     >> 3U)))) 
                    | (((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                         << 0x1dU) | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                                      >> 3U)) & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U] 
                                                  << 0x1dU) 
                                                 | (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
                                                    >> 3U)))) 
                   | (0x1ffffU & ((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                                   & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U]) 
                                  >> 3U)))) | ((0U 
                                                != 
                                                (7U 
                                                 & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                                    & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U]))) 
                                               & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    __Vtemp203[0U] = 1U;
    __Vtemp203[1U] = 0U;
    __Vtemp203[2U] = 0U;
    __Vtemp203[3U] = 0U;
    __Vtemp204[0U] = (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                      | vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]);
    __Vtemp204[1U] = (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                      | vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]);
    __Vtemp204[2U] = (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                      | vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]);
    __Vtemp204[3U] = (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                      | vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]);
    VL_SHIFTR_WWI(116,116,32, __Vtemp205, __Vtemp204, 2U);
    VL_ADD_W(4, __Vtemp206, __Vtemp203, __Vtemp205);
    VL_SHIFTR_WWI(116,116,32, __Vtemp207, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    __Vtemp214[0U] = (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                      & (~ vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]));
    __Vtemp214[1U] = (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[1U] 
                      & (~ vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]));
    __Vtemp214[2U] = (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[2U] 
                      & (~ vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]));
    __Vtemp214[3U] = (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                      & (~ vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]));
    VL_SHIFTR_WWI(116,116,32, __Vtemp215, __Vtemp214, 2U);
    VL_SHIFTR_WWI(116,116,32, __Vtemp216, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask, 1U);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[0U] 
        = (((((0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              | (4U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
             & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp206[0U] & (~ ((((0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                      & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                     & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                     ? __Vtemp207[0U]
                                     : 0U))) : (__Vtemp215[0U] 
                                                | (((6U 
                                                     == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                    & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                    ? 
                                                   __Vtemp216[0U]
                                                    : 0U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[1U] 
        = (((((0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              | (4U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
             & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp206[1U] & (~ ((((0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                      & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                     & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                     ? __Vtemp207[1U]
                                     : 0U))) : (__Vtemp215[1U] 
                                                | (((6U 
                                                     == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                    & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                    ? 
                                                   __Vtemp216[1U]
                                                    : 0U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[2U] 
        = (((((0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
              | (4U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
             & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp206[2U] & (~ ((((0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                      & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                     & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                     ? __Vtemp207[2U]
                                     : 0U))) : (__Vtemp215[2U] 
                                                | (((6U 
                                                     == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                    & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                    ? 
                                                   __Vtemp216[2U]
                                                    : 0U)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
        = (0x7ffffU & (((((0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                          | (4U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                         & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                        | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                           & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                        ? (__Vtemp206[3U] & (~ ((((0U 
                                                   == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                  & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                                 & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                                 ? 
                                                __Vtemp207[3U]
                                                 : 0U)))
                        : (__Vtemp215[3U] | (((6U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                              & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                              ? __Vtemp216[3U]
                                              : 0U))));
    VL_SHIFTR_WWI(115,115,32, __Vtemp228, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig, 1U);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[0U] 
        = ((0x80000U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U])
            ? __Vtemp228[0U] : vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[0U]);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[1U] 
        = ((0x80000U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U])
            ? __Vtemp228[1U] : vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[1U]);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[2U] 
        = ((0x80000U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U])
            ? __Vtemp228[2U] : vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[2U]);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U] 
        = (0xffffU & ((0x80000U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U])
                       ? __Vtemp228[3U] : vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U]));
    VL_SHIFTR_WWI(115,115,32, __Vtemp235, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig, 0x71U);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x3ffffU & (VL_EXTENDS_II(18,17, (0x1ffffU 
                                             & VL_EXTENDS_II(17,17, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))) 
                       + __Vtemp235[0U]));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x3f92U, VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           & ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp), 0xeU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp248[3U] = ((0xffff0000U & (((((((((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
                                              & (~ 
                                                 (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z) 
                                                   | VL_GTS_III(1,32,32, 0x3f92U, 
                                                                VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))
                                                   ? 0xe000U
                                                   : 0U))) 
                                             & (~ ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                    ? 0xffffc06dU
                                                    : 0U))) 
                                            & (~ ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                   ? 0x4000U
                                                   : 0U))) 
                                           & (~ ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                  ? 0x2000U
                                                  : 0U))) 
                                          | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                              ? 0x3f92U
                                              : 0U)) 
                                         | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                             ? 0xbfffU
                                             : 0U)) 
                                        | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                            ? 0xc000U
                                            : 0U)) 
                                       | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                           ? 0xe000U
                                           : 0U)) << 0x10U)) 
                      | (0xffffU & (((0xffff8000U & 
                                      (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                        << 0xfU) | 
                                       (0xffff8000U 
                                        & ((((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                             & VL_LTES_III(1,32,32, 0x3f92U, 
                                                           VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                            << 0xfU) 
                                           & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U])))) 
                                     | (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                         | ((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                                          VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                         ? (0x7fffU 
                                            & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U])
                                         : 0U)) | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))))));
    vlTOPp->out[0U] = ((((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[0U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[1U] = ((((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[1U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[2U] = ((((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[2U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[3U] = __Vtemp248[3U];
    vlTOPp->out[4U] = vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z;
}

VL_INLINE_OPT void VdivSqrtRecF128_small_div::_sequent__TOP__3(VdivSqrtRecF128_small_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_div::_sequent__TOP__3\n"); );
    VdivSqrtRecF128_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->nReset) {
        if ((1U & ((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                   | (IData)(vlTOPp->inValid)))) {
            vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum 
                = (0x7fU & ((((((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
                                & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_div)))
                                ? 1U : 0U) | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)
                                               ? 0x73U
                                               : 0U)) 
                             | ((1U & ((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                                       & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2))))
                                 ? ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum) 
                                    - (IData)(1U)) : 0U)) 
                            | (((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                                & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2))
                                ? 1U : 0U)));
        }
    } else {
        vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum = 0U;
    }
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle 
        = (0U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->outValid = (1U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 
        = ((3U == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
           & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z[3U] 
              >> 0x12U));
    vlTOPp->inReady = (1U >= (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
}

VL_INLINE_OPT void VdivSqrtRecF128_small_div::_combo__TOP__4(VdivSqrtRecF128_small_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_div::_combo__TOP__4\n"); );
    VdivSqrtRecF128_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp260[4];
    WData/*127:0*/ __Vtemp261[4];
    WData/*127:0*/ __Vtemp265[4];
    WData/*127:0*/ __Vtemp266[4];
    WData/*127:0*/ __Vtemp271[4];
    WData/*127:0*/ __Vtemp273[4];
    WData/*127:0*/ __Vtemp274[4];
    WData/*127:0*/ __Vtemp277[4];
    WData/*127:0*/ __Vtemp278[4];
    WData/*127:0*/ __Vtemp279[4];
    WData/*127:0*/ __Vtemp284[4];
    WData/*127:0*/ __Vtemp287[4];
    WData/*127:0*/ __Vtemp288[4];
    WData/*127:0*/ __Vtemp291[4];
    WData/*127:0*/ __Vtemp292[4];
    WData/*127:0*/ __Vtemp298[4];
    WData/*127:0*/ __Vtemp299[4];
    WData/*127:0*/ __Vtemp300[4];
    // Body
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->b[4U] 
                                      << 2U)) | (vlTOPp->b[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->b[3U] >> 0x1dU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[0U] 
        = vlTOPp->b[0U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[1U] 
        = vlTOPp->b[1U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[2U] 
        = vlTOPp->b[2U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->b[4U] 
                                             << 3U)) 
                                         | (vlTOPp->b[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->b[3U]));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->b[4U] 
                                      << 2U)) | (vlTOPp->b[3U] 
                                                 >> 0x1eU)))) 
           & (vlTOPp->b[3U] >> 0x1dU));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[0U] 
        = vlTOPp->a[0U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[1U] 
        = vlTOPp->a[1U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[2U] 
        = vlTOPp->a[2U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->a[4U] 
                                             << 3U)) 
                                         | (vlTOPp->a[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->a[3U]));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div 
        = (0x3ffffU & ((0xffffU & ((vlTOPp->a[4U] << 0x10U) 
                                   | (vlTOPp->a[3U] 
                                      >> 0x10U))) + 
                       ((0x38000U & (VL_NEGATE_I((IData)(
                                                         (1U 
                                                          & ((0x1fffeU 
                                                              & (vlTOPp->b[4U] 
                                                                 << 1U)) 
                                                             | (vlTOPp->b[3U] 
                                                                >> 0x1fU))))) 
                                     << 0xfU)) | (0x7fffU 
                                                  & (~ 
                                                     (0xffffU 
                                                      & ((vlTOPp->b[4U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->b[3U] 
                                                            >> 0x10U))))))));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                      << 2U)) | (vlTOPp->a[3U] 
                                                 >> 0x1eU)))) 
           & (vlTOPp->a[3U] >> 0x1dU));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                      << 2U)) | (vlTOPp->a[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->a[3U] >> 0x1dU)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x3f92U, VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)) 
           | ((((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,17, 
                                                                        (0x1ffffU 
                                                                         & VL_EXTENDS_II(17,17, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))), 0xfU))) 
               & ((0x80000U & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U])
                   ? (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                      >> 3U) : (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x80000U 
                                                       & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U])
                                                       ? 
                                                      (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                                       >> 4U)
                                                       : 
                                                      (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                                       >> 3U)))) 
                                                 & ((0x80000U 
                                                     & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U])
                                                     ? 
                                                    (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
                                                     >> 0x12U)
                                                     : 
                                                    (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
                                                     >> 0x11U))) 
                                                & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z))) 
                                                   & ((0x80000U 
                                                       & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U])
                                                       ? 
                                                      (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                                       >> 2U)
                                                       : 
                                                      (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & (((vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[3U] 
                                                          >> 0x13U) 
                                                         & (vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U] 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig[0U])))))))));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering 
        = ((IData)(vlTOPp->inReady) & (IData)(vlTOPp->inValid));
    VL_EXTEND_WW(116,114, __Vtemp260, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S);
    VL_SHIFTL_WWI(116,116,32, __Vtemp261, __Vtemp260, 1U);
    VL_EXTEND_WW(116,115, __Vtemp265, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z);
    VL_SHIFTL_WWI(116,116,32, __Vtemp266, __Vtemp265, 1U);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem[0U] 
        = (((IData)(vlTOPp->inReady) ? __Vtemp261[0U]
             : 0U) | ((IData)(vlTOPp->inReady) ? 0U
                       : __Vtemp266[0U]));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem[1U] 
        = (((IData)(vlTOPp->inReady) ? __Vtemp261[1U]
             : 0U) | ((IData)(vlTOPp->inReady) ? 0U
                       : __Vtemp266[1U]));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem[2U] 
        = (((IData)(vlTOPp->inReady) ? __Vtemp261[2U]
             : 0U) | ((IData)(vlTOPp->inReady) ? 0U
                       : __Vtemp266[2U]));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem[3U] 
        = (0xfffffU & (((IData)(vlTOPp->inReady) ? 
                        __Vtemp261[3U] : 0U) | ((IData)(vlTOPp->inReady)
                                                 ? 0U
                                                 : 
                                                __Vtemp266[3U])));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div 
        = (((0U == (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                       << 3U)) | (vlTOPp->a[3U] 
                                                  >> 0x1dU)))) 
            & (0U == (7U & ((0x7fff8U & (vlTOPp->b[4U] 
                                         << 3U)) | 
                            (vlTOPp->b[3U] >> 0x1dU))))) 
           | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S) 
              & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S)));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S 
        = (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
            | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S)) 
           | (0U == (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                        << 3U)) | (
                                                   vlTOPp->a[3U] 
                                                   >> 0x1dU)))));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__infiniteExc) 
                                          << 3U) | 
                                         (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                            << 1U) 
                                           | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(1,32,32, 0x3f92U, 
                                                               VL_EXTENDS_II(32,18, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)) 
                                                    | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))))))));
    VL_EXTEND_WW(117,116, __Vtemp271, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem);
    VL_EXTEND_WW(115,114, __Vtemp273, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S);
    VL_SHIFTL_WWI(115,115,32, __Vtemp274, __Vtemp273, 1U);
    __Vtemp277[0U] = vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[0U];
    __Vtemp277[1U] = vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[1U];
    __Vtemp277[2U] = vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[2U];
    __Vtemp277[3U] = (0x10000U | vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z[3U]);
    VL_EXTEND_WW(115,113, __Vtemp278, __Vtemp277);
    VL_SHIFTL_WWI(115,115,32, __Vtemp279, __Vtemp278, 1U);
    VL_SHIFTL_WWI(115,115,32, __Vtemp284, vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z, 1U);
    __Vtemp287[0U] = 1U;
    __Vtemp287[1U] = 0U;
    __Vtemp287[2U] = 0U;
    __Vtemp287[3U] = 0U;
    VL_SHIFTL_WWI(116,116,7, __Vtemp288, __Vtemp287, (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    __Vtemp291[0U] = ((__Vtemp288[1U] << 0x1eU) | (
                                                   __Vtemp288[0U] 
                                                   >> 2U));
    __Vtemp291[1U] = ((__Vtemp288[2U] << 0x1eU) | (
                                                   __Vtemp288[1U] 
                                                   >> 2U));
    __Vtemp291[2U] = ((0xc0000000U & (__Vtemp288[3U] 
                                      << 0x1eU)) | 
                      (__Vtemp288[2U] >> 2U));
    __Vtemp291[3U] = (0x3ffffU & (__Vtemp288[3U] >> 2U));
    VL_EXTEND_WW(115,114, __Vtemp292, __Vtemp291);
    __Vtemp298[0U] = ((((IData)(vlTOPp->inReady) ? 
                        __Vtemp274[0U] : 0U) | ((1U 
                                                 & ((~ (IData)(vlTOPp->inReady)) 
                                                    & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                                                 ? 
                                                __Vtemp279[0U]
                                                 : 0U)) 
                      | (((~ (IData)(vlTOPp->inReady)) 
                          & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                          ? (__Vtemp284[0U] | __Vtemp292[0U])
                          : 0U));
    __Vtemp298[1U] = ((((IData)(vlTOPp->inReady) ? 
                        __Vtemp274[1U] : 0U) | ((1U 
                                                 & ((~ (IData)(vlTOPp->inReady)) 
                                                    & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                                                 ? 
                                                __Vtemp279[1U]
                                                 : 0U)) 
                      | (((~ (IData)(vlTOPp->inReady)) 
                          & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                          ? (__Vtemp284[1U] | __Vtemp292[1U])
                          : 0U));
    __Vtemp298[2U] = ((((IData)(vlTOPp->inReady) ? 
                        __Vtemp274[2U] : 0U) | ((1U 
                                                 & ((~ (IData)(vlTOPp->inReady)) 
                                                    & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                                                 ? 
                                                __Vtemp279[2U]
                                                 : 0U)) 
                      | (((~ (IData)(vlTOPp->inReady)) 
                          & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                          ? (__Vtemp284[2U] | __Vtemp292[2U])
                          : 0U));
    __Vtemp298[3U] = (0x7ffffU & ((((IData)(vlTOPp->inReady)
                                     ? __Vtemp274[3U]
                                     : 0U) | ((1U & 
                                               ((~ (IData)(vlTOPp->inReady)) 
                                                & (~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))))
                                               ? __Vtemp279[3U]
                                               : 0U)) 
                                  | (((~ (IData)(vlTOPp->inReady)) 
                                      & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                      ? (__Vtemp284[3U] 
                                         | __Vtemp292[3U])
                                      : 0U)));
    VL_EXTEND_WW(117,115, __Vtemp299, __Vtemp298);
    VL_SUB_W(4, __Vtemp300, __Vtemp271, __Vtemp299);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[0U] 
        = __Vtemp300[0U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[1U] 
        = __Vtemp300[1U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[2U] 
        = __Vtemp300[2U];
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem[3U] 
        = (0x1fffffU & __Vtemp300[3U]);
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S 
        = (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
            | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S)) 
           | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_div 
        = (1U & ((~ (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S)) 
                 & (~ (((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S) 
                        | (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S)) 
                       | (0U == (7U & ((0x7fff8U & 
                                        (vlTOPp->b[4U] 
                                         << 3U)) | 
                                       (vlTOPp->b[3U] 
                                        >> 0x1dU))))))));
    vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase 
        = ((IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlTOPp->divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_div));
}

void VdivSqrtRecF128_small_div::_eval(VdivSqrtRecF128_small_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_div::_eval\n"); );
    VdivSqrtRecF128_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VdivSqrtRecF128_small_div::_eval_initial(VdivSqrtRecF128_small_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_div::_eval_initial\n"); );
    VdivSqrtRecF128_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__nReset = vlTOPp->nReset;
}

void VdivSqrtRecF128_small_div::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_div::final\n"); );
    // Variables
    VdivSqrtRecF128_small_div__Syms* __restrict vlSymsp = this->__VlSymsp;
    VdivSqrtRecF128_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VdivSqrtRecF128_small_div::_eval_settle(VdivSqrtRecF128_small_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_div::_eval_settle\n"); );
    VdivSqrtRecF128_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VdivSqrtRecF128_small_div::_change_request(VdivSqrtRecF128_small_div__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_div::_change_request\n"); );
    VdivSqrtRecF128_small_div* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VdivSqrtRecF128_small_div::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_div::_eval_debug_assertions\n"); );
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
    if (VL_UNLIKELY((b[4U] & 0xfffffffeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif // VL_DEBUG

void VdivSqrtRecF128_small_div::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdivSqrtRecF128_small_div::_ctor_var_reset\n"); );
    // Body
    nReset = VL_RAND_RESET_I(1);
    clock = VL_RAND_RESET_I(1);
    control = VL_RAND_RESET_I(1);
    inReady = VL_RAND_RESET_I(1);
    inValid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, a);
    VL_RAND_RESET_W(129, b);
    roundingMode = VL_RAND_RESET_I(3);
    outValid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, out);
    exceptionFlags = VL_RAND_RESET_I(5);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__invalidExc = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__infiniteExc = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(116, divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__out_sig);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfA_S = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(114, divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigA_S);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInfB_S = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(114, divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigB_S);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_S = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__normalCase_S_div = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div = VL_RAND_RESET_I(18);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__cycleNum = VL_RAND_RESET_I(7);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isInf_Z = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__isZero_Z = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sign_Z = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sExp_Z = VL_RAND_RESET_I(17);
    VL_RAND_RESET_W(112, divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__fractB_Z);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(115, divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem_Z);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(115, divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__sigX_Z);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__idle = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(116, divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__rem);
    VL_RAND_RESET_W(117, divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__divSqrtRecFNToRaw__DOT__trialRem);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(116, divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    VL_RAND_RESET_W(114, divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main);
    VL_RAND_RESET_W(116, divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(115, divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig);
    divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(18);
    VL_RAND_RESET_W(65537, divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c);
    VL_RAND_RESET_W(114, divSqrtRecF128_small_div__DOT__divSqrtRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut);
}
