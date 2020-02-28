// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmulRecF128.h for the primary calling header

#include "VmulRecF128.h"
#include "VmulRecF128__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VmulRecF128) {
    VmulRecF128__Syms* __restrict vlSymsp = __VlSymsp = new VmulRecF128__Syms(this, name());
    VmulRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VmulRecF128::__Vconfigure(VmulRecF128__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VmulRecF128::~VmulRecF128() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VmulRecF128::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmulRecF128::eval\n"); );
    VmulRecF128__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VmulRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/mulRecFN_spec.v", 86, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VmulRecF128::_eval_initial_loop(VmulRecF128__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/mulRecFN_spec.v", 86, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VmulRecF128::_settle__TOP__1(VmulRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF128::_settle__TOP__1\n"); );
    VmulRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp10[8];
    WData/*255:0*/ __Vtemp11[8];
    WData/*255:0*/ __Vtemp12[8];
    WData/*127:0*/ __Vtemp23[4];
    WData/*127:0*/ __Vtemp24[4];
    WData/*65567:0*/ __Vtemp35[2049];
    WData/*65567:0*/ __Vtemp36[2049];
    WData/*127:0*/ __Vtemp40[4];
    WData/*127:0*/ __Vtemp46[4];
    WData/*127:0*/ __Vtemp51[4];
    WData/*127:0*/ __Vtemp61[4];
    WData/*127:0*/ __Vtemp62[4];
    WData/*127:0*/ __Vtemp63[4];
    WData/*127:0*/ __Vtemp64[4];
    WData/*127:0*/ __Vtemp65[4];
    WData/*127:0*/ __Vtemp72[4];
    WData/*127:0*/ __Vtemp73[4];
    WData/*127:0*/ __Vtemp74[4];
    WData/*127:0*/ __Vtemp86[4];
    WData/*127:0*/ __Vtemp93[4];
    WData/*127:0*/ __Vtemp106[4];
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x7ffU)) {
        vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x800U] = 1U;
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((0U == (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                      << 3U)) | (vlTOPp->a[3U] 
                                                 >> 0x1dU)))) 
           | (0U == (7U & ((0x7fff8U & (vlTOPp->b[4U] 
                                        << 3U)) | (
                                                   vlTOPp->b[3U] 
                                                   >> 0x1dU)))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[0U] 
        = vlTOPp->a[0U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[1U] 
        = vlTOPp->a[1U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[2U] 
        = vlTOPp->a[2U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->a[4U] 
                                             << 3U)) 
                                         | (vlTOPp->a[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->a[3U]));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[0U] 
        = vlTOPp->b[0U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[1U] 
        = vlTOPp->b[1U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[2U] 
        = vlTOPp->b[2U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->b[4U] 
                                             << 3U)) 
                                         | (vlTOPp->b[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->b[3U]));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut 
        = (0x1ffffU & ((VL_EXTENDS_II(17,17, (0xffffU 
                                              & ((vlTOPp->a[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->a[3U] 
                                                    >> 0x10U)))) 
                        + VL_EXTENDS_II(17,17, (0xffffU 
                                                & ((vlTOPp->b[4U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->b[3U] 
                                                      >> 0x10U))))) 
                       - (IData)(0x8000U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                      << 2U)) | (vlTOPp->a[3U] 
                                                 >> 0x1eU)))) 
           & (vlTOPp->a[3U] >> 0x1dU));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->b[4U] 
                                      << 2U)) | (vlTOPp->b[3U] 
                                                 >> 0x1eU)))) 
           & (vlTOPp->b[3U] >> 0x1dU));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                      << 2U)) | (vlTOPp->a[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->a[3U] >> 0x1dU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->b[4U] 
                                      << 2U)) | (vlTOPp->b[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->b[3U] >> 0x1dU)));
    VL_EXTEND_WW(226,114, __Vtemp10, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA);
    VL_EXTEND_WW(226,114, __Vtemp11, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB);
    VL_MUL_W(8, __Vtemp12, __Vtemp10, __Vtemp11);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[0U] 
        = __Vtemp12[0U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[1U] 
        = __Vtemp12[1U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[2U] 
        = __Vtemp12[2U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[3U] 
        = __Vtemp12[3U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[4U] 
        = __Vtemp12[4U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[5U] 
        = __Vtemp12[5U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[6U] 
        = __Vtemp12[6U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[7U] 
        = (3U & __Vtemp12[7U]);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA) 
            & (0U == (7U & ((0x7fff8U & (vlTOPp->b[4U] 
                                         << 3U)) | 
                            (vlTOPp->b[3U] >> 0x1dU))))) 
           | ((0U == (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                         << 3U)) | 
                            (vlTOPp->a[3U] >> 0x1dU)))) 
              & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__invalidExc 
        = ((((7U == (7U & ((vlTOPp->a[4U] << 3U) | 
                           (vlTOPp->a[3U] >> 0x1dU)))) 
             & (~ (vlTOPp->a[3U] >> 0xfU))) | ((7U 
                                                == 
                                                (7U 
                                                 & ((vlTOPp->b[4U] 
                                                     << 3U) 
                                                    | (vlTOPp->b[3U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  (vlTOPp->b[3U] 
                                                   >> 0xfU)))) 
           | (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_isNaN 
        = (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA) 
            | (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)) 
           | (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sign 
        = (1U & ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_isNaN)
                  ? ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                      ? (1U & vlTOPp->a[4U]) : ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                                 ? 
                                                (1U 
                                                 & vlTOPp->b[4U])
                                                 : 1U))
                  : (vlTOPp->a[4U] ^ vlTOPp->b[4U])));
    __Vtemp23[0U] = (0xfffffffcU & (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                                      ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[0U]
                                      : ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                          ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[0U]
                                          : 0U)) << 2U));
    __Vtemp23[1U] = ((3U & (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                              ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[0U]
                              : ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                  ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[0U]
                                  : 0U)) >> 0x1eU)) 
                     | (0xfffffffcU & (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                                         ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[1U]
                                         : ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                             ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[1U]
                                             : 0U)) 
                                       << 2U)));
    __Vtemp23[2U] = ((3U & (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                              ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[1U]
                              : ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                  ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[1U]
                                  : 0U)) >> 0x1eU)) 
                     | (0xfffffffcU & (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                                         ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[2U]
                                         : ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                             ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[2U]
                                             : 0U)) 
                                       << 2U)));
    __Vtemp23[3U] = (0x60000U | ((3U & (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                                          ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[2U]
                                          : ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                              ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[2U]
                                              : 0U)) 
                                        >> 0x1eU)) 
                                 | (0x1fffcU & (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                                                  ? 
                                                 vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[3U]
                                                  : 
                                                 ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                                   ? 
                                                  vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[3U]
                                                   : 0U)) 
                                                << 2U))));
    VL_EXTEND_WW(116,115, __Vtemp24, __Vtemp23);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_isNaN)
            ? __Vtemp24[0U] : ((0xfffffffeU & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[4U] 
                                                << 0x12U) 
                                               | (0x3fffeU 
                                                  & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[3U] 
                                                     >> 0xeU)))) 
                               | (0U != (((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[0U] 
                                           | vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[1U]) 
                                          | vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[2U]) 
                                         | (0x7fffU 
                                            & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[3U])))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[1U] 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_isNaN)
            ? __Vtemp24[1U] : ((1U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[4U] 
                                      >> 0xeU)) | (0xfffffffeU 
                                                   & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[5U] 
                                                       << 0x12U) 
                                                      | (0x3fffeU 
                                                         & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[4U] 
                                                            >> 0xeU))))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[2U] 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_isNaN)
            ? __Vtemp24[2U] : ((1U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[5U] 
                                      >> 0xeU)) | (0xfffffffeU 
                                                   & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[6U] 
                                                       << 0x12U) 
                                                      | (0x3fffeU 
                                                         & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[5U] 
                                                            >> 0xeU))))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_isNaN)
            ? __Vtemp24[3U] : ((1U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[6U] 
                                      >> 0xeU)) | (0xffffeU 
                                                   & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[7U] 
                                                       << 0x12U) 
                                                      | (0x3fffeU 
                                                         & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[6U] 
                                                            >> 0xeU))))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_isNaN));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sign))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut))));
    __Vilp = 0U;
    while ((__Vilp <= 0x7ffU)) {
        __Vtemp35[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtemp35[0x800U] = 1U;
    VL_SHIFTRS_WWI(65537,65537,16, __Vtemp36, __Vtemp35, 
                   (0xffffU & (~ (VL_EXTENDS_II(16,17, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut) 
                                  | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                      ? 0x8000U : 0U)))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
        = ((__Vtemp36[0x1fdU] << 0xfU) | (__Vtemp36[0x1fcU] 
                                          >> 0x11U));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
        = ((__Vtemp36[0x1feU] << 0xfU) | (__Vtemp36[0x1fdU] 
                                          >> 0x11U));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
        = ((__Vtemp36[0x1ffU] << 0xfU) | (__Vtemp36[0x1feU] 
                                          >> 0x11U));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
        = (0x3ffffU & ((__Vtemp36[0x200U] << 0xfU) 
                       | (__Vtemp36[0x1ffU] >> 0x11U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffeU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (1U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0x11U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffdU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (2U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xfU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffbU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (4U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffff7U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (8U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffefU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffdfU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffbfU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffff7fU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffeffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x100U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        >> 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffdffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x200U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffbffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x400U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffff7ffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x800U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffefffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x1000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffdfffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x2000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffbfffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x4000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffff7fffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x8000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffeffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                          << 0xfU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffdffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                          << 0x11U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffbffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          >> 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfff7ffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          >> 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffefffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x100000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffdfffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x200000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffbfffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x400000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xff7fffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x800000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfeffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x1000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            >> 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfdffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x2000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfbffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x4000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xf7ffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x8000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xefffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xdfffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xbfffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0x7fffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffeU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (1U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0x11U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffdU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (2U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xfU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffbU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (4U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffff7U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (8U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffefU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffdfU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffbfU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffff7fU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffeffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x100U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        >> 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffdffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x200U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffbffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x400U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffff7ffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x800U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffefffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x1000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffdfffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x2000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffbfffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x4000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffff7fffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x8000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffeffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          << 0xfU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffdffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          << 0x11U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffbffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          >> 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfff7ffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          >> 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffefffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x100000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffdfffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x200000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffbfffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x400000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xff7fffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x800000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfeffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x1000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            >> 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfdffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x2000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfbffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x4000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xf7ffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x8000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xefffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xdfffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xbfffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0x7fffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffeU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (1U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0x11U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffdU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (2U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xfU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffbU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (4U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffff7U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (8U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffefU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffdfU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffbfU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffff7fU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffeffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x100U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        >> 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffdffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x200U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffbffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x400U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffff7ffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x800U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffefffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x1000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffdfffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x2000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffbfffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x4000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffff7fffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x8000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffeffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          << 0xfU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffdffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          << 0x11U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffbffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          >> 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfff7ffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          >> 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffefffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x100000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffdfffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x200000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffbfffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x400000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xff7fffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x800000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfeffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x1000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            >> 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfdffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x2000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfbffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x4000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xf7ffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x8000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xefffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xdfffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xbfffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0x7fffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffeU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (1U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0x11U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffdU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (2U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xfU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffbU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (4U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fff7U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (8U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffefU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x10U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffdfU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x20U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffbfU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x40U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ff7fU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x80U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3feffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x100U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        >> 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fdffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x200U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fbffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x400U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3f7ffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x800U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3efffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x1000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3dfffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x2000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3bfffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x4000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x37fffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x8000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x2ffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x10000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          << 0xfU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x1ffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x20000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          << 0x11U)));
    VL_EXTEND_WI(114,1, __Vtemp40, (1U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
                                          >> 0x13U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
        = (3U | (0xfffffffcU & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
                                 | __Vtemp40[0U]) << 2U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U] 
        = ((3U & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
                   | __Vtemp40[0U]) >> 0x1eU)) | (0xfffffffcU 
                                                  & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
                                                      | __Vtemp40[1U]) 
                                                     << 2U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U] 
        = ((3U & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
                   | __Vtemp40[1U]) >> 0x1eU)) | (0xfffffffcU 
                                                  & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
                                                      | __Vtemp40[2U]) 
                                                     << 2U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U] 
        = ((3U & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
                   | __Vtemp40[2U]) >> 0x1eU)) | (0xfffffffcU 
                                                  & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
                                                      | __Vtemp40[3U]) 
                                                     << 2U)));
    VL_SHIFTR_WWI(116,116,32, __Vtemp46, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != ((((((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[1U] 
                        << 0x1dU) | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                                     >> 3U)) & ((__Vtemp46[1U] 
                                                 << 0x1dU) 
                                                | (__Vtemp46[0U] 
                                                   >> 3U))) 
                     | (((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[2U] 
                          << 0x1dU) | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[1U] 
                                       >> 3U)) & ((
                                                   __Vtemp46[2U] 
                                                   << 0x1dU) 
                                                  | (__Vtemp46[1U] 
                                                     >> 3U)))) 
                    | (((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
                         << 0x1dU) | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[2U] 
                                      >> 3U)) & ((0xe0000000U 
                                                  & (__Vtemp46[3U] 
                                                     << 0x1dU)) 
                                                 | (__Vtemp46[2U] 
                                                    >> 3U)))) 
                   | (0x1ffffU & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
                                   >> 3U) & (__Vtemp46[3U] 
                                             >> 3U))))) 
           | ((0U != (7U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                            & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U] 
                                << 0x1fU) | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                             >> 1U))))) 
              & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    VL_SHIFTR_WWI(116,116,32, __Vtemp51, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U] 
        = ((~ __Vtemp51[0U]) & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
        = ((~ __Vtemp51[1U]) & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
        = ((~ __Vtemp51[2U]) & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U] 
        = ((~ __Vtemp51[3U]) & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != ((((((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[1U] 
                        << 0x1dU) | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                                     >> 3U)) & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U] 
                                                   >> 3U))) 
                     | (((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[2U] 
                          << 0x1dU) | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[1U] 
                                       >> 3U)) & ((
                                                   vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
                                                     >> 3U)))) 
                    | (((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
                         << 0x1dU) | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[2U] 
                                      >> 3U)) & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U] 
                                                  << 0x1dU) 
                                                 | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
                                                    >> 3U)))) 
                   | (0x1ffffU & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
                                   & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U]) 
                                  >> 3U)))) | ((0U 
                                                != 
                                                (7U 
                                                 & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                                                    & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U]))) 
                                               & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    __Vtemp61[0U] = 1U;
    __Vtemp61[1U] = 0U;
    __Vtemp61[2U] = 0U;
    __Vtemp61[3U] = 0U;
    __Vtemp62[0U] = (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                     | vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]);
    __Vtemp62[1U] = (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[1U] 
                     | vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]);
    __Vtemp62[2U] = (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[2U] 
                     | vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]);
    __Vtemp62[3U] = (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
                     | vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]);
    VL_SHIFTR_WWI(116,116,32, __Vtemp63, __Vtemp62, 2U);
    VL_ADD_W(4, __Vtemp64, __Vtemp61, __Vtemp63);
    VL_SHIFTR_WWI(116,116,32, __Vtemp65, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    __Vtemp72[0U] = (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                     & (~ vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]));
    __Vtemp72[1U] = (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[1U] 
                     & (~ vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]));
    __Vtemp72[2U] = (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[2U] 
                     & (~ vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]));
    __Vtemp72[3U] = (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
                     & (~ vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]));
    VL_SHIFTR_WWI(116,116,32, __Vtemp73, __Vtemp72, 2U);
    VL_SHIFTR_WWI(116,116,32, __Vtemp74, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask, 1U);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[0U] 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              | (4U == (IData)(vlTOPp->roundingMode))) 
             & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp64[0U] & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                     & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? __Vtemp65[0U]
                                    : 0U))) : (__Vtemp73[0U] 
                                               | (((6U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                   ? 
                                                  __Vtemp74[0U]
                                                   : 0U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[1U] 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              | (4U == (IData)(vlTOPp->roundingMode))) 
             & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp64[1U] & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                     & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? __Vtemp65[1U]
                                    : 0U))) : (__Vtemp73[1U] 
                                               | (((6U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                   ? 
                                                  __Vtemp74[1U]
                                                   : 0U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[2U] 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              | (4U == (IData)(vlTOPp->roundingMode))) 
             & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp64[2U] & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                     & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? __Vtemp65[2U]
                                    : 0U))) : (__Vtemp73[2U] 
                                               | (((6U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                   ? 
                                                  __Vtemp74[2U]
                                                   : 0U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
        = (0x7ffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                          | (4U == (IData)(vlTOPp->roundingMode))) 
                         & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                        | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                           & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                        ? (__Vtemp64[3U] & (~ ((((0U 
                                                  == (IData)(vlTOPp->roundingMode)) 
                                                 & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                                & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                                ? __Vtemp65[3U]
                                                : 0U)))
                        : (__Vtemp73[3U] | (((6U == (IData)(vlTOPp->roundingMode)) 
                                             & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                             ? __Vtemp74[3U]
                                             : 0U))));
    VL_SHIFTR_WWI(115,115,32, __Vtemp86, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig, 1U);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[0U] 
        = ((0x80000U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U])
            ? __Vtemp86[0U] : vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[0U]);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[1U] 
        = ((0x80000U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U])
            ? __Vtemp86[1U] : vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[1U]);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[2U] 
        = ((0x80000U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U])
            ? __Vtemp86[2U] : vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[2U]);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U] 
        = (0xffffU & ((0x80000U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U])
                       ? __Vtemp86[3U] : vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U]));
    VL_SHIFTR_WWI(115,115,32, __Vtemp93, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig, 0x71U);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x3ffffU & (VL_EXTENDS_II(18,17, (0x1ffffU 
                                             & VL_EXTENDS_II(17,17, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut))) 
                       + __Vtemp93[0U]));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x3f92U, VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           & ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x3f92U, VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)) 
           | ((((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,17, 
                                                                        (0x1ffffU 
                                                                         & VL_EXTENDS_II(17,17, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut))), 0xfU))) 
               & ((0x80000U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U])
                   ? (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                      >> 3U) : (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x80000U 
                                                       & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U])
                                                       ? 
                                                      (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                                       >> 4U)
                                                       : 
                                                      (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                                       >> 3U)))) 
                                                 & ((0x80000U 
                                                     & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U])
                                                     ? 
                                                    (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
                                                     >> 0x12U)
                                                     : 
                                                    (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
                                                     >> 0x11U))) 
                                                & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->roundingMode))) 
                                                   & ((0x80000U 
                                                       & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U])
                                                       ? 
                                                      (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                                                       >> 2U)
                                                       : 
                                                      (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & (((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
                                                          >> 0x13U) 
                                                         & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U])))))))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp), 0xeU)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                            & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 0x3f92U, 
                                                            VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)) 
                                                 | (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp106[3U] = ((0xffff0000U & (((((((((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
                                              & (~ 
                                                 (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut) 
                                                   | VL_GTS_III(1,32,32, 0x3f92U, 
                                                                VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))
                                                   ? 0xe000U
                                                   : 0U))) 
                                             & (~ ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                    ? 0xffffc06dU
                                                    : 0U))) 
                                            & (~ ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                   ? 0x4000U
                                                   : 0U))) 
                                           & (~ ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                  ? 0x2000U
                                                  : 0U))) 
                                          | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                              ? 0x3f92U
                                              : 0U)) 
                                         | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                             ? 0xbfffU
                                             : 0U)) 
                                        | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                            ? 0xc000U
                                            : 0U)) 
                                       | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                           ? 0xe000U
                                           : 0U)) << 0x10U)) 
                      | (0xffffU & (((0xffff8000U & 
                                      (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                        << 0xfU) | 
                                       (0xffff8000U 
                                        & ((((~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                             & VL_LTES_III(1,32,32, 0x3f92U, 
                                                           VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                            << 0xfU) 
                                           & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U])))) 
                                     | (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                         | ((~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                                          VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                         ? (0x7fffU 
                                            & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U])
                                         : 0U)) | VL_NEGATE_I((IData)((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))))));
    vlTOPp->out[0U] = ((((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[0U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[1U] = ((((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[1U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[2U] = ((((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[2U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[3U] = __Vtemp106[3U];
    vlTOPp->out[4U] = vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sign;
}

VL_INLINE_OPT void VmulRecF128::_combo__TOP__2(VmulRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF128::_combo__TOP__2\n"); );
    VmulRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp117[8];
    WData/*255:0*/ __Vtemp118[8];
    WData/*255:0*/ __Vtemp119[8];
    WData/*127:0*/ __Vtemp130[4];
    WData/*127:0*/ __Vtemp131[4];
    WData/*65567:0*/ __Vtemp142[2049];
    WData/*127:0*/ __Vtemp146[4];
    WData/*127:0*/ __Vtemp152[4];
    WData/*127:0*/ __Vtemp157[4];
    WData/*127:0*/ __Vtemp167[4];
    WData/*127:0*/ __Vtemp168[4];
    WData/*127:0*/ __Vtemp169[4];
    WData/*127:0*/ __Vtemp170[4];
    WData/*127:0*/ __Vtemp171[4];
    WData/*127:0*/ __Vtemp178[4];
    WData/*127:0*/ __Vtemp179[4];
    WData/*127:0*/ __Vtemp180[4];
    WData/*127:0*/ __Vtemp192[4];
    WData/*127:0*/ __Vtemp199[4];
    WData/*127:0*/ __Vtemp212[4];
    // Body
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((0U == (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                      << 3U)) | (vlTOPp->a[3U] 
                                                 >> 0x1dU)))) 
           | (0U == (7U & ((0x7fff8U & (vlTOPp->b[4U] 
                                        << 3U)) | (
                                                   vlTOPp->b[3U] 
                                                   >> 0x1dU)))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[0U] 
        = vlTOPp->a[0U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[1U] 
        = vlTOPp->a[1U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[2U] 
        = vlTOPp->a[2U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->a[4U] 
                                             << 3U)) 
                                         | (vlTOPp->a[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->a[3U]));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[0U] 
        = vlTOPp->b[0U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[1U] 
        = vlTOPp->b[1U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[2U] 
        = vlTOPp->b[2U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->b[4U] 
                                             << 3U)) 
                                         | (vlTOPp->b[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->b[3U]));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut 
        = (0x1ffffU & ((VL_EXTENDS_II(17,17, (0xffffU 
                                              & ((vlTOPp->a[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->a[3U] 
                                                    >> 0x10U)))) 
                        + VL_EXTENDS_II(17,17, (0xffffU 
                                                & ((vlTOPp->b[4U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->b[3U] 
                                                      >> 0x10U))))) 
                       - (IData)(0x8000U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                      << 2U)) | (vlTOPp->a[3U] 
                                                 >> 0x1eU)))) 
           & (vlTOPp->a[3U] >> 0x1dU));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->b[4U] 
                                      << 2U)) | (vlTOPp->b[3U] 
                                                 >> 0x1eU)))) 
           & (vlTOPp->b[3U] >> 0x1dU));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                      << 2U)) | (vlTOPp->a[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->a[3U] >> 0x1dU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->b[4U] 
                                      << 2U)) | (vlTOPp->b[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->b[3U] >> 0x1dU)));
    VL_EXTEND_WW(226,114, __Vtemp117, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA);
    VL_EXTEND_WW(226,114, __Vtemp118, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB);
    VL_MUL_W(8, __Vtemp119, __Vtemp117, __Vtemp118);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[0U] 
        = __Vtemp119[0U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[1U] 
        = __Vtemp119[1U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[2U] 
        = __Vtemp119[2U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[3U] 
        = __Vtemp119[3U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[4U] 
        = __Vtemp119[4U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[5U] 
        = __Vtemp119[5U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[6U] 
        = __Vtemp119[6U];
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[7U] 
        = (3U & __Vtemp119[7U]);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA) 
            & (0U == (7U & ((0x7fff8U & (vlTOPp->b[4U] 
                                         << 3U)) | 
                            (vlTOPp->b[3U] >> 0x1dU))))) 
           | ((0U == (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                         << 3U)) | 
                            (vlTOPp->a[3U] >> 0x1dU)))) 
              & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__invalidExc 
        = ((((7U == (7U & ((vlTOPp->a[4U] << 3U) | 
                           (vlTOPp->a[3U] >> 0x1dU)))) 
             & (~ (vlTOPp->a[3U] >> 0xfU))) | ((7U 
                                                == 
                                                (7U 
                                                 & ((vlTOPp->b[4U] 
                                                     << 3U) 
                                                    | (vlTOPp->b[3U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  (vlTOPp->b[3U] 
                                                   >> 0xfU)))) 
           | (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_isNaN 
        = (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA) 
            | (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)) 
           | (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sign 
        = (1U & ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_isNaN)
                  ? ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                      ? (1U & vlTOPp->a[4U]) : ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                                 ? 
                                                (1U 
                                                 & vlTOPp->b[4U])
                                                 : 1U))
                  : (vlTOPp->a[4U] ^ vlTOPp->b[4U])));
    __Vtemp130[0U] = (0xfffffffcU & (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                                       ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[0U]
                                       : ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                           ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[0U]
                                           : 0U)) << 2U));
    __Vtemp130[1U] = ((3U & (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                               ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[0U]
                               : ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                   ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[0U]
                                   : 0U)) >> 0x1eU)) 
                      | (0xfffffffcU & (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                                          ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[1U]
                                          : ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                              ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[1U]
                                              : 0U)) 
                                        << 2U)));
    __Vtemp130[2U] = ((3U & (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                               ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[1U]
                               : ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                   ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[1U]
                                   : 0U)) >> 0x1eU)) 
                      | (0xfffffffcU & (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                                          ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[2U]
                                          : ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                              ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[2U]
                                              : 0U)) 
                                        << 2U)));
    __Vtemp130[3U] = (0x60000U | ((3U & (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                                           ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[2U]
                                           : ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                               ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[2U]
                                               : 0U)) 
                                         >> 0x1eU)) 
                                  | (0x1fffcU & (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                                                   ? 
                                                  vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA[3U]
                                                   : 
                                                  ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                                    ? 
                                                   vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB[3U]
                                                    : 0U)) 
                                                 << 2U))));
    VL_EXTEND_WW(116,115, __Vtemp131, __Vtemp130);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_isNaN)
            ? __Vtemp131[0U] : ((0xfffffffeU & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[4U] 
                                                 << 0x12U) 
                                                | (0x3fffeU 
                                                   & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[3U] 
                                                      >> 0xeU)))) 
                                | (0U != (((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[0U] 
                                            | vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[1U]) 
                                           | vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[2U]) 
                                          | (0x7fffU 
                                             & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[3U])))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[1U] 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_isNaN)
            ? __Vtemp131[1U] : ((1U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[4U] 
                                       >> 0xeU)) | 
                                (0xfffffffeU & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[5U] 
                                                 << 0x12U) 
                                                | (0x3fffeU 
                                                   & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[4U] 
                                                      >> 0xeU))))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[2U] 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_isNaN)
            ? __Vtemp131[2U] : ((1U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[5U] 
                                       >> 0xeU)) | 
                                (0xfffffffeU & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[6U] 
                                                 << 0x12U) 
                                                | (0x3fffeU 
                                                   & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[5U] 
                                                      >> 0xeU))))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_isNaN)
            ? __Vtemp131[3U] : ((1U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[6U] 
                                       >> 0xeU)) | 
                                (0xffffeU & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[7U] 
                                              << 0x12U) 
                                             | (0x3fffeU 
                                                & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd[6U] 
                                                   >> 0xeU))))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_isNaN));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sign))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut))));
    VL_SHIFTRS_WWI(65537,65537,16, __Vtemp142, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0xffffU & (~ (VL_EXTENDS_II(16,17, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut) 
                                  | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                      ? 0x8000U : 0U)))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
        = ((__Vtemp142[0x1fdU] << 0xfU) | (__Vtemp142[0x1fcU] 
                                           >> 0x11U));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
        = ((__Vtemp142[0x1feU] << 0xfU) | (__Vtemp142[0x1fdU] 
                                           >> 0x11U));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
        = ((__Vtemp142[0x1ffU] << 0xfU) | (__Vtemp142[0x1feU] 
                                           >> 0x11U));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
        = (0x3ffffU & ((__Vtemp142[0x200U] << 0xfU) 
                       | (__Vtemp142[0x1ffU] >> 0x11U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffeU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (1U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0x11U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffdU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (2U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xfU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffffbU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (4U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffff7U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (8U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                    >> 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffefU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffdfU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffffbfU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffff7fU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                       >> 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffeffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x100U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        >> 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffdffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x200U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffffbffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x400U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffff7ffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x800U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                        << 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffefffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x1000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffdfffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x2000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffffbfffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x4000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffff7fffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x8000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                         << 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffeffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                          << 0xfU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffdffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[3U] 
                          << 0x11U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfffbffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          >> 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfff7ffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          >> 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffefffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x100000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffdfffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x200000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xffbfffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x400000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xff7fffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x800000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                           >> 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfeffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x1000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            >> 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfdffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x2000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xfbffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x4000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xf7ffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x8000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                            << 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xefffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x10000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xdfffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x20000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0xbfffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x40000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
        = ((0x7fffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U]) 
           | (0x80000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                             << 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffeU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (1U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0x11U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffdU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (2U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xfU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffffbU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (4U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffff7U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (8U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                    >> 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffefU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffdfU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffffbfU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffff7fU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                       >> 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffeffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x100U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        >> 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffdffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x200U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffffbffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x400U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffff7ffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x800U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                        << 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffefffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x1000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffdfffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x2000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffffbfffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x4000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffff7fffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x8000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                         << 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffeffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          << 0xfU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffdffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[2U] 
                          << 0x11U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfffbffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          >> 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfff7ffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          >> 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffefffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x100000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffdfffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x200000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xffbfffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x400000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xff7fffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x800000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                           >> 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfeffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x1000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            >> 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfdffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x2000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xfbffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x4000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xf7ffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x8000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                            << 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xefffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x10000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xdfffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x20000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0xbfffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x40000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
        = ((0x7fffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U]) 
           | (0x80000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                             << 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffeU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (1U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0x11U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffdU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (2U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xfU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffffbU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (4U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffff7U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (8U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                    >> 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffefU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffdfU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffffbfU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffff7fU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                       >> 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffeffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x100U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        >> 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffdffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x200U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffffbffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x400U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffff7ffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x800U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                        << 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffefffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x1000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffdfffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x2000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffffbfffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x4000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffff7fffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x8000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                         << 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffeffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          << 0xfU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffdffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[1U] 
                          << 0x11U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfffbffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          >> 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfff7ffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          >> 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffefffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x100000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffdfffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x200000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xffbfffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x400000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xff7fffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x800000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                           >> 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfeffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x1000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            >> 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfdffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x2000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xfbffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x4000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xf7ffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x8000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                            << 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xefffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x10000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xdfffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x20000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0xbfffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x40000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
        = ((0x7fffffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U]) 
           | (0x80000000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                             << 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffeU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (1U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0x11U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffdU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (2U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xfU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fffbU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (4U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fff7U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (8U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                    >> 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffefU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x10U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffdfU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x20U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ffbfU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x40U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3ff7fU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x80U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                       >> 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3feffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x100U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        >> 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fdffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x200U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 1U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3fbffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x400U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 3U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3f7ffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x800U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                        << 5U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3efffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x1000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 7U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3dfffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x2000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 9U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x3bfffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x4000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 0xbU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x37fffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x8000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                         << 0xdU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x2ffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x10000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          << 0xfU)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
        = ((0x1ffffU & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U]) 
           | (0x20000U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut[0U] 
                          << 0x11U)));
    VL_EXTEND_WI(114,1, __Vtemp146, (1U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
                                           >> 0x13U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
        = (3U | (0xfffffffcU & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
                                 | __Vtemp146[0U]) 
                                << 2U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U] 
        = ((3U & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[0U] 
                   | __Vtemp146[0U]) >> 0x1eU)) | (0xfffffffcU 
                                                   & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
                                                       | __Vtemp146[1U]) 
                                                      << 2U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U] 
        = ((3U & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[1U] 
                   | __Vtemp146[1U]) >> 0x1eU)) | (0xfffffffcU 
                                                   & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
                                                       | __Vtemp146[2U]) 
                                                      << 2U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U] 
        = ((3U & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[2U] 
                   | __Vtemp146[2U]) >> 0x1eU)) | (0xfffffffcU 
                                                   & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main[3U] 
                                                       | __Vtemp146[3U]) 
                                                      << 2U)));
    VL_SHIFTR_WWI(116,116,32, __Vtemp152, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != ((((((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[1U] 
                        << 0x1dU) | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                                     >> 3U)) & ((__Vtemp152[1U] 
                                                 << 0x1dU) 
                                                | (__Vtemp152[0U] 
                                                   >> 3U))) 
                     | (((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[2U] 
                          << 0x1dU) | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[1U] 
                                       >> 3U)) & ((
                                                   __Vtemp152[2U] 
                                                   << 0x1dU) 
                                                  | (__Vtemp152[1U] 
                                                     >> 3U)))) 
                    | (((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
                         << 0x1dU) | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[2U] 
                                      >> 3U)) & ((0xe0000000U 
                                                  & (__Vtemp152[3U] 
                                                     << 0x1dU)) 
                                                 | (__Vtemp152[2U] 
                                                    >> 3U)))) 
                   | (0x1ffffU & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
                                   >> 3U) & (__Vtemp152[3U] 
                                             >> 3U))))) 
           | ((0U != (7U & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                            & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U] 
                                << 0x1fU) | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                             >> 1U))))) 
              & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    VL_SHIFTR_WWI(116,116,32, __Vtemp157, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U] 
        = ((~ __Vtemp157[0U]) & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
        = ((~ __Vtemp157[1U]) & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
        = ((~ __Vtemp157[2U]) & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U] 
        = ((~ __Vtemp157[3U]) & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != ((((((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[1U] 
                        << 0x1dU) | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                                     >> 3U)) & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U] 
                                                   >> 3U))) 
                     | (((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[2U] 
                          << 0x1dU) | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[1U] 
                                       >> 3U)) & ((
                                                   vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
                                                     >> 3U)))) 
                    | (((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
                         << 0x1dU) | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[2U] 
                                      >> 3U)) & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U] 
                                                  << 0x1dU) 
                                                 | (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
                                                    >> 3U)))) 
                   | (0x1ffffU & ((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
                                   & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U]) 
                                  >> 3U)))) | ((0U 
                                                != 
                                                (7U 
                                                 & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                                                    & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U]))) 
                                               & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    __Vtemp167[0U] = 1U;
    __Vtemp167[1U] = 0U;
    __Vtemp167[2U] = 0U;
    __Vtemp167[3U] = 0U;
    __Vtemp168[0U] = (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                      | vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]);
    __Vtemp168[1U] = (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[1U] 
                      | vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]);
    __Vtemp168[2U] = (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[2U] 
                      | vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]);
    __Vtemp168[3U] = (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
                      | vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]);
    VL_SHIFTR_WWI(116,116,32, __Vtemp169, __Vtemp168, 2U);
    VL_ADD_W(4, __Vtemp170, __Vtemp167, __Vtemp169);
    VL_SHIFTR_WWI(116,116,32, __Vtemp171, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask, 1U);
    __Vtemp178[0U] = (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                      & (~ vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U]));
    __Vtemp178[1U] = (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[1U] 
                      & (~ vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[1U]));
    __Vtemp178[2U] = (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[2U] 
                      & (~ vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[2U]));
    __Vtemp178[3U] = (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
                      & (~ vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[3U]));
    VL_SHIFTR_WWI(116,116,32, __Vtemp179, __Vtemp178, 2U);
    VL_SHIFTR_WWI(116,116,32, __Vtemp180, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask, 1U);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[0U] 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              | (4U == (IData)(vlTOPp->roundingMode))) 
             & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp170[0U] & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                      & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                     & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                     ? __Vtemp171[0U]
                                     : 0U))) : (__Vtemp179[0U] 
                                                | (((6U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                    ? 
                                                   __Vtemp180[0U]
                                                    : 0U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[1U] 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              | (4U == (IData)(vlTOPp->roundingMode))) 
             & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp170[1U] & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                      & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                     & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                     ? __Vtemp171[1U]
                                     : 0U))) : (__Vtemp179[1U] 
                                                | (((6U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                    ? 
                                                   __Vtemp180[1U]
                                                    : 0U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[2U] 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              | (4U == (IData)(vlTOPp->roundingMode))) 
             & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp170[2U] & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                      & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                     & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                     ? __Vtemp171[2U]
                                     : 0U))) : (__Vtemp179[2U] 
                                                | (((6U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                    ? 
                                                   __Vtemp180[2U]
                                                    : 0U)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
        = (0x7ffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                          | (4U == (IData)(vlTOPp->roundingMode))) 
                         & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                        | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                           & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                        ? (__Vtemp170[3U] & (~ ((((0U 
                                                   == (IData)(vlTOPp->roundingMode)) 
                                                  & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                                 & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                                 ? 
                                                __Vtemp171[3U]
                                                 : 0U)))
                        : (__Vtemp179[3U] | (((6U == (IData)(vlTOPp->roundingMode)) 
                                              & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                              ? __Vtemp180[3U]
                                              : 0U))));
    VL_SHIFTR_WWI(115,115,32, __Vtemp192, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig, 1U);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[0U] 
        = ((0x80000U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U])
            ? __Vtemp192[0U] : vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[0U]);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[1U] 
        = ((0x80000U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U])
            ? __Vtemp192[1U] : vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[1U]);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[2U] 
        = ((0x80000U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U])
            ? __Vtemp192[2U] : vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[2U]);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U] 
        = (0xffffU & ((0x80000U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U])
                       ? __Vtemp192[3U] : vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U]));
    VL_SHIFTR_WWI(115,115,32, __Vtemp199, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig, 0x71U);
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x3ffffU & (VL_EXTENDS_II(18,17, (0x1ffffU 
                                             & VL_EXTENDS_II(17,17, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut))) 
                       + __Vtemp199[0U]));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x3f92U, VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           & ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x3f92U, VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)) 
           | ((((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,17, 
                                                                        (0x1ffffU 
                                                                         & VL_EXTENDS_II(17,17, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut))), 0xfU))) 
               & ((0x80000U & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U])
                   ? (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                      >> 3U) : (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x80000U 
                                                       & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U])
                                                       ? 
                                                      (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                                       >> 4U)
                                                       : 
                                                      (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask[0U] 
                                                       >> 3U)))) 
                                                 & ((0x80000U 
                                                     & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U])
                                                     ? 
                                                    (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
                                                     >> 0x12U)
                                                     : 
                                                    (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
                                                     >> 0x11U))) 
                                                & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->roundingMode))) 
                                                   & ((0x80000U 
                                                       & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U])
                                                       ? 
                                                      (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                                                       >> 2U)
                                                       : 
                                                      (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & (((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[3U] 
                                                          >> 0x13U) 
                                                         & (vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U] 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sig[0U])))))))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp), 0xeU)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                            & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 0x3f92U, 
                                                            VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)) 
                                                 | (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp212[3U] = ((0xffff0000U & (((((((((vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
                                              & (~ 
                                                 (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut) 
                                                   | VL_GTS_III(1,32,32, 0x3f92U, 
                                                                VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))
                                                   ? 0xe000U
                                                   : 0U))) 
                                             & (~ ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                    ? 0xffffc06dU
                                                    : 0U))) 
                                            & (~ ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                   ? 0x4000U
                                                   : 0U))) 
                                           & (~ ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                  ? 0x2000U
                                                  : 0U))) 
                                          | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                              ? 0x3f92U
                                              : 0U)) 
                                         | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                             ? 0xbfffU
                                             : 0U)) 
                                        | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                            ? 0xc000U
                                            : 0U)) 
                                       | ((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                           ? 0xe000U
                                           : 0U)) << 0x10U)) 
                      | (0xffffU & (((0xffff8000U & 
                                      (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                        << 0xfU) | 
                                       (0xffff8000U 
                                        & ((((~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                             & VL_LTES_III(1,32,32, 0x3f92U, 
                                                           VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                            << 0xfU) 
                                           & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U])))) 
                                     | (((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                         | ((~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                                          VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                         ? (0x7fffU 
                                            & vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U])
                                         : 0U)) | VL_NEGATE_I((IData)((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))))));
    vlTOPp->out[0U] = ((((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[0U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[1U] = ((((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[1U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[2U] = ((((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                         | ((~ (IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                            & VL_LTES_III(1,32,32, 0x3f92U, 
                                          VL_EXTENDS_II(32,18, vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                         ? vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[2U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[3U] = __Vtemp212[3U];
    vlTOPp->out[4U] = vlTOPp->mulRecF128__DOT__mulRecFN__DOT__out_sign;
}

void VmulRecF128::_eval(VmulRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF128::_eval\n"); );
    VmulRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VmulRecF128::_eval_initial(VmulRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF128::_eval_initial\n"); );
    VmulRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmulRecF128::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF128::final\n"); );
    // Variables
    VmulRecF128__Syms* __restrict vlSymsp = this->__VlSymsp;
    VmulRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmulRecF128::_eval_settle(VmulRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF128::_eval_settle\n"); );
    VmulRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VmulRecF128::_change_request(VmulRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF128::_change_request\n"); );
    VmulRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VmulRecF128::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF128::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((a[4U] & 0xfffffffeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b[4U] & 0xfffffffeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif  // VL_DEBUG

void VmulRecF128::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF128::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, a);
    VL_RAND_RESET_W(129, b);
    roundingMode = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(129, out);
    exceptionFlags = VL_RAND_RESET_I(5);
    mulRecF128__DOT__mulRecFN__DOT__invalidExc = VL_RAND_RESET_I(1);
    mulRecF128__DOT__mulRecFN__DOT__out_isNaN = VL_RAND_RESET_I(1);
    mulRecF128__DOT__mulRecFN__DOT__out_sign = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(116, mulRecF128__DOT__mulRecFN__DOT__out_sig);
    mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA = VL_RAND_RESET_I(1);
    mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(114, mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA);
    mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB = VL_RAND_RESET_I(1);
    mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(114, mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB);
    mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc = VL_RAND_RESET_I(1);
    mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut = VL_RAND_RESET_I(1);
    mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut = VL_RAND_RESET_I(17);
    VL_RAND_RESET_W(226, mulRecF128__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd);
    mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut);
    mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow = VL_RAND_RESET_I(1);
    mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(116, mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    VL_RAND_RESET_W(114, mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main);
    VL_RAND_RESET_W(116, mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask);
    mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(115, mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig);
    mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(18);
    VL_RAND_RESET_W(65537, mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c);
    VL_RAND_RESET_W(114, mulRecF128__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut);
}
