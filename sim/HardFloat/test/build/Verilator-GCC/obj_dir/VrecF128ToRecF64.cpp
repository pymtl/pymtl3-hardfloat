// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecF128ToRecF64.h for the primary calling header

#include "VrecF128ToRecF64.h"
#include "VrecF128ToRecF64__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VrecF128ToRecF64) {
    VrecF128ToRecF64__Syms* __restrict vlSymsp = __VlSymsp = new VrecF128ToRecF64__Syms(this, name());
    VrecF128ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VrecF128ToRecF64::__Vconfigure(VrecF128ToRecF64__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VrecF128ToRecF64::~VrecF128ToRecF64() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VrecF128ToRecF64::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecF128ToRecF64::eval\n"); );
    VrecF128ToRecF64__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecF128ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/recFNToRecFN_spec.v", 153, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VrecF128ToRecF64::_eval_initial_loop(VrecF128ToRecF64__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/recFNToRecFN_spec.v", 153, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VrecF128ToRecF64::_settle__TOP__1(VrecF128ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF64::_settle__TOP__1\n"); );
    VrecF128ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*4127:0*/ __Vtemp6[129];
    WData/*4127:0*/ __Vtemp7[129];
    WData/*95:0*/ __Vtemp9[3];
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x80U] = 1U;
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__isInf 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->in[4U] 
                                      << 2U)) | (vlTOPp->in[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->in[3U] >> 0x1dU)));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & 
            vlTOPp->in[4U]) | ((3U == (IData)(vlTOPp->roundingMode)) 
                               & (~ vlTOPp->in[4U])));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[0U] 
        = vlTOPp->in[0U];
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[1U] 
        = vlTOPp->in[1U];
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[2U] 
        = vlTOPp->in[2U];
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->in[4U] 
                                             << 3U)) 
                                         | (vlTOPp->in[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->in[3U]));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__isSigNaN 
        = ((7U == (7U & ((vlTOPp->in[4U] << 3U) | (
                                                   vlTOPp->in[3U] 
                                                   >> 0x1dU)))) 
           & (~ (vlTOPp->in[3U] >> 0xfU)));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig 
        = ((VL_ULL(0xfffffffffffffe) & (((QData)((IData)(
                                                         vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[3U])) 
                                         << 0x26U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[2U])) 
                                            << 6U) 
                                           | (VL_ULL(0x3ffffffffe) 
                                              & ((QData)((IData)(
                                                                 vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[1U])) 
                                                 >> 0x1aU))))) 
           | (QData)((IData)((0U != (VL_ULL(0x7ffffffffffffff) 
                                     & (((QData)((IData)(
                                                         vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[0U]))))))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__isSigNaN) 
           | ((3U == (3U & ((0x3fffcU & (vlTOPp->in[4U] 
                                         << 2U)) | 
                            (vlTOPp->in[3U] >> 0x1eU)))) 
              & (vlTOPp->in[3U] >> 0x1dU)));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase 
        = (((~ (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)) 
            & (~ (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__isInf))) 
           & (0U != (7U & ((0x7fff8U & (vlTOPp->in[4U] 
                                        << 3U)) | (
                                                   vlTOPp->in[3U] 
                                                   >> 0x1dU)))));
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtemp6[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtemp6[0x80U] = 1U;
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp7, __Vtemp6, 
                   (0xfffU & (~ (((IData)(0x800U) + 
                                  VL_EXTENDS_II(12,17, 
                                                (0xffffU 
                                                 & ((vlTOPp->in[4U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->in[3U] 
                                                       >> 0x10U))))) 
                                 | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                     ? 0x800U : 0U)))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (VL_ULL(0x3fffffffffffff) & (((QData)((IData)(
                                                        __Vtemp7[0x20U])) 
                                        << 0x33U) | 
                                       (((QData)((IData)(
                                                         __Vtemp7[0x1fU])) 
                                         << 0x13U) 
                                        | ((QData)((IData)(
                                                           __Vtemp7[0x1eU])) 
                                           >> 0xdU))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffe) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (IData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                            >> 0x35U))))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffd) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x34U))))) 
              << 1U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffb) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x33U))))) 
              << 2U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffff7) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x32U))))) 
              << 3U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffef) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x31U))))) 
              << 4U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffdf) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x30U))))) 
              << 5U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffbf) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2fU))))) 
              << 6U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffff7f) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2eU))))) 
              << 7U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffeff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2dU))))) 
              << 8U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffdff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2cU))))) 
              << 9U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffbff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2bU))))) 
              << 0xaU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffff7ff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2aU))))) 
              << 0xbU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffefff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x29U))))) 
              << 0xcU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffdfff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x28U))))) 
              << 0xdU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffbfff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x27U))))) 
              << 0xeU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffff7fff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x26U))))) 
              << 0xfU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffeffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x25U))))) 
              << 0x10U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffdffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x24U))))) 
              << 0x11U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffbffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x23U))))) 
              << 0x12U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffff7ffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x22U))))) 
              << 0x13U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffefffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x21U))))) 
              << 0x14U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffdfffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x20U))))) 
              << 0x15U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffbfffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1fU))))) 
              << 0x16U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffff7fffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1eU))))) 
              << 0x17U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffeffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1dU))))) 
              << 0x18U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffdffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1cU))))) 
              << 0x19U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffbffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1bU))))) 
              << 0x1aU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffff7ffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1aU))))) 
              << 0x1bU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffefffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x19U))))) 
              << 0x1cU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffdfffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x18U))))) 
              << 0x1dU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffbfffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x17U))))) 
              << 0x1eU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffff7fffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x16U))))) 
              << 0x1fU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffeffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x15U))))) 
              << 0x20U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffdffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x14U))))) 
              << 0x21U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffbffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x13U))))) 
              << 0x22U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffff7ffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x12U))))) 
              << 0x23U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffefffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x11U))))) 
              << 0x24U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffdfffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x10U))))) 
              << 0x25U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffbfffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xfU))))) 
              << 0x26U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fff7fffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xeU))))) 
              << 0x27U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffeffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xdU))))) 
              << 0x28U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffdffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xcU))))) 
              << 0x29U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffbffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xbU))))) 
              << 0x2aU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ff7ffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xaU))))) 
              << 0x2bU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fefffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 9U))))) 
              << 0x2cU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fdfffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 8U))))) 
              << 0x2dU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fbfffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 7U))))) 
              << 0x2eU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3f7fffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 6U))))) 
              << 0x2fU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3effffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 5U))))) 
              << 0x30U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3dffffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 4U))))) 
              << 0x31U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3bffffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 3U))))) 
              << 0x32U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x37ffffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 2U))))) 
              << 0x33U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x2fffffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 1U))))) 
              << 0x34U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x1fffffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut)))) 
              << 0x35U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig 
                                                >> 3U) 
                                               & (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                                                  >> 2U)))) 
           | ((0U != ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                      & (1U | (6U & ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                     << 1U))))) & (~ (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask 
        = ((~ (VL_ULL(1) | (VL_ULL(0x7ffffffffffffffe) 
                            & (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                               << 1U)))) & (VL_ULL(3) 
                                            | (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                                               << 2U)));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig 
                                                & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask) 
                                               >> 3U))) 
           | ((0U != (7U & ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                            & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask)))) 
              & (~ (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->roundingMode)) 
                                          | (4U == (IData)(vlTOPp->roundingMode))) 
                                         & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                                        | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
                                           & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound)))
                                        ? ((VL_ULL(1) 
                                            + ((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig 
                                                >> 2U) 
                                               | (VL_ULL(0x3fffffffffffffff) 
                                                  & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main))) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                                                  & (~ (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra)))
                                                  ? 
                                                 (VL_ULL(1) 
                                                  | (VL_ULL(0x7ffffffffffffffe) 
                                                     & (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                                                        << 1U)))
                                                  : VL_ULL(0))))
                                        : (((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig 
                                             & (~ (VL_ULL(3) 
                                                   | (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                                                      << 2U)))) 
                                            >> 2U) 
                                           | (((6U 
                                                == (IData)(vlTOPp->roundingMode)) 
                                               & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound))
                                               ? (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask 
                                                  >> 1U)
                                               : VL_ULL(0)))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                             & ((IData)(0x38800U) 
                                                + VL_EXTENDS_II(18,17, 
                                                                (0xffffU 
                                                                 & ((vlTOPp->in[4U] 
                                                                     << 0x10U) 
                                                                    | (vlTOPp->in[3U] 
                                                                       >> 0x10U))))))) 
                       + (IData)((VL_ULL(0x7fffffffffffff) 
                                  & (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig 
                                     >> 0x35U)))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x3ceU, VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))) 
           & ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp), 0xaU)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__isSigNaN) 
                               << 4U) | (((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
                                            & (VL_GTS_III(1,32,32, 0x3ceU, 
                                                          VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)) 
                                               | ((((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound) 
                                                    & VL_GTES_III(1,32,32, 0U, 
                                                                  VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,18, 
                                                                                (0x3ffffU 
                                                                                & ((IData)(0x38800U) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                (0xffffU 
                                                                                & ((vlTOPp->in[4U] 
                                                                                << 0x10U) 
                                                                                | (vlTOPp->in[3U] 
                                                                                >> 0x10U))))))), 0xbU))) 
                                                   & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
                                                  & (~ 
                                                     (((((0U 
                                                          != 
                                                          (1U 
                                                           & (IData)(vlTOPp->control))) 
                                                         & (~ (IData)(
                                                                      (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                                                                       >> 1U)))) 
                                                        & (IData)(
                                                                  (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig 
                                                                   >> 0x35U))) 
                                                       & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                                                      & ((((0U 
                                                            == (IData)(vlTOPp->roundingMode)) 
                                                           | (4U 
                                                              == (IData)(vlTOPp->roundingMode))) 
                                                          & (IData)(
                                                                    (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig 
                                                                     >> 1U))) 
                                                         | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
                                                            & (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig)))))))))) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
                                           | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 0x3ceU, 
                                                            VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)) 
                                                 | (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
           & (~ (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__isInf) 
           | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
              & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    __Vtemp9[0U] = (IData)((((QData)((IData)((0xfffU 
                                              & ((((((((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp 
                                                        & (~ 
                                                           (((0U 
                                                              == 
                                                              (7U 
                                                               & ((0x7fff8U 
                                                                   & (vlTOPp->in[4U] 
                                                                      << 3U)) 
                                                                  | (vlTOPp->in[3U] 
                                                                     >> 0x1dU)))) 
                                                             | VL_GTS_III(1,32,32, 0x3ceU, 
                                                                          VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)))
                                                             ? 0xe00U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                            ? 0xfffffc31U
                                                            : 0U))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                           ? 0x400U
                                                           : 0U))) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                          ? 0x200U
                                                          : 0U))) 
                                                    | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                        ? 0x3ceU
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                       ? 0xbffU
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                      ? 0xc00U
                                                      : 0U)) 
                                                 | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                                     ? 0xe00U
                                                     : 0U))))) 
                             << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                          & ((((QData)((IData)(
                                                               ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                                | (((0U 
                                                                     != 
                                                                     (7U 
                                                                      & ((0x7fff8U 
                                                                          & (vlTOPp->in[4U] 
                                                                             << 3U)) 
                                                                         | (vlTOPp->in[3U] 
                                                                            >> 0x1dU)))) 
                                                                    & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))) 
                                                                   & (IData)(
                                                                             (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig 
                                                                              >> 0x33U)))))) 
                                               << 0x33U) 
                                              | (((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                  | ((0U 
                                                      != 
                                                      (7U 
                                                       & ((0x7fff8U 
                                                           & (vlTOPp->in[4U] 
                                                              << 3U)) 
                                                          | (vlTOPp->in[3U] 
                                                             >> 0x1dU)))) 
                                                     & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                   VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))))
                                                  ? 
                                                 (VL_ULL(0x7ffffffffffff) 
                                                  & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig)
                                                  : VL_ULL(0))) 
                                             | VL_NEGATE_Q((QData)((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))));
    __Vtemp9[1U] = (IData)(((((QData)((IData)((0xfffU 
                                               & ((((((((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp 
                                                         & (~ 
                                                            (((0U 
                                                               == 
                                                               (7U 
                                                                & ((0x7fff8U 
                                                                    & (vlTOPp->in[4U] 
                                                                       << 3U)) 
                                                                   | (vlTOPp->in[3U] 
                                                                      >> 0x1dU)))) 
                                                              | VL_GTS_III(1,32,32, 0x3ceU, 
                                                                           VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)))
                                                              ? 0xe00U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                             ? 0xfffffc31U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                            ? 0x400U
                                                            : 0U))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                           ? 0x200U
                                                           : 0U))) 
                                                     | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                         ? 0x3ceU
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                        ? 0xbffU
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                       ? 0xc00U
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                                      ? 0xe00U
                                                      : 0U))))) 
                              << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                           & ((((QData)((IData)(
                                                                ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                                 | (((0U 
                                                                      != 
                                                                      (7U 
                                                                       & ((0x7fff8U 
                                                                           & (vlTOPp->in[4U] 
                                                                              << 3U)) 
                                                                          | (vlTOPp->in[3U] 
                                                                             >> 0x1dU)))) 
                                                                     & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))) 
                                                                    & (IData)(
                                                                              (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig 
                                                                               >> 0x33U)))))) 
                                                << 0x33U) 
                                               | (((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & ((0x7fff8U 
                                                            & (vlTOPp->in[4U] 
                                                               << 3U)) 
                                                           | (vlTOPp->in[3U] 
                                                              >> 0x1dU)))) 
                                                      & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                    VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))))
                                                   ? 
                                                  (VL_ULL(0x7ffffffffffff) 
                                                   & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig)
                                                   : VL_ULL(0))) 
                                              | VL_NEGATE_Q((QData)((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))) 
                            >> 0x20U));
    vlTOPp->out[0U] = __Vtemp9[0U];
    vlTOPp->out[1U] = __Vtemp9[1U];
    vlTOPp->out[2U] = (1U & vlTOPp->in[4U]);
}

