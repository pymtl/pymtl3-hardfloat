// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecF32ToRecF16.h for the primary calling header

#include "VrecF32ToRecF16.h"
#include "VrecF32ToRecF16__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VrecF32ToRecF16) {
    VrecF32ToRecF16__Syms* __restrict vlSymsp = __VlSymsp = new VrecF32ToRecF16__Syms(this, name());
    VrecF32ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VrecF32ToRecF16::__Vconfigure(VrecF32ToRecF16__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VrecF32ToRecF16::~VrecF32ToRecF16() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VrecF32ToRecF16::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecF32ToRecF16::eval\n"); );
    VrecF32ToRecF16__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecF32ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/recFNToRecFN_spec.v", 41, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VrecF32ToRecF16::_eval_initial_loop(VrecF32ToRecF16__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/recFNToRecFN_spec.v", 41, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VrecF32ToRecF16::_settle__TOP__1(VrecF32ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF16::_settle__TOP__1\n"); );
    VrecF32ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2[3];
    WData/*95:0*/ __Vtemp3[3];
    // Body
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0U] = 0U;
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[1U] = 0U;
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[2U] = 1U;
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__isInf 
        = ((3U == (3U & ((IData)((vlTOPp->in >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->in 
                                                >> 0x1dU))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(
                                                            (vlTOPp->in 
                                                             >> 0x20U))) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)((vlTOPp->in >> 0x20U)))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__sigIn 
        = (((0U != (7U & ((IData)((vlTOPp->in >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->in)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__isSigNaN 
        = ((7U == (7U & (IData)((vlTOPp->in >> 0x1dU)))) 
           & (~ (IData)((vlTOPp->in >> 0x16U))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig 
        = ((0x3ffeU & (vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__sigIn 
                       >> 0xbU)) | (0U != (0xfffU & vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__sigIn)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__isSigNaN) 
           | ((3U == (3U & ((IData)((vlTOPp->in >> 0x17U)) 
                            >> 7U))) & (IData)((vlTOPp->in 
                                                >> 0x1dU))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase 
        = (((~ (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)) 
            & (~ (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__isInf))) 
           & (0U != (7U & ((IData)((vlTOPp->in >> 0x17U)) 
                           >> 6U))));
    __Vtemp2[0U] = 0U;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp3, __Vtemp2, (0x3fU 
                                                 & (~ 
                                                    (((IData)(0x20U) 
                                                      + 
                                                      VL_EXTENDS_II(6,10, 
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlTOPp->in 
                                                                                >> 0x17U))))) 
                                                     | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                                         ? 0x20U
                                                         : 0U)))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0xfffU & ((__Vtemp3[1U] << 0x19U) | (__Vtemp3[0U] 
                                                >> 7U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffeU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (1U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 0xbU)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffdU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (2U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 9U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffbU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (4U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 7U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xff7U & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (8U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfefU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x10U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 3U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfdfU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x20U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 1U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfbfU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x40U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 1U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xf7fU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x80U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xeffU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x100U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 5U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xdffU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x200U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 7U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xbffU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x400U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 9U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x7ffU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x800U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 0xbU)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                              >> 3U) & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                        >> 2U)))) | 
           ((0U != ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                    & (1U | (6U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                   << 1U))))) & (~ (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                    << 1U)))) & (3U 
                                                 | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                                    << 2U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                              & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask)) 
                             >> 3U))) | ((0U != (7U 
                                                 & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                                                    & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask)))) 
                                         & (~ (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig 
        = (0x1fffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                         | (4U == (IData)(vlTOPp->roundingMode))) 
                        & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                       | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
                          & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound)))
                       ? (((IData)(1U) + (((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                                           >> 2U) | 
                                          (0x3fffffffU 
                                           & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)))) 
                          & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                  & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                                 & (~ (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra)))
                                 ? (1U | (0x7ffffffeU 
                                          & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                             << 1U)))
                                 : 0U))) : ((((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                                              & (~ 
                                                 (3U 
                                                  | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                                     << 2U)))) 
                                             >> 2U) 
                                            | (((6U 
                                                 == (IData)(vlTOPp->roundingMode)) 
                                                & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound))
                                                ? ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask) 
                                                   >> 1U)
                                                : 0U))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp 
        = (0xfffU & (VL_EXTENDS_II(12,11, (0x7ffU & 
                                           ((IData)(0x720U) 
                                            + VL_EXTENDS_II(11,10, 
                                                            (0x1ffU 
                                                             & (IData)(
                                                                       (vlTOPp->in 
                                                                        >> 0x17U))))))) 
                     + (0x1fffU & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig) 
                                   >> 0xbU))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 8U, VL_EXTENDS_II(32,12, (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,12, (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)), 4U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__isSigNaN) 
                               << 4U) | (((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
                                            & (VL_GTS_III(1,32,32, 8U, 
                                                          VL_EXTENDS_II(32,12, (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))) 
                                               | ((((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound) 
                                                    & VL_GTES_III(1,32,32, 0U, 
                                                                  VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,11, 
                                                                                (0x7ffU 
                                                                                & ((IData)(0x720U) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->in 
                                                                                >> 0x17U))))))), 5U))) 
                                                   & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
                                                  & (~ 
                                                     (((((0U 
                                                          != 
                                                          (1U 
                                                           & (IData)(vlTOPp->control))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                                             >> 1U))) 
                                                        & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig) 
                                                           >> 0xbU)) 
                                                       & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                                                      & ((((0U 
                                                            == (IData)(vlTOPp->roundingMode)) 
                                                           | (4U 
                                                              == (IData)(vlTOPp->roundingMode))) 
                                                          & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                                                             >> 1U)) 
                                                         | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
                                                            & (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig)))))))))) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
                                           | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 8U, 
                                                            VL_EXTENDS_II(32,12, (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))) 
                                                 | (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
           & (~ (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__isInf) 
           | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
              & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlTOPp->out = ((0x10000U & ((IData)((vlTOPp->in 
                                         >> 0x20U)) 
                                << 0x10U)) | ((0xfc00U 
                                               & ((((((((((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp) 
                                                          & (~ 
                                                             (((0U 
                                                                == 
                                                                (7U 
                                                                 & ((IData)(
                                                                            (vlTOPp->in 
                                                                             >> 0x17U)) 
                                                                    >> 6U))) 
                                                               | VL_GTS_III(1,32,32, 8U, 
                                                                            VL_EXTENDS_II(32,12, (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))))
                                                               ? 0x38U
                                                               : 0U))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                              ? 0xfffffff7U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                             ? 0x10U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                            ? 8U
                                                            : 0U))) 
                                                      | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                          ? 8U
                                                          : 0U)) 
                                                     | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                         ? 0x2fU
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                        ? 0x30U
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                                       ? 0x38U
                                                       : 0U)) 
                                                  << 0xaU)) 
                                              | (0x3ffU 
                                                 & (((((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                       << 9U) 
                                                      | (0xfffffe00U 
                                                         & ((((0U 
                                                               != 
                                                               (7U 
                                                                & ((IData)(
                                                                           (vlTOPp->in 
                                                                            >> 0x17U)) 
                                                                   >> 6U))) 
                                                              & VL_LTES_III(1,32,32, 8U, 
                                                                            VL_EXTENDS_II(32,12, (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)))) 
                                                             << 9U) 
                                                            & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig)))) 
                                                     | (((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                         | ((0U 
                                                             != 
                                                             (7U 
                                                              & ((IData)(
                                                                         (vlTOPp->in 
                                                                          >> 0x17U)) 
                                                                 >> 6U))) 
                                                            & VL_LTES_III(1,32,32, 8U, 
                                                                          VL_EXTENDS_II(32,12, (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)))))
                                                         ? 
                                                        (0x1ffU 
                                                         & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig))
                                                         : 0U)) 
                                                    | VL_NEGATE_I((IData)((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))));
}

VL_INLINE_OPT void VrecF32ToRecF16::_combo__TOP__2(VrecF32ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF16::_combo__TOP__2\n"); );
    VrecF32ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp6[3];
    // Body
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__isInf 
        = ((3U == (3U & ((IData)((vlTOPp->in >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->in 
                                                >> 0x1dU))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(
                                                            (vlTOPp->in 
                                                             >> 0x20U))) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)((vlTOPp->in >> 0x20U)))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__sigIn 
        = (((0U != (7U & ((IData)((vlTOPp->in >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->in)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__isSigNaN 
        = ((7U == (7U & (IData)((vlTOPp->in >> 0x1dU)))) 
           & (~ (IData)((vlTOPp->in >> 0x16U))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig 
        = ((0x3ffeU & (vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__sigIn 
                       >> 0xbU)) | (0U != (0xfffU & vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__sigIn)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__isSigNaN) 
           | ((3U == (3U & ((IData)((vlTOPp->in >> 0x17U)) 
                            >> 7U))) & (IData)((vlTOPp->in 
                                                >> 0x1dU))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase 
        = (((~ (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)) 
            & (~ (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__isInf))) 
           & (0U != (7U & ((IData)((vlTOPp->in >> 0x17U)) 
                           >> 6U))));
    VL_SHIFTRS_WWI(65,65,6, __Vtemp6, vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0x3fU & (~ (((IData)(0x20U) + VL_EXTENDS_II(6,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->in 
                                                                            >> 0x17U))))) 
                                | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                    ? 0x20U : 0U)))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0xfffU & ((__Vtemp6[1U] << 0x19U) | (__Vtemp6[0U] 
                                                >> 7U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffeU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (1U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 0xbU)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffdU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (2U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 9U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffbU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (4U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 7U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xff7U & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (8U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfefU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x10U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 3U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfdfU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x20U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 1U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfbfU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x40U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 1U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xf7fU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x80U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xeffU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x100U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 5U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xdffU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x200U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 7U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xbffU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x400U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 9U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x7ffU & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x800U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 0xbU)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                              >> 3U) & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                        >> 2U)))) | 
           ((0U != ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                    & (1U | (6U & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                   << 1U))))) & (~ (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                    << 1U)))) & (3U 
                                                 | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                                    << 2U)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                              & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask)) 
                             >> 3U))) | ((0U != (7U 
                                                 & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                                                    & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask)))) 
                                         & (~ (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig 
        = (0x1fffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                         | (4U == (IData)(vlTOPp->roundingMode))) 
                        & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                       | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
                          & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound)))
                       ? (((IData)(1U) + (((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                                           >> 2U) | 
                                          (0x3fffffffU 
                                           & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)))) 
                          & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                  & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                                 & (~ (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra)))
                                 ? (1U | (0x7ffffffeU 
                                          & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                             << 1U)))
                                 : 0U))) : ((((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                                              & (~ 
                                                 (3U 
                                                  | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                                     << 2U)))) 
                                             >> 2U) 
                                            | (((6U 
                                                 == (IData)(vlTOPp->roundingMode)) 
                                                & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound))
                                                ? ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask) 
                                                   >> 1U)
                                                : 0U))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp 
        = (0xfffU & (VL_EXTENDS_II(12,11, (0x7ffU & 
                                           ((IData)(0x720U) 
                                            + VL_EXTENDS_II(11,10, 
                                                            (0x1ffU 
                                                             & (IData)(
                                                                       (vlTOPp->in 
                                                                        >> 0x17U))))))) 
                     + (0x1fffU & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig) 
                                   >> 0xbU))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 8U, VL_EXTENDS_II(32,12, (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,12, (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)), 4U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__isSigNaN) 
                               << 4U) | (((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
                                            & (VL_GTS_III(1,32,32, 8U, 
                                                          VL_EXTENDS_II(32,12, (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))) 
                                               | ((((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound) 
                                                    & VL_GTES_III(1,32,32, 0U, 
                                                                  VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,11, 
                                                                                (0x7ffU 
                                                                                & ((IData)(0x720U) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->in 
                                                                                >> 0x17U))))))), 5U))) 
                                                   & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
                                                  & (~ 
                                                     (((((0U 
                                                          != 
                                                          (1U 
                                                           & (IData)(vlTOPp->control))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                                                             >> 1U))) 
                                                        & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig) 
                                                           >> 0xbU)) 
                                                       & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit)) 
                                                      & ((((0U 
                                                            == (IData)(vlTOPp->roundingMode)) 
                                                           | (4U 
                                                              == (IData)(vlTOPp->roundingMode))) 
                                                          & ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig) 
                                                             >> 1U)) 
                                                         | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp) 
                                                            & (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig)))))))))) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
                                           | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 8U, 
                                                            VL_EXTENDS_II(32,12, (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))) 
                                                 | (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
           & (~ (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__isInf) 
           | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow) 
              & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlTOPp->out = ((0x10000U & ((IData)((vlTOPp->in 
                                         >> 0x20U)) 
                                << 0x10U)) | ((0xfc00U 
                                               & ((((((((((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp) 
                                                          & (~ 
                                                             (((0U 
                                                                == 
                                                                (7U 
                                                                 & ((IData)(
                                                                            (vlTOPp->in 
                                                                             >> 0x17U)) 
                                                                    >> 6U))) 
                                                               | VL_GTS_III(1,32,32, 8U, 
                                                                            VL_EXTENDS_II(32,12, (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp))))
                                                               ? 0x38U
                                                               : 0U))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                              ? 0xfffffff7U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                             ? 0x10U
                                                             : 0U))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                            ? 8U
                                                            : 0U))) 
                                                      | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                          ? 8U
                                                          : 0U)) 
                                                     | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                         ? 0x2fU
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                        ? 0x30U
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                                       ? 0x38U
                                                       : 0U)) 
                                                  << 0xaU)) 
                                              | (0x3ffU 
                                                 & (((((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                       << 9U) 
                                                      | (0xfffffe00U 
                                                         & ((((0U 
                                                               != 
                                                               (7U 
                                                                & ((IData)(
                                                                           (vlTOPp->in 
                                                                            >> 0x17U)) 
                                                                   >> 6U))) 
                                                              & VL_LTES_III(1,32,32, 8U, 
                                                                            VL_EXTENDS_II(32,12, (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)))) 
                                                             << 9U) 
                                                            & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig)))) 
                                                     | (((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                         | ((0U 
                                                             != 
                                                             (7U 
                                                              & ((IData)(
                                                                         (vlTOPp->in 
                                                                          >> 0x17U)) 
                                                                 >> 6U))) 
                                                            & VL_LTES_III(1,32,32, 8U, 
                                                                          VL_EXTENDS_II(32,12, (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp)))))
                                                         ? 
                                                        (0x1ffU 
                                                         & (IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig))
                                                         : 0U)) 
                                                    | VL_NEGATE_I((IData)((IData)(vlTOPp->recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))));
}

void VrecF32ToRecF16::_eval(VrecF32ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF16::_eval\n"); );
    VrecF32ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VrecF32ToRecF16::_eval_initial(VrecF32ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF16::_eval_initial\n"); );
    VrecF32ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF32ToRecF16::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF16::final\n"); );
    // Variables
    VrecF32ToRecF16__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecF32ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF32ToRecF16::_eval_settle(VrecF32ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF16::_eval_settle\n"); );
    VrecF32ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VrecF32ToRecF16::_change_request(VrecF32ToRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF16::_change_request\n"); );
    VrecF32ToRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecF32ToRecF16::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF16::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((in & VL_ULL(0)))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif // VL_DEBUG

void VrecF32ToRecF16::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF16::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_Q(33);
    roundingMode = VL_RAND_RESET_I(3);
    out = VL_RAND_RESET_I(17);
    exceptionFlags = VL_RAND_RESET_I(5);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__isInf = VL_RAND_RESET_I(1);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__sigIn = VL_RAND_RESET_I(25);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__isSigNaN = VL_RAND_RESET_I(1);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__roundMagUp = VL_RAND_RESET_I(1);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut = VL_RAND_RESET_I(1);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__adjustedSig = VL_RAND_RESET_I(14);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__commonCase = VL_RAND_RESET_I(1);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow = VL_RAND_RESET_I(1);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__roundMask_main = VL_RAND_RESET_I(12);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_I(14);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_I(13);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(65, recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c);
    recF32ToRecF16__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut = VL_RAND_RESET_I(12);
}
