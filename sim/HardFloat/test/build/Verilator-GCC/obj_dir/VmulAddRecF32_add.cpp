// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmulAddRecF32_add.h for the primary calling header

#include "VmulAddRecF32_add.h"
#include "VmulAddRecF32_add__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VmulAddRecF32_add) {
    VmulAddRecF32_add__Syms* __restrict vlSymsp = __VlSymsp = new VmulAddRecF32_add__Syms(this, name());
    VmulAddRecF32_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VmulAddRecF32_add::__Vconfigure(VmulAddRecF32_add__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VmulAddRecF32_add::~VmulAddRecF32_add() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VmulAddRecF32_add::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmulAddRecF32_add::eval\n"); );
    VmulAddRecF32_add__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VmulAddRecF32_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/mulAddRecFN_spec.v", 58, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VmulAddRecF32_add::_eval_initial_loop(VmulAddRecF32_add__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/mulAddRecFN_spec.v", 58, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VmulAddRecF32_add::_settle__TOP__1(VmulAddRecF32_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF32_add::_settle__TOP__1\n"); );
    VmulAddRecF32_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp4[3];
    WData/*543:0*/ __Vtemp14[17];
    WData/*543:0*/ __Vtemp15[17];
    // Body
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__c = 0x100U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0U] = 0U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[1U] = 0U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[2U] = 0U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[3U] = 0U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[4U] = 0U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[5U] = 0U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[6U] = 0U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[7U] = 0U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[8U] = 0U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[9U] = 0U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xaU] = 0U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xbU] = 0U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xcU] = 0U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xdU] = 0U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xeU] = 0U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xfU] = 0U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x10U] = 1U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__c = 0x10000U;
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c = VL_ULL(0x100000000);
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA 
        = (((0U != (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->a)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros 
        = ((0U == (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 6U))) & (0U == (7U & ((IData)(
                                                          (vlTOPp->b 
                                                           >> 0x17U)) 
                                                  >> 6U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->a 
                                                >> 0x1dU))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC 
        = ((3U == (3U & ((IData)((vlTOPp->b >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->b 
                                                >> 0x1dU))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC 
        = ((3U == (3U & ((IData)((vlTOPp->b >> 0x17U)) 
                         >> 7U))) & (IData)((vlTOPp->b 
                                             >> 0x1dU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 7U))) & (IData)((vlTOPp->a 
                                             >> 0x1dU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags 
        = (1U & ((IData)((vlTOPp->a >> 0x20U)) ^ (IData)(
                                                         (vlTOPp->b 
                                                          >> 0x20U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
        = (((0U != (7U & ((IData)((vlTOPp->b >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->b)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist 
        = (0x7ffU & (((IData)(0x1bU) + VL_EXTENDS_II(11,10, 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlTOPp->a 
                                                                 >> 0x17U))))) 
                     - VL_EXTENDS_II(11,10, (0x1ffU 
                                             & (IData)(
                                                       (vlTOPp->b 
                                                        >> 0x17U))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA) 
           | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC 
        = (1U & ((IData)((vlTOPp->a >> 0x20U)) ^ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc 
        = ((((~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)) 
             & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA)) 
            & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
           & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x7eU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | (0U != (0xfU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                             << 2U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x7dU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                      >> 2U)))) << 1U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x7bU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                      >> 6U)))) << 2U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x77U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                      >> 0xaU)))) << 3U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x6fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                      >> 0xeU)))) << 4U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x5fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                      >> 0x12U)))) 
              << 5U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (7U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                    >> 0x16U)))) << 6U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign 
        = ((0U == (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 6U))) | VL_GTS_III(1,32,32, 0U, 
                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase 
        = ((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
             | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA)) 
            | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
           | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant 
        = ((0U != (7U & ((IData)((vlTOPp->b >> 0x17U)) 
                         >> 6U))) & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign) 
                                     | (0x18U >= (0x3ffU 
                                                  & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0x4aU > (0x3ffU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0x7fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))
                     : 0x4aU));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum 
        = (0x3ffU & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant)
                      ? VL_EXTENDS_II(32,10, (0x1ffU 
                                              & (IData)(
                                                        (vlTOPp->b 
                                                         >> 0x17U))))
                      : (VL_EXTENDS_II(32,11, (0x7ffU 
                                               & ((IData)(0x1bU) 
                                                  + 
                                                  VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->a 
                                                                            >> 0x17U))))))) 
                         - (IData)(0x18U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut 
        = (0x3fU & (VL_SHIFTRS_III(9,9,3, 0x100U, (7U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                                       >> 2U)))) 
                    >> 1U));
    __Vtemp3[0U] = (IData)((VL_ULL(0x1fffffffffffff) 
                            & VL_NEGATE_Q((QData)((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __Vtemp3[1U] = ((0xffe00000U & (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                      ? (~ vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                      : vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC) 
                                    << 0x15U)) | (IData)(
                                                         ((VL_ULL(0x1fffffffffffff) 
                                                           & VL_NEGATE_Q((QData)((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))) 
                                                          >> 0x20U)));
    __Vtemp3[2U] = (0x3fffU & (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                 ? (~ vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                 : vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC) 
                               >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp4, __Vtemp3, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp4[0U];
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp4[1U];
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = (0x1fffU & __Vtemp4[2U]);
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut 
        = (0x3fU & (IData)((VL_ULL(0x7ffff) & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
                                                              (0x1fU 
                                                               & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                                                  >> 2U))) 
                                               >> 0xeU))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x3eU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x3dU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x3bU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x37U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x2fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                       << 5U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x3eU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x3dU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x3bU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x37U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x2fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                       << 5U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC) 
                  & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U] 
        = ((0xfffffffeU & ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                            << 0x1eU) | (0x3ffffffeU 
                                         & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                            >> 2U)))) 
           | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
               ? ((7U == (7U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                  & (~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)))
               : ((0U != (7U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                  | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
        = ((1U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                  >> 2U)))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
        = ((1U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                  >> 2U)) | (0x7feU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                       >> 2U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
        = (VL_ULL(0x1ffffffffffff) & (((QData)((IData)(
                                                       (0xffffffU 
                                                        & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA))) 
                                       << 0x17U) + 
                                      (VL_ULL(0xffffffffffff) 
                                       & (((QData)((IData)(
                                                           vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U])) 
                                           << 0x3fU) 
                                          | (((QData)((IData)(
                                                              vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U])) 
                                              << 0x1fU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U])) 
                                                >> 1U))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
        = (0x3ffffffU & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                          ? (0x400000U | (0x3fffffU 
                                          & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                              ? vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA
                                              : ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC)
                                                  ? vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC
                                                  : 0U))))
                          : ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                              << 0xfU) | (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
                                          >> 0x11U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState 
        = (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
            << 5U) | ((0x10U & ((((((7U == (7U & (IData)(
                                                         (vlTOPp->a 
                                                          >> 0x1dU)))) 
                                    & (~ (IData)((vlTOPp->a 
                                                  >> 0x16U)))) 
                                   | ((7U == (7U & (IData)(
                                                           (vlTOPp->b 
                                                            >> 0x1dU)))) 
                                      & (~ (IData)(
                                                   (vlTOPp->b 
                                                    >> 0x16U))))) 
                                  | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc)) 
                                 | ((~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                    & (IData)((vlTOPp->a 
                                               >> 0x20U)))) 
                                << 4U)) | ((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) 
                                             | ((~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags))) 
                                            << 3U) 
                                           | (((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                                                 | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
                                                | ((~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                   & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                      | ((~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                         & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U])) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
                                                        | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc))
                                                        ? 
                                                       ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                                         ? 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->a 
                                                                    >> 0x20U)))
                                                         : 
                                                        ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC)
                                                          ? 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->b 
                                                                     >> 0x20U)))
                                                          : 1U))
                                                        : 
                                                       (((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                                                           & (IData)(
                                                                     (vlTOPp->a 
                                                                      >> 0x20U))) 
                                                          | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                                                             & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                                         | ((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                              & (2U 
                                                                 != (IData)(vlTOPp->roundingMode))) 
                                                             & (IData)(
                                                                       (vlTOPp->a 
                                                                        >> 0x20U))) 
                                                            & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                                        | (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                            & (2U 
                                                               == (IData)(vlTOPp->roundingMode))) 
                                                           & ((IData)(
                                                                      (vlTOPp->a 
                                                                       >> 0x20U)) 
                                                              | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)))))))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isInf 
        = (1U & (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 2U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__invalidExc 
        = (1U & (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 4U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isNaN 
        = (1U & (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
        = (IData)(((VL_ULL(0x1fffffffffffe) & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
                                               << 1U)) 
                   | (QData)((IData)((1U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 1U))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
        = ((0xfffe0000U & (((1U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
                                           >> 0x30U)))
                             ? ((IData)(1U) + vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC)
                             : vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC) 
                           << 0x11U)) | (IData)((((VL_ULL(0x1fffffffffffe) 
                                                   & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
                                                      << 1U)) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                                        >> 1U))))) 
                                                 >> 0x20U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
        = (0x7ffU & (((1U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
                                     >> 0x30U))) ? 
                      ((IData)(1U) + vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC)
                       : vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC) 
                     >> 0xfU));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isNaN));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
        = (VL_ULL(0x3ffffffffffff) & ((8U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                                       ? (~ (((QData)((IData)(
                                                              vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                              << 0x27U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                                 << 7U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                                   >> 0x19U))))
                                       : (((QData)((IData)(
                                                           (3U 
                                                            & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                                               >> 0x18U)))) 
                                           << 0x2fU) 
                                          | (VL_ULL(0x7fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                                 << 0x26U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                                    << 6U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                                      >> 0x1aU)))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
        = (VL_ULL(0x7ffffffffffff) & ((0x80000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])
                                       ? (~ (((QData)((IData)(
                                                              vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))))
                                       : ((((QData)((IData)(
                                                            vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))) 
                                          + (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                                >> 3U)))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig 
        = (0x1fffffffU & (IData)((VL_ULL(0x1fffffff) 
                                  & ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
                                      << (0x1fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist))) 
                                     >> 0x15U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x7eU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | (0U != (8U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                           << 3U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x7dU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                      >> 1U)))) << 1U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x7bU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                      >> 5U)))) << 2U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x77U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                      >> 9U)))) << 3U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x6fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                      >> 0xdU)))) << 4U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x5fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                      >> 0x11U)))) 
              << 5U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (7U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                    >> 0x15U)))) << 6U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffffeU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | (0U != (3U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffffdU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 2U))))) 
              << 1U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffffbU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 4U))))) 
              << 2U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffff7U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 6U))))) 
              << 3U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffffefU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 8U))))) 
              << 4U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffffdfU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0xaU))))) 
              << 5U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffffbfU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0xcU))))) 
              << 6U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffff7fU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0xeU))))) 
              << 7U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffeffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x10U))))) 
              << 8U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffdffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x12U))))) 
              << 9U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffbffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x14U))))) 
              << 0xaU));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fff7ffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x16U))))) 
              << 0xbU));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffefffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x18U))))) 
              << 0xcU));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffdfffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x1aU))))) 
              << 0xdU));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffbfffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x1cU))))) 
              << 0xeU));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ff7fffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x1eU))))) 
              << 0xfU));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3feffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x20U))))) 
              << 0x10U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fdffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x22U))))) 
              << 0x11U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fbffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x24U))))) 
              << 0x12U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3f7ffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x26U))))) 
              << 0x13U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3efffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x28U))))) 
              << 0x14U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3dfffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x2aU))))) 
              << 0x15U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3bfffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x2cU))))) 
              << 0x16U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x37fffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x2eU))))) 
              << 0x17U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x2ffffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x30U))))) 
              << 0x18U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1ffffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | (0x2000000U & ((IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                     >> 0x32U)) << 0x19U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x7eU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | (0U != (3U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x7dU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                    >> 2U)))) << 1U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x7bU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                    >> 4U)))) << 2U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x77U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                    >> 6U)))) << 3U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x6fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                    >> 8U)))) << 4U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x5fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                    >> 0xaU)))) << 5U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | (0x40U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                       >> 6U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffffeU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (1U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                    >> 0x19U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffffdU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (2U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                    >> 0x17U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffffbU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (4U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                    >> 0x15U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffff7U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (8U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                    >> 0x13U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffffefU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x10U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                       >> 0x11U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffffdfU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x20U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                       >> 0xfU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffffbfU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x40U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                       >> 0xdU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffff7fU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x80U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                       >> 0xbU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffeffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x100U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                        >> 9U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffdffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x200U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                        >> 7U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffbffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x400U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                        >> 5U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fff7ffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x800U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                        >> 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffefffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x1000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                         >> 1U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffdfffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x2000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                         << 1U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffbfffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x4000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                         << 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ff7fffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x8000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                         << 5U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3feffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x10000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                          << 7U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fdffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x20000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                          << 9U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fbffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x40000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                          << 0xbU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3f7ffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x80000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                          << 0xdU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3efffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x100000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                           << 0xfU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3dfffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x200000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                           << 0x11U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3bfffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x400000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                           << 0x13U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x37fffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x800000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                           << 0x15U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x2ffffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x1000000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                            << 0x17U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1ffffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x2000000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                            << 0x19U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
        = ((0x4000000U | vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           & ((IData)(1U) + (0x3ffffffU & (~ vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                              ? 1U : 0U) | ((4U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                             ? 2U : 0U)) 
                           | ((8U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                               ? 3U : 0U)) | ((0x10U 
                                               & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                             ? 5U : 0U)) | ((0x40U 
                                             & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                             ? 6U : 0U)) 
                       | ((0x80U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                           ? 7U : 0U)) | ((0x100U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                           ? 8U : 0U)) 
                     | ((0x200U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                         ? 9U : 0U)) | ((0x400U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                         ? 0xaU : 0U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((0x800U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                 ? 0xbU : 0U)) | ((0x1000U 
                                                   & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((0x2000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                               ? 0xdU : 0U)) | ((0x4000U 
                                                 & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((0x8000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                             ? 0xfU : 0U)) | ((0x10000U 
                                               & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                               ? 0x10U
                                               : 0U)) 
                       | ((0x20000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                           ? 0x11U : 0U)) | ((0x40000U 
                                              & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                              ? 0x12U
                                              : 0U)) 
                     | ((0x80000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                         ? 0x13U : 0U)) | ((0x100000U 
                                            & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                            ? 0x14U
                                            : 0U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar 
        = (0x1fU & (((((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                         | ((0x200000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                             ? 0x15U : 0U)) | ((0x400000U 
                                                & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                ? 0x16U
                                                : 0U)) 
                       | ((0x800000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                           ? 0x17U : 0U)) | ((0x1000000U 
                                              & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                              ? 0x18U
                                              : 0U)) 
                     | ((0x2000000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                         ? 0x19U : 0U)) | ((0x4000000U 
                                            & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                            ? 0x1aU
                                            : 0U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig 
        = (0x1fffffffU & (IData)((VL_ULL(0x1fffffff) 
                                  & ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                      << (0x3fU & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                   << 1U))) 
                                     >> 0x17U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut 
        = (0x3fU & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                   (0xfU & (~ ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                               >> 1U)))) 
                    >> 1U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sExp 
        = (0x3ffU & ((4U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                      ? ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                         - (1U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                  >> 3U))) : ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                                              - (0x3fU 
                                                 & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                    << 1U)))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x3eU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x3dU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x3bU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x37U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x2fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                       << 5U)));
    __Vtemp14[0U] = 0U;
    __Vtemp14[1U] = 0U;
    __Vtemp14[2U] = 0U;
    __Vtemp14[3U] = 0U;
    __Vtemp14[4U] = 0U;
    __Vtemp14[5U] = 0U;
    __Vtemp14[6U] = 0U;
    __Vtemp14[7U] = 0U;
    __Vtemp14[8U] = 0U;
    __Vtemp14[9U] = 0U;
    __Vtemp14[0xaU] = 0U;
    __Vtemp14[0xbU] = 0U;
    __Vtemp14[0xcU] = 0U;
    __Vtemp14[0xdU] = 0U;
    __Vtemp14[0xeU] = 0U;
    __Vtemp14[0xfU] = 0U;
    __Vtemp14[0x10U] = 1U;
    VL_SHIFTRS_WWI(513,513,9, __Vtemp15, __Vtemp14, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sExp)) 
                                 | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0x1ffffffU & ((__Vtemp15[4U] << 0x16U) | 
                         (__Vtemp15[3U] >> 0xaU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
        = ((0x7fffffeU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig 
                          >> 2U)) | ((0U != (7U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig)) 
                                     | (0U != ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum) 
                                               & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffeU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (1U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x18U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffdU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (2U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x16U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffbU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (4U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x14U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffff7U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (8U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x12U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffefU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0x10U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffdfU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xeU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffbfU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xcU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffff7fU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xaU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffeffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 8U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffdffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 6U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffbffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 4U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fff7ffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 2U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffefffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x1000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffdfffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x2000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 2U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffbfffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x4000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 4U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ff7fffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x8000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 6U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1feffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 8U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fdffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xaU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fbffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xcU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1f7ffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xeU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1efffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x10U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1dfffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x12U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1bfffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x14U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x17fffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x16U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x1000000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                            << 0x18U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isZero 
        = (1U & ((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                   >> 5U) & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                             >> 1U)) | ((~ ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 2U)) 
                                        & (0U == (3U 
                                                  & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
                                                     >> 0x19U))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sign 
        = (1U & (((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                    >> 5U) & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState)) 
                  | (((~ ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                          >> 5U)) & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                     >> 2U)) & (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                 >> 4U) 
                                                ^ ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                   >> 3U)))) 
                 | (((~ ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                         >> 5U)) & (~ ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                       >> 2U))) & (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
                                                        >> 0x19U)))
                                                    ? 
                                                   (2U 
                                                    == (IData)(vlTOPp->roundingMode))
                                                    : 
                                                   (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                     >> 4U) 
                                                    ^ 
                                                    (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                                     >> 0x13U))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isNaN)
            ? (0x2000000U | (0x1fffffcU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                           << 2U)))
            : ((4U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                ? ((0x7fffffeU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig 
                                  >> 2U)) | (1U & (
                                                   ((0U 
                                                     != 
                                                     (7U 
                                                      & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig)) 
                                                    | (0U 
                                                       != 
                                                       ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig) 
                                                        & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)))) 
                                                   | ((8U 
                                                       & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                                                       ? 
                                                      (~ (IData)(
                                                                 (0xffffffU 
                                                                  == 
                                                                  (0xffffffU 
                                                                   & ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                                                       << 0x1fU) 
                                                                      | (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
                                                                         >> 1U))))))
                                                       : 
                                                      (0U 
                                                       != 
                                                       (0x1ffffffU 
                                                        & ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                                            << 0x1fU) 
                                                           | (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
                                                              >> 1U))))))))
                : vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isInf))) 
                 & (~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isZero))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sign))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (3U | ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                  << 2U) | (4U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                  >> 0x18U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                 >> 3U) & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                           >> 4U)))) 
           | ((0U != (7U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                            & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                               >> 1U)))) & (~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
               >> 1U)) & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                 & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                >> 3U))) | ((0U != 
                                             (7U & 
                                              (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                               & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask))) 
                                            & (~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                            | (4U == (IData)(vlTOPp->roundingMode))) 
                           & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                          | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                              | vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                             >> 2U)) 
                             & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                     & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                       >> 1U) : 0U)))
                          : (((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                               & (~ vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                              >> 2U) | (((6U == (IData)(vlTOPp->roundingMode)) 
                                         & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                         ? (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                            >> 1U) : 0U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig)
                         ? (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                            >> 1U) : vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sExp)))) 
                     + (0x3ffffffU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                      >> 0x18U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & VL_EXTENDS_II(10,10, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sExp)))), 8U))) 
               & ((0x4000000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig)
                   ? (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                      >> 3U) : (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x4000000U 
                                                       & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig)
                                                       ? 
                                                      (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 4U)
                                                       : 
                                                      (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 3U)))) 
                                                 & ((0x4000000U 
                                                     & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig)
                                                     ? 
                                                    (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                     >> 0x19U)
                                                     : 
                                                    (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                     >> 0x18U))) 
                                                & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->roundingMode))) 
                                                   & ((0x4000000U 
                                                       & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig)
                                                       ? 
                                                      (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                                       >> 2U)
                                                       : 
                                                      (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & (((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                                          >> 0x1aU) 
                                                         & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig)))))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 7U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                            & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 0x6bU, 
                                                            VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                 | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isInf) 
           | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((QData)((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sign)) 
                    << 0x20U) | (QData)((IData)(((0xff800000U 
                                                  & ((((((((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                             & (~ 
                                                                (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isZero) 
                                                                  | VL_GTS_III(1,32,32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                            & (~ 
                                                               ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                                 ? 0xffffff94U
                                                                 : 0U))) 
                                                           & (~ 
                                                              ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                                ? 0x80U
                                                                : 0U))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                               ? 0x40U
                                                               : 0U))) 
                                                         | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                             ? 0x6bU
                                                             : 0U)) 
                                                        | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                            ? 0x17fU
                                                            : 0U)) 
                                                       | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                           ? 0x180U
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                          ? 0x1c0U
                                                          : 0U)) 
                                                     << 0x17U)) 
                                                 | (0x7fffffU 
                                                    & (((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                          << 0x16U) 
                                                         | (0xffc00000U 
                                                            & ((((~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isZero)) 
                                                                 & VL_LTES_III(1,32,32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                << 0x16U) 
                                                               & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))) 
                                                        | (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                            | ((~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isZero)) 
                                                               & VL_LTES_III(1,32,32, 0x6bU, 
                                                                             VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                            : 0U)) 
                                                       | VL_NEGATE_I((IData)((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))))));
}