VL_INLINE_OPT void VrecF128ToRecF64::_combo__TOP__2(VrecF128ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF64::_combo__TOP__2\n"); );
    VrecF128ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*4127:0*/ __Vtemp15[129];
    WData/*95:0*/ __Vtemp17[3];
    // Body
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__isInf 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->in[4U] 
                                      << 2U)) | (vlTOPp->in[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->in[3U] >> 0x1dU)));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & 
            vlTOPp->in[4U]) | ((3U == (IData)(vlTOPp->roundingMode)) 
                               & (~ vlTOPp->in[4U])));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[0U] 
        = vlTOPp->in[0U];
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[1U] 
        = vlTOPp->in[1U];
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[2U] 
        = vlTOPp->in[2U];
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->in[4U] 
                                             << 3U)) 
                                         | (vlTOPp->in[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->in[3U]));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__isSigNaN 
        = ((7U == (7U & ((vlTOPp->in[4U] << 3U) | (
                                                   vlTOPp->in[3U] 
                                                   >> 0x1dU)))) 
           & (~ (vlTOPp->in[3U] >> 0xfU)));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig 
        = ((VL_ULL(0xfffffffffffffe) & (((QData)((IData)(
                                                         vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[3U])) 
                                         << 0x26U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[2U])) 
                                            << 6U) 
                                           | (VL_ULL(0x3ffffffffe) 
                                              & ((QData)((IData)(
                                                                 vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[1U])) 
                                                 >> 0x1aU))))) 
           | (QData)((IData)((0U != (VL_ULL(0x7ffffffffffffff) 
                                     & (((QData)((IData)(
                                                         vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn[0U]))))))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__isSigNaN) 
           | ((3U == (3U & ((0x3fffcU & (vlTOPp->in[4U] 
                                         << 2U)) | 
                            (vlTOPp->in[3U] >> 0x1eU)))) 
              & (vlTOPp->in[3U] >> 0x1dU)));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase 
        = (((~ (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)) 
            & (~ (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__isInf))) 
           & (0U != (7U & ((0x7fff8U & (vlTOPp->in[4U] 
                                        << 3U)) | (
                                                   vlTOPp->in[3U] 
                                                   >> 0x1dU)))));
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp15, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0xfffU & (~ (((IData)(0x800U) + 
                                  VL_EXTENDS_II(12,17, 
                                                (0xffffU 
                                                 & ((vlTOPp->in[4U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->in[3U] 
                                                       >> 0x10U))))) 
                                 | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                     ? 0x800U : 0U)))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (VL_ULL(0x3fffffffffffff) & (((QData)((IData)(
                                                        __Vtemp15[0x20U])) 
                                        << 0x33U) | 
                                       (((QData)((IData)(
                                                         __Vtemp15[0x1fU])) 
                                         << 0x13U) 
                                        | ((QData)((IData)(
                                                           __Vtemp15[0x1eU])) 
                                           >> 0xdU))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffe) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (IData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                            >> 0x35U))))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffd) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x34U))))) 
              << 1U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffffb) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x33U))))) 
              << 2U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffff7) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x32U))))) 
              << 3U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffef) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x31U))))) 
              << 4U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffdf) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x30U))))) 
              << 5U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffffbf) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2fU))))) 
              << 6U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffff7f) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2eU))))) 
              << 7U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffeff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2dU))))) 
              << 8U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffdff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2cU))))) 
              << 9U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffffbff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2bU))))) 
              << 0xaU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffff7ff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x2aU))))) 
              << 0xbU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffefff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x29U))))) 
              << 0xcU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffdfff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x28U))))) 
              << 0xdU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffffbfff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x27U))))) 
              << 0xeU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffff7fff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x26U))))) 
              << 0xfU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffeffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x25U))))) 
              << 0x10U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffdffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x24U))))) 
              << 0x11U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffffbffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x23U))))) 
              << 0x12U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffff7ffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x22U))))) 
              << 0x13U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffefffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x21U))))) 
              << 0x14U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffdfffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x20U))))) 
              << 0x15U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffffbfffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1fU))))) 
              << 0x16U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffff7fffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1eU))))) 
              << 0x17U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffeffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1dU))))) 
              << 0x18U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffdffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1cU))))) 
              << 0x19U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffffbffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1bU))))) 
              << 0x1aU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffff7ffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x1aU))))) 
              << 0x1bU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffefffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x19U))))) 
              << 0x1cU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffdfffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x18U))))) 
              << 0x1dU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffffbfffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x17U))))) 
              << 0x1eU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffff7fffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x16U))))) 
              << 0x1fU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffeffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x15U))))) 
              << 0x20U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffdffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x14U))))) 
              << 0x21U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffffbffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x13U))))) 
              << 0x22U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffff7ffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x12U))))) 
              << 0x23U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffefffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x11U))))) 
              << 0x24U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffdfffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0x10U))))) 
              << 0x25U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fffbfffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xfU))))) 
              << 0x26U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fff7fffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xeU))))) 
              << 0x27U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffeffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xdU))))) 
              << 0x28U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffdffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xcU))))) 
              << 0x29U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ffbffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xbU))))) 
              << 0x2aU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3ff7ffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 0xaU))))) 
              << 0x2bU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fefffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 9U))))) 
              << 0x2cU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fdfffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 8U))))) 
              << 0x2dU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3fbfffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 7U))))) 
              << 0x2eU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3f7fffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 6U))))) 
              << 0x2fU));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3effffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 5U))))) 
              << 0x30U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3dffffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 4U))))) 
              << 0x31U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x3bffffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 3U))))) 
              << 0x32U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x37ffffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 2U))))) 
              << 0x33U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x2fffffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                                             >> 1U))))) 
              << 0x34U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((VL_ULL(0x1fffffffffffff) & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | ((QData)((IData)((1U & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut)))) 
              << 0x35U));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig 
                                                >> 3U) 
                                               & (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                                                  >> 2U)))) 
           | ((0U != ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                      & (1U | (6U & ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                     << 1U))))) & (~ (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask 
        = ((~ (VL_ULL(1) | (VL_ULL(0x7ffffffffffffffe) 
                            & (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                               << 1U)))) & (VL_ULL(3) 
                                            | (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                                               << 2U)));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig 
                                                & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask) 
                                               >> 3U))) 
           | ((0U != (7U & ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                            & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask)))) 
              & (~ (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->roundingMode)) 
                                          | (4U == (IData)(vlTOPp->roundingMode))) 
                                         & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                                        | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
                                           & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound)))
                                        ? ((VL_ULL(1) 
                                            + ((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig 
                                                >> 2U) 
                                               | (VL_ULL(0x3fffffffffffffff) 
                                                  & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main))) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                                                  & (~ (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra)))
                                                  ? 
                                                 (VL_ULL(1) 
                                                  | (VL_ULL(0x7ffffffffffffffe) 
                                                     & (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                                                        << 1U)))
                                                  : VL_ULL(0))))
                                        : (((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig 
                                             & (~ (VL_ULL(3) 
                                                   | (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                                                      << 2U)))) 
                                            >> 2U) 
                                           | (((6U 
                                                == (IData)(vlTOPp->roundingMode)) 
                                               & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound))
                                               ? (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask 
                                                  >> 1U)
                                               : VL_ULL(0)))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                             & ((IData)(0x38800U) 
                                                + VL_EXTENDS_II(18,17, 
                                                                (0xffffU 
                                                                 & ((vlTOPp->in[4U] 
                                                                     << 0x10U) 
                                                                    | (vlTOPp->in[3U] 
                                                                       >> 0x10U))))))) 
                       + (IData)((VL_ULL(0x7fffffffffffff) 
                                  & (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig 
                                     >> 0x35U)))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x3ceU, VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))) 
           & ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp), 0xaU)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__isSigNaN) 
                               << 4U) | (((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
                                            & (VL_GTS_III(1,32,32, 0x3ceU, 
                                                          VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)) 
                                               | ((((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound) 
                                                    & VL_GTES_III(1,32,32, 0U, 
                                                                  VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,18, 
                                                                                (0x3ffffU 
                                                                                & ((IData)(0x38800U) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                (0xffffU 
                                                                                & ((vlTOPp->in[4U] 
                                                                                << 0x10U) 
                                                                                | (vlTOPp->in[3U] 
                                                                                >> 0x10U))))))), 0xbU))) 
                                                   & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
                                                  & (~ 
                                                     (((((0U 
                                                          != 
                                                          (1U 
                                                           & (IData)(vlTOPp->control))) 
                                                         & (~ (IData)(
                                                                      (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                                                                       >> 1U)))) 
                                                        & (IData)(
                                                                  (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig 
                                                                   >> 0x35U))) 
                                                       & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                                                      & ((((0U 
                                                            == (IData)(vlTOPp->roundingMode)) 
                                                           | (4U 
                                                              == (IData)(vlTOPp->roundingMode))) 
                                                          & (IData)(
                                                                    (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig 
                                                                     >> 1U))) 
                                                         | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
                                                            & (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig)))))))))) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
                                           | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 0x3ceU, 
                                                            VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)) 
                                                 | (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
           & (~ (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__isInf) 
           | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
              & (IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    __Vtemp17[0U] = (IData)((((QData)((IData)((0xfffU 
                                               & ((((((((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp 
                                                         & (~ 
                                                            (((0U 
                                                               == 
                                                               (7U 
                                                                & ((0x7fff8U 
                                                                    & (vlTOPp->in[4U] 
                                                                       << 3U)) 
                                                                   | (vlTOPp->in[3U] 
                                                                      >> 0x1dU)))) 
                                                              | VL_GTS_III(1,32,32, 0x3ceU, 
                                                                           VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)))
                                                              ? 0xe00U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                             ? 0xfffffc31U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                            ? 0x400U
                                                            : 0U))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                           ? 0x200U
                                                           : 0U))) 
                                                     | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                         ? 0x3ceU
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                        ? 0xbffU
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                       ? 0xc00U
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                                      ? 0xe00U
                                                      : 0U))))) 
                              << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                           & ((((QData)((IData)(
                                                                ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                                 | (((0U 
                                                                      != 
                                                                      (7U 
                                                                       & ((0x7fff8U 
                                                                           & (vlTOPp->in[4U] 
                                                                              << 3U)) 
                                                                          | (vlTOPp->in[3U] 
                                                                             >> 0x1dU)))) 
                                                                     & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))) 
                                                                    & (IData)(
                                                                              (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig 
                                                                               >> 0x33U)))))) 
                                                << 0x33U) 
                                               | (((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & ((0x7fff8U 
                                                            & (vlTOPp->in[4U] 
                                                               << 3U)) 
                                                           | (vlTOPp->in[3U] 
                                                              >> 0x1dU)))) 
                                                      & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                    VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))))
                                                   ? 
                                                  (VL_ULL(0x7ffffffffffff) 
                                                   & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig)
                                                   : VL_ULL(0))) 
                                              | VL_NEGATE_Q((QData)((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))));
    __Vtemp17[1U] = (IData)(((((QData)((IData)((0xfffU 
                                                & ((((((((vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp 
                                                          & (~ 
                                                             (((0U 
                                                                == 
                                                                (7U 
                                                                 & ((0x7fff8U 
                                                                     & (vlTOPp->in[4U] 
                                                                        << 3U)) 
                                                                    | (vlTOPp->in[3U] 
                                                                       >> 0x1dU)))) 
                                                               | VL_GTS_III(1,32,32, 0x3ceU, 
                                                                            VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)))
                                                               ? 0xe00U
                                                               : 0U))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                              ? 0xfffffc31U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                             ? 0x400U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                            ? 0x200U
                                                            : 0U))) 
                                                      | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                          ? 0x3ceU
                                                          : 0U)) 
                                                     | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                         ? 0xbffU
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                        ? 0xc00U
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                                       ? 0xe00U
                                                       : 0U))))) 
                               << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                            & ((((QData)((IData)(
                                                                 ((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                                  | (((0U 
                                                                       != 
                                                                       (7U 
                                                                        & ((0x7fff8U 
                                                                            & (vlTOPp->in[4U] 
                                                                               << 3U)) 
                                                                           | (vlTOPp->in[3U] 
                                                                              >> 0x1dU)))) 
                                                                      & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))) 
                                                                     & (IData)(
                                                                               (vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig 
                                                                                >> 0x33U)))))) 
                                                 << 0x33U) 
                                                | (((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                    | ((0U 
                                                        != 
                                                        (7U 
                                                         & ((0x7fff8U 
                                                             & (vlTOPp->in[4U] 
                                                                << 3U)) 
                                                            | (vlTOPp->in[3U] 
                                                               >> 0x1dU)))) 
                                                       & VL_LTES_III(1,32,32, 0x3ceU, 
                                                                     VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))))
                                                    ? 
                                                   (VL_ULL(0x7ffffffffffff) 
                                                    & vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig)
                                                    : VL_ULL(0))) 
                                               | VL_NEGATE_Q((QData)((IData)(vlTOPp->recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))) 
                             >> 0x20U));
    vlTOPp->out[0U] = __Vtemp17[0U];
    vlTOPp->out[1U] = __Vtemp17[1U];
    vlTOPp->out[2U] = (1U & vlTOPp->in[4U]);
}

void VrecF128ToRecF64::_eval(VrecF128ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF64::_eval\n"); );
    VrecF128ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VrecF128ToRecF64::_eval_initial(VrecF128ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF64::_eval_initial\n"); );
    VrecF128ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF128ToRecF64::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF64::final\n"); );
    // Variables
    VrecF128ToRecF64__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecF128ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF128ToRecF64::_eval_settle(VrecF128ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF64::_eval_settle\n"); );
    VrecF128ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VrecF128ToRecF64::_change_request(VrecF128ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF64::_change_request\n"); );
    VrecF128ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecF128ToRecF64::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF64::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((in[4U] & 0xfffffffeU))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif  // VL_DEBUG

void VrecF128ToRecF64::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF64::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, in);
    roundingMode = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(65, out);
    exceptionFlags = VL_RAND_RESET_I(5);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__isInf = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(114, recF128ToRecF64__DOT__recFNToRecFN__DOT__sigIn);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__isSigNaN = VL_RAND_RESET_I(1);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp = VL_RAND_RESET_I(1);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut = VL_RAND_RESET_I(1);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig = VL_RAND_RESET_Q(56);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase = VL_RAND_RESET_I(1);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow = VL_RAND_RESET_I(1);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main = VL_RAND_RESET_Q(54);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_Q(56);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_Q(55);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(19);
    VL_RAND_RESET_W(4097, recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c);
    recF128ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut = VL_RAND_RESET_Q(54);
}
