// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmulAddRecF64_mul.h for the primary calling header

#include "VmulAddRecF64_mul.h"
#include "VmulAddRecF64_mul__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VmulAddRecF64_mul) {
    VmulAddRecF64_mul__Syms* __restrict vlSymsp = __VlSymsp = new VmulAddRecF64_mul__Syms(this, name());
    VmulAddRecF64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VmulAddRecF64_mul::__Vconfigure(VmulAddRecF64_mul__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VmulAddRecF64_mul::~VmulAddRecF64_mul() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VmulAddRecF64_mul::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmulAddRecF64_mul::eval\n"); );
    VmulAddRecF64_mul__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VmulAddRecF64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/mulAddRecFN_spec.v", 146, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VmulAddRecF64_mul::_eval_initial_loop(VmulAddRecF64_mul__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/mulAddRecFN_spec.v", 146, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VmulAddRecF64_mul::_settle__TOP__1(VmulAddRecF64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF64_mul::_settle__TOP__1\n"); );
    VmulAddRecF64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*191:0*/ __Vtemp7[6];
    WData/*191:0*/ __Vtemp8[6];
    WData/*95:0*/ __Vtemp13[3];
    WData/*95:0*/ __Vtemp14[3];
    WData/*127:0*/ __Vtemp21[4];
    WData/*127:0*/ __Vtemp22[4];
    WData/*127:0*/ __Vtemp23[4];
    WData/*127:0*/ __Vtemp26[4];
    WData/*127:0*/ __Vtemp27[4];
    WData/*127:0*/ __Vtemp28[4];
    WData/*127:0*/ __Vtemp48[4];
    WData/*127:0*/ __Vtemp49[4];
    WData/*127:0*/ __Vtemp50[4];
    WData/*127:0*/ __Vtemp55[4];
    WData/*127:0*/ __Vtemp58[4];
    WData/*127:0*/ __Vtemp59[4];
    WData/*4127:0*/ __Vtemp62[129];
    WData/*4127:0*/ __Vtemp63[129];
    WData/*95:0*/ __Vtemp65[3];
    IData/*31:0*/ __Vilp;
    // Body
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__c = 0x10000U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x80U] = 1U;
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__c = VL_ULL(0x100000000);
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c[0U] = 0U;
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c[1U] = 0U;
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c[2U] = 1U;
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->a[2U] 
                                              << 3U)) 
                                          | (vlTOPp->a[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->a[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->a[0U])))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigB 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->b[2U] 
                                              << 3U)) 
                                          | (vlTOPp->b[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->b[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->b[0U])))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                       << 2U)) | (vlTOPp->a[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->a[1U] >> 0x1dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                       << 2U)) | (vlTOPp->b[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->b[1U] >> 0x1dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                       << 2U)) | (vlTOPp->a[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->a[1U] >> 0x1dU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                       << 2U)) | (vlTOPp->b[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->b[1U] >> 0x1dU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd 
        = (1U & (vlTOPp->a[2U] ^ vlTOPp->b[2U]));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd 
        = (0x3fffU & ((IData)(0x3838U) + (VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->a[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->a[1U] 
                                                               >> 0x14U)))) 
                                          + VL_EXTENDS_II(14,13, 
                                                          (0xfffU 
                                                           & ((vlTOPp->b[2U] 
                                                               << 0xcU) 
                                                              | (vlTOPp->b[1U] 
                                                                 >> 0x14U)))))));
    vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[0U] = 0U;
    vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] = 0U;
    vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] = 
        (1U & (vlTOPp->a[2U] ^ vlTOPp->b[2U]));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA) 
           | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
           | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd 
        = (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
            & (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                          << 3U)) | 
                            (vlTOPp->b[1U] >> 0x1dU))))) 
           | ((0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                          << 3U)) | 
                            (vlTOPp->a[1U] >> 0x1dU)))) 
              & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros 
        = (((0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                        << 3U)) | (
                                                   vlTOPp->a[1U] 
                                                   >> 0x1dU)))) 
            | (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                          << 3U)) | 
                            (vlTOPp->b[1U] >> 0x1dU))))) 
           & (0U == (7U & ((0x7ffff8U & (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] 
                                         << 3U)) | 
                           (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                            >> 0x1dU)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] 
                                       << 2U)) | (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                 >> 0x1dU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] 
                                       << 2U)) | (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
              >> 0x1dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags 
        = (1U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                 ^ vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U]));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] 
                                              << 3U)) 
                                          | (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[0U])))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist 
        = (0x3fffU & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd) 
                      - VL_EXTENDS_II(14,13, (0xfffU 
                                              & ((vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                                                    >> 0x14U))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC 
        = ((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd)) 
           & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB) 
           | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd) 
           | ((((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB)) 
                & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB)) 
               & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
              & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3ffeU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | (0U != (0xfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3ffdU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 4U))))) 
              << 1U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3ffbU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 8U))))) 
              << 2U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3ff7U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0xcU))))) 
              << 3U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3fefU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x10U))))) 
              << 4U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3fdfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x14U))))) 
              << 5U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3fbfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x18U))))) 
              << 6U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3f7fU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x1cU))))) 
              << 7U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3effU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x20U))))) 
              << 8U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3dffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x24U))))) 
              << 9U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3bffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x28U))))) 
              << 0xaU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x37ffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x2cU))))) 
              << 0xbU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x2fffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x30U))))) 
              << 0xcU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x1fffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                            >> 0x34U))))) 
              << 0xdU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign 
        = (((0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                        << 3U)) | (
                                                   vlTOPp->a[1U] 
                                                   >> 0x1dU)))) 
            | (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                          << 3U)) | 
                            (vlTOPp->b[1U] >> 0x1dU))))) 
           | VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase 
        = ((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
             | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB)) 
            | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
           | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant 
        = ((0U != (7U & ((0x7ffff8U & (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] 
                                       << 3U)) | (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                                                  >> 0x1dU)))) 
           & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign) 
              | (0x35U >= (0x1fffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0xa1U > (0x1fffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0xffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))
                     : 0xa1U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum 
        = (0x1fffU & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant)
                       ? VL_EXTENDS_II(32,13, (0xfffU 
                                               & ((vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                                                     >> 0x14U))))
                       : (VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd)) 
                          - (IData)(0x35U))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut 
        = (0x1fffU & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                     (0xfU & (~ ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                                 >> 2U)))) 
                      >> 1U));
    __Vtemp7[0U] = VL_NEGATE_I((IData)((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    __Vtemp7[1U] = VL_NEGATE_I((IData)((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    __Vtemp7[2U] = VL_NEGATE_I((IData)((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    __Vtemp7[3U] = ((0xffff8000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                             & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                                 ? 
                                                (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                                 : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC))) 
                                    << 0xfU)) | (0x7fffU 
                                                 & VL_NEGATE_I((IData)((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __Vtemp7[4U] = ((0x7fffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                         & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                             ? (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                             : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC))) 
                                >> 0x11U)) | (0xffff8000U 
                                              & ((IData)(
                                                         ((VL_ULL(0x3fffffffffffff) 
                                                           & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                                               ? 
                                                              (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                                               : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)) 
                                                          >> 0x20U)) 
                                                 << 0xfU)));
    __Vtemp7[5U] = (0x7fffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                         & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                             ? (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                             : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)) 
                                        >> 0x20U)) 
                               >> 0x11U));
    VL_SHIFTRS_WWI(165,165,8, __Vtemp8, __Vtemp7, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp8[0U];
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp8[1U];
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = __Vtemp8[2U];
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[3U] 
        = __Vtemp8[3U];
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[4U] 
        = __Vtemp8[4U];
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[5U] 
        = (0xfU & __Vtemp8[5U]);
    __Vtemp13[0U] = 0U;
    __Vtemp13[1U] = 0U;
    __Vtemp13[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp14, __Vtemp13, (0x3fU 
                                                   & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                                      >> 2U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut 
        = (0x1fffU & ((__Vtemp14[1U] << 8U) | (__Vtemp14[0U] 
                                               >> 0x18U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1ffeU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 0xcU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1ffdU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 0xaU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1ffbU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 8U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1ff7U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 6U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1fefU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                       >> 4U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1fdfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                       >> 2U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1fbfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x40U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1f7fU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x80U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                       << 2U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1effU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x100U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                        << 4U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1dffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x200U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                        << 6U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1bffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x400U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                        << 8U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x17ffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x800U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                        << 0xaU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0xfffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x1000U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                         << 0xcU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1ffeU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 0xcU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1ffdU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 0xaU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1ffbU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 8U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1ff7U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 6U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1fefU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                       >> 4U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1fdfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                       >> 2U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1fbfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x40U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1f7fU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x80U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                       << 2U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1effU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x100U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                        << 4U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1dffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x200U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                        << 6U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1bffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x400U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                        << 8U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x17ffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x800U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                        << 0xaU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0xfffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x1000U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                         << 0xcU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC) 
                  & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U] 
        = ((0xfffffffeU & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                            << 0x1eU) | (0x3ffffffeU 
                                         & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                            >> 2U)))) 
           | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
               ? ((7U == (7U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                  & (~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)))
               : ((0U != (7U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                  | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
        = ((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                  >> 2U)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
        = ((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[3U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                  >> 2U)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[3U] 
        = ((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[3U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[4U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[3U] 
                                                  >> 2U)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[4U] 
        = ((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[4U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[5U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[4U] 
                                                  >> 2U)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[5U] 
        = ((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[5U] 
                  >> 2U)) | (2U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[5U] 
                                   >> 2U)));
    VL_EXTEND_WQ(107,53, __Vtemp21, (VL_ULL(0x1fffffffffffff) 
                                     & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA));
    VL_EXTEND_WQ(107,53, __Vtemp22, (VL_ULL(0x1fffffffffffff) 
                                     & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigB));
    VL_MUL_W(4, __Vtemp23, __Vtemp21, __Vtemp22);
    __Vtemp26[0U] = ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
                      << 0x1fU) | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U] 
                                   >> 1U));
    __Vtemp26[1U] = ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                      << 0x1fU) | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
                                   >> 1U));
    __Vtemp26[2U] = ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[3U] 
                      << 0x1fU) | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                                   >> 1U));
    __Vtemp26[3U] = (0x3ffU & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[4U] 
                                << 0x1fU) | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[3U] 
                                             >> 1U)));
    VL_EXTEND_WW(107,106, __Vtemp27, __Vtemp26);
    VL_ADD_W(4, __Vtemp28, __Vtemp23, __Vtemp27);
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[0U] 
        = __Vtemp28[0U];
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[1U] 
        = __Vtemp28[1U];
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[2U] 
        = __Vtemp28[2U];
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[3U] 
        = (0x7ffU & __Vtemp28[3U]);
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
        = (VL_ULL(0x7fffffffffffff) & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                                        ? (VL_ULL(0x8000000000000) 
                                           | (VL_ULL(0x7ffffffffffff) 
                                              & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                                  ? vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA
                                                  : 
                                                 ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                   ? vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigB
                                                   : 
                                                  ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                    ? vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC
                                                    : VL_ULL(0))))))
                                        : (((QData)((IData)(
                                                            vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[5U])) 
                                            << 0x35U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[4U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[3U])) 
                                                 >> 0xbU)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState 
        = (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
            << 5U) | ((((((((7U == (7U & ((vlTOPp->a[2U] 
                                           << 3U) | 
                                          (vlTOPp->a[1U] 
                                           >> 0x1dU)))) 
                            & (~ (vlTOPp->a[1U] >> 0x13U))) 
                           | ((7U == (7U & ((vlTOPp->b[2U] 
                                             << 3U) 
                                            | (vlTOPp->b[1U] 
                                               >> 0x1dU)))) 
                              & (~ (vlTOPp->b[1U] >> 0x13U)))) 
                          | ((7U == (7U & ((vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] 
                                            << 3U) 
                                           | (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                                              >> 0x1dU)))) 
                             & (~ (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                                   >> 0x13U)))) | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc)) 
                        | ((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                           & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd))) 
                       << 4U) | ((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) 
                                   | ((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                      & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags))) 
                                  << 3U) | (((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                               | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
                                              | ((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                 & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant))) 
                                             << 2U) 
                                            | ((2U 
                                                & (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                    | ((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                       & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U])) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
                                                      | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc))
                                                      ? 
                                                     ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                                       ? 
                                                      (1U 
                                                       & vlTOPp->a[2U])
                                                       : 
                                                      ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                        ? 
                                                       (1U 
                                                        & vlTOPp->b[2U])
                                                        : 
                                                       ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                         ? 
                                                        (1U 
                                                         & vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U])
                                                         : 1U)))
                                                      : 
                                                     (((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                                         & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                        | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                                                           & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                                       | ((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                            & (2U 
                                                               != (IData)(vlTOPp->roundingMode))) 
                                                           & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                          & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                                      | (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                          & (2U 
                                                             == (IData)(vlTOPp->roundingMode))) 
                                                         & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                                                            | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)))))))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isInf 
        = (1U & (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 2U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__invalidExc 
        = (1U & (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 4U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isNaN 
        = (1U & (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 3U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
        = ((0xfffffffeU & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[0U] 
                           << 1U)) | (1U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 1U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
        = ((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[0U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[1U] 
                                               << 1U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
        = ((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[1U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[2U] 
                                               << 1U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
        = ((0xfffff800U & ((IData)((VL_ULL(0x7fffffffffffff) 
                                    & ((0x400U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[3U])
                                        ? (VL_ULL(1) 
                                           + vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC)
                                        : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC))) 
                           << 0xbU)) | ((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[2U] 
                                               >> 0x1fU)) 
                                        | (0x7feU & 
                                           (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[3U] 
                                            << 1U))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[4U] 
        = ((0x7ffU & ((IData)((VL_ULL(0x7fffffffffffff) 
                               & ((0x400U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[3U])
                                   ? (VL_ULL(1) + vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC)
                                   : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC))) 
                      >> 0x15U)) | (0xfffff800U & ((IData)(
                                                           ((VL_ULL(0x7fffffffffffff) 
                                                             & ((0x400U 
                                                                 & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[3U])
                                                                 ? 
                                                                (VL_ULL(1) 
                                                                 + vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC)
                                                                 : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC)) 
                                                            >> 0x20U)) 
                                                   << 0xbU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[5U] 
        = (0x7ffU & ((IData)(((VL_ULL(0x7fffffffffffff) 
                               & ((0x400U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[3U])
                                   ? (VL_ULL(1) + vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC)
                                   : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC)) 
                              >> 0x20U)) >> 0x15U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isNaN));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U] 
        = ((8U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
            ? (~ ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
                   << 0xaU) | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                               >> 0x16U))) : ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
                                               << 9U) 
                                              | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                                 >> 0x17U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U] 
        = ((8U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
            ? (~ ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
                   << 0xaU) | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
                               >> 0x16U))) : ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
                                               << 9U) 
                                              | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
                                                 >> 0x17U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[2U] 
        = ((8U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
            ? (~ ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[4U] 
                   << 0xaU) | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
                               >> 0x16U))) : ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[4U] 
                                               << 9U) 
                                              | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
                                                 >> 0x17U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[3U] 
        = (0xfffU & ((8U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                      ? (~ ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[5U] 
                             << 0xaU) | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[4U] 
                                         >> 0x16U)))
                      : ((0x600U & ((IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                             >> 0x35U)) 
                                    << 9U)) | (0x1ffU 
                                               & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[5U] 
                                                   << 9U) 
                                                  | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[4U] 
                                                     >> 0x17U))))));
    __Vtemp48[0U] = vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U];
    __Vtemp48[1U] = vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U];
    __Vtemp48[2U] = vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U];
    __Vtemp48[3U] = vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U];
    VL_EXTEND_WI(109,1, __Vtemp49, (1U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                          >> 3U)));
    VL_ADD_W(4, __Vtemp50, __Vtemp48, __Vtemp49);
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
        = ((0x2000U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U])
            ? (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])
            : __Vtemp50[0U]);
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
        = ((0x2000U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U])
            ? (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])
            : __Vtemp50[1U]);
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
        = ((0x2000U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U])
            ? (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])
            : __Vtemp50[2U]);
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
        = (0x1fffU & ((0x2000U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U])
                       ? (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U])
                       : __Vtemp50[3U]));
    VL_SHIFTL_WWI(108,108,6, __Vtemp55, vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum, 
                  (0x3fU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig 
        = (VL_ULL(0x3ffffffffffffff) & (((QData)((IData)(
                                                         (0xfffU 
                                                          & __Vtemp55[3U]))) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            __Vtemp55[2U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              __Vtemp55[1U])) 
                                              >> 0x12U))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3ffeU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | (0U != (0xfU & (IData)((VL_ULL(0x7ffffffffffffc) 
                                     & (((QData)((IData)(
                                                         vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                         << 0x22U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                           << 2U)))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3ffdU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7ffffffffffff) 
                                              & ((VL_ULL(0xfffffffc0000000) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     << 0x1eU)) 
                                                 | (VL_ULL(0xfffffffffffffff) 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 2U)))))))) 
              << 1U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3ffbU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7fffffffffff) 
                                              & ((VL_ULL(0xfffffffc000000) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     << 0x1aU)) 
                                                 | (VL_ULL(0xffffffffffffff) 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 6U)))))))) 
              << 2U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3ff7U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7ffffffffff) 
                                              & ((VL_ULL(0xfffffffc00000) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     << 0x16U)) 
                                                 | (VL_ULL(0xfffffffffffff) 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 0xaU)))))))) 
              << 3U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3fefU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7fffffffff) 
                                              & ((VL_ULL(0xfffffffc0000) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     << 0x12U)) 
                                                 | (VL_ULL(0xffffffffffff) 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 0xeU)))))))) 
              << 4U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3fdfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7ffffffff) 
                                              & ((VL_ULL(0xfffffffc000) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     << 0xeU)) 
                                                 | (VL_ULL(0xfffffffffff) 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 0x12U)))))))) 
              << 5U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3fbfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7fffffff) 
                                              & ((VL_ULL(0xfffffffc00) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     << 0xaU)) 
                                                 | (VL_ULL(0xffffffffff) 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 0x16U)))))))) 
              << 6U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3f7fU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7ffffff) 
                                              & ((VL_ULL(0xfffffffc0) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     << 6U)) 
                                                 | (VL_ULL(0xfffffffff) 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 0x1aU)))))))) 
              << 7U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3effU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7fffff) 
                                              & ((VL_ULL(0xfffffffc) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     << 2U)) 
                                                 | (VL_ULL(0xffffffff) 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 0x1eU)))))))) 
              << 8U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3dffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7ffff) 
                                              & (((QData)((IData)(
                                                                  vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                  >> 2U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                    >> 0x22U))))))) 
              << 9U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3bffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7fff) 
                                              & (((QData)((IData)(
                                                                  vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                  >> 6U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                    >> 0x26U))))))) 
              << 0xaU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x37ffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7ff) 
                                              & (((QData)((IData)(
                                                                  vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                  >> 0xaU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                    >> 0x2aU))))))) 
              << 0xbU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x2fffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7f) 
                                              & (((QData)((IData)(
                                                                  vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                  >> 0xeU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                    >> 0x2eU))))))) 
              << 0xcU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x1fffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (7U & (IData)((VL_ULL(7) 
                                            & (((QData)((IData)(
                                                                vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                >> 0x12U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                  >> 0x32U))))))) 
              << 0xdU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffffffe) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | (IData)((IData)((0U != (3U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U])))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffffffd) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0x1eU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 2U)))))) 
              << 1U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffffffb) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0x1cU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 4U)))))) 
              << 2U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffffff7) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0x1aU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 6U)))))) 
              << 3U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffffffef) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0x18U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 8U)))))) 
              << 4U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffffffdf) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0x16U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0xaU)))))) 
              << 5U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffffffbf) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0x14U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0xcU)))))) 
              << 6U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffffff7f) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0x12U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0xeU)))))) 
              << 7U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffffeff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0x10U)))))) 
              << 8U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffffdff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0xeU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0x12U)))))) 
              << 9U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffffbff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0xcU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0x14U)))))) 
              << 0xaU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffff7ff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0xaU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0x16U)))))) 
              << 0xbU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffffefff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 8U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0x18U)))))) 
              << 0xcU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffffdfff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 6U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0x1aU)))))) 
              << 0xdU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffffbfff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 4U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0x1cU)))))) 
              << 0xeU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffff7fff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 2U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0x1eU)))))) 
              << 0xfU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffeffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U])))) 
              << 0x10U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffdffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0x1eU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 2U)))))) 
              << 0x11U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffbffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0x1cU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 4U)))))) 
              << 0x12U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffff7ffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0x1aU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 6U)))))) 
              << 0x13U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffefffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0x18U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 8U)))))) 
              << 0x14U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffdfffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0x16U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0xaU)))))) 
              << 0x15U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffbfffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0x14U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0xcU)))))) 
              << 0x16U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffff7fffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0x12U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0xeU)))))) 
              << 0x17U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffeffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0x10U)))))) 
              << 0x18U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffdffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0xeU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0x12U)))))) 
              << 0x19U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffbffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0xcU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0x14U)))))) 
              << 0x1aU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffff7ffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0xaU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0x16U)))))) 
              << 0x1bU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffefffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 8U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0x18U)))))) 
              << 0x1cU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffdfffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 6U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0x1aU)))))) 
              << 0x1dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffbfffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 4U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0x1cU)))))) 
              << 0x1eU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffff7fffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 2U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0x1eU)))))) 
              << 0x1fU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffeffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U])))) 
              << 0x20U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffdffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0x1eU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 2U)))))) 
              << 0x21U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffbffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0x1cU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 4U)))))) 
              << 0x22U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffff7ffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0x1aU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 6U)))))) 
              << 0x23U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffefffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0x18U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 8U)))))) 
              << 0x24U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffdfffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0x16U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0xaU)))))) 
              << 0x25U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffbfffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0x14U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0xcU)))))) 
              << 0x26U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fff7fffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0x12U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0xeU)))))) 
              << 0x27U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffeffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0x10U)))))) 
              << 0x28U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffdffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0xeU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0x12U)))))) 
              << 0x29U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffbffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0xcU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0x14U)))))) 
              << 0x2aU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ff7ffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0xaU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0x16U)))))) 
              << 0x2bU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fefffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 8U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0x18U)))))) 
              << 0x2cU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fdfffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 6U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0x1aU)))))) 
              << 0x2dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fbfffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 4U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0x1cU)))))) 
              << 0x2eU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7f7fffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 2U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0x1eU)))))) 
              << 0x2fU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7effffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U])))) 
              << 0x30U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7dffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                            >> 2U))))) 
              << 0x31U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7bffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                            >> 4U))))) 
              << 0x32U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x77ffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                            >> 6U))))) 
              << 0x33U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x6fffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                            >> 8U))))) 
              << 0x34U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x5fffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                            >> 0xaU))))) 
              << 0x35U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x3fffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                     >> 0xcU)))) << 0x36U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3ffeU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | (0U != (3U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3ffdU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 2U))))) 
              << 1U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3ffbU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 4U))))) 
              << 2U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3ff7U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 6U))))) 
              << 3U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3fefU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 8U))))) 
              << 4U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3fdfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0xaU))))) 
              << 5U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3fbfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0xcU))))) 
              << 6U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3f7fU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0xeU))))) 
              << 7U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3effU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0x10U))))) 
              << 8U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3dffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0x12U))))) 
              << 9U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3bffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0x14U))))) 
              << 0xaU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x37ffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0x16U))))) 
              << 0xbU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x2fffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0x18U))))) 
              << 0xcU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x1fffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | (0x2000U & ((IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                  >> 0x1aU)) << 0xdU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffffffe) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (IData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0x36U))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffffffd) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x35U))))) 
              << 1U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffffffb) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x34U))))) 
              << 2U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffffff7) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x33U))))) 
              << 3U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffffffef) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x32U))))) 
              << 4U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffffffdf) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x31U))))) 
              << 5U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffffffbf) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x30U))))) 
              << 6U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffffff7f) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x2fU))))) 
              << 7U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffffeff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x2eU))))) 
              << 8U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffffdff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x2dU))))) 
              << 9U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffffbff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x2cU))))) 
              << 0xaU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffff7ff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x2bU))))) 
              << 0xbU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffffefff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x2aU))))) 
              << 0xcU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffffdfff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x29U))))) 
              << 0xdU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffffbfff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x28U))))) 
              << 0xeU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffff7fff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x27U))))) 
              << 0xfU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffeffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x26U))))) 
              << 0x10U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffdffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x25U))))) 
              << 0x11U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffbffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x24U))))) 
              << 0x12U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffff7ffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x23U))))) 
              << 0x13U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffefffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x22U))))) 
              << 0x14U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffdfffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x21U))))) 
              << 0x15U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffbfffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x20U))))) 
              << 0x16U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffff7fffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x1fU))))) 
              << 0x17U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffeffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x1eU))))) 
              << 0x18U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffdffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x1dU))))) 
              << 0x19U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffbffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x1cU))))) 
              << 0x1aU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffff7ffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x1bU))))) 
              << 0x1bU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffefffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x1aU))))) 
              << 0x1cU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffdfffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x19U))))) 
              << 0x1dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffbfffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x18U))))) 
              << 0x1eU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffff7fffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x17U))))) 
              << 0x1fU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffeffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x16U))))) 
              << 0x20U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffdffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x15U))))) 
              << 0x21U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffbffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x14U))))) 
              << 0x22U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffff7ffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x13U))))) 
              << 0x23U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffefffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x12U))))) 
              << 0x24U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffdfffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x11U))))) 
              << 0x25U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffbfffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x10U))))) 
              << 0x26U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fff7fffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0xfU))))) 
              << 0x27U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffeffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0xeU))))) 
              << 0x28U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffdffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0xdU))))) 
              << 0x29U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffbffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0xcU))))) 
              << 0x2aU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ff7ffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0xbU))))) 
              << 0x2bU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fefffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0xaU))))) 
              << 0x2cU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fdfffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 9U))))) 
              << 0x2dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fbfffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 8U))))) 
              << 0x2eU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7f7fffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 7U))))) 
              << 0x2fU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7effffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 6U))))) 
              << 0x30U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7dffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 5U))))) 
              << 0x31U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7bffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 4U))))) 
              << 0x32U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x77ffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 3U))))) 
              << 0x33U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x6fffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 2U))))) 
              << 0x34U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x5fffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 1U))))) 
              << 0x35U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))) 
              << 0x36U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
        = ((VL_ULL(0x80000000000000) | vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           & (VL_ULL(1) + (VL_ULL(0x7fffffffffffff) 
                           & (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                            >> 1U)))
                              ? 1U : 0U) | ((1U & (IData)(
                                                          (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                           >> 2U)))
                                             ? 2U : 0U)) 
                           | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                             >> 3U)))
                               ? 3U : 0U)) | ((1U & (IData)(
                                                            (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                             >> 4U)))
                                               ? 4U
                                               : 0U)) 
                         | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                           >> 5U)))
                             ? 5U : 0U)) | ((1U & (IData)(
                                                          (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                           >> 6U)))
                                             ? 6U : 0U)) 
                       | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                         >> 7U))) ? 7U
                           : 0U)) | ((1U & (IData)(
                                                   (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                    >> 8U)))
                                      ? 8U : 0U)) | 
                     ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                     >> 9U))) ? 9U : 0U)) 
                    | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                      >> 0xaU))) ? 0xaU
                        : 0U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                               >> 0xbU)))
                                 ? 0xbU : 0U)) | ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                              >> 0xcU)))
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                             >> 0xdU)))
                               ? 0xdU : 0U)) | ((1U 
                                                 & (IData)(
                                                           (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                            >> 0xeU)))
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                           >> 0xfU)))
                             ? 0xfU : 0U)) | ((1U & (IData)(
                                                            (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                             >> 0x10U)))
                                               ? 0x10U
                                               : 0U)) 
                       | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                         >> 0x11U)))
                           ? 0x11U : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                            >> 0x12U)))
                                              ? 0x12U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                       >> 0x13U))) ? 0x13U
                         : 0U)) | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                  >> 0x14U)))
                                    ? 0x14U : 0U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__30__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                               >> 0x15U)))
                                 ? 0x15U : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                               >> 0x16U)))
                                                    ? 0x16U
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                             >> 0x17U)))
                               ? 0x17U : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                             >> 0x18U)))
                                                  ? 0x18U
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                           >> 0x19U)))
                             ? 0x19U : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                           >> 0x1aU)))
                                                ? 0x1aU
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                         >> 0x1bU)))
                           ? 0x1bU : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                            >> 0x1cU)))
                                              ? 0x1cU
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                       >> 0x1dU))) ? 0x1dU
                         : 0U)) | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                  >> 0x1eU)))
                                    ? 0x1eU : 0U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__40__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__30__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                               >> 0x1fU)))
                                 ? 0x1fU : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                               >> 0x20U)))
                                                    ? 0x20U
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                             >> 0x21U)))
                               ? 0x21U : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                             >> 0x22U)))
                                                  ? 0x22U
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                           >> 0x23U)))
                             ? 0x23U : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                           >> 0x24U)))
                                                ? 0x24U
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                         >> 0x25U)))
                           ? 0x25U : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                            >> 0x26U)))
                                              ? 0x26U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                       >> 0x27U))) ? 0x27U
                         : 0U)) | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                  >> 0x28U)))
                                    ? 0x28U : 0U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__50__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__40__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                               >> 0x29U)))
                                 ? 0x29U : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                               >> 0x2aU)))
                                                    ? 0x2aU
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                             >> 0x2bU)))
                               ? 0x2bU : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                             >> 0x2cU)))
                                                  ? 0x2cU
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                           >> 0x2dU)))
                             ? 0x2dU : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                           >> 0x2eU)))
                                                ? 0x2eU
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                         >> 0x2fU)))
                           ? 0x2fU : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                            >> 0x30U)))
                                              ? 0x30U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                       >> 0x31U))) ? 0x31U
                         : 0U)) | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                  >> 0x32U)))
                                    ? 0x32U : 0U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__55__KET____DOT__countSoFar 
        = (0x3fU & ((((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__50__KET____DOT__countSoFar) 
                        | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                          >> 0x33U)))
                            ? 0x33U : 0U)) | ((1U & (IData)(
                                                            (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                             >> 0x34U)))
                                               ? 0x34U
                                               : 0U)) 
                      | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                        >> 0x35U)))
                          ? 0x35U : 0U)) | ((1U & (IData)(
                                                          (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                           >> 0x36U)))
                                             ? 0x36U
                                             : 0U)) 
                    | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                      >> 0x37U))) ? 0x37U
                        : 0U)));
    VL_EXTEND_WW(110,109, __Vtemp58, vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(110,110,7, __Vtemp59, __Vtemp58, 
                  (0x7fU & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__55__KET____DOT__countSoFar) 
                            << 1U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig 
        = (VL_ULL(0x3ffffffffffffff) & (((QData)((IData)(
                                                         (0x3fffU 
                                                          & __Vtemp59[3U]))) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            __Vtemp59[2U])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              __Vtemp59[1U])) 
                                              >> 0x14U))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut 
        = (0x1fffU & (IData)((VL_ULL(0xffffffff) & 
                              (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
                                              (0x1fU 
                                               & (~ 
                                                  ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__55__KET____DOT__countSoFar) 
                                                   >> 1U)))) 
                               >> 1U))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sExp 
        = (0x1fffU & ((4U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                       ? ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                          - (1U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                   >> 3U))) : ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                                               - (0x7fU 
                                                  & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__55__KET____DOT__countSoFar) 
                                                     << 1U)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1ffeU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 0xcU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1ffdU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 0xaU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1ffbU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 8U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1ff7U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 6U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1fefU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                       >> 4U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1fdfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                       >> 2U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1fbfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x40U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1f7fU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x80U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                       << 2U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1effU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x100U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                        << 4U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1dffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x200U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                        << 6U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1bffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x400U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                        << 8U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x17ffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x800U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                        << 0xaU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0xfffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x1000U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                         << 0xcU)));
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtemp62[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtemp62[0x80U] = 1U;
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp63, __Vtemp62, 
                   (0xfffU & (~ (VL_EXTENDS_II(12,13, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sExp)) 
                                 | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x800U : 0U)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (VL_ULL(0x3fffffffffffff) & (((QData)((IData)(
                                                        __Vtemp63[0x20U])) 
                                        << 0x33U) | 
                                       (((QData)((IData)(
                                                         __Vtemp63[0x1fU])) 
                                         << 0x13U) 
                                        | ((QData)((IData)(
                                                           __Vtemp63[0x1eU])) 
                                           >> 0xdU))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
        = ((VL_ULL(0xfffffffffffffe) & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig 
                                        >> 2U)) | (QData)((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig))) 
                                                                   | (0U 
                                                                      != 
                                                                      ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum) 
                                                                       & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffe) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (IData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                            >> 0x35U))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffd) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x34U))))) 
              << 1U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffb) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x33U))))) 
              << 2U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffff7) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x32U))))) 
              << 3U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffef) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x31U))))) 
              << 4U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffdf) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x30U))))) 
              << 5U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffbf) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2fU))))) 
              << 6U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffff7f) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2eU))))) 
              << 7U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffeff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2dU))))) 
              << 8U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffdff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2cU))))) 
              << 9U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffbff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2bU))))) 
              << 0xaU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffff7ff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2aU))))) 
              << 0xbU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffefff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x29U))))) 
              << 0xcU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffdfff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x28U))))) 
              << 0xdU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffbfff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x27U))))) 
              << 0xeU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffff7fff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x26U))))) 
              << 0xfU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffeffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x25U))))) 
              << 0x10U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffdffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x24U))))) 
              << 0x11U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffbffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x23U))))) 
              << 0x12U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffff7ffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x22U))))) 
              << 0x13U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffefffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x21U))))) 
              << 0x14U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffdfffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x20U))))) 
              << 0x15U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffbfffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1fU))))) 
              << 0x16U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffff7fffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1eU))))) 
              << 0x17U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffeffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1dU))))) 
              << 0x18U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffdffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1cU))))) 
              << 0x19U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffbffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1bU))))) 
              << 0x1aU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffff7ffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1aU))))) 
              << 0x1bU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffefffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x19U))))) 
              << 0x1cU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffdfffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x18U))))) 
              << 0x1dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffbfffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x17U))))) 
              << 0x1eU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffff7fffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x16U))))) 
              << 0x1fU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffeffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x15U))))) 
              << 0x20U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffdffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x14U))))) 
              << 0x21U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffbffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x13U))))) 
              << 0x22U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffff7ffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x12U))))) 
              << 0x23U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffefffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x11U))))) 
              << 0x24U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffdfffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x10U))))) 
              << 0x25U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffbfffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xfU))))) 
              << 0x26U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fff7fffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xeU))))) 
              << 0x27U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffeffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xdU))))) 
              << 0x28U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffdffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xcU))))) 
              << 0x29U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffbffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xbU))))) 
              << 0x2aU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ff7ffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xaU))))) 
              << 0x2bU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fefffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 9U))))) 
              << 0x2cU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fdfffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 8U))))) 
              << 0x2dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fbfffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 7U))))) 
              << 0x2eU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3f7fffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 6U))))) 
              << 0x2fU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3effffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 5U))))) 
              << 0x30U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3dffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 4U))))) 
              << 0x31U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3bffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 3U))))) 
              << 0x32U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x37ffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 2U))))) 
              << 0x33U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x2fffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 1U))))) 
              << 0x34U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x1fffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut)))) 
              << 0x35U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero 
        = (1U & ((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                   >> 5U) & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                             >> 1U)) | ((~ ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 2U)) 
                                        & (0U == (3U 
                                                  & (IData)(
                                                            (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
                                                             >> 0x36U)))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sign 
        = (1U & (((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                    >> 5U) & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState)) 
                  | (((~ ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                          >> 5U)) & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                     >> 2U)) & (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                 >> 4U) 
                                                ^ ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                   >> 3U)))) 
                 | (((~ ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                         >> 5U)) & (~ ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                       >> 2U))) & (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
                                                                >> 0x36U))))
                                                    ? 
                                                   (2U 
                                                    == (IData)(vlTOPp->roundingMode))
                                                    : 
                                                   (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                     >> 4U) 
                                                    ^ 
                                                    (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
                                                     >> 0xdU))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isNaN)
            ? (VL_ULL(0x40000000000000) | (VL_ULL(0x3ffffffffffffc) 
                                           & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                              << 2U)))
            : ((4U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                ? ((VL_ULL(0xfffffffffffffe) & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig 
                                                >> 2U)) 
                   | (QData)((IData)((1U & (((0U != 
                                              (7U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig))) 
                                             | (0U 
                                                != 
                                                ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig) 
                                                 & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)))) 
                                            | ((8U 
                                                & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                                                ? (~ (IData)(
                                                             (VL_ULL(0x1fffffffffffff) 
                                                              == 
                                                              (VL_ULL(0x1fffffffffffff) 
                                                               & (((QData)((IData)(
                                                                                vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                                                   << 0x3fU) 
                                                                  | (((QData)((IData)(
                                                                                vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                                                      << 0x1fU) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                                                        >> 1U)))))))
                                                : (0U 
                                                   != 
                                                   (VL_ULL(0x3fffffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                                        << 0x3fU) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                                           << 0x1fU) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                                             >> 1U)))))))))))
                : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isInf))) 
                 & (~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sign))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (VL_ULL(3) | ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                         | (QData)((IData)((1U & (IData)(
                                                         (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                          >> 0x37U)))))) 
                        << 2U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                >> 3U) 
                                               & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                  >> 4U)))) 
           | ((0U != (7U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig) 
                            & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                       >> 1U))))) & 
              (~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
               >> 1U)) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                               >> 3U))) 
           | ((0U != (7U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig) 
                            & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))) 
              & (~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->roundingMode)) 
                                          | (4U == (IData)(vlTOPp->roundingMode))) 
                                         & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                        | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                           & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                                        ? ((VL_ULL(1) 
                                            + ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                | vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                               >> 2U)) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                                  & (~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                                  ? 
                                                 (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                  >> 1U)
                                                  : VL_ULL(0))))
                                        : (((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                             & (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                                            >> 2U) 
                                           | (((6U 
                                                == (IData)(vlTOPp->roundingMode)) 
                                               & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                               ? (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                                  >> 1U)
                                               : VL_ULL(0)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (VL_ULL(0xfffffffffffff) & ((1U & (IData)(
                                                    (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                     >> 0x37U)))
                                       ? (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                          >> 1U) : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (0x1fffU 
                                            & VL_EXTENDS_II(13,13, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sExp)))) 
                      + (IData)((VL_ULL(0x7fffffffffffff) 
                                 & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                    >> 0x35U)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,13, 
                                                                        (0x1fffU 
                                                                         & VL_EXTENDS_II(13,13, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sExp)))), 0xbU))) 
               & ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                 >> 0x37U))) ? (IData)(
                                                       (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                        >> 3U))
                   : (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                              >> 2U)))) & (~ (((((0U 
                                                  != 
                                                  (1U 
                                                   & (IData)(vlTOPp->control))) 
                                                 & (~ 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                                 >> 0x37U)))
                                                      ? (IData)(
                                                                (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                                 >> 4U))
                                                      : (IData)(
                                                                (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                                 >> 3U))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                               >> 0x37U)))
                                                    ? (IData)(
                                                              (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                               >> 0x36U))
                                                    : (IData)(
                                                              (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                               >> 0x35U)))) 
                                               & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                              & ((((0U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   | (4U 
                                                      == (IData)(vlTOPp->roundingMode))) 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                                 >> 0x37U)))
                                                      ? (IData)(
                                                                (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                                 >> 2U))
                                                      : (IData)(
                                                                (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                                 >> 1U)))) 
                                                 | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                    & (((IData)(
                                                                (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                                 >> 0x37U)) 
                                                        & (IData)(
                                                                  (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                                   >> 2U))) 
                                                       | (0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig))))))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 0xaU)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                            & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 0x3ceU, 
                                                            VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                 | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isInf) 
           | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp65[0U] = (IData)((((QData)((IData)((0xfffU 
                                               & (((((((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                         & (~ 
                                                            (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero) 
                                                              | VL_GTS_III(1,32,32, 0x3ceU, 
                                                                           VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                              ? 0xe00U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                             ? 0xfffffc31U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                            ? 0x400U
                                                            : 0U))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                           ? 0x200U
                                                           : 0U))) 
                                                     | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                         ? 0x3ceU
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                        ? 0xbffU
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                       ? 0xc00U
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                      ? 0xe00U
                                                      : 0U))))) 
                              << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                           & ((((QData)((IData)(
                                                                ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                 | (((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero)) 
                                                                     & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                    & (IData)(
                                                                              (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
                                                                               >> 0x33U)))))) 
                                                << 0x33U) 
                                               | (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                   | ((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero)) 
                                                      & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                    VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                   ? 
                                                  (VL_ULL(0x7ffffffffffff) 
                                                   & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                   : VL_ULL(0))) 
                                              | VL_NEGATE_Q((QData)((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
    __Vtemp65[1U] = (IData)(((((QData)((IData)((0xfffU 
                                                & (((((((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                          & (~ 
                                                             (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero) 
                                                               | VL_GTS_III(1,32,32, 0x3ceU, 
                                                                            VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                               ? 0xe00U
                                                               : 0U))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                              ? 0xfffffc31U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                             ? 0x400U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x200U
                                                            : 0U))) 
                                                      | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                          ? 0x3ceU
                                                          : 0U)) 
                                                     | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                         ? 0xbffU
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                        ? 0xc00U
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                       ? 0xe00U
                                                       : 0U))))) 
                               << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                            & ((((QData)((IData)(
                                                                 ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                  | (((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero)) 
                                                                      & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                     & (IData)(
                                                                               (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
                                                                                >> 0x33U)))))) 
                                                 << 0x33U) 
                                                | (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                    | ((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero)) 
                                                       & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                     VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                    ? 
                                                   (VL_ULL(0x7ffffffffffff) 
                                                    & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                    : VL_ULL(0))) 
                                               | VL_NEGATE_Q((QData)((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))) 
                             >> 0x20U));
    vlTOPp->out[0U] = __Vtemp65[0U];
    vlTOPp->out[1U] = __Vtemp65[1U];
    vlTOPp->out[2U] = vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sign;
}

VL_INLINE_OPT void VmulAddRecF64_mul::_combo__TOP__2(VmulAddRecF64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF64_mul::_combo__TOP__2\n"); );
    VmulAddRecF64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*191:0*/ __Vtemp72[6];
    WData/*191:0*/ __Vtemp73[6];
    WData/*95:0*/ __Vtemp78[3];
    WData/*127:0*/ __Vtemp85[4];
    WData/*127:0*/ __Vtemp86[4];
    WData/*127:0*/ __Vtemp87[4];
    WData/*127:0*/ __Vtemp90[4];
    WData/*127:0*/ __Vtemp91[4];
    WData/*127:0*/ __Vtemp92[4];
    WData/*127:0*/ __Vtemp112[4];
    WData/*127:0*/ __Vtemp113[4];
    WData/*127:0*/ __Vtemp114[4];
    WData/*127:0*/ __Vtemp119[4];
    WData/*127:0*/ __Vtemp122[4];
    WData/*127:0*/ __Vtemp123[4];
    WData/*4127:0*/ __Vtemp126[129];
    WData/*95:0*/ __Vtemp128[3];
    // Body
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->a[2U] 
                                              << 3U)) 
                                          | (vlTOPp->a[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->a[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->a[0U])))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigB 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->b[2U] 
                                              << 3U)) 
                                          | (vlTOPp->b[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->b[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->b[0U])))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                       << 2U)) | (vlTOPp->a[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->a[1U] >> 0x1dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                       << 2U)) | (vlTOPp->b[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->b[1U] >> 0x1dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                       << 2U)) | (vlTOPp->a[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->a[1U] >> 0x1dU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                       << 2U)) | (vlTOPp->b[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->b[1U] >> 0x1dU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd 
        = (1U & (vlTOPp->a[2U] ^ vlTOPp->b[2U]));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd 
        = (0x3fffU & ((IData)(0x3838U) + (VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->a[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->a[1U] 
                                                               >> 0x14U)))) 
                                          + VL_EXTENDS_II(14,13, 
                                                          (0xfffU 
                                                           & ((vlTOPp->b[2U] 
                                                               << 0xcU) 
                                                              | (vlTOPp->b[1U] 
                                                                 >> 0x14U)))))));
    vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[0U] = 0U;
    vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] = 0U;
    vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] = 
        (1U & (vlTOPp->a[2U] ^ vlTOPp->b[2U]));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA) 
           | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
           | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd 
        = (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
            & (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                          << 3U)) | 
                            (vlTOPp->b[1U] >> 0x1dU))))) 
           | ((0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                          << 3U)) | 
                            (vlTOPp->a[1U] >> 0x1dU)))) 
              & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros 
        = (((0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                        << 3U)) | (
                                                   vlTOPp->a[1U] 
                                                   >> 0x1dU)))) 
            | (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                          << 3U)) | 
                            (vlTOPp->b[1U] >> 0x1dU))))) 
           & (0U == (7U & ((0x7ffff8U & (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] 
                                         << 3U)) | 
                           (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                            >> 0x1dU)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] 
                                       << 2U)) | (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                 >> 0x1dU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] 
                                       << 2U)) | (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
              >> 0x1dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags 
        = (1U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                 ^ vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U]));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] 
                                              << 3U)) 
                                          | (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[0U])))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist 
        = (0x3fffU & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd) 
                      - VL_EXTENDS_II(14,13, (0xfffU 
                                              & ((vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                                                    >> 0x14U))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC 
        = ((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd)) 
           & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB) 
           | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd) 
           | ((((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB)) 
                & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB)) 
               & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
              & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3ffeU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | (0U != (0xfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3ffdU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 4U))))) 
              << 1U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3ffbU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 8U))))) 
              << 2U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3ff7U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0xcU))))) 
              << 3U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3fefU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x10U))))) 
              << 4U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3fdfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x14U))))) 
              << 5U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3fbfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x18U))))) 
              << 6U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3f7fU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x1cU))))) 
              << 7U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3effU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x20U))))) 
              << 8U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3dffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x24U))))) 
              << 9U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3bffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x28U))))) 
              << 0xaU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x37ffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x2cU))))) 
              << 0xbU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x2fffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                              >> 0x30U))))) 
              << 0xcU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x1fffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                            >> 0x34U))))) 
              << 0xdU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign 
        = (((0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                        << 3U)) | (
                                                   vlTOPp->a[1U] 
                                                   >> 0x1dU)))) 
            | (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                          << 3U)) | 
                            (vlTOPp->b[1U] >> 0x1dU))))) 
           | VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase 
        = ((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
             | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB)) 
            | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
           | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant 
        = ((0U != (7U & ((0x7ffff8U & (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] 
                                       << 3U)) | (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                                                  >> 0x1dU)))) 
           & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign) 
              | (0x35U >= (0x1fffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0xa1U > (0x1fffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0xffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))
                     : 0xa1U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum 
        = (0x1fffU & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant)
                       ? VL_EXTENDS_II(32,13, (0xfffU 
                                               & ((vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                                                     >> 0x14U))))
                       : (VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd)) 
                          - (IData)(0x35U))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut 
        = (0x1fffU & (VL_SHIFTRS_III(17,17,4, vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__c, 
                                     (0xfU & (~ ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                                 >> 2U)))) 
                      >> 1U));
    __Vtemp72[0U] = VL_NEGATE_I((IData)((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    __Vtemp72[1U] = VL_NEGATE_I((IData)((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    __Vtemp72[2U] = VL_NEGATE_I((IData)((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    __Vtemp72[3U] = ((0xffff8000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                              & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                                  ? 
                                                 (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                                  : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC))) 
                                     << 0xfU)) | (0x7fffU 
                                                  & VL_NEGATE_I((IData)((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __Vtemp72[4U] = ((0x7fffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                          & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                              ? (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                              : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC))) 
                                 >> 0x11U)) | (0xffff8000U 
                                               & ((IData)(
                                                          ((VL_ULL(0x3fffffffffffff) 
                                                            & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                                                ? 
                                                               (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                                                : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)) 
                                                           >> 0x20U)) 
                                                  << 0xfU)));
    __Vtemp72[5U] = (0x7fffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                          & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                              ? (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                              : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)) 
                                         >> 0x20U)) 
                                >> 0x11U));
    VL_SHIFTRS_WWI(165,165,8, __Vtemp73, __Vtemp72, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp73[0U];
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp73[1U];
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = __Vtemp73[2U];
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[3U] 
        = __Vtemp73[3U];
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[4U] 
        = __Vtemp73[4U];
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[5U] 
        = (0xfU & __Vtemp73[5U]);
    VL_SHIFTRS_WWI(65,65,6, __Vtemp78, vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c, 
                   (0x3fU & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                             >> 2U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut 
        = (0x1fffU & ((__Vtemp78[1U] << 8U) | (__Vtemp78[0U] 
                                               >> 0x18U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1ffeU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 0xcU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1ffdU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 0xaU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1ffbU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 8U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1ff7U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 6U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1fefU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                       >> 4U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1fdfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                       >> 2U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1fbfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x40U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1f7fU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x80U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                       << 2U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1effU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x100U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                        << 4U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1dffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x200U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                        << 6U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1bffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x400U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                        << 8U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x17ffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x800U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                        << 0xaU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0xfffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x1000U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                         << 0xcU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1ffeU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 0xcU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1ffdU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 0xaU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1ffbU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 8U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1ff7U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 6U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1fefU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                       >> 4U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1fdfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                       >> 2U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1fbfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x40U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1f7fU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x80U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                       << 2U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1effU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x100U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                        << 4U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1dffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x200U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                        << 6U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1bffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x400U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                        << 8U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x17ffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x800U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                        << 0xaU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0xfffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x1000U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                         << 0xcU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC) 
                  & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U] 
        = ((0xfffffffeU & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                            << 0x1eU) | (0x3ffffffeU 
                                         & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                            >> 2U)))) 
           | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
               ? ((7U == (7U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                  & (~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)))
               : ((0U != (7U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                  | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
        = ((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                  >> 2U)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
        = ((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[3U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                  >> 2U)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[3U] 
        = ((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[3U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[4U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[3U] 
                                                  >> 2U)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[4U] 
        = ((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[4U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[5U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[4U] 
                                                  >> 2U)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[5U] 
        = ((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[5U] 
                  >> 2U)) | (2U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[5U] 
                                   >> 2U)));
    VL_EXTEND_WQ(107,53, __Vtemp85, (VL_ULL(0x1fffffffffffff) 
                                     & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA));
    VL_EXTEND_WQ(107,53, __Vtemp86, (VL_ULL(0x1fffffffffffff) 
                                     & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigB));
    VL_MUL_W(4, __Vtemp87, __Vtemp85, __Vtemp86);
    __Vtemp90[0U] = ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
                      << 0x1fU) | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U] 
                                   >> 1U));
    __Vtemp90[1U] = ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                      << 0x1fU) | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
                                   >> 1U));
    __Vtemp90[2U] = ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[3U] 
                      << 0x1fU) | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                                   >> 1U));
    __Vtemp90[3U] = (0x3ffU & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[4U] 
                                << 0x1fU) | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[3U] 
                                             >> 1U)));
    VL_EXTEND_WW(107,106, __Vtemp91, __Vtemp90);
    VL_ADD_W(4, __Vtemp92, __Vtemp87, __Vtemp91);
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[0U] 
        = __Vtemp92[0U];
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[1U] 
        = __Vtemp92[1U];
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[2U] 
        = __Vtemp92[2U];
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[3U] 
        = (0x7ffU & __Vtemp92[3U]);
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
        = (VL_ULL(0x7fffffffffffff) & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                                        ? (VL_ULL(0x8000000000000) 
                                           | (VL_ULL(0x7ffffffffffff) 
                                              & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                                  ? vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA
                                                  : 
                                                 ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                   ? vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigB
                                                   : 
                                                  ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                    ? vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC
                                                    : VL_ULL(0))))))
                                        : (((QData)((IData)(
                                                            vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[5U])) 
                                            << 0x35U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[4U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[3U])) 
                                                 >> 0xbU)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState 
        = (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
            << 5U) | ((((((((7U == (7U & ((vlTOPp->a[2U] 
                                           << 3U) | 
                                          (vlTOPp->a[1U] 
                                           >> 0x1dU)))) 
                            & (~ (vlTOPp->a[1U] >> 0x13U))) 
                           | ((7U == (7U & ((vlTOPp->b[2U] 
                                             << 3U) 
                                            | (vlTOPp->b[1U] 
                                               >> 0x1dU)))) 
                              & (~ (vlTOPp->b[1U] >> 0x13U)))) 
                          | ((7U == (7U & ((vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U] 
                                            << 3U) 
                                           | (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                                              >> 0x1dU)))) 
                             & (~ (vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[1U] 
                                   >> 0x13U)))) | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc)) 
                        | ((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                           & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd))) 
                       << 4U) | ((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) 
                                   | ((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                      & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags))) 
                                  << 3U) | (((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                               | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
                                              | ((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                 & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant))) 
                                             << 2U) 
                                            | ((2U 
                                                & (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                    | ((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                       & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U])) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
                                                      | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc))
                                                      ? 
                                                     ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                                       ? 
                                                      (1U 
                                                       & vlTOPp->a[2U])
                                                       : 
                                                      ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                        ? 
                                                       (1U 
                                                        & vlTOPp->b[2U])
                                                        : 
                                                       ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                         ? 
                                                        (1U 
                                                         & vlTOPp->mulAddRecF64_mul__DOT__zeroAddend[2U])
                                                         : 1U)))
                                                      : 
                                                     (((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                                         & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                        | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                                                           & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                                       | ((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                            & (2U 
                                                               != (IData)(vlTOPp->roundingMode))) 
                                                           & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                          & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                                      | (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                          & (2U 
                                                             == (IData)(vlTOPp->roundingMode))) 
                                                         & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                                                            | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)))))))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isInf 
        = (1U & (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 2U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__invalidExc 
        = (1U & (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 4U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isNaN 
        = (1U & (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 3U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
        = ((0xfffffffeU & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[0U] 
                           << 1U)) | (1U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 1U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
        = ((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[0U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[1U] 
                                               << 1U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
        = ((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[1U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[2U] 
                                               << 1U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
        = ((0xfffff800U & ((IData)((VL_ULL(0x7fffffffffffff) 
                                    & ((0x400U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[3U])
                                        ? (VL_ULL(1) 
                                           + vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC)
                                        : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC))) 
                           << 0xbU)) | ((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[2U] 
                                               >> 0x1fU)) 
                                        | (0x7feU & 
                                           (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[3U] 
                                            << 1U))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[4U] 
        = ((0x7ffU & ((IData)((VL_ULL(0x7fffffffffffff) 
                               & ((0x400U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[3U])
                                   ? (VL_ULL(1) + vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC)
                                   : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC))) 
                      >> 0x15U)) | (0xfffff800U & ((IData)(
                                                           ((VL_ULL(0x7fffffffffffff) 
                                                             & ((0x400U 
                                                                 & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[3U])
                                                                 ? 
                                                                (VL_ULL(1) 
                                                                 + vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC)
                                                                 : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC)) 
                                                            >> 0x20U)) 
                                                   << 0xbU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[5U] 
        = (0x7ffU & ((IData)(((VL_ULL(0x7fffffffffffff) 
                               & ((0x400U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult[3U])
                                   ? (VL_ULL(1) + vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC)
                                   : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC)) 
                              >> 0x20U)) >> 0x15U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isNaN));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U] 
        = ((8U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
            ? (~ ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
                   << 0xaU) | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                               >> 0x16U))) : ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
                                               << 9U) 
                                              | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                                 >> 0x17U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U] 
        = ((8U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
            ? (~ ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
                   << 0xaU) | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
                               >> 0x16U))) : ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
                                               << 9U) 
                                              | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
                                                 >> 0x17U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[2U] 
        = ((8U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
            ? (~ ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[4U] 
                   << 0xaU) | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
                               >> 0x16U))) : ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[4U] 
                                               << 9U) 
                                              | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
                                                 >> 0x17U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[3U] 
        = (0xfffU & ((8U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                      ? (~ ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[5U] 
                             << 0xaU) | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[4U] 
                                         >> 0x16U)))
                      : ((0x600U & ((IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                             >> 0x35U)) 
                                    << 9U)) | (0x1ffU 
                                               & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[5U] 
                                                   << 9U) 
                                                  | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[4U] 
                                                     >> 0x17U))))));
    __Vtemp112[0U] = vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U];
    __Vtemp112[1U] = vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U];
    __Vtemp112[2U] = vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U];
    __Vtemp112[3U] = vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U];
    VL_EXTEND_WI(109,1, __Vtemp113, (1U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                           >> 3U)));
    VL_ADD_W(4, __Vtemp114, __Vtemp112, __Vtemp113);
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
        = ((0x2000U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U])
            ? (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])
            : __Vtemp114[0U]);
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
        = ((0x2000U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U])
            ? (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])
            : __Vtemp114[1U]);
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
        = ((0x2000U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U])
            ? (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])
            : __Vtemp114[2U]);
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
        = (0x1fffU & ((0x2000U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U])
                       ? (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U])
                       : __Vtemp114[3U]));
    VL_SHIFTL_WWI(108,108,6, __Vtemp119, vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum, 
                  (0x3fU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig 
        = (VL_ULL(0x3ffffffffffffff) & (((QData)((IData)(
                                                         (0xfffU 
                                                          & __Vtemp119[3U]))) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            __Vtemp119[2U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              __Vtemp119[1U])) 
                                              >> 0x12U))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3ffeU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | (0U != (0xfU & (IData)((VL_ULL(0x7ffffffffffffc) 
                                     & (((QData)((IData)(
                                                         vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                         << 0x22U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                           << 2U)))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3ffdU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7ffffffffffff) 
                                              & ((VL_ULL(0xfffffffc0000000) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     << 0x1eU)) 
                                                 | (VL_ULL(0xfffffffffffffff) 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 2U)))))))) 
              << 1U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3ffbU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7fffffffffff) 
                                              & ((VL_ULL(0xfffffffc000000) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     << 0x1aU)) 
                                                 | (VL_ULL(0xffffffffffffff) 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 6U)))))))) 
              << 2U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3ff7U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7ffffffffff) 
                                              & ((VL_ULL(0xfffffffc00000) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     << 0x16U)) 
                                                 | (VL_ULL(0xfffffffffffff) 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 0xaU)))))))) 
              << 3U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3fefU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7fffffffff) 
                                              & ((VL_ULL(0xfffffffc0000) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     << 0x12U)) 
                                                 | (VL_ULL(0xffffffffffff) 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 0xeU)))))))) 
              << 4U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3fdfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7ffffffff) 
                                              & ((VL_ULL(0xfffffffc000) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     << 0xeU)) 
                                                 | (VL_ULL(0xfffffffffff) 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 0x12U)))))))) 
              << 5U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3fbfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7fffffff) 
                                              & ((VL_ULL(0xfffffffc00) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     << 0xaU)) 
                                                 | (VL_ULL(0xffffffffff) 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 0x16U)))))))) 
              << 6U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3f7fU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7ffffff) 
                                              & ((VL_ULL(0xfffffffc0) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     << 6U)) 
                                                 | (VL_ULL(0xfffffffff) 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 0x1aU)))))))) 
              << 7U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3effU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7fffff) 
                                              & ((VL_ULL(0xfffffffc) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     << 2U)) 
                                                 | (VL_ULL(0xffffffff) 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 0x1eU)))))))) 
              << 8U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3dffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7ffff) 
                                              & (((QData)((IData)(
                                                                  vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                  >> 2U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                    >> 0x22U))))))) 
              << 9U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3bffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7fff) 
                                              & (((QData)((IData)(
                                                                  vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                  >> 6U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                    >> 0x26U))))))) 
              << 0xaU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x37ffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7ff) 
                                              & (((QData)((IData)(
                                                                  vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                  >> 0xaU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                    >> 0x2aU))))))) 
              << 0xbU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x2fffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (IData)((VL_ULL(0x7f) 
                                              & (((QData)((IData)(
                                                                  vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                  >> 0xeU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                    >> 0x2eU))))))) 
              << 0xcU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x1fffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (7U & (IData)((VL_ULL(7) 
                                            & (((QData)((IData)(
                                                                vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                >> 0x12U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                  >> 0x32U))))))) 
              << 0xdU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffffffe) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | (IData)((IData)((0U != (3U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U])))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffffffd) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0x1eU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 2U)))))) 
              << 1U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffffffb) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0x1cU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 4U)))))) 
              << 2U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffffff7) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0x1aU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 6U)))))) 
              << 3U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffffffef) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0x18U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 8U)))))) 
              << 4U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffffffdf) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0x16U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0xaU)))))) 
              << 5U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffffffbf) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0x14U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0xcU)))))) 
              << 6U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffffff7f) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0x12U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0xeU)))))) 
              << 7U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffffeff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0x10U)))))) 
              << 8U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffffdff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0xeU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0x12U)))))) 
              << 9U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffffbff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0xcU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0x14U)))))) 
              << 0xaU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffff7ff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 0xaU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0x16U)))))) 
              << 0xbU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffffefff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 8U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0x18U)))))) 
              << 0xcU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffffdfff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 6U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0x1aU)))))) 
              << 0xdU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffffbfff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 4U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0x1cU)))))) 
              << 0xeU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffff7fff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                             << 2U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                               >> 0x1eU)))))) 
              << 0xfU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffeffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U])))) 
              << 0x10U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffdffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0x1eU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 2U)))))) 
              << 0x11U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffffbffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0x1cU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 4U)))))) 
              << 0x12U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffff7ffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0x1aU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 6U)))))) 
              << 0x13U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffefffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0x18U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 8U)))))) 
              << 0x14U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffdfffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0x16U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0xaU)))))) 
              << 0x15U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffffbfffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0x14U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0xcU)))))) 
              << 0x16U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffff7fffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0x12U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0xeU)))))) 
              << 0x17U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffeffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0x10U)))))) 
              << 0x18U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffdffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0xeU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0x12U)))))) 
              << 0x19U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffffbffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0xcU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0x14U)))))) 
              << 0x1aU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffff7ffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 0xaU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0x16U)))))) 
              << 0x1bU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffefffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 8U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0x18U)))))) 
              << 0x1cU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffdfffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 6U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0x1aU)))))) 
              << 0x1dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffffbfffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 4U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0x1cU)))))) 
              << 0x1eU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffff7fffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             << 2U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                               >> 0x1eU)))))) 
              << 0x1fU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffeffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U])))) 
              << 0x20U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffdffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0x1eU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 2U)))))) 
              << 0x21U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffffbffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0x1cU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 4U)))))) 
              << 0x22U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffff7ffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0x1aU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 6U)))))) 
              << 0x23U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffefffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0x18U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 8U)))))) 
              << 0x24U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffdfffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0x16U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0xaU)))))) 
              << 0x25U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fffbfffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0x14U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0xcU)))))) 
              << 0x26U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fff7fffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0x12U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0xeU)))))) 
              << 0x27U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffeffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0x10U)))))) 
              << 0x28U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffdffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0xeU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0x12U)))))) 
              << 0x29U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ffbffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0xcU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0x14U)))))) 
              << 0x2aU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7ff7ffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 0xaU) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0x16U)))))) 
              << 0x2bU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fefffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 8U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0x18U)))))) 
              << 0x2cU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fdfffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 6U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0x1aU)))))) 
              << 0x2dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7fbfffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 4U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0x1cU)))))) 
              << 0x2eU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7f7fffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             << 2U) 
                                            | (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                               >> 0x1eU)))))) 
              << 0x2fU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7effffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U])))) 
              << 0x30U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7dffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                            >> 2U))))) 
              << 0x31U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x7bffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                            >> 4U))))) 
              << 0x32U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x77ffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                            >> 6U))))) 
              << 0x33U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x6fffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                            >> 8U))))) 
              << 0x34U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x5fffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((0U != (3U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                            >> 0xaU))))) 
              << 0x35U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((VL_ULL(0x3fffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((1U & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                     >> 0xcU)))) << 0x36U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3ffeU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | (0U != (3U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3ffdU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 2U))))) 
              << 1U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3ffbU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 4U))))) 
              << 2U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3ff7U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 6U))))) 
              << 3U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3fefU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 8U))))) 
              << 4U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3fdfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0xaU))))) 
              << 5U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3fbfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0xcU))))) 
              << 6U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3f7fU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0xeU))))) 
              << 7U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3effU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0x10U))))) 
              << 8U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3dffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0x12U))))) 
              << 9U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3bffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0x14U))))) 
              << 0xaU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x37ffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0x16U))))) 
              << 0xbU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x2fffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0x18U))))) 
              << 0xcU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x1fffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | (0x2000U & ((IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                  >> 0x1aU)) << 0xdU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffffffe) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (IData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                            >> 0x36U))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffffffd) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x35U))))) 
              << 1U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffffffb) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x34U))))) 
              << 2U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffffff7) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x33U))))) 
              << 3U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffffffef) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x32U))))) 
              << 4U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffffffdf) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x31U))))) 
              << 5U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffffffbf) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x30U))))) 
              << 6U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffffff7f) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x2fU))))) 
              << 7U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffffeff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x2eU))))) 
              << 8U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffffdff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x2dU))))) 
              << 9U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffffbff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x2cU))))) 
              << 0xaU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffff7ff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x2bU))))) 
              << 0xbU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffffefff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x2aU))))) 
              << 0xcU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffffdfff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x29U))))) 
              << 0xdU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffffbfff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x28U))))) 
              << 0xeU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffff7fff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x27U))))) 
              << 0xfU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffeffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x26U))))) 
              << 0x10U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffdffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x25U))))) 
              << 0x11U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffbffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x24U))))) 
              << 0x12U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffff7ffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x23U))))) 
              << 0x13U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffefffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x22U))))) 
              << 0x14U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffdfffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x21U))))) 
              << 0x15U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffbfffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x20U))))) 
              << 0x16U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffff7fffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x1fU))))) 
              << 0x17U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffeffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x1eU))))) 
              << 0x18U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffdffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x1dU))))) 
              << 0x19U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffbffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x1cU))))) 
              << 0x1aU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffff7ffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x1bU))))) 
              << 0x1bU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffefffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x1aU))))) 
              << 0x1cU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffdfffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x19U))))) 
              << 0x1dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffffbfffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x18U))))) 
              << 0x1eU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffff7fffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x17U))))) 
              << 0x1fU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffeffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x16U))))) 
              << 0x20U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffdffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x15U))))) 
              << 0x21U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffffbffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x14U))))) 
              << 0x22U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffff7ffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x13U))))) 
              << 0x23U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffefffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x12U))))) 
              << 0x24U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffdfffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x11U))))) 
              << 0x25U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fffbfffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0x10U))))) 
              << 0x26U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fff7fffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0xfU))))) 
              << 0x27U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffeffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0xeU))))) 
              << 0x28U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffdffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0xdU))))) 
              << 0x29U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ffbffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0xcU))))) 
              << 0x2aU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7ff7ffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0xbU))))) 
              << 0x2bU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fefffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 0xaU))))) 
              << 0x2cU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fdfffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 9U))))) 
              << 0x2dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7fbfffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 8U))))) 
              << 0x2eU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7f7fffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 7U))))) 
              << 0x2fU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7effffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 6U))))) 
              << 0x30U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7dffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 5U))))) 
              << 0x31U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x7bffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 4U))))) 
              << 0x32U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x77ffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 3U))))) 
              << 0x33U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x6fffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 2U))))) 
              << 0x34U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x5fffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 1U))))) 
              << 0x35U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))) 
              << 0x36U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
        = ((VL_ULL(0x80000000000000) | vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           & (VL_ULL(1) + (VL_ULL(0x7fffffffffffff) 
                           & (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                            >> 1U)))
                              ? 1U : 0U) | ((1U & (IData)(
                                                          (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                           >> 2U)))
                                             ? 2U : 0U)) 
                           | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                             >> 3U)))
                               ? 3U : 0U)) | ((1U & (IData)(
                                                            (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                             >> 4U)))
                                               ? 4U
                                               : 0U)) 
                         | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                           >> 5U)))
                             ? 5U : 0U)) | ((1U & (IData)(
                                                          (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                           >> 6U)))
                                             ? 6U : 0U)) 
                       | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                         >> 7U))) ? 7U
                           : 0U)) | ((1U & (IData)(
                                                   (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                    >> 8U)))
                                      ? 8U : 0U)) | 
                     ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                     >> 9U))) ? 9U : 0U)) 
                    | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                      >> 0xaU))) ? 0xaU
                        : 0U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                               >> 0xbU)))
                                 ? 0xbU : 0U)) | ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                              >> 0xcU)))
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                             >> 0xdU)))
                               ? 0xdU : 0U)) | ((1U 
                                                 & (IData)(
                                                           (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                            >> 0xeU)))
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                           >> 0xfU)))
                             ? 0xfU : 0U)) | ((1U & (IData)(
                                                            (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                             >> 0x10U)))
                                               ? 0x10U
                                               : 0U)) 
                       | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                         >> 0x11U)))
                           ? 0x11U : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                            >> 0x12U)))
                                              ? 0x12U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                       >> 0x13U))) ? 0x13U
                         : 0U)) | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                  >> 0x14U)))
                                    ? 0x14U : 0U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__30__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                               >> 0x15U)))
                                 ? 0x15U : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                               >> 0x16U)))
                                                    ? 0x16U
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                             >> 0x17U)))
                               ? 0x17U : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                             >> 0x18U)))
                                                  ? 0x18U
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                           >> 0x19U)))
                             ? 0x19U : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                           >> 0x1aU)))
                                                ? 0x1aU
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                         >> 0x1bU)))
                           ? 0x1bU : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                            >> 0x1cU)))
                                              ? 0x1cU
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                       >> 0x1dU))) ? 0x1dU
                         : 0U)) | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                  >> 0x1eU)))
                                    ? 0x1eU : 0U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__40__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__30__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                               >> 0x1fU)))
                                 ? 0x1fU : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                               >> 0x20U)))
                                                    ? 0x20U
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                             >> 0x21U)))
                               ? 0x21U : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                             >> 0x22U)))
                                                  ? 0x22U
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                           >> 0x23U)))
                             ? 0x23U : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                           >> 0x24U)))
                                                ? 0x24U
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                         >> 0x25U)))
                           ? 0x25U : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                            >> 0x26U)))
                                              ? 0x26U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                       >> 0x27U))) ? 0x27U
                         : 0U)) | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                  >> 0x28U)))
                                    ? 0x28U : 0U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__50__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__40__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                               >> 0x29U)))
                                 ? 0x29U : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                               >> 0x2aU)))
                                                    ? 0x2aU
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                             >> 0x2bU)))
                               ? 0x2bU : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                             >> 0x2cU)))
                                                  ? 0x2cU
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                           >> 0x2dU)))
                             ? 0x2dU : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                           >> 0x2eU)))
                                                ? 0x2eU
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                         >> 0x2fU)))
                           ? 0x2fU : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                            >> 0x30U)))
                                              ? 0x30U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                       >> 0x31U))) ? 0x31U
                         : 0U)) | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                  >> 0x32U)))
                                    ? 0x32U : 0U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__55__KET____DOT__countSoFar 
        = (0x3fU & ((((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__50__KET____DOT__countSoFar) 
                        | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                          >> 0x33U)))
                            ? 0x33U : 0U)) | ((1U & (IData)(
                                                            (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                             >> 0x34U)))
                                               ? 0x34U
                                               : 0U)) 
                      | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                        >> 0x35U)))
                          ? 0x35U : 0U)) | ((1U & (IData)(
                                                          (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                                           >> 0x36U)))
                                             ? 0x36U
                                             : 0U)) 
                    | ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
                                      >> 0x37U))) ? 0x37U
                        : 0U)));
    VL_EXTEND_WW(110,109, __Vtemp122, vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(110,110,7, __Vtemp123, __Vtemp122, 
                  (0x7fU & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__55__KET____DOT__countSoFar) 
                            << 1U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig 
        = (VL_ULL(0x3ffffffffffffff) & (((QData)((IData)(
                                                         (0x3fffU 
                                                          & __Vtemp123[3U]))) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            __Vtemp123[2U])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              __Vtemp123[1U])) 
                                              >> 0x14U))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut 
        = (0x1fffU & (IData)((VL_ULL(0xffffffff) & 
                              (VL_SHIFTRS_QQI(33,33,5, vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__c, 
                                              (0x1fU 
                                               & (~ 
                                                  ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__55__KET____DOT__countSoFar) 
                                                   >> 1U)))) 
                               >> 1U))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sExp 
        = (0x1fffU & ((4U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                       ? ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                          - (1U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                   >> 3U))) : ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                                               - (0x7fU 
                                                  & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__55__KET____DOT__countSoFar) 
                                                     << 1U)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1ffeU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 0xcU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1ffdU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 0xaU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1ffbU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 8U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1ff7U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 6U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1fefU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                       >> 4U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1fdfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                       >> 2U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1fbfU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x40U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1f7fU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x80U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                       << 2U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1effU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x100U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                        << 4U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1dffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x200U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                        << 6U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1bffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x400U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                        << 8U)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x17ffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x800U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                        << 0xaU)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0xfffU & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x1000U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                         << 0xcU)));
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp126, vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0xfffU & (~ (VL_EXTENDS_II(12,13, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sExp)) 
                                 | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x800U : 0U)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (VL_ULL(0x3fffffffffffff) & (((QData)((IData)(
                                                        __Vtemp126[0x20U])) 
                                        << 0x33U) | 
                                       (((QData)((IData)(
                                                         __Vtemp126[0x1fU])) 
                                         << 0x13U) 
                                        | ((QData)((IData)(
                                                           __Vtemp126[0x1eU])) 
                                           >> 0xdU))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
        = ((VL_ULL(0xfffffffffffffe) & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig 
                                        >> 2U)) | (QData)((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig))) 
                                                                   | (0U 
                                                                      != 
                                                                      ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum) 
                                                                       & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffe) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (IData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                            >> 0x35U))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffd) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x34U))))) 
              << 1U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffb) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x33U))))) 
              << 2U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffff7) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x32U))))) 
              << 3U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffef) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x31U))))) 
              << 4U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffdf) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x30U))))) 
              << 5U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffbf) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2fU))))) 
              << 6U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffff7f) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2eU))))) 
              << 7U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffeff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2dU))))) 
              << 8U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffdff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2cU))))) 
              << 9U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffbff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2bU))))) 
              << 0xaU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffff7ff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2aU))))) 
              << 0xbU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffefff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x29U))))) 
              << 0xcU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffdfff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x28U))))) 
              << 0xdU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffbfff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x27U))))) 
              << 0xeU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffff7fff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x26U))))) 
              << 0xfU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffeffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x25U))))) 
              << 0x10U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffdffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x24U))))) 
              << 0x11U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffbffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x23U))))) 
              << 0x12U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffff7ffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x22U))))) 
              << 0x13U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffefffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x21U))))) 
              << 0x14U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffdfffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x20U))))) 
              << 0x15U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffbfffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1fU))))) 
              << 0x16U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffff7fffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1eU))))) 
              << 0x17U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffeffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1dU))))) 
              << 0x18U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffdffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1cU))))) 
              << 0x19U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffbffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1bU))))) 
              << 0x1aU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffff7ffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1aU))))) 
              << 0x1bU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffefffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x19U))))) 
              << 0x1cU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffdfffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x18U))))) 
              << 0x1dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffbfffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x17U))))) 
              << 0x1eU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffff7fffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x16U))))) 
              << 0x1fU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffeffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x15U))))) 
              << 0x20U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffdffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x14U))))) 
              << 0x21U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffbffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x13U))))) 
              << 0x22U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffff7ffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x12U))))) 
              << 0x23U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffefffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x11U))))) 
              << 0x24U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffdfffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x10U))))) 
              << 0x25U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffbfffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xfU))))) 
              << 0x26U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fff7fffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xeU))))) 
              << 0x27U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffeffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xdU))))) 
              << 0x28U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffdffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xcU))))) 
              << 0x29U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffbffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xbU))))) 
              << 0x2aU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ff7ffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xaU))))) 
              << 0x2bU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fefffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 9U))))) 
              << 0x2cU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fdfffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 8U))))) 
              << 0x2dU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fbfffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 7U))))) 
              << 0x2eU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3f7fffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 6U))))) 
              << 0x2fU));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3effffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 5U))))) 
              << 0x30U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3dffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 4U))))) 
              << 0x31U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3bffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 3U))))) 
              << 0x32U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x37ffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 2U))))) 
              << 0x33U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x2fffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 1U))))) 
              << 0x34U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x1fffffffffffff) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut)))) 
              << 0x35U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero 
        = (1U & ((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                   >> 5U) & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                             >> 1U)) | ((~ ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 2U)) 
                                        & (0U == (3U 
                                                  & (IData)(
                                                            (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
                                                             >> 0x36U)))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sign 
        = (1U & (((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                    >> 5U) & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState)) 
                  | (((~ ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                          >> 5U)) & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                     >> 2U)) & (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                 >> 4U) 
                                                ^ ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                   >> 3U)))) 
                 | (((~ ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                         >> 5U)) & (~ ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                       >> 2U))) & (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
                                                                >> 0x36U))))
                                                    ? 
                                                   (2U 
                                                    == (IData)(vlTOPp->roundingMode))
                                                    : 
                                                   (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                     >> 4U) 
                                                    ^ 
                                                    (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
                                                     >> 0xdU))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isNaN)
            ? (VL_ULL(0x40000000000000) | (VL_ULL(0x3ffffffffffffc) 
                                           & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                              << 2U)))
            : ((4U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                ? ((VL_ULL(0xfffffffffffffe) & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig 
                                                >> 2U)) 
                   | (QData)((IData)((1U & (((0U != 
                                              (7U & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig))) 
                                             | (0U 
                                                != 
                                                ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig) 
                                                 & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)))) 
                                            | ((8U 
                                                & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                                                ? (~ (IData)(
                                                             (VL_ULL(0x1fffffffffffff) 
                                                              == 
                                                              (VL_ULL(0x1fffffffffffff) 
                                                               & (((QData)((IData)(
                                                                                vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                                                   << 0x3fU) 
                                                                  | (((QData)((IData)(
                                                                                vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                                                      << 0x1fU) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                                                        >> 1U)))))))
                                                : (0U 
                                                   != 
                                                   (VL_ULL(0x3fffffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                                        << 0x3fU) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                                           << 0x1fU) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                                             >> 1U)))))))))))
                : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isInf))) 
                 & (~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sign))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (VL_ULL(3) | ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                         | (QData)((IData)((1U & (IData)(
                                                         (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                          >> 0x37U)))))) 
                        << 2U));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                >> 3U) 
                                               & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                  >> 4U)))) 
           | ((0U != (7U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig) 
                            & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                       >> 1U))))) & 
              (~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
               >> 1U)) & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                               >> 3U))) 
           | ((0U != (7U & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig) 
                            & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))) 
              & (~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->roundingMode)) 
                                          | (4U == (IData)(vlTOPp->roundingMode))) 
                                         & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                        | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                           & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                                        ? ((VL_ULL(1) 
                                            + ((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                | vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                               >> 2U)) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                                  & (~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                                  ? 
                                                 (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                  >> 1U)
                                                  : VL_ULL(0))))
                                        : (((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                             & (~ vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                                            >> 2U) 
                                           | (((6U 
                                                == (IData)(vlTOPp->roundingMode)) 
                                               & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                               ? (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                                  >> 1U)
                                               : VL_ULL(0)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (VL_ULL(0xfffffffffffff) & ((1U & (IData)(
                                                    (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                     >> 0x37U)))
                                       ? (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                          >> 1U) : vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (0x1fffU 
                                            & VL_EXTENDS_II(13,13, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sExp)))) 
                      + (IData)((VL_ULL(0x7fffffffffffff) 
                                 & (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                    >> 0x35U)))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,13, 
                                                                        (0x1fffU 
                                                                         & VL_EXTENDS_II(13,13, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sExp)))), 0xbU))) 
               & ((1U & (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                 >> 0x37U))) ? (IData)(
                                                       (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                        >> 3U))
                   : (IData)((vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                              >> 2U)))) & (~ (((((0U 
                                                  != 
                                                  (1U 
                                                   & (IData)(vlTOPp->control))) 
                                                 & (~ 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                                 >> 0x37U)))
                                                      ? (IData)(
                                                                (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                                 >> 4U))
                                                      : (IData)(
                                                                (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                                 >> 3U))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                               >> 0x37U)))
                                                    ? (IData)(
                                                              (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                               >> 0x36U))
                                                    : (IData)(
                                                              (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                               >> 0x35U)))) 
                                               & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                              & ((((0U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   | (4U 
                                                      == (IData)(vlTOPp->roundingMode))) 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                                 >> 0x37U)))
                                                      ? (IData)(
                                                                (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                                 >> 2U))
                                                      : (IData)(
                                                                (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                                 >> 1U)))) 
                                                 | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                    & (((IData)(
                                                                (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                                 >> 0x37U)) 
                                                        & (IData)(
                                                                  (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig 
                                                                   >> 2U))) 
                                                       | (0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig))))))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 0xaU)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                            & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 0x3ceU, 
                                                            VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                 | (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isInf) 
           | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp128[0U] = (IData)((((QData)((IData)((0xfffU 
                                                & (((((((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                          & (~ 
                                                             (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero) 
                                                               | VL_GTS_III(1,32,32, 0x3ceU, 
                                                                            VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                               ? 0xe00U
                                                               : 0U))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                              ? 0xfffffc31U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                             ? 0x400U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x200U
                                                            : 0U))) 
                                                      | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                          ? 0x3ceU
                                                          : 0U)) 
                                                     | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                         ? 0xbffU
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                        ? 0xc00U
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                       ? 0xe00U
                                                       : 0U))))) 
                               << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                            & ((((QData)((IData)(
                                                                 ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                  | (((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero)) 
                                                                      & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                     & (IData)(
                                                                               (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
                                                                                >> 0x33U)))))) 
                                                 << 0x33U) 
                                                | (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                    | ((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero)) 
                                                       & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                     VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                    ? 
                                                   (VL_ULL(0x7ffffffffffff) 
                                                    & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                    : VL_ULL(0))) 
                                               | VL_NEGATE_Q((QData)((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
    __Vtemp128[1U] = (IData)(((((QData)((IData)((0xfffU 
                                                 & (((((((((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero) 
                                                                | VL_GTS_III(1,32,32, 0x3ceU, 
                                                                             VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                                ? 0xe00U
                                                                : 0U))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                               ? 0xfffffc31U
                                                               : 0U))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                              ? 0x400U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                             ? 0x200U
                                                             : 0U))) 
                                                       | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                           ? 0x3ceU
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                          ? 0xbffU
                                                          : 0U)) 
                                                     | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                         ? 0xc00U
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                        ? 0xe00U
                                                        : 0U))))) 
                                << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                             & ((((QData)((IData)(
                                                                  ((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                   | (((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero)) 
                                                                       & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                      & (IData)(
                                                                                (vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
                                                                                >> 0x33U)))))) 
                                                  << 0x33U) 
                                                 | (((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                     | ((~ (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero)) 
                                                        & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                      VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                     ? 
                                                    (VL_ULL(0x7ffffffffffff) 
                                                     & vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                     : VL_ULL(0))) 
                                                | VL_NEGATE_Q((QData)((IData)(vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))) 
                              >> 0x20U));
    vlTOPp->out[0U] = __Vtemp128[0U];
    vlTOPp->out[1U] = __Vtemp128[1U];
    vlTOPp->out[2U] = vlTOPp->mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sign;
}

void VmulAddRecF64_mul::_eval(VmulAddRecF64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF64_mul::_eval\n"); );
    VmulAddRecF64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VmulAddRecF64_mul::_eval_initial(VmulAddRecF64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF64_mul::_eval_initial\n"); );
    VmulAddRecF64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmulAddRecF64_mul::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF64_mul::final\n"); );
    // Variables
    VmulAddRecF64_mul__Syms* __restrict vlSymsp = this->__VlSymsp;
    VmulAddRecF64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmulAddRecF64_mul::_eval_settle(VmulAddRecF64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF64_mul::_eval_settle\n"); );
    VmulAddRecF64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VmulAddRecF64_mul::_change_request(VmulAddRecF64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF64_mul::_change_request\n"); );
    VmulAddRecF64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VmulAddRecF64_mul::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF64_mul::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((a[2U] & 0xfffffffeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b[2U] & 0xfffffffeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif // VL_DEBUG

void VmulAddRecF64_mul::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF64_mul::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, a);
    VL_RAND_RESET_W(65, b);
    roundingMode = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(65, out);
    exceptionFlags = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(65, mulAddRecF64_mul__DOT__zeroAddend);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__invalidExc = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isNaN = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isInf = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_isZero = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sign = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sExp = VL_RAND_RESET_I(13);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__out_sig = VL_RAND_RESET_Q(56);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState = VL_RAND_RESET_I(6);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC = VL_RAND_RESET_Q(55);
    VL_RAND_RESET_W(107, mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA = VL_RAND_RESET_Q(54);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigB = VL_RAND_RESET_Q(54);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC = VL_RAND_RESET_Q(54);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd = VL_RAND_RESET_I(14);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist = VL_RAND_RESET_I(14);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum = VL_RAND_RESET_I(13);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(164, mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC = VL_RAND_RESET_I(14);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask = VL_RAND_RESET_I(13);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(162, mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut = VL_RAND_RESET_I(13);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(162, mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum);
    VL_RAND_RESET_W(108, mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig = VL_RAND_RESET_Q(58);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig = VL_RAND_RESET_I(14);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask = VL_RAND_RESET_I(13);
    VL_RAND_RESET_W(109, mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum = VL_RAND_RESET_Q(55);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig = VL_RAND_RESET_Q(58);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum = VL_RAND_RESET_I(14);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask = VL_RAND_RESET_I(13);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig = VL_RAND_RESET_Q(56);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__c = VL_RAND_RESET_I(17);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut = VL_RAND_RESET_I(13);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn = VL_RAND_RESET_Q(55);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn = VL_RAND_RESET_Q(56);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__30__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__40__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__50__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__55__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__c = VL_RAND_RESET_Q(33);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut = VL_RAND_RESET_I(13);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut = VL_RAND_RESET_Q(52);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask = VL_RAND_RESET_Q(56);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main = VL_RAND_RESET_Q(54);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_Q(56);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_Q(55);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(14);
    VL_RAND_RESET_W(4097, mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c);
    mulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut = VL_RAND_RESET_Q(54);
}
