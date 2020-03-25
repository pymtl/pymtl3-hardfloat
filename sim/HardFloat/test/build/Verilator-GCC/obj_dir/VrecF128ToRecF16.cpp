// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecF128ToRecF16.h for the primary calling header

#include "VrecF128ToRecF16.h"
#include "VrecF128ToRecF16__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VrecF128ToRecF16) {
    VrecF128ToRecF16__Syms* __restrict vlSymsp = __VlSymsp = new VrecF128ToRecF16__Syms(this, name());
    VrecF128ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VrecF128ToRecF16::__Vconfigure(VrecF128ToRecF16__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VrecF128ToRecF16::~VrecF128ToRecF16() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VrecF128ToRecF16::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecF128ToRecF16::eval\n"); );
    VrecF128ToRecF16__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecF128ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/recFNToRecFN_spec.v", 69, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VrecF128ToRecF16::_eval_initial_loop(VrecF128ToRecF16__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/recFNToRecFN_spec.v", 69, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VrecF128ToRecF16::_settle__TOP__1(VrecF128ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF16::_settle__TOP__1\n"); );
    VrecF128ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp9[3];
    WData/*95:0*/ __Vtemp10[3];
    // Body
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0U] = 0U;
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[1U] = 0U;
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[2U] = 1U;
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__isInf 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->in[4U] 
                                      << 2U)) | (vlTOPp->in[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->in[3U] >> 0x1dU)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & 
            vlTOPp->in[4U]) | ((3U == (IData)(vlTOPp->roundingMode)) 
                               & (~ vlTOPp->in[4U])));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[0U] 
        = vlTOPp->in[0U];
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[1U] 
        = vlTOPp->in[1U];
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[2U] 
        = vlTOPp->in[2U];
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->in[4U] 
                                             << 3U)) 
                                         | (vlTOPp->in[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->in[3U]));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__isSigNaN 
        = ((7U == (7U & ((vlTOPp->in[4U] << 3U) | (
                                                   vlTOPp->in[3U] 
                                                   >> 0x1dU)))) 
           & (~ (vlTOPp->in[3U] >> 0xfU)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig 
        = ((0x3ffeU & (vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[3U] 
                       >> 4U)) | (0U != (((vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[0U] 
                                           | vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[1U]) 
                                          | vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[2U]) 
                                         | (0x1fU & 
                                            vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[3U]))));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__isSigNaN) 
           | ((3U == (3U & ((0x3fffcU & (vlTOPp->in[4U] 
                                         << 2U)) | 
                            (vlTOPp->in[3U] >> 0x1eU)))) 
              & (vlTOPp->in[3U] >> 0x1dU)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase 
        = (((~ (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)) 
            & (~ (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__isInf))) 
           & (0U != (7U & ((0x7fff8U & (vlTOPp->in[4U] 
                                        << 3U)) | (
                                                   vlTOPp->in[3U] 
                                                   >> 0x1dU)))));
    __Vtemp9[0U] = 0U;
    __Vtemp9[1U] = 0U;
    __Vtemp9[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp10, __Vtemp9, (0x3fU 
                                                  & (~ 
                                                     (((IData)(0x20U) 
                                                       + 
                                                       VL_EXTENDS_II(6,17, 
                                                                     (0xffffU 
                                                                      & ((vlTOPp->in[4U] 
                                                                          << 0x10U) 
                                                                         | (vlTOPp->in[3U] 
                                                                            >> 0x10U))))) 
                                                      | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                                          ? 0x20U
                                                          : 0U)))));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0xfffU & ((__Vtemp10[1U] << 0x19U) | (__Vtemp10[0U] 
                                                 >> 7U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffeU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (1U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 0xbU)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffdU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (2U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 9U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffbU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (4U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 7U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xff7U & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (8U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfefU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x10U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 3U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfdfU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x20U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 1U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfbfU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x40U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 1U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xf7fU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x80U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xeffU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x100U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 5U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xdffU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x200U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 7U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xbffU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x400U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 9U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x7ffU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x800U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 0xbU)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                              >> 3U) & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                        >> 2U)))) | 
           ((0U != ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                    & (1U | (6U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                   << 1U))))) & (~ (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut))));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                    << 1U)))) & (3U 
                                                 | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                                    << 2U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                              & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask)) 
                             >> 3U))) | ((0U != (7U 
                                                 & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                                                    & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask)))) 
                                         & (~ (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut))));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig 
        = (0x1fffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                         | (4U == (IData)(vlTOPp->roundingMode))) 
                        & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                       | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
                          & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound)))
                       ? (((IData)(1U) + (((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                                           >> 2U) | 
                                          (0x3fffffffU 
                                           & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)))) 
                          & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                  & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                                 & (~ (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra)))
                                 ? (1U | (0x7ffffffeU 
                                          & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                             << 1U)))
                                 : 0U))) : ((((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                                              & (~ 
                                                 (3U 
                                                  | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                                     << 2U)))) 
                                             >> 2U) 
                                            | (((6U 
                                                 == (IData)(vlTOPp->roundingMode)) 
                                                & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound))
                                                ? ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask) 
                                                   >> 1U)
                                                : 0U))));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                             & ((IData)(0x38020U) 
                                                + VL_EXTENDS_II(18,17, 
                                                                (0xffffU 
                                                                 & ((vlTOPp->in[4U] 
                                                                     << 0x10U) 
                                                                    | (vlTOPp->in[3U] 
                                                                       >> 0x10U))))))) 
                       + ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig) 
                          >> 0xbU)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 8U, VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))) 
           & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp), 4U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__isSigNaN) 
                               << 4U) | (((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
                                            & (VL_GTS_III(1,32,32, 8U, 
                                                          VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)) 
                                               | ((((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound) 
                                                    & VL_GTES_III(1,32,32, 0U, 
                                                                  VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,18, 
                                                                                (0x3ffffU 
                                                                                & ((IData)(0x38020U) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                (0xffffU 
                                                                                & ((vlTOPp->in[4U] 
                                                                                << 0x10U) 
                                                                                | (vlTOPp->in[3U] 
                                                                                >> 0x10U))))))), 5U))) 
                                                   & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
                                                  & (~ 
                                                     (((((0U 
                                                          != 
                                                          (1U 
                                                           & (IData)(vlTOPp->control))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                                             >> 1U))) 
                                                        & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig) 
                                                           >> 0xbU)) 
                                                       & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                                                      & ((((0U 
                                                            == (IData)(vlTOPp->roundingMode)) 
                                                           | (4U 
                                                              == (IData)(vlTOPp->roundingMode))) 
                                                          & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                                                             >> 1U)) 
                                                         | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
                                                            & (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig)))))))))) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
                                           | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 8U, 
                                                            VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)) 
                                                 | (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
           & (~ (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__isInf) 
           | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
              & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlTOPp->out = ((0x10000U & (vlTOPp->in[4U] << 0x10U)) 
                   | ((0xfc00U & (((((((((vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp 
                                          & (~ (((0U 
                                                  == 
                                                  (7U 
                                                   & ((0x7fff8U 
                                                       & (vlTOPp->in[4U] 
                                                          << 3U)) 
                                                      | (vlTOPp->in[3U] 
                                                         >> 0x1dU)))) 
                                                 | VL_GTS_III(1,32,32, 8U, 
                                                              VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)))
                                                 ? 0x38U
                                                 : 0U))) 
                                         & (~ ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                ? 0xfffffff7U
                                                : 0U))) 
                                        & (~ ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                               ? 0x10U
                                               : 0U))) 
                                       & (~ ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                              ? 8U : 0U))) 
                                      | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                          ? 8U : 0U)) 
                                     | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                         ? 0x2fU : 0U)) 
                                    | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                        ? 0x30U : 0U)) 
                                   | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                       ? 0x38U : 0U)) 
                                  << 0xaU)) | (0x3ffU 
                                               & (((((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                     << 9U) 
                                                    | (0xfffffe00U 
                                                       & ((((0U 
                                                             != 
                                                             (7U 
                                                              & ((0x7fff8U 
                                                                  & (vlTOPp->in[4U] 
                                                                     << 3U)) 
                                                                 | (vlTOPp->in[3U] 
                                                                    >> 0x1dU)))) 
                                                            & VL_LTES_III(1,32,32, 8U, 
                                                                          VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))) 
                                                           << 9U) 
                                                          & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig)))) 
                                                   | (((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                       | ((0U 
                                                           != 
                                                           (7U 
                                                            & ((0x7fff8U 
                                                                & (vlTOPp->in[4U] 
                                                                   << 3U)) 
                                                               | (vlTOPp->in[3U] 
                                                                  >> 0x1dU)))) 
                                                          & VL_LTES_III(1,32,32, 8U, 
                                                                        VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))))
                                                       ? 
                                                      (0x1ffU 
                                                       & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig))
                                                       : 0U)) 
                                                  | VL_NEGATE_I((IData)((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))));
}

