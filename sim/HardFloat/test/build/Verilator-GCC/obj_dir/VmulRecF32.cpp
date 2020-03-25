// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmulRecF32.h for the primary calling header

#include "VmulRecF32.h"
#include "VmulRecF32__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VmulRecF32) {
    VmulRecF32__Syms* __restrict vlSymsp = __VlSymsp = new VmulRecF32__Syms(this, name());
    VmulRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VmulRecF32::__Vconfigure(VmulRecF32__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VmulRecF32::~VmulRecF32() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VmulRecF32::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmulRecF32::eval\n"); );
    VmulRecF32__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VmulRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/mulRecFN_spec.v", 56, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VmulRecF32::_eval_initial_loop(VmulRecF32__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/mulRecFN_spec.v", 56, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VmulRecF32::_settle__TOP__1(VmulRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF32::_settle__TOP__1\n"); );
    VmulRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*543:0*/ __Vtemp2[17];
    WData/*543:0*/ __Vtemp3[17];
    // Body
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0U] = 0U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[1U] = 0U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[2U] = 0U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[3U] = 0U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[4U] = 0U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[5U] = 0U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[6U] = 0U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[7U] = 0U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[8U] = 0U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[9U] = 0U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xaU] = 0U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xbU] = 0U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xcU] = 0U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xdU] = 0U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xeU] = 0U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xfU] = 0U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x10U] = 1U;
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((0U == (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 6U))) | (0U == (7U & ((IData)(
                                                          (vlTOPp->b 
                                                           >> 0x17U)) 
                                                  >> 6U))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA 
        = (((0U != (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->a)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB 
        = (((0U != (7U & ((IData)((vlTOPp->b >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->b)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut 
        = (0x3ffU & ((VL_EXTENDS_II(10,10, (0x1ffU 
                                            & (IData)(
                                                      (vlTOPp->a 
                                                       >> 0x17U)))) 
                      + VL_EXTENDS_II(10,10, (0x1ffU 
                                              & (IData)(
                                                        (vlTOPp->b 
                                                         >> 0x17U))))) 
                     - (IData)(0x100U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 7U))) & (IData)((vlTOPp->a 
                                             >> 0x1dU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB 
        = ((3U == (3U & ((IData)((vlTOPp->b >> 0x17U)) 
                         >> 7U))) & (IData)((vlTOPp->b 
                                             >> 0x1dU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->a 
                                                >> 0x1dU))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & ((IData)((vlTOPp->b >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->b 
                                                >> 0x1dU))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd 
        = (VL_ULL(0xffffffffffff) & ((QData)((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA)) 
                                     * (QData)((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA) 
            & (0U == (7U & ((IData)((vlTOPp->b >> 0x17U)) 
                            >> 6U)))) | ((0U == (7U 
                                                 & ((IData)(
                                                            (vlTOPp->a 
                                                             >> 0x17U)) 
                                                    >> 6U))) 
                                         & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__invalidExc 
        = ((((7U == (7U & (IData)((vlTOPp->a >> 0x1dU)))) 
             & (~ (IData)((vlTOPp->a >> 0x16U)))) | 
            ((7U == (7U & (IData)((vlTOPp->b >> 0x1dU)))) 
             & (~ (IData)((vlTOPp->b >> 0x16U))))) 
           | (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_isNaN 
        = (((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA) 
            | (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)) 
           | (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sign 
        = (1U & ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_isNaN)
                  ? ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                      ? (1U & (IData)((vlTOPp->a >> 0x20U)))
                      : ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                          ? (1U & (IData)((vlTOPp->b 
                                           >> 0x20U)))
                          : 1U)) : ((IData)((vlTOPp->a 
                                             >> 0x20U)) 
                                    ^ (IData)((vlTOPp->b 
                                               >> 0x20U)))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
        = ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_isNaN)
            ? (0x3000000U | (0xfffffcU & (((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                                            ? vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA
                                            : ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                                ? vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB
                                                : 0U)) 
                                          << 2U))) : 
           ((0x7fffffeU & ((IData)((vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd 
                                    >> 0x16U)) << 1U)) 
            | (0U != (0x3fffffU & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd)))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_isNaN));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sign))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut))));
    __Vtemp2[0U] = 0U;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 0U;
    __Vtemp2[3U] = 0U;
    __Vtemp2[4U] = 0U;
    __Vtemp2[5U] = 0U;
    __Vtemp2[6U] = 0U;
    __Vtemp2[7U] = 0U;
    __Vtemp2[8U] = 0U;
    __Vtemp2[9U] = 0U;
    __Vtemp2[0xaU] = 0U;
    __Vtemp2[0xbU] = 0U;
    __Vtemp2[0xcU] = 0U;
    __Vtemp2[0xdU] = 0U;
    __Vtemp2[0xeU] = 0U;
    __Vtemp2[0xfU] = 0U;
    __Vtemp2[0x10U] = 1U;
    VL_SHIFTRS_WWI(513,513,9, __Vtemp3, __Vtemp2, (0x1ffU 
                                                   & (~ 
                                                      (VL_EXTENDS_II(9,10, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)) 
                                                       | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                           ? 0x100U
                                                           : 0U)))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0x1ffffffU & ((__Vtemp3[4U] << 0x16U) | 
                         (__Vtemp3[3U] >> 0xaU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffeU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (1U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x18U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffdU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (2U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x16U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffbU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (4U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x14U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffff7U & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (8U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x12U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffefU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0x10U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffdfU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xeU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffbfU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xcU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffff7fU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xaU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffeffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 8U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffdffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 6U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffbffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 4U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fff7ffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 2U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffefffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x1000U & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffdfffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x2000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 2U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffbfffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x4000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 4U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ff7fffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x8000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 6U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1feffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 8U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fdffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xaU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fbffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xcU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1f7ffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xeU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1efffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x10U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1dfffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x12U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1bfffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x14U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x17fffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x16U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x1000000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                            << 0x18U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (3U | ((vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                  << 2U) | (4U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                  >> 0x18U))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                 >> 3U) & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                           >> 4U)))) 
           | ((0U != (7U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                            & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                               >> 1U)))) & (~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
               >> 1U)) & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                 & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                >> 3U))) | ((0U != 
                                             (7U & 
                                              (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                               & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask))) 
                                            & (~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                            | (4U == (IData)(vlTOPp->roundingMode))) 
                           & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                          | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                              | vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                             >> 2U)) 
                             & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                     & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                       >> 1U) : 0U)))
                          : (((vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                               & (~ vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                              >> 2U) | (((6U == (IData)(vlTOPp->roundingMode)) 
                                         & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                         ? (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                            >> 1U) : 0U))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig)
                         ? (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                            >> 1U) : vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)))) 
                     + (0x3ffffffU & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                      >> 0x18U))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & VL_EXTENDS_II(10,10, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)))), 8U))) 
               & ((0x4000000U & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig)
                   ? (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                      >> 3U) : (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x4000000U 
                                                       & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig)
                                                       ? 
                                                      (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 4U)
                                                       : 
                                                      (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 3U)))) 
                                                 & ((0x4000000U 
                                                     & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig)
                                                     ? 
                                                    (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                     >> 0x19U)
                                                     : 
                                                    (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                     >> 0x18U))) 
                                                & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->roundingMode))) 
                                                   & ((0x4000000U 
                                                       & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig)
                                                       ? 
                                                      (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                                       >> 2U)
                                                       : 
                                                      (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & (((vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                                          >> 0x1aU) 
                                                         & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig)))))))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 7U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                            & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 0x6bU, 
                                                            VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                 | (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((QData)((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sign)) 
                    << 0x20U) | (QData)((IData)(((0xff800000U 
                                                  & ((((((((((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                             & (~ 
                                                                (((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut) 
                                                                  | VL_GTS_III(1,32,32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                            & (~ 
                                                               ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                                 ? 0xffffff94U
                                                                 : 0U))) 
                                                           & (~ 
                                                              ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                                ? 0x80U
                                                                : 0U))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                               ? 0x40U
                                                               : 0U))) 
                                                         | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                             ? 0x6bU
                                                             : 0U)) 
                                                        | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                            ? 0x17fU
                                                            : 0U)) 
                                                       | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                           ? 0x180U
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                          ? 0x1c0U
                                                          : 0U)) 
                                                     << 0x17U)) 
                                                 | (0x7fffffU 
                                                    & (((((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                          << 0x16U) 
                                                         | (0xffc00000U 
                                                            & ((((~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                                 & VL_LTES_III(1,32,32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                << 0x16U) 
                                                               & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))) 
                                                        | (((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                            | ((~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                               & VL_LTES_III(1,32,32, 0x6bU, 
                                                                             VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                            : 0U)) 
                                                       | VL_NEGATE_I((IData)((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))))));
}

VL_INLINE_OPT void VmulRecF32::_combo__TOP__2(VmulRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF32::_combo__TOP__2\n"); );
    VmulRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*543:0*/ __Vtemp6[17];
    // Body
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((0U == (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 6U))) | (0U == (7U & ((IData)(
                                                          (vlTOPp->b 
                                                           >> 0x17U)) 
                                                  >> 6U))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA 
        = (((0U != (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->a)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB 
        = (((0U != (7U & ((IData)((vlTOPp->b >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->b)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut 
        = (0x3ffU & ((VL_EXTENDS_II(10,10, (0x1ffU 
                                            & (IData)(
                                                      (vlTOPp->a 
                                                       >> 0x17U)))) 
                      + VL_EXTENDS_II(10,10, (0x1ffU 
                                              & (IData)(
                                                        (vlTOPp->b 
                                                         >> 0x17U))))) 
                     - (IData)(0x100U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 7U))) & (IData)((vlTOPp->a 
                                             >> 0x1dU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB 
        = ((3U == (3U & ((IData)((vlTOPp->b >> 0x17U)) 
                         >> 7U))) & (IData)((vlTOPp->b 
                                             >> 0x1dU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->a 
                                                >> 0x1dU))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & ((IData)((vlTOPp->b >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->b 
                                                >> 0x1dU))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd 
        = (VL_ULL(0xffffffffffff) & ((QData)((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA)) 
                                     * (QData)((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA) 
            & (0U == (7U & ((IData)((vlTOPp->b >> 0x17U)) 
                            >> 6U)))) | ((0U == (7U 
                                                 & ((IData)(
                                                            (vlTOPp->a 
                                                             >> 0x17U)) 
                                                    >> 6U))) 
                                         & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__invalidExc 
        = ((((7U == (7U & (IData)((vlTOPp->a >> 0x1dU)))) 
             & (~ (IData)((vlTOPp->a >> 0x16U)))) | 
            ((7U == (7U & (IData)((vlTOPp->b >> 0x1dU)))) 
             & (~ (IData)((vlTOPp->b >> 0x16U))))) 
           | (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_isNaN 
        = (((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA) 
            | (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)) 
           | (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sign 
        = (1U & ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_isNaN)
                  ? ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                      ? (1U & (IData)((vlTOPp->a >> 0x20U)))
                      : ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                          ? (1U & (IData)((vlTOPp->b 
                                           >> 0x20U)))
                          : 1U)) : ((IData)((vlTOPp->a 
                                             >> 0x20U)) 
                                    ^ (IData)((vlTOPp->b 
                                               >> 0x20U)))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
        = ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_isNaN)
            ? (0x3000000U | (0xfffffcU & (((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                                            ? vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA
                                            : ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                                ? vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB
                                                : 0U)) 
                                          << 2U))) : 
           ((0x7fffffeU & ((IData)((vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd 
                                    >> 0x16U)) << 1U)) 
            | (0U != (0x3fffffU & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd)))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_isNaN));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sign))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp6, vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)) 
                                 | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0x1ffffffU & ((__Vtemp6[4U] << 0x16U) | 
                         (__Vtemp6[3U] >> 0xaU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffeU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (1U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x18U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffdU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (2U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x16U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffbU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (4U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x14U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffff7U & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (8U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x12U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffefU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0x10U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffdfU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xeU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffbfU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xcU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffff7fU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xaU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffeffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 8U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffdffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 6U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffbffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 4U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fff7ffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 2U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffefffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x1000U & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffdfffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x2000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 2U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffbfffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x4000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 4U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ff7fffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x8000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 6U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1feffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 8U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fdffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xaU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fbffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xcU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1f7ffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xeU)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1efffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x10U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1dfffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x12U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1bfffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x14U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x17fffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x16U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffffffU & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x1000000U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                            << 0x18U)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (3U | ((vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                  << 2U) | (4U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                  >> 0x18U))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                 >> 3U) & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                           >> 4U)))) 
           | ((0U != (7U & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                            & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                               >> 1U)))) & (~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
               >> 1U)) & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                 & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                >> 3U))) | ((0U != 
                                             (7U & 
                                              (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                               & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask))) 
                                            & (~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                            | (4U == (IData)(vlTOPp->roundingMode))) 
                           & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                          | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                              | vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                             >> 2U)) 
                             & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                     & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                       >> 1U) : 0U)))
                          : (((vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                               & (~ vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                              >> 2U) | (((6U == (IData)(vlTOPp->roundingMode)) 
                                         & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                         ? (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                            >> 1U) : 0U))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig)
                         ? (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                            >> 1U) : vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)))) 
                     + (0x3ffffffU & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                      >> 0x18U))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & VL_EXTENDS_II(10,10, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)))), 8U))) 
               & ((0x4000000U & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig)
                   ? (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                      >> 3U) : (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x4000000U 
                                                       & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig)
                                                       ? 
                                                      (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 4U)
                                                       : 
                                                      (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 3U)))) 
                                                 & ((0x4000000U 
                                                     & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig)
                                                     ? 
                                                    (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                     >> 0x19U)
                                                     : 
                                                    (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                     >> 0x18U))) 
                                                & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->roundingMode))) 
                                                   & ((0x4000000U 
                                                       & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig)
                                                       ? 
                                                      (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                                       >> 2U)
                                                       : 
                                                      (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & (((vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                                          >> 0x1aU) 
                                                         & (vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sig)))))))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 7U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                            & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 0x6bU, 
                                                            VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                 | (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((QData)((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__out_sign)) 
                    << 0x20U) | (QData)((IData)(((0xff800000U 
                                                  & ((((((((((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                             & (~ 
                                                                (((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut) 
                                                                  | VL_GTS_III(1,32,32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                            & (~ 
                                                               ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                                 ? 0xffffff94U
                                                                 : 0U))) 
                                                           & (~ 
                                                              ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                                ? 0x80U
                                                                : 0U))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                               ? 0x40U
                                                               : 0U))) 
                                                         | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                             ? 0x6bU
                                                             : 0U)) 
                                                        | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                            ? 0x17fU
                                                            : 0U)) 
                                                       | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                           ? 0x180U
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                          ? 0x1c0U
                                                          : 0U)) 
                                                     << 0x17U)) 
                                                 | (0x7fffffU 
                                                    & (((((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                          << 0x16U) 
                                                         | (0xffc00000U 
                                                            & ((((~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                                 & VL_LTES_III(1,32,32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                << 0x16U) 
                                                               & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))) 
                                                        | (((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                            | ((~ (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                               & VL_LTES_III(1,32,32, 0x6bU, 
                                                                             VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                            : 0U)) 
                                                       | VL_NEGATE_I((IData)((IData)(vlTOPp->mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))))));
}

void VmulRecF32::_eval(VmulRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF32::_eval\n"); );
    VmulRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VmulRecF32::_eval_initial(VmulRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF32::_eval_initial\n"); );
    VmulRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmulRecF32::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF32::final\n"); );
    // Variables
    VmulRecF32__Syms* __restrict vlSymsp = this->__VlSymsp;
    VmulRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmulRecF32::_eval_settle(VmulRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF32::_eval_settle\n"); );
    VmulRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VmulRecF32::_change_request(VmulRecF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF32::_change_request\n"); );
    VmulRecF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VmulRecF32::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF32::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((a & VL_ULL(0)))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b & VL_ULL(0)))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif // VL_DEBUG

void VmulRecF32::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF32::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_Q(33);
    b = VL_RAND_RESET_Q(33);
    roundingMode = VL_RAND_RESET_I(3);
    out = VL_RAND_RESET_Q(33);
    exceptionFlags = VL_RAND_RESET_I(5);
    mulRecF32__DOT__mulRecFN__DOT__invalidExc = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__out_isNaN = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__out_sign = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__out_sig = VL_RAND_RESET_I(27);
    mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA = VL_RAND_RESET_I(25);
    mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB = VL_RAND_RESET_I(25);
    mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut = VL_RAND_RESET_I(10);
    mulRecF32__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd = VL_RAND_RESET_Q(48);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut = VL_RAND_RESET_I(23);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask = VL_RAND_RESET_I(27);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main = VL_RAND_RESET_I(25);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_I(27);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_I(26);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(11);
    VL_RAND_RESET_W(513, mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c);
    mulRecF32__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut = VL_RAND_RESET_I(25);
}