VL_INLINE_OPT void VmulAddRecF32_add::_combo__TOP__2(VmulAddRecF32_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF32_add::_combo__TOP__2\n"); );
    VmulAddRecF32_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp19[3];
    WData/*95:0*/ __Vtemp20[3];
    WData/*543:0*/ __Vtemp30[17];
    // Body
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA 
        = (((0U != (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->a)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros 
        = ((0U == (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 6U))) & (0U == (7U & ((IData)(
                                                          (vlTOPp->b 
                                                           >> 0x17U)) 
                                                  >> 6U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->a 
                                                >> 0x1dU))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC 
        = ((3U == (3U & ((IData)((vlTOPp->b >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->b 
                                                >> 0x1dU))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC 
        = ((3U == (3U & ((IData)((vlTOPp->b >> 0x17U)) 
                         >> 7U))) & (IData)((vlTOPp->b 
                                             >> 0x1dU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 7U))) & (IData)((vlTOPp->a 
                                             >> 0x1dU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags 
        = (1U & ((IData)((vlTOPp->a >> 0x20U)) ^ (IData)(
                                                         (vlTOPp->b 
                                                          >> 0x20U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
        = (((0U != (7U & ((IData)((vlTOPp->b >> 0x17U)) 
                          >> 6U))) << 0x17U) | (0x7fffffU 
                                                & (IData)(vlTOPp->b)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist 
        = (0x7ffU & (((IData)(0x1bU) + VL_EXTENDS_II(11,10, 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlTOPp->a 
                                                                 >> 0x17U))))) 
                     - VL_EXTENDS_II(11,10, (0x1ffU 
                                             & (IData)(
                                                       (vlTOPp->b 
                                                        >> 0x17U))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA) 
           | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC 
        = (1U & ((IData)((vlTOPp->a >> 0x20U)) ^ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc 
        = ((((~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)) 
             & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA)) 
            & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
           & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x7eU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | (0U != (0xfU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                             << 2U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x7dU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                      >> 2U)))) << 1U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x7bU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                      >> 6U)))) << 2U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x77U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                      >> 0xaU)))) << 3U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x6fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                      >> 0xeU)))) << 4U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x5fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                      >> 0x12U)))) 
              << 5U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (7U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                    >> 0x16U)))) << 6U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign 
        = ((0U == (7U & ((IData)((vlTOPp->a >> 0x17U)) 
                         >> 6U))) | VL_GTS_III(1,32,32, 0U, 
                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase 
        = ((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
             | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA)) 
            | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
           | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant 
        = ((0U != (7U & ((IData)((vlTOPp->b >> 0x17U)) 
                         >> 6U))) & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign) 
                                     | (0x18U >= (0x3ffU 
                                                  & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0x4aU > (0x3ffU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0x7fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))
                     : 0x4aU));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum 
        = (0x3ffU & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant)
                      ? VL_EXTENDS_II(32,10, (0x1ffU 
                                              & (IData)(
                                                        (vlTOPp->b 
                                                         >> 0x17U))))
                      : (VL_EXTENDS_II(32,11, (0x7ffU 
                                               & ((IData)(0x1bU) 
                                                  + 
                                                  VL_EXTENDS_II(11,10, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->a 
                                                                            >> 0x17U))))))) 
                         - (IData)(0x18U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut 
        = (0x3fU & (VL_SHIFTRS_III(9,9,3, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__c), 
                                   (7U & (~ ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                             >> 2U)))) 
                    >> 1U));
    __Vtemp19[0U] = (IData)((VL_ULL(0x1fffffffffffff) 
                             & VL_NEGATE_Q((QData)((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __Vtemp19[1U] = ((0xffe00000U & (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                       ? (~ vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                       : vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC) 
                                     << 0x15U)) | (IData)(
                                                          ((VL_ULL(0x1fffffffffffff) 
                                                            & VL_NEGATE_Q((QData)((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))) 
                                                           >> 0x20U)));
    __Vtemp19[2U] = (0x3fffU & (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                  ? (~ vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                  : vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC) 
                                >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp20, __Vtemp19, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp20[0U];
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp20[1U];
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = (0x1fffU & __Vtemp20[2U]);
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut 
        = (0x3fU & (IData)((VL_ULL(0x7ffff) & (VL_SHIFTRS_QQI(33,33,5, vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c, 
                                                              (0x1fU 
                                                               & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                                                  >> 2U))) 
                                               >> 0xeU))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x3eU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x3dU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x3bU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x37U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x2fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                       << 5U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x3eU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x3dU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x3bU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x37U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x2fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                       << 5U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC) 
                  & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U] 
        = ((0xfffffffeU & ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                            << 0x1eU) | (0x3ffffffeU 
                                         & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                            >> 2U)))) 
           | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
               ? ((7U == (7U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                  & (~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)))
               : ((0U != (7U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                  | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
        = ((1U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                  >> 2U)))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
        = ((1U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                  >> 2U)) | (0x7feU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                       >> 2U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
        = (VL_ULL(0x1ffffffffffff) & (((QData)((IData)(
                                                       (0xffffffU 
                                                        & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA))) 
                                       << 0x17U) + 
                                      (VL_ULL(0xffffffffffff) 
                                       & (((QData)((IData)(
                                                           vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U])) 
                                           << 0x3fU) 
                                          | (((QData)((IData)(
                                                              vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U])) 
                                              << 0x1fU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U])) 
                                                >> 1U))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
        = (0x3ffffffU & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                          ? (0x400000U | (0x3fffffU 
                                          & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                              ? vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA
                                              : ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC)
                                                  ? vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC
                                                  : 0U))))
                          : ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                              << 0xfU) | (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
                                          >> 0x11U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState 
        = (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
            << 5U) | ((0x10U & ((((((7U == (7U & (IData)(
                                                         (vlTOPp->a 
                                                          >> 0x1dU)))) 
                                    & (~ (IData)((vlTOPp->a 
                                                  >> 0x16U)))) 
                                   | ((7U == (7U & (IData)(
                                                           (vlTOPp->b 
                                                            >> 0x1dU)))) 
                                      & (~ (IData)(
                                                   (vlTOPp->b 
                                                    >> 0x16U))))) 
                                  | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc)) 
                                 | ((~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                    & (IData)((vlTOPp->a 
                                               >> 0x20U)))) 
                                << 4U)) | ((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) 
                                             | ((~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags))) 
                                            << 3U) 
                                           | (((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                                                 | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
                                                | ((~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                   & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                      | ((~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                         & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U])) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
                                                        | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc))
                                                        ? 
                                                       ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                                         ? 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->a 
                                                                    >> 0x20U)))
                                                         : 
                                                        ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC)
                                                          ? 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->b 
                                                                     >> 0x20U)))
                                                          : 1U))
                                                        : 
                                                       (((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                                                           & (IData)(
                                                                     (vlTOPp->a 
                                                                      >> 0x20U))) 
                                                          | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                                                             & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                                         | ((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                              & (2U 
                                                                 != (IData)(vlTOPp->roundingMode))) 
                                                             & (IData)(
                                                                       (vlTOPp->a 
                                                                        >> 0x20U))) 
                                                            & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                                        | (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                            & (2U 
                                                               == (IData)(vlTOPp->roundingMode))) 
                                                           & ((IData)(
                                                                      (vlTOPp->a 
                                                                       >> 0x20U)) 
                                                              | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)))))))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isInf 
        = (1U & (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 2U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__invalidExc 
        = (1U & (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 4U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isNaN 
        = (1U & (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
        = (IData)(((VL_ULL(0x1fffffffffffe) & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
                                               << 1U)) 
                   | (QData)((IData)((1U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 1U))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
        = ((0xfffe0000U & (((1U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
                                           >> 0x30U)))
                             ? ((IData)(1U) + vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC)
                             : vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC) 
                           << 0x11U)) | (IData)((((VL_ULL(0x1fffffffffffe) 
                                                   & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
                                                      << 1U)) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                                        >> 1U))))) 
                                                 >> 0x20U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
        = (0x7ffU & (((1U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
                                     >> 0x30U))) ? 
                      ((IData)(1U) + vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC)
                       : vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC) 
                     >> 0xfU));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isNaN));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
        = (VL_ULL(0x3ffffffffffff) & ((8U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                                       ? (~ (((QData)((IData)(
                                                              vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                              << 0x27U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                                 << 7U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                                   >> 0x19U))))
                                       : (((QData)((IData)(
                                                           (3U 
                                                            & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                                               >> 0x18U)))) 
                                           << 0x2fU) 
                                          | (VL_ULL(0x7fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                                 << 0x26U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                                    << 6U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                                      >> 0x1aU)))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
        = (VL_ULL(0x7ffffffffffff) & ((0x80000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])
                                       ? (~ (((QData)((IData)(
                                                              vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))))
                                       : ((((QData)((IData)(
                                                            vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))) 
                                          + (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                                >> 3U)))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig 
        = (0x1fffffffU & (IData)((VL_ULL(0x1fffffff) 
                                  & ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
                                      << (0x1fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist))) 
                                     >> 0x15U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x7eU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | (0U != (8U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                           << 3U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x7dU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                      >> 1U)))) << 1U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x7bU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                      >> 5U)))) << 2U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x77U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                      >> 9U)))) << 3U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x6fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                      >> 0xdU)))) << 4U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x5fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                      >> 0x11U)))) 
              << 5U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (7U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                    >> 0x15U)))) << 6U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffffeU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | (0U != (3U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffffdU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 2U))))) 
              << 1U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffffbU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 4U))))) 
              << 2U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffff7U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 6U))))) 
              << 3U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffffefU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 8U))))) 
              << 4U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffffdfU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0xaU))))) 
              << 5U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffffbfU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0xcU))))) 
              << 6U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffff7fU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0xeU))))) 
              << 7U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffeffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x10U))))) 
              << 8U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffdffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x12U))))) 
              << 9U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffbffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x14U))))) 
              << 0xaU));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fff7ffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x16U))))) 
              << 0xbU));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffefffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x18U))))) 
              << 0xcU));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffdfffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x1aU))))) 
              << 0xdU));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffbfffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x1cU))))) 
              << 0xeU));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ff7fffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x1eU))))) 
              << 0xfU));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3feffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x20U))))) 
              << 0x10U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fdffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x22U))))) 
              << 0x11U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fbffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x24U))))) 
              << 0x12U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3f7ffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x26U))))) 
              << 0x13U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3efffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x28U))))) 
              << 0x14U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3dfffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x2aU))))) 
              << 0x15U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3bfffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x2cU))))) 
              << 0x16U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x37fffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x2eU))))) 
              << 0x17U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x2ffffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x30U))))) 
              << 0x18U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1ffffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | (0x2000000U & ((IData)((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                     >> 0x32U)) << 0x19U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x7eU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | (0U != (3U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x7dU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                    >> 2U)))) << 1U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x7bU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                    >> 4U)))) << 2U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x77U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                    >> 6U)))) << 3U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x6fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                    >> 8U)))) << 4U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x5fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                    >> 0xaU)))) << 5U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | (0x40U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                       >> 6U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffffeU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (1U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                    >> 0x19U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffffdU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (2U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                    >> 0x17U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffffbU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (4U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                    >> 0x15U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffff7U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (8U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                    >> 0x13U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffffefU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x10U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                       >> 0x11U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffffdfU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x20U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                       >> 0xfU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffffbfU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x40U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                       >> 0xdU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffff7fU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x80U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                       >> 0xbU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffeffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x100U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                        >> 9U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffdffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x200U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                        >> 7U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffbffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x400U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                        >> 5U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fff7ffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x800U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                        >> 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffefffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x1000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                         >> 1U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffdfffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x2000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                         << 1U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffbfffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x4000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                         << 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ff7fffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x8000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                         << 5U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3feffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x10000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                          << 7U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fdffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x20000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                          << 9U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fbffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x40000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                          << 0xbU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3f7ffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x80000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                          << 0xdU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3efffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x100000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                           << 0xfU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3dfffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x200000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                           << 0x11U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3bfffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x400000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                           << 0x13U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x37fffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x800000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                           << 0x15U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x2ffffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x1000000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                            << 0x17U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1ffffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x2000000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                            << 0x19U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
        = ((0x4000000U | vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           & ((IData)(1U) + (0x3ffffffU & (~ vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                              ? 1U : 0U) | ((4U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                             ? 2U : 0U)) 
                           | ((8U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                               ? 3U : 0U)) | ((0x10U 
                                               & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                             ? 5U : 0U)) | ((0x40U 
                                             & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                             ? 6U : 0U)) 
                       | ((0x80U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                           ? 7U : 0U)) | ((0x100U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                           ? 8U : 0U)) 
                     | ((0x200U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                         ? 9U : 0U)) | ((0x400U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                         ? 0xaU : 0U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((0x800U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                 ? 0xbU : 0U)) | ((0x1000U 
                                                   & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((0x2000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                               ? 0xdU : 0U)) | ((0x4000U 
                                                 & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((0x8000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                             ? 0xfU : 0U)) | ((0x10000U 
                                               & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                               ? 0x10U
                                               : 0U)) 
                       | ((0x20000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                           ? 0x11U : 0U)) | ((0x40000U 
                                              & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                              ? 0x12U
                                              : 0U)) 
                     | ((0x80000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                         ? 0x13U : 0U)) | ((0x100000U 
                                            & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                            ? 0x14U
                                            : 0U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar 
        = (0x1fU & (((((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                         | ((0x200000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                             ? 0x15U : 0U)) | ((0x400000U 
                                                & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                ? 0x16U
                                                : 0U)) 
                       | ((0x800000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                           ? 0x17U : 0U)) | ((0x1000000U 
                                              & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                              ? 0x18U
                                              : 0U)) 
                     | ((0x2000000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                         ? 0x19U : 0U)) | ((0x4000000U 
                                            & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                            ? 0x1aU
                                            : 0U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig 
        = (0x1fffffffU & (IData)((VL_ULL(0x1fffffff) 
                                  & ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                      << (0x3fU & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                   << 1U))) 
                                     >> 0x17U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut 
        = (0x3fU & (VL_SHIFTRS_III(17,17,4, vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__c, 
                                   (0xfU & (~ ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                               >> 1U)))) 
                    >> 1U));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sExp 
        = (0x3ffU & ((4U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                      ? ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                         - (1U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                  >> 3U))) : ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                                              - (0x3fU 
                                                 & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                    << 1U)))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x3eU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x3dU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x3bU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x37U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x2fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1fU & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                       << 5U)));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp30, vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sExp)) 
                                 | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0x1ffffffU & ((__Vtemp30[4U] << 0x16U) | 
                         (__Vtemp30[3U] >> 0xaU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
        = ((0x7fffffeU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig 
                          >> 2U)) | ((0U != (7U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig)) 
                                     | (0U != ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum) 
                                               & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffeU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (1U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x18U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffdU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (2U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x16U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffbU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (4U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x14U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffff7U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (8U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x12U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffefU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0x10U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffdfU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xeU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffbfU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xcU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffff7fU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xaU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffeffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 8U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffdffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 6U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffbffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 4U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fff7ffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 2U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffefffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x1000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffdfffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x2000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 2U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffbfffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x4000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 4U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ff7fffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x8000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 6U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1feffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 8U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fdffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xaU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fbffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xcU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1f7ffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xeU)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1efffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x10U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1dfffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x12U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1bfffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x14U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x17fffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x16U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffffffU & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x1000000U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                            << 0x18U)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isZero 
        = (1U & ((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                   >> 5U) & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                             >> 1U)) | ((~ ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 2U)) 
                                        & (0U == (3U 
                                                  & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
                                                     >> 0x19U))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sign 
        = (1U & (((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                    >> 5U) & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState)) 
                  | (((~ ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                          >> 5U)) & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                     >> 2U)) & (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                 >> 4U) 
                                                ^ ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                   >> 3U)))) 
                 | (((~ ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                         >> 5U)) & (~ ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                       >> 2U))) & (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
                                                        >> 0x19U)))
                                                    ? 
                                                   (2U 
                                                    == (IData)(vlTOPp->roundingMode))
                                                    : 
                                                   (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                     >> 4U) 
                                                    ^ 
                                                    (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                                     >> 0x13U))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isNaN)
            ? (0x2000000U | (0x1fffffcU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                           << 2U)))
            : ((4U & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                ? ((0x7fffffeU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig 
                                  >> 2U)) | (1U & (
                                                   ((0U 
                                                     != 
                                                     (7U 
                                                      & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig)) 
                                                    | (0U 
                                                       != 
                                                       ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig) 
                                                        & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)))) 
                                                   | ((8U 
                                                       & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                                                       ? 
                                                      (~ (IData)(
                                                                 (0xffffffU 
                                                                  == 
                                                                  (0xffffffU 
                                                                   & ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                                                       << 0x1fU) 
                                                                      | (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
                                                                         >> 1U))))))
                                                       : 
                                                      (0U 
                                                       != 
                                                       (0x1ffffffU 
                                                        & ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                                            << 0x1fU) 
                                                           | (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
                                                              >> 1U))))))))
                : vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isInf))) 
                 & (~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isZero))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sign))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (3U | ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                  << 2U) | (4U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                  >> 0x18U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                 >> 3U) & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                           >> 4U)))) 
           | ((0U != (7U & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                            & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                               >> 1U)))) & (~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
               >> 1U)) & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                 & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                >> 3U))) | ((0U != 
                                             (7U & 
                                              (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                               & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask))) 
                                            & (~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                            | (4U == (IData)(vlTOPp->roundingMode))) 
                           & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                          | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                              | vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                             >> 2U)) 
                             & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                     & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                       >> 1U) : 0U)))
                          : (((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                               & (~ vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                              >> 2U) | (((6U == (IData)(vlTOPp->roundingMode)) 
                                         & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                         ? (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                            >> 1U) : 0U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig)
                         ? (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                            >> 1U) : vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sExp)))) 
                     + (0x3ffffffU & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                      >> 0x18U))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & VL_EXTENDS_II(10,10, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sExp)))), 8U))) 
               & ((0x4000000U & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig)
                   ? (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                      >> 3U) : (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x4000000U 
                                                       & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig)
                                                       ? 
                                                      (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 4U)
                                                       : 
                                                      (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 3U)))) 
                                                 & ((0x4000000U 
                                                     & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig)
                                                     ? 
                                                    (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                     >> 0x19U)
                                                     : 
                                                    (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                     >> 0x18U))) 
                                                & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->roundingMode))) 
                                                   & ((0x4000000U 
                                                       & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig)
                                                       ? 
                                                      (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                                       >> 2U)
                                                       : 
                                                      (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & (((vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                                          >> 0x1aU) 
                                                         & (vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig)))))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 7U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                            & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 0x6bU, 
                                                            VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                 | (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isInf) 
           | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((QData)((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sign)) 
                    << 0x20U) | (QData)((IData)(((0xff800000U 
                                                  & ((((((((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                             & (~ 
                                                                (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isZero) 
                                                                  | VL_GTS_III(1,32,32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                            & (~ 
                                                               ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                                 ? 0xffffff94U
                                                                 : 0U))) 
                                                           & (~ 
                                                              ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                                ? 0x80U
                                                                : 0U))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                               ? 0x40U
                                                               : 0U))) 
                                                         | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                             ? 0x6bU
                                                             : 0U)) 
                                                        | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                            ? 0x17fU
                                                            : 0U)) 
                                                       | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                           ? 0x180U
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                          ? 0x1c0U
                                                          : 0U)) 
                                                     << 0x17U)) 
                                                 | (0x7fffffU 
                                                    & (((((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                          << 0x16U) 
                                                         | (0xffc00000U 
                                                            & ((((~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isZero)) 
                                                                 & VL_LTES_III(1,32,32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                                << 0x16U) 
                                                               & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))) 
                                                        | (((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                            | ((~ (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isZero)) 
                                                               & VL_LTES_III(1,32,32, 0x6bU, 
                                                                             VL_EXTENDS_II(32,11, (IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                            : 0U)) 
                                                       | VL_NEGATE_I((IData)((IData)(vlTOPp->mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))))));
}

void VmulAddRecF32_add::_eval(VmulAddRecF32_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF32_add::_eval\n"); );
    VmulAddRecF32_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VmulAddRecF32_add::_eval_initial(VmulAddRecF32_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF32_add::_eval_initial\n"); );
    VmulAddRecF32_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmulAddRecF32_add::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF32_add::final\n"); );
    // Variables
    VmulAddRecF32_add__Syms* __restrict vlSymsp = this->__VlSymsp;
    VmulAddRecF32_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmulAddRecF32_add::_eval_settle(VmulAddRecF32_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF32_add::_eval_settle\n"); );
    VmulAddRecF32_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VmulAddRecF32_add::_change_request(VmulAddRecF32_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF32_add::_change_request\n"); );
    VmulAddRecF32_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VmulAddRecF32_add::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF32_add::_eval_debug_assertions\n"); );
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

void VmulAddRecF32_add::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF32_add::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_Q(33);
    b = VL_RAND_RESET_Q(33);
    roundingMode = VL_RAND_RESET_I(3);
    out = VL_RAND_RESET_Q(33);
    exceptionFlags = VL_RAND_RESET_I(5);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__invalidExc = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isNaN = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isInf = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_isZero = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sign = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sExp = VL_RAND_RESET_I(10);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__out_sig = VL_RAND_RESET_I(27);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState = VL_RAND_RESET_I(6);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC = VL_RAND_RESET_I(26);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult = VL_RAND_RESET_Q(49);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA = VL_RAND_RESET_I(25);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC = VL_RAND_RESET_I(25);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist = VL_RAND_RESET_I(11);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum = VL_RAND_RESET_I(10);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(77, mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC = VL_RAND_RESET_I(7);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask = VL_RAND_RESET_I(6);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(75, mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c = VL_RAND_RESET_Q(33);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(75, mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum = VL_RAND_RESET_Q(50);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig = VL_RAND_RESET_I(29);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig = VL_RAND_RESET_I(7);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask = VL_RAND_RESET_I(6);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum = VL_RAND_RESET_Q(51);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum = VL_RAND_RESET_I(26);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig = VL_RAND_RESET_I(29);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum = VL_RAND_RESET_I(7);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask = VL_RAND_RESET_I(6);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig = VL_RAND_RESET_I(27);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__c = VL_RAND_RESET_I(9);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut = VL_RAND_RESET_I(6);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn = VL_RAND_RESET_I(26);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn = VL_RAND_RESET_I(27);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__c = VL_RAND_RESET_I(17);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut = VL_RAND_RESET_I(6);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut = VL_RAND_RESET_I(23);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask = VL_RAND_RESET_I(27);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main = VL_RAND_RESET_I(25);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_I(27);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_I(26);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(11);
    VL_RAND_RESET_W(513, mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c);
    mulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut = VL_RAND_RESET_I(25);
}