VL_INLINE_OPT void VrecF128ToRecF16::_combo__TOP__2(VrecF128ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF16::_combo__TOP__2\n"); );
    VrecF128ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp20[3];
    // Body
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__isInf 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->in[4U] 
                                      << 2U)) | (vlTOPp->in[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->in[3U] >> 0x1dU)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & 
            vlTOPp->in[4U]) | ((3U == (IData)(vlTOPp->roundingMode)) 
                               & (~ vlTOPp->in[4U])));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[0U] 
        = vlTOPp->in[0U];
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[1U] 
        = vlTOPp->in[1U];
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[2U] 
        = vlTOPp->in[2U];
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->in[4U] 
                                             << 3U)) 
                                         | (vlTOPp->in[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->in[3U]));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__isSigNaN 
        = ((7U == (7U & ((vlTOPp->in[4U] << 3U) | (
                                                   vlTOPp->in[3U] 
                                                   >> 0x1dU)))) 
           & (~ (vlTOPp->in[3U] >> 0xfU)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig 
        = ((0x3ffeU & (vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[3U] 
                       >> 4U)) | (0U != (((vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[0U] 
                                           | vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[1U]) 
                                          | vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[2U]) 
                                         | (0x1fU & 
                                            vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn[3U]))));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__isSigNaN) 
           | ((3U == (3U & ((0x3fffcU & (vlTOPp->in[4U] 
                                         << 2U)) | 
                            (vlTOPp->in[3U] >> 0x1eU)))) 
              & (vlTOPp->in[3U] >> 0x1dU)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase 
        = (((~ (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)) 
            & (~ (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__isInf))) 
           & (0U != (7U & ((0x7fff8U & (vlTOPp->in[4U] 
                                        << 3U)) | (
                                                   vlTOPp->in[3U] 
                                                   >> 0x1dU)))));
    VL_SHIFTRS_WWI(65,65,6, __Vtemp20, vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0x3fU & (~ (((IData)(0x20U) + VL_EXTENDS_II(6,17, 
                                                                (0xffffU 
                                                                 & ((vlTOPp->in[4U] 
                                                                     << 0x10U) 
                                                                    | (vlTOPp->in[3U] 
                                                                       >> 0x10U))))) 
                                | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                    ? 0x20U : 0U)))));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0xfffU & ((__Vtemp20[1U] << 0x19U) | (__Vtemp20[0U] 
                                                 >> 7U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffeU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (1U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 0xbU)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffdU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (2U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 9U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffbU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (4U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 7U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xff7U & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (8U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfefU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x10U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 3U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfdfU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x20U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 1U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfbfU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x40U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 1U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xf7fU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x80U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xeffU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x100U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 5U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xdffU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x200U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 7U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xbffU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x400U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 9U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x7ffU & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x800U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 0xbU)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                              >> 3U) & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                        >> 2U)))) | 
           ((0U != ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                    & (1U | (6U & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                   << 1U))))) & (~ (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut))));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                    << 1U)))) & (3U 
                                                 | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                                    << 2U)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                              & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask)) 
                             >> 3U))) | ((0U != (7U 
                                                 & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                                                    & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask)))) 
                                         & (~ (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut))));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig 
        = (0x1fffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                         | (4U == (IData)(vlTOPp->roundingMode))) 
                        & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                       | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
                          & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound)))
                       ? (((IData)(1U) + (((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                                           >> 2U) | 
                                          (0x3fffffffU 
                                           & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)))) 
                          & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                  & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                                 & (~ (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra)))
                                 ? (1U | (0x7ffffffeU 
                                          & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                             << 1U)))
                                 : 0U))) : ((((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                                              & (~ 
                                                 (3U 
                                                  | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                                     << 2U)))) 
                                             >> 2U) 
                                            | (((6U 
                                                 == (IData)(vlTOPp->roundingMode)) 
                                                & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound))
                                                ? ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask) 
                                                   >> 1U)
                                                : 0U))));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                             & ((IData)(0x38020U) 
                                                + VL_EXTENDS_II(18,17, 
                                                                (0xffffU 
                                                                 & ((vlTOPp->in[4U] 
                                                                     << 0x10U) 
                                                                    | (vlTOPp->in[3U] 
                                                                       >> 0x10U))))))) 
                       + ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig) 
                          >> 0xbU)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 8U, VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))) 
           & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp), 4U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__isSigNaN) 
                               << 4U) | (((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
                                            & (VL_GTS_III(1,32,32, 8U, 
                                                          VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)) 
                                               | ((((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound) 
                                                    & VL_GTES_III(1,32,32, 0U, 
                                                                  VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,18, 
                                                                                (0x3ffffU 
                                                                                & ((IData)(0x38020U) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                (0xffffU 
                                                                                & ((vlTOPp->in[4U] 
                                                                                << 0x10U) 
                                                                                | (vlTOPp->in[3U] 
                                                                                >> 0x10U))))))), 5U))) 
                                                   & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
                                                  & (~ 
                                                     (((((0U 
                                                          != 
                                                          (1U 
                                                           & (IData)(vlTOPp->control))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                                             >> 1U))) 
                                                        & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig) 
                                                           >> 0xbU)) 
                                                       & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                                                      & ((((0U 
                                                            == (IData)(vlTOPp->roundingMode)) 
                                                           | (4U 
                                                              == (IData)(vlTOPp->roundingMode))) 
                                                          & ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                                                             >> 1U)) 
                                                         | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
                                                            & (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig)))))))))) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
                                           | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 8U, 
                                                            VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)) 
                                                 | (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
           & (~ (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__isInf) 
           | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
              & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlTOPp->out = ((0x10000U & (vlTOPp->in[4U] << 0x10U)) 
                   | ((0xfc00U & (((((((((vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp 
                                          & (~ (((0U 
                                                  == 
                                                  (7U 
                                                   & ((0x7fff8U 
                                                       & (vlTOPp->in[4U] 
                                                          << 3U)) 
                                                      | (vlTOPp->in[3U] 
                                                         >> 0x1dU)))) 
                                                 | VL_GTS_III(1,32,32, 8U, 
                                                              VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)))
                                                 ? 0x38U
                                                 : 0U))) 
                                         & (~ ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                ? 0xfffffff7U
                                                : 0U))) 
                                        & (~ ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                               ? 0x10U
                                               : 0U))) 
                                       & (~ ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                              ? 8U : 0U))) 
                                      | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                          ? 8U : 0U)) 
                                     | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                         ? 0x2fU : 0U)) 
                                    | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                        ? 0x30U : 0U)) 
                                   | ((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                       ? 0x38U : 0U)) 
                                  << 0xaU)) | (0x3ffU 
                                               & (((((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                     << 9U) 
                                                    | (0xfffffe00U 
                                                       & ((((0U 
                                                             != 
                                                             (7U 
                                                              & ((0x7fff8U 
                                                                  & (vlTOPp->in[4U] 
                                                                     << 3U)) 
                                                                 | (vlTOPp->in[3U] 
                                                                    >> 0x1dU)))) 
                                                            & VL_LTES_III(1,32,32, 8U, 
                                                                          VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))) 
                                                           << 9U) 
                                                          & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig)))) 
                                                   | (((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                       | ((0U 
                                                           != 
                                                           (7U 
                                                            & ((0x7fff8U 
                                                                & (vlTOPp->in[4U] 
                                                                   << 3U)) 
                                                               | (vlTOPp->in[3U] 
                                                                  >> 0x1dU)))) 
                                                          & VL_LTES_III(1,32,32, 8U, 
                                                                        VL_EXTENDS_II(32,19, vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))))
                                                       ? 
                                                      (0x1ffU 
                                                       & (IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig))
                                                       : 0U)) 
                                                  | VL_NEGATE_I((IData)((IData)(vlTOPp->recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))));
}

