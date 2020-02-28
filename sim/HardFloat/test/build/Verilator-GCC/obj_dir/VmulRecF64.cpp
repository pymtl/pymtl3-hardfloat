// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmulRecF64.h for the primary calling header

#include "VmulRecF64.h"
#include "VmulRecF64__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VmulRecF64) {
    VmulRecF64__Syms* __restrict vlSymsp = __VlSymsp = new VmulRecF64__Syms(this, name());
    VmulRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VmulRecF64::__Vconfigure(VmulRecF64__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VmulRecF64::~VmulRecF64() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VmulRecF64::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmulRecF64::eval\n"); );
    VmulRecF64__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VmulRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/mulRecFN_spec.v", 71, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VmulRecF64::_eval_initial_loop(VmulRecF64__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/mulRecFN_spec.v", 71, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VmulRecF64::_settle__TOP__1(VmulRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF64::_settle__TOP__1\n"); );
    VmulRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp2[4];
    WData/*127:0*/ __Vtemp3[4];
    WData/*127:0*/ __Vtemp4[4];
    WData/*4127:0*/ __Vtemp7[129];
    WData/*4127:0*/ __Vtemp8[129];
    WData/*95:0*/ __Vtemp10[3];
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x80U] = 1U;
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                       << 3U)) | (vlTOPp->a[1U] 
                                                  >> 0x1dU)))) 
           | (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                         << 3U)) | 
                           (vlTOPp->b[1U] >> 0x1dU)))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->a[2U] 
                                              << 3U)) 
                                          | (vlTOPp->a[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->a[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->a[0U])))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->b[2U] 
                                              << 3U)) 
                                          | (vlTOPp->b[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->b[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->b[0U])))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut 
        = (0x1fffU & ((VL_EXTENDS_II(13,13, (0xfffU 
                                             & ((vlTOPp->a[2U] 
                                                 << 0xcU) 
                                                | (vlTOPp->a[1U] 
                                                   >> 0x14U)))) 
                       + VL_EXTENDS_II(13,13, (0xfffU 
                                               & ((vlTOPp->b[2U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->b[1U] 
                                                     >> 0x14U))))) 
                      - (IData)(0x800U)));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                       << 2U)) | (vlTOPp->a[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->a[1U] >> 0x1dU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                       << 2U)) | (vlTOPp->b[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->b[1U] >> 0x1dU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                       << 2U)) | (vlTOPp->a[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->a[1U] >> 0x1dU)));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                       << 2U)) | (vlTOPp->b[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->b[1U] >> 0x1dU)));
    VL_EXTEND_WQ(106,54, __Vtemp2, vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA);
    VL_EXTEND_WQ(106,54, __Vtemp3, vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB);
    VL_MUL_W(4, __Vtemp4, __Vtemp2, __Vtemp3);
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[0U] 
        = __Vtemp4[0U];
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[1U] 
        = __Vtemp4[1U];
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[2U] 
        = __Vtemp4[2U];
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[3U] 
        = (0x3ffU & __Vtemp4[3U]);
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA) 
            & (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                          << 3U)) | 
                            (vlTOPp->b[1U] >> 0x1dU))))) 
           | ((0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                          << 3U)) | 
                            (vlTOPp->a[1U] >> 0x1dU)))) 
              & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB)));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__invalidExc 
        = ((((7U == (7U & ((vlTOPp->a[2U] << 3U) | 
                           (vlTOPp->a[1U] >> 0x1dU)))) 
             & (~ (vlTOPp->a[1U] >> 0x13U))) | ((7U 
                                                 == 
                                                 (7U 
                                                  & ((vlTOPp->b[2U] 
                                                      << 3U) 
                                                     | (vlTOPp->b[1U] 
                                                        >> 0x1dU)))) 
                                                & (~ 
                                                   (vlTOPp->b[1U] 
                                                    >> 0x13U)))) 
           | (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_isNaN 
        = (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA) 
            | (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)) 
           | (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sign 
        = (1U & ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_isNaN)
                  ? ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                      ? (1U & vlTOPp->a[2U]) : ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                                 ? 
                                                (1U 
                                                 & vlTOPp->b[2U])
                                                 : 1U))
                  : (vlTOPp->a[2U] ^ vlTOPp->b[2U])));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
        = ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_isNaN)
            ? (VL_ULL(0x60000000000000) | (VL_ULL(0x1ffffffffffffc) 
                                           & (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                                                ? vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA
                                                : ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                                    ? vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB
                                                    : VL_ULL(0))) 
                                              << 2U)))
            : ((VL_ULL(0xfffffffffffffe) & (((QData)((IData)(
                                                             vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[3U])) 
                                             << 0x2eU) 
                                            | (((QData)((IData)(
                                                                vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[2U])) 
                                                << 0xeU) 
                                               | (VL_ULL(0x3ffffffffffe) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[1U])) 
                                                     >> 0x12U))))) 
               | (QData)((IData)((0U != (VL_ULL(0x7ffffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[0U])))))))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_isNaN));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sign))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut))));
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtemp7[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtemp7[0x80U] = 1U;
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp8, __Vtemp7, 
                   (0xfffU & (~ (VL_EXTENDS_II(12,13, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)) 
                                 | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x800U : 0U)))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (VL_ULL(0x3fffffffffffff) & (((QData)((IData)(
                                                        __Vtemp8[0x20U])) 
                                        << 0x33U) | 
                                       (((QData)((IData)(
                                                         __Vtemp8[0x1fU])) 
                                         << 0x13U) 
                                        | ((QData)((IData)(
                                                           __Vtemp8[0x1eU])) 
                                           >> 0xdU))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffe) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (IData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                            >> 0x35U))))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffd) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x34U))))) 
              << 1U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffb) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x33U))))) 
              << 2U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffff7) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x32U))))) 
              << 3U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffef) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x31U))))) 
              << 4U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffdf) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x30U))))) 
              << 5U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffbf) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2fU))))) 
              << 6U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffff7f) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2eU))))) 
              << 7U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffeff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2dU))))) 
              << 8U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffdff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2cU))))) 
              << 9U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffbff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2bU))))) 
              << 0xaU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffff7ff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2aU))))) 
              << 0xbU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffefff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x29U))))) 
              << 0xcU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffdfff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x28U))))) 
              << 0xdU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffbfff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x27U))))) 
              << 0xeU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffff7fff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x26U))))) 
              << 0xfU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffeffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x25U))))) 
              << 0x10U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffdffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x24U))))) 
              << 0x11U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffbffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x23U))))) 
              << 0x12U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffff7ffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x22U))))) 
              << 0x13U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffefffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x21U))))) 
              << 0x14U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffdfffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x20U))))) 
              << 0x15U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffbfffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1fU))))) 
              << 0x16U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffff7fffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1eU))))) 
              << 0x17U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffeffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1dU))))) 
              << 0x18U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffdffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1cU))))) 
              << 0x19U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffbffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1bU))))) 
              << 0x1aU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffff7ffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1aU))))) 
              << 0x1bU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffefffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x19U))))) 
              << 0x1cU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffdfffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x18U))))) 
              << 0x1dU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffbfffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x17U))))) 
              << 0x1eU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffff7fffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x16U))))) 
              << 0x1fU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffeffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x15U))))) 
              << 0x20U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffdffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x14U))))) 
              << 0x21U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffbffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x13U))))) 
              << 0x22U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffff7ffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x12U))))) 
              << 0x23U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffefffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x11U))))) 
              << 0x24U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffdfffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x10U))))) 
              << 0x25U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffbfffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xfU))))) 
              << 0x26U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fff7fffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xeU))))) 
              << 0x27U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffeffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xdU))))) 
              << 0x28U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffdffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xcU))))) 
              << 0x29U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffbffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xbU))))) 
              << 0x2aU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ff7ffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xaU))))) 
              << 0x2bU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fefffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 9U))))) 
              << 0x2cU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fdfffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 8U))))) 
              << 0x2dU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fbfffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 7U))))) 
              << 0x2eU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3f7fffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 6U))))) 
              << 0x2fU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3effffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 5U))))) 
              << 0x30U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3dffffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 4U))))) 
              << 0x31U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3bffffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 3U))))) 
              << 0x32U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x37ffffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 2U))))) 
              << 0x33U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x2fffffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 1U))))) 
              << 0x34U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x1fffffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut)))) 
              << 0x35U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (VL_ULL(3) | ((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                         | (QData)((IData)((1U & (IData)(
                                                         (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                          >> 0x37U)))))) 
                        << 2U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                >> 3U) 
                                               & (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                  >> 4U)))) 
           | ((0U != (7U & ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig) 
                            & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                       >> 1U))))) & 
              (~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
               >> 1U)) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                               >> 3U))) 
           | ((0U != (7U & ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig) 
                            & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))) 
              & (~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->roundingMode)) 
                                          | (4U == (IData)(vlTOPp->roundingMode))) 
                                         & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                        | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                           & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                                        ? ((VL_ULL(1) 
                                            + ((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                | vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                               >> 2U)) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                                  & (~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                                  ? 
                                                 (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                  >> 1U)
                                                  : VL_ULL(0))))
                                        : (((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                             & (~ vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                                            >> 2U) 
                                           | (((6U 
                                                == (IData)(vlTOPp->roundingMode)) 
                                               & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                               ? (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                                  >> 1U)
                                               : VL_ULL(0)))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (VL_ULL(0xfffffffffffff) & ((1U & (IData)(
                                                    (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                     >> 0x37U)))
                                       ? (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                          >> 1U) : vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (0x1fffU 
                                            & VL_EXTENDS_II(13,13, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)))) 
                      + (IData)((VL_ULL(0x7fffffffffffff) 
                                 & (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                    >> 0x35U)))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,13, 
                                                                        (0x1fffU 
                                                                         & VL_EXTENDS_II(13,13, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)))), 0xbU))) 
               & ((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                 >> 0x37U))) ? (IData)(
                                                       (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                        >> 3U))
                   : (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                              >> 2U)))) & (~ (((((0U 
                                                  != 
                                                  (1U 
                                                   & (IData)(vlTOPp->control))) 
                                                 & (~ 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                                 >> 0x37U)))
                                                      ? (IData)(
                                                                (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                                 >> 4U))
                                                      : (IData)(
                                                                (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                                 >> 3U))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                               >> 0x37U)))
                                                    ? (IData)(
                                                              (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                               >> 0x36U))
                                                    : (IData)(
                                                              (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                               >> 0x35U)))) 
                                               & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                              & ((((0U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   | (4U 
                                                      == (IData)(vlTOPp->roundingMode))) 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                                 >> 0x37U)))
                                                      ? (IData)(
                                                                (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                                 >> 2U))
                                                      : (IData)(
                                                                (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                                 >> 1U)))) 
                                                 | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                    & (((IData)(
                                                                (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                                 >> 0x37U)) 
                                                        & (IData)(
                                                                  (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                                   >> 2U))) 
                                                       | (0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig))))))))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 0xaU)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                            & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 0x3ceU, 
                                                            VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                 | (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp10[0U] = (IData)((((QData)((IData)((0xfffU 
                                               & (((((((((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                         & (~ 
                                                            (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut) 
                                                              | VL_GTS_III(1,32,32, 0x3ceU, 
                                                                           VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                              ? 0xe00U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                             ? 0xfffffc31U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                            ? 0x400U
                                                            : 0U))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                           ? 0x200U
                                                           : 0U))) 
                                                     | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                         ? 0x3ceU
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                        ? 0xbffU
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                       ? 0xc00U
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                      ? 0xe00U
                                                      : 0U))))) 
                              << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                           & ((((QData)((IData)(
                                                                ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                 | (((~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                                     & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                    & (IData)(
                                                                              (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
                                                                               >> 0x33U)))))) 
                                                << 0x33U) 
                                               | (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                   | ((~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                      & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                    VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                   ? 
                                                  (VL_ULL(0x7ffffffffffff) 
                                                   & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                   : VL_ULL(0))) 
                                              | VL_NEGATE_Q((QData)((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
    __Vtemp10[1U] = (IData)(((((QData)((IData)((0xfffU 
                                                & (((((((((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                          & (~ 
                                                             (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut) 
                                                               | VL_GTS_III(1,32,32, 0x3ceU, 
                                                                            VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                               ? 0xe00U
                                                               : 0U))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                              ? 0xfffffc31U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                             ? 0x400U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x200U
                                                            : 0U))) 
                                                      | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                          ? 0x3ceU
                                                          : 0U)) 
                                                     | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                         ? 0xbffU
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                        ? 0xc00U
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                       ? 0xe00U
                                                       : 0U))))) 
                               << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                            & ((((QData)((IData)(
                                                                 ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                  | (((~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                                      & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                     & (IData)(
                                                                               (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
                                                                                >> 0x33U)))))) 
                                                 << 0x33U) 
                                                | (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                    | ((~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                       & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                     VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                    ? 
                                                   (VL_ULL(0x7ffffffffffff) 
                                                    & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                    : VL_ULL(0))) 
                                               | VL_NEGATE_Q((QData)((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))) 
                             >> 0x20U));
    vlTOPp->out[0U] = __Vtemp10[0U];
    vlTOPp->out[1U] = __Vtemp10[1U];
    vlTOPp->out[2U] = vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sign;
}

VL_INLINE_OPT void VmulRecF64::_combo__TOP__2(VmulRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF64::_combo__TOP__2\n"); );
    VmulRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp12[4];
    WData/*127:0*/ __Vtemp13[4];
    WData/*127:0*/ __Vtemp14[4];
    WData/*4127:0*/ __Vtemp17[129];
    WData/*95:0*/ __Vtemp19[3];
    // Body
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                       << 3U)) | (vlTOPp->a[1U] 
                                                  >> 0x1dU)))) 
           | (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                         << 3U)) | 
                           (vlTOPp->b[1U] >> 0x1dU)))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->a[2U] 
                                              << 3U)) 
                                          | (vlTOPp->a[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->a[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->a[0U])))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->b[2U] 
                                              << 3U)) 
                                          | (vlTOPp->b[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->b[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->b[0U])))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut 
        = (0x1fffU & ((VL_EXTENDS_II(13,13, (0xfffU 
                                             & ((vlTOPp->a[2U] 
                                                 << 0xcU) 
                                                | (vlTOPp->a[1U] 
                                                   >> 0x14U)))) 
                       + VL_EXTENDS_II(13,13, (0xfffU 
                                               & ((vlTOPp->b[2U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->b[1U] 
                                                     >> 0x14U))))) 
                      - (IData)(0x800U)));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                       << 2U)) | (vlTOPp->a[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->a[1U] >> 0x1dU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                       << 2U)) | (vlTOPp->b[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->b[1U] >> 0x1dU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                       << 2U)) | (vlTOPp->a[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->a[1U] >> 0x1dU)));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                       << 2U)) | (vlTOPp->b[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->b[1U] >> 0x1dU)));
    VL_EXTEND_WQ(106,54, __Vtemp12, vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA);
    VL_EXTEND_WQ(106,54, __Vtemp13, vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB);
    VL_MUL_W(4, __Vtemp14, __Vtemp12, __Vtemp13);
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[0U] 
        = __Vtemp14[0U];
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[1U] 
        = __Vtemp14[1U];
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[2U] 
        = __Vtemp14[2U];
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[3U] 
        = (0x3ffU & __Vtemp14[3U]);
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA) 
            & (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                          << 3U)) | 
                            (vlTOPp->b[1U] >> 0x1dU))))) 
           | ((0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                          << 3U)) | 
                            (vlTOPp->a[1U] >> 0x1dU)))) 
              & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB)));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__invalidExc 
        = ((((7U == (7U & ((vlTOPp->a[2U] << 3U) | 
                           (vlTOPp->a[1U] >> 0x1dU)))) 
             & (~ (vlTOPp->a[1U] >> 0x13U))) | ((7U 
                                                 == 
                                                 (7U 
                                                  & ((vlTOPp->b[2U] 
                                                      << 3U) 
                                                     | (vlTOPp->b[1U] 
                                                        >> 0x1dU)))) 
                                                & (~ 
                                                   (vlTOPp->b[1U] 
                                                    >> 0x13U)))) 
           | (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_isNaN 
        = (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA) 
            | (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)) 
           | (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sign 
        = (1U & ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_isNaN)
                  ? ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                      ? (1U & vlTOPp->a[2U]) : ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                                 ? 
                                                (1U 
                                                 & vlTOPp->b[2U])
                                                 : 1U))
                  : (vlTOPp->a[2U] ^ vlTOPp->b[2U])));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
        = ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_isNaN)
            ? (VL_ULL(0x60000000000000) | (VL_ULL(0x1ffffffffffffc) 
                                           & (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                                                ? vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA
                                                : ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                                    ? vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB
                                                    : VL_ULL(0))) 
                                              << 2U)))
            : ((VL_ULL(0xfffffffffffffe) & (((QData)((IData)(
                                                             vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[3U])) 
                                             << 0x2eU) 
                                            | (((QData)((IData)(
                                                                vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[2U])) 
                                                << 0xeU) 
                                               | (VL_ULL(0x3ffffffffffe) 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[1U])) 
                                                     >> 0x12U))))) 
               | (QData)((IData)((0U != (VL_ULL(0x7ffffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[0U])))))))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_isNaN));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sign))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut))));
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp17, vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0xfffU & (~ (VL_EXTENDS_II(12,13, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)) 
                                 | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x800U : 0U)))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (VL_ULL(0x3fffffffffffff) & (((QData)((IData)(
                                                        __Vtemp17[0x20U])) 
                                        << 0x33U) | 
                                       (((QData)((IData)(
                                                         __Vtemp17[0x1fU])) 
                                         << 0x13U) 
                                        | ((QData)((IData)(
                                                           __Vtemp17[0x1eU])) 
                                           >> 0xdU))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffe) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (IData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                            >> 0x35U))))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffd) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x34U))))) 
              << 1U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffb) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x33U))))) 
              << 2U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffff7) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x32U))))) 
              << 3U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffef) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x31U))))) 
              << 4U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffdf) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x30U))))) 
              << 5U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffbf) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2fU))))) 
              << 6U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffff7f) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2eU))))) 
              << 7U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffeff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2dU))))) 
              << 8U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffdff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2cU))))) 
              << 9U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffbff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2bU))))) 
              << 0xaU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffff7ff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2aU))))) 
              << 0xbU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffefff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x29U))))) 
              << 0xcU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffdfff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x28U))))) 
              << 0xdU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffbfff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x27U))))) 
              << 0xeU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffff7fff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x26U))))) 
              << 0xfU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffeffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x25U))))) 
              << 0x10U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffdffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x24U))))) 
              << 0x11U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffbffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x23U))))) 
              << 0x12U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffff7ffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x22U))))) 
              << 0x13U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffefffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x21U))))) 
              << 0x14U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffdfffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x20U))))) 
              << 0x15U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffbfffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1fU))))) 
              << 0x16U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffff7fffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1eU))))) 
              << 0x17U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffeffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1dU))))) 
              << 0x18U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffdffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1cU))))) 
              << 0x19U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffbffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1bU))))) 
              << 0x1aU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffff7ffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1aU))))) 
              << 0x1bU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffefffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x19U))))) 
              << 0x1cU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffdfffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x18U))))) 
              << 0x1dU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffbfffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x17U))))) 
              << 0x1eU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffff7fffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x16U))))) 
              << 0x1fU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffeffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x15U))))) 
              << 0x20U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffdffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x14U))))) 
              << 0x21U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffbffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x13U))))) 
              << 0x22U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffff7ffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x12U))))) 
              << 0x23U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffefffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x11U))))) 
              << 0x24U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffdfffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x10U))))) 
              << 0x25U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffbfffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xfU))))) 
              << 0x26U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fff7fffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xeU))))) 
              << 0x27U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffeffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xdU))))) 
              << 0x28U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffdffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xcU))))) 
              << 0x29U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffbffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xbU))))) 
              << 0x2aU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ff7ffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xaU))))) 
              << 0x2bU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fefffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 9U))))) 
              << 0x2cU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fdfffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 8U))))) 
              << 0x2dU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fbfffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 7U))))) 
              << 0x2eU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3f7fffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 6U))))) 
              << 0x2fU));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3effffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 5U))))) 
              << 0x30U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3dffffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 4U))))) 
              << 0x31U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3bffffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 3U))))) 
              << 0x32U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x37ffffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 2U))))) 
              << 0x33U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x2fffffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 1U))))) 
              << 0x34U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x1fffffffffffff) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut)))) 
              << 0x35U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (VL_ULL(3) | ((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                         | (QData)((IData)((1U & (IData)(
                                                         (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                          >> 0x37U)))))) 
                        << 2U));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                >> 3U) 
                                               & (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                  >> 4U)))) 
           | ((0U != (7U & ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig) 
                            & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                       >> 1U))))) & 
              (~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
               >> 1U)) & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                               >> 3U))) 
           | ((0U != (7U & ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig) 
                            & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))) 
              & (~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->roundingMode)) 
                                          | (4U == (IData)(vlTOPp->roundingMode))) 
                                         & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                        | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                           & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                                        ? ((VL_ULL(1) 
                                            + ((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                | vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                               >> 2U)) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                                  & (~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                                  ? 
                                                 (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                  >> 1U)
                                                  : VL_ULL(0))))
                                        : (((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                             & (~ vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                                            >> 2U) 
                                           | (((6U 
                                                == (IData)(vlTOPp->roundingMode)) 
                                               & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                               ? (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                                  >> 1U)
                                               : VL_ULL(0)))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (VL_ULL(0xfffffffffffff) & ((1U & (IData)(
                                                    (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                     >> 0x37U)))
                                       ? (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                          >> 1U) : vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (0x1fffU 
                                            & VL_EXTENDS_II(13,13, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)))) 
                      + (IData)((VL_ULL(0x7fffffffffffff) 
                                 & (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                    >> 0x35U)))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,13, 
                                                                        (0x1fffU 
                                                                         & VL_EXTENDS_II(13,13, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)))), 0xbU))) 
               & ((1U & (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                 >> 0x37U))) ? (IData)(
                                                       (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                        >> 3U))
                   : (IData)((vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                              >> 2U)))) & (~ (((((0U 
                                                  != 
                                                  (1U 
                                                   & (IData)(vlTOPp->control))) 
                                                 & (~ 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                                 >> 0x37U)))
                                                      ? (IData)(
                                                                (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                                 >> 4U))
                                                      : (IData)(
                                                                (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                                 >> 3U))))) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                               >> 0x37U)))
                                                    ? (IData)(
                                                              (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                               >> 0x36U))
                                                    : (IData)(
                                                              (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                               >> 0x35U)))) 
                                               & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                              & ((((0U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   | (4U 
                                                      == (IData)(vlTOPp->roundingMode))) 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                                 >> 0x37U)))
                                                      ? (IData)(
                                                                (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                                 >> 2U))
                                                      : (IData)(
                                                                (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                                 >> 1U)))) 
                                                 | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                    & (((IData)(
                                                                (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                                 >> 0x37U)) 
                                                        & (IData)(
                                                                  (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig 
                                                                   >> 2U))) 
                                                       | (0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sig))))))))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 0xaU)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                            & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 0x3ceU, 
                                                            VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                 | (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp19[0U] = (IData)((((QData)((IData)((0xfffU 
                                               & (((((((((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                         & (~ 
                                                            (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut) 
                                                              | VL_GTS_III(1,32,32, 0x3ceU, 
                                                                           VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                              ? 0xe00U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                             ? 0xfffffc31U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                            ? 0x400U
                                                            : 0U))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                           ? 0x200U
                                                           : 0U))) 
                                                     | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                         ? 0x3ceU
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                        ? 0xbffU
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                       ? 0xc00U
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                      ? 0xe00U
                                                      : 0U))))) 
                              << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                           & ((((QData)((IData)(
                                                                ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                 | (((~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                                     & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                    & (IData)(
                                                                              (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
                                                                               >> 0x33U)))))) 
                                                << 0x33U) 
                                               | (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                   | ((~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                      & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                    VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                   ? 
                                                  (VL_ULL(0x7ffffffffffff) 
                                                   & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                   : VL_ULL(0))) 
                                              | VL_NEGATE_Q((QData)((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
    __Vtemp19[1U] = (IData)(((((QData)((IData)((0xfffU 
                                                & (((((((((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                          & (~ 
                                                             (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut) 
                                                               | VL_GTS_III(1,32,32, 0x3ceU, 
                                                                            VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                               ? 0xe00U
                                                               : 0U))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                              ? 0xfffffc31U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                             ? 0x400U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x200U
                                                            : 0U))) 
                                                      | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                          ? 0x3ceU
                                                          : 0U)) 
                                                     | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                         ? 0xbffU
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                        ? 0xc00U
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                       ? 0xe00U
                                                       : 0U))))) 
                               << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                            & ((((QData)((IData)(
                                                                 ((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                  | (((~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                                      & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                     & (IData)(
                                                                               (vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
                                                                                >> 0x33U)))))) 
                                                 << 0x33U) 
                                                | (((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                    | ((~ (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                       & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                     VL_EXTENDS_II(32,14, (IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                    ? 
                                                   (VL_ULL(0x7ffffffffffff) 
                                                    & vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                    : VL_ULL(0))) 
                                               | VL_NEGATE_Q((QData)((IData)(vlTOPp->mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))) 
                             >> 0x20U));
    vlTOPp->out[0U] = __Vtemp19[0U];
    vlTOPp->out[1U] = __Vtemp19[1U];
    vlTOPp->out[2U] = vlTOPp->mulRecF64__DOT__mulRecFN__DOT__out_sign;
}

void VmulRecF64::_eval(VmulRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF64::_eval\n"); );
    VmulRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VmulRecF64::_eval_initial(VmulRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF64::_eval_initial\n"); );
    VmulRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmulRecF64::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF64::final\n"); );
    // Variables
    VmulRecF64__Syms* __restrict vlSymsp = this->__VlSymsp;
    VmulRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmulRecF64::_eval_settle(VmulRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF64::_eval_settle\n"); );
    VmulRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VmulRecF64::_change_request(VmulRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF64::_change_request\n"); );
    VmulRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VmulRecF64::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF64::_eval_debug_assertions\n"); );
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
#endif  // VL_DEBUG

void VmulRecF64::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF64::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, a);
    VL_RAND_RESET_W(65, b);
    roundingMode = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(65, out);
    exceptionFlags = VL_RAND_RESET_I(5);
    mulRecF64__DOT__mulRecFN__DOT__invalidExc = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__out_isNaN = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__out_sign = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__out_sig = VL_RAND_RESET_Q(56);
    mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA = VL_RAND_RESET_Q(54);
    mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB = VL_RAND_RESET_Q(54);
    mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut = VL_RAND_RESET_I(13);
    VL_RAND_RESET_W(106, mulRecF64__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut = VL_RAND_RESET_Q(52);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask = VL_RAND_RESET_Q(56);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main = VL_RAND_RESET_Q(54);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_Q(56);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_Q(55);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(14);
    VL_RAND_RESET_W(4097, mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c);
    mulRecF64__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut = VL_RAND_RESET_Q(54);
}