void VrecF128ToRecF16::_eval(VrecF128ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF16::_eval\n"); );
    VrecF128ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VrecF128ToRecF16::_eval_initial(VrecF128ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF16::_eval_initial\n"); );
    VrecF128ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF128ToRecF16::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF16::final\n"); );
    // Variables
    VrecF128ToRecF16__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecF128ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF128ToRecF16::_eval_settle(VrecF128ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF16::_eval_settle\n"); );
    VrecF128ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VrecF128ToRecF16::_change_request(VrecF128ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF16::_change_request\n"); );
    VrecF128ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecF128ToRecF16::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF16::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((in[4U] & 0xfffffffeU))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif // VL_DEBUG

void VrecF128ToRecF16::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToRecF16::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, in);
    roundingMode = VL_RAND_RESET_I(3);
    out = VL_RAND_RESET_I(17);
    exceptionFlags = VL_RAND_RESET_I(5);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__isInf = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(114, recF128ToRecF16__DOT__recFNToRecFN__DOT__sigIn);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__isSigNaN = VL_RAND_RESET_I(1);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp = VL_RAND_RESET_I(1);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut = VL_RAND_RESET_I(1);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig = VL_RAND_RESET_I(14);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase = VL_RAND_RESET_I(1);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow = VL_RAND_RESET_I(1);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main = VL_RAND_RESET_I(12);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_I(14);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_I(13);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(19);
    VL_RAND_RESET_W(65, recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c);
    recF128ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut = VL_RAND_RESET_I(12);
}
