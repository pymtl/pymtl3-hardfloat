// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmulAddRecF16.h for the primary calling header

#include "VmulAddRecF16.h"
#include "VmulAddRecF16__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VmulAddRecF16) {
    VmulAddRecF16__Syms* __restrict vlSymsp = __VlSymsp = new VmulAddRecF16__Syms(this, name());
    VmulAddRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VmulAddRecF16::__Vconfigure(VmulAddRecF16__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VmulAddRecF16::~VmulAddRecF16() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VmulAddRecF16::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmulAddRecF16::eval\n"); );
    VmulAddRecF16__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VmulAddRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/mulAddRecFN_spec.v", 182, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VmulAddRecF16::_eval_initial_loop(VmulAddRecF16__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/mulAddRecFN_spec.v", 182, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VmulAddRecF16::_settle__TOP__1(VmulAddRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF16::_settle__TOP__1\n"); );
    VmulAddRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2[3];
    WData/*95:0*/ __Vtemp3[3];
    // Body
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__c = 0x10U;
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0U] = 0U;
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[1U] = 0U;
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[2U] = 1U;
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__c = 0x100U;
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c = 0x10000U;
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA 
        = (((0U != (7U & (vlTOPp->a >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->a));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigB 
        = (((0U != (7U & (vlTOPp->b >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->b));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros 
        = (((0U == (7U & (vlTOPp->a >> 0xdU))) | (0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->b 
                                                      >> 0xdU)))) 
           & (0U == (7U & (vlTOPp->c >> 0xdU))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC 
        = ((3U == (3U & (vlTOPp->c >> 0xeU))) & (~ 
                                                 (vlTOPp->c 
                                                  >> 0xdU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC 
        = ((3U == (3U & (vlTOPp->c >> 0xeU))) & (vlTOPp->c 
                                                 >> 0xdU));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (vlTOPp->a 
                                                 >> 0xdU));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB 
        = ((3U == (3U & (vlTOPp->b >> 0xeU))) & (vlTOPp->b 
                                                 >> 0xdU));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (~ 
                                                 (vlTOPp->a 
                                                  >> 0xdU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB 
        = ((3U == (3U & (vlTOPp->b >> 0xeU))) & (~ 
                                                 (vlTOPp->b 
                                                  >> 0xdU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd 
        = (1U & (((vlTOPp->a ^ vlTOPp->b) >> 0x10U) 
                 ^ ((IData)(vlTOPp->op) >> 1U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
        = (((0U != (7U & (vlTOPp->c >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->c));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd 
        = (0xffU & ((IData)(0xeeU) + (VL_EXTENDS_II(8,7, 
                                                    (0x3fU 
                                                     & (vlTOPp->a 
                                                        >> 0xaU))) 
                                      + VL_EXTENDS_II(8,7, 
                                                      (0x3fU 
                                                       & (vlTOPp->b 
                                                          >> 0xaU))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA) 
           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd 
        = (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
            & (0U == (7U & (vlTOPp->b >> 0xdU)))) | 
           ((0U == (7U & (vlTOPp->a >> 0xdU))) & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags 
        = (1U & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                  ^ (vlTOPp->c >> 0x10U)) ^ (IData)(vlTOPp->op)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((6U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | (0U != (0xfU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((5U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC) 
                                      >> 4U)))) << 1U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((3U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC) 
                                      >> 8U)))) << 2U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist 
        = (0xffU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd) 
                    - VL_EXTENDS_II(8,7, (0x3fU & (vlTOPp->c 
                                                   >> 0xaU)))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB) 
           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC 
        = ((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd)) 
           & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd) 
           | ((((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB)) 
                & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB)) 
               & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
              & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign 
        = (((0U == (7U & (vlTOPp->a >> 0xdU))) | (0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->b 
                                                      >> 0xdU)))) 
           | VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase 
        = ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
             | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB)) 
            | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant 
        = ((0U != (7U & (vlTOPp->c >> 0xdU))) & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign) 
                                                 | (0xbU 
                                                    >= 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0x23U > (0x7fU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0x3fU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))
                     : 0x23U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum 
        = (0x7fU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant)
                     ? VL_EXTENDS_II(32,7, (0x3fU & 
                                            (vlTOPp->c 
                                             >> 0xaU)))
                     : (VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd)) 
                        - (IData)(0xbU))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut 
        = (3U & (VL_SHIFTRS_III(5,5,2, 0x10U, (3U & 
                                               (~ ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                                   >> 2U)))) 
                 >> 1U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC 
        = (VL_ULL(0x3fffffffff) & VL_SHIFTRS_QQI(39,39,6, 
                                                 (((QData)((IData)(
                                                                   (0xfffU 
                                                                    & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                                                        ? 
                                                                       (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC))
                                                                        : (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC))))) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (0x7ffffffU 
                                                                     & VL_NEGATE_I((IData)((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags))))))), (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut 
        = (3U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                (0xfU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                         >> 2U))) >> 8U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((2U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((1U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((2U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((1U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC) 
                  & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC 
        = ((VL_ULL(0xffffffffe) & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC 
                                   >> 2U)) | (QData)((IData)(
                                                             ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                                               ? 
                                                              ((7U 
                                                                == 
                                                                (7U 
                                                                 & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC))) 
                                                               & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)))
                                                               : 
                                                              ((0U 
                                                                != 
                                                                (7U 
                                                                 & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC))) 
                                                               | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
        = (0x7fffffU & (((0x7ffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA)) 
                         * (0x7ffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigB))) 
                        + (0x3fffffU & (IData)((vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC 
                                                >> 1U)))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
        = (0x1fffU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                       ? (0x200U | (0x1ffU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                               ? (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA)
                                               : ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                   ? (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigB)
                                                   : 
                                                  ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                    ? (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                                    : 0U)))))
                       : (IData)((vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC 
                                  >> 0x17U))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState 
        = (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
            << 5U) | ((((((((7U == (7U & (vlTOPp->a 
                                          >> 0xdU))) 
                            & (~ (vlTOPp->a >> 9U))) 
                           | ((7U == (7U & (vlTOPp->b 
                                            >> 0xdU))) 
                              & (~ (vlTOPp->b >> 9U)))) 
                          | ((7U == (7U & (vlTOPp->c 
                                           >> 0xdU))) 
                             & (~ (vlTOPp->c >> 9U)))) 
                         | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc)) 
                        | ((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                           & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd))) 
                       << 4U) | ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) 
                                   | ((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                      & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags))) 
                                  << 3U) | (((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                               | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
                                              | ((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                 & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant))) 
                                             << 2U) 
                                            | ((2U 
                                                & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                    | ((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                       & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
                                                      | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc))
                                                      ? 
                                                     ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                                       ? 
                                                      (1U 
                                                       & (vlTOPp->a 
                                                          >> 0x10U))
                                                       : 
                                                      ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                        ? 
                                                       (1U 
                                                        & (vlTOPp->b 
                                                           >> 0x10U))
                                                        : 
                                                       ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                         ? 
                                                        (1U 
                                                         & (vlTOPp->c 
                                                            >> 0x10U))
                                                         : 1U)))
                                                      : 
                                                     (((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                                         & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                        | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                                                           & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                                       | ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                            & (2U 
                                                               != (IData)(vlTOPp->roundingMode))) 
                                                           & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                          & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                                      | (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                          & (2U 
                                                             == (IData)(vlTOPp->roundingMode))) 
                                                         & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                                                            | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)))))))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isInf 
        = (1U & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 2U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__invalidExc 
        = (1U & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 4U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isNaN 
        = (1U & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 3U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum 
        = (((QData)((IData)((0x1fffU & ((0x400000U 
                                         & vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult)
                                         ? ((IData)(1U) 
                                            + (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC))
                                         : (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC))))) 
            << 0x17U) | (QData)((IData)(((0x7ffffeU 
                                          & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
                                             << 1U)) 
                                         | (1U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                  >> 1U))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isNaN));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
        = (0xffffffU & ((8U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                         ? (~ (IData)((vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum 
                                       >> 0xcU))) : 
                        ((0x600000U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC) 
                                       << 0xaU)) | 
                         (0x1fffffU & (IData)((vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum 
                                               >> 0xdU))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
        = (0x1ffffffU & ((1U & (IData)((vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum 
                                        >> 0x19U)))
                          ? (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum))
                          : ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum) 
                             + (1U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                      >> 3U)))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig 
        = (0xffffU & ((vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
                       << (0xfU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist))) 
                      >> 8U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((6U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | (0U != (0xfU & vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((5U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
                                      >> 4U)))) << 1U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((3U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (7U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
                                    >> 8U)))) << 2U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1ffeU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | (0U != (3U & vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1ffdU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 2U)))) << 1U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1ffbU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 4U)))) << 2U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1ff7U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 6U)))) << 3U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1fefU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 8U)))) << 4U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1fdfU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 0xaU)))) << 5U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1fbfU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 0xcU)))) << 6U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1f7fU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 0xeU)))) << 7U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1effU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 0x10U)))) << 8U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1dffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 0x12U)))) << 9U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1bffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 0x14U)))) << 0xaU));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x17ffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 0x16U)))) << 0xbU));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0xfffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | (0x1000U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                         >> 0xcU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0xeU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | (0U != (2U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                           << 1U))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0xdU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                                    >> 1U)))) << 1U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0xbU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                                    >> 3U)))) << 2U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((7U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                    >> 2U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1ffeU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                    >> 0xcU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1ffdU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                    >> 0xaU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1ffbU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                    >> 8U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1ff7U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                    >> 6U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1fefU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x10U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                       >> 4U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1fdfU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x20U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                       >> 2U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1fbfU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x40U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1f7fU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x80U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                       << 2U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1effU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x100U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                        << 4U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1dffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x200U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                        << 6U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1bffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x400U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                        << 8U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x17ffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x800U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                        << 0xaU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0xfffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x1000U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                         << 0xcU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0xfU & (((((((((((2U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                             ? 1U : 0U) | ((4U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                                            ? 2U : 0U)) 
                          | ((8U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                              ? 3U : 0U)) | ((0x10U 
                                              & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                                              ? 4U : 0U)) 
                        | ((0x20U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                            ? 5U : 0U)) | ((0x40U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                                            ? 6U : 0U)) 
                      | ((0x80U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                          ? 7U : 0U)) | ((0x100U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                                          ? 8U : 0U)) 
                    | ((0x200U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                        ? 9U : 0U)) | ((0x400U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                                        ? 0xaU : 0U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0xfU & ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                     | ((0x800U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                         ? 0xbU : 0U)) | ((0x1000U 
                                           & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                                           ? 0xcU : 0U)) 
                   | ((0x2000U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                       ? 0xdU : 0U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig 
        = (0xffffU & ((vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                       << (0x1fU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__13__KET____DOT__countSoFar) 
                                    << 1U))) >> 0xaU));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut 
        = (7U & (VL_SHIFTRS_III(9,9,3, 0x100U, (7U 
                                                & (~ 
                                                   ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__13__KET____DOT__countSoFar) 
                                                    >> 1U)))) 
                 >> 1U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sExp 
        = (0x7fU & ((4U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                     ? ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                        - (1U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                 >> 3U))) : ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                                             - (0x1fU 
                                                & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__13__KET____DOT__countSoFar) 
                                                   << 1U)))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((6U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 2U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((5U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (2U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((3U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    << 2U)));
    __Vtemp2[0U] = 0U;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp3, __Vtemp2, (0x3fU 
                                                 & (~ 
                                                    (VL_EXTENDS_II(6,7, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sExp)) 
                                                     | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                         ? 0x20U
                                                         : 0U)))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0xfffU & ((__Vtemp3[1U] << 0x19U) | (__Vtemp3[0U] 
                                                >> 7U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
        = ((0x3ffeU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig) 
                       >> 2U)) | ((0U != (7U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig))) 
                                  | (0U != ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum) 
                                            & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffeU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 0xbU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffdU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 9U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffbU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 7U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xff7U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfefU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x10U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 3U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfdfU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x20U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 1U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfbfU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x40U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 1U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xf7fU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x80U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xeffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x100U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 5U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xdffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x200U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 7U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xbffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x400U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 9U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x7ffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x800U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 0xbU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isZero 
        = (1U & ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                   >> 5U) & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                             >> 1U)) | ((~ ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 2U)) 
                                        & (0U == (3U 
                                                  & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig) 
                                                     >> 0xcU))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sign 
        = (1U & (((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                    >> 5U) & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState)) 
                  | (((~ ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                          >> 5U)) & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                     >> 2U)) & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                 >> 4U) 
                                                ^ ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                   >> 3U)))) 
                 | (((~ ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                         >> 5U)) & (~ ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                       >> 2U))) & (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig) 
                                                        >> 0xcU)))
                                                    ? 
                                                   (2U 
                                                    == (IData)(vlTOPp->roundingMode))
                                                    : 
                                                   (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                     >> 4U) 
                                                    ^ (IData)(
                                                              (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum 
                                                               >> 0x19U)))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isNaN)
            ? (0x1000U | (0xffcU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC) 
                                    << 2U))) : ((4U 
                                                 & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                                                 ? 
                                                ((0x3ffeU 
                                                  & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig))) 
                                                        | (0U 
                                                           != 
                                                           ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig) 
                                                            & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)))) 
                                                       | ((8U 
                                                           & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                                                           ? 
                                                          (~ (IData)(
                                                                     (0x7ffU 
                                                                      == 
                                                                      (0x7ffU 
                                                                       & (IData)(
                                                                                (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum 
                                                                                >> 1U))))))
                                                           : 
                                                          (0U 
                                                           != 
                                                           (0xfffU 
                                                            & (IData)(
                                                                      (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum 
                                                                       >> 1U))))))))
                                                 : (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isInf))) 
                 & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isZero))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sign))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (3U | (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                  << 2U) | (4U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                                  >> 0xbU))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                              >> 3U) & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                        >> 4U)))) | 
           ((0U != (7U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                          & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                             >> 1U)))) & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
               >> 1U)) & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                              & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)) 
                             >> 3U))) | ((0U != (7U 
                                                 & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                                                    & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))) 
                                         & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x1fffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                         | (4U == (IData)(vlTOPp->roundingMode))) 
                        & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                       | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                          & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                       ? (((IData)(1U) + (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                                           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                                          >> 2U)) & 
                          (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                               & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                               ? ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                  >> 1U) : 0U))) : 
                      ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                         & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask))) 
                        >> 2U) | (((6U == (IData)(vlTOPp->roundingMode)) 
                                   & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                   ? ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                      >> 1U) : 0U))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x3ffU & ((0x2000U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig))
                      ? ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                         >> 1U) : (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0xffU & (VL_EXTENDS_II(8,7, (0x7fU & VL_EXTENDS_II(7,7, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sExp)))) 
                    + (0x1fffU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                  >> 0xbU))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 8U, VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 8U, VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,7, 
                                                                        (0x7fU 
                                                                         & VL_EXTENDS_II(7,7, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sExp)))), 5U))) 
               & ((0x2000U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig))
                   ? ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                      >> 3U) : ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x2000U 
                                                       & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig))
                                                       ? 
                                                      ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                                       >> 4U)
                                                       : 
                                                      ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                                       >> 3U)))) 
                                                 & ((0x2000U 
                                                     & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig))
                                                     ? 
                                                    ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                                     >> 0xcU)
                                                     : 
                                                    ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                                     >> 0xbU))) 
                                                & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->roundingMode))) 
                                                   & ((0x2000U 
                                                       & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig))
                                                       ? 
                                                      ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                                                       >> 2U)
                                                       : 
                                                      ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                                                          >> 0xdU) 
                                                         & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig))))))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 4U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                            & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 8U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                 | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isInf) 
           | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sign) 
                    << 0x10U) | ((0xfc00U & (((((((
                                                   (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                     & (~ 
                                                        (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isZero) 
                                                          | VL_GTS_III(1,32,32, 8U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                          ? 0x38U
                                                          : 0U))) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                         ? 0xfffffff7U
                                                         : 0U))) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                        ? 0x10U
                                                        : 0U))) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                       ? 8U
                                                       : 0U))) 
                                                 | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                     ? 8U
                                                     : 0U)) 
                                                | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                    ? 0x2fU
                                                    : 0U)) 
                                               | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                   ? 0x30U
                                                   : 0U)) 
                                              | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x38U
                                                  : 0U)) 
                                             << 0xaU)) 
                                 | (0x3ffU & (((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                 << 9U) 
                                                | (0xfffffe00U 
                                                   & ((((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isZero)) 
                                                        & VL_LTES_III(1,32,32, 8U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                       << 9U) 
                                                      & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)))) 
                                               | (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                   | ((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isZero)) 
                                                      & VL_LTES_III(1,32,32, 8U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                   ? 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))
                                                   : 0U)) 
                                              | VL_NEGATE_I((IData)((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
}

VL_INLINE_OPT void VmulAddRecF16::_combo__TOP__2(VmulAddRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF16::_combo__TOP__2\n"); );
    VmulAddRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp6[3];
    // Body
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA 
        = (((0U != (7U & (vlTOPp->a >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->a));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigB 
        = (((0U != (7U & (vlTOPp->b >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->b));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros 
        = (((0U == (7U & (vlTOPp->a >> 0xdU))) | (0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->b 
                                                      >> 0xdU)))) 
           & (0U == (7U & (vlTOPp->c >> 0xdU))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC 
        = ((3U == (3U & (vlTOPp->c >> 0xeU))) & (~ 
                                                 (vlTOPp->c 
                                                  >> 0xdU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC 
        = ((3U == (3U & (vlTOPp->c >> 0xeU))) & (vlTOPp->c 
                                                 >> 0xdU));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (vlTOPp->a 
                                                 >> 0xdU));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB 
        = ((3U == (3U & (vlTOPp->b >> 0xeU))) & (vlTOPp->b 
                                                 >> 0xdU));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (~ 
                                                 (vlTOPp->a 
                                                  >> 0xdU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB 
        = ((3U == (3U & (vlTOPp->b >> 0xeU))) & (~ 
                                                 (vlTOPp->b 
                                                  >> 0xdU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd 
        = (1U & (((vlTOPp->a ^ vlTOPp->b) >> 0x10U) 
                 ^ ((IData)(vlTOPp->op) >> 1U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
        = (((0U != (7U & (vlTOPp->c >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->c));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd 
        = (0xffU & ((IData)(0xeeU) + (VL_EXTENDS_II(8,7, 
                                                    (0x3fU 
                                                     & (vlTOPp->a 
                                                        >> 0xaU))) 
                                      + VL_EXTENDS_II(8,7, 
                                                      (0x3fU 
                                                       & (vlTOPp->b 
                                                          >> 0xaU))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA) 
           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd 
        = (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
            & (0U == (7U & (vlTOPp->b >> 0xdU)))) | 
           ((0U == (7U & (vlTOPp->a >> 0xdU))) & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags 
        = (1U & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                  ^ (vlTOPp->c >> 0x10U)) ^ (IData)(vlTOPp->op)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((6U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | (0U != (0xfU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((5U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC) 
                                      >> 4U)))) << 1U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((3U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC) 
                                      >> 8U)))) << 2U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist 
        = (0xffU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd) 
                    - VL_EXTENDS_II(8,7, (0x3fU & (vlTOPp->c 
                                                   >> 0xaU)))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB) 
           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC 
        = ((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd)) 
           & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd) 
           | ((((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB)) 
                & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB)) 
               & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
              & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign 
        = (((0U == (7U & (vlTOPp->a >> 0xdU))) | (0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->b 
                                                      >> 0xdU)))) 
           | VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase 
        = ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
             | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB)) 
            | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant 
        = ((0U != (7U & (vlTOPp->c >> 0xdU))) & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign) 
                                                 | (0xbU 
                                                    >= 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0x23U > (0x7fU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0x3fU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))
                     : 0x23U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum 
        = (0x7fU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant)
                     ? VL_EXTENDS_II(32,7, (0x3fU & 
                                            (vlTOPp->c 
                                             >> 0xaU)))
                     : (VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd)) 
                        - (IData)(0xbU))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut 
        = (3U & (VL_SHIFTRS_III(5,5,2, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__c), 
                                (3U & (~ ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                          >> 2U)))) 
                 >> 1U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC 
        = (VL_ULL(0x3fffffffff) & VL_SHIFTRS_QQI(39,39,6, 
                                                 (((QData)((IData)(
                                                                   (0xfffU 
                                                                    & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                                                        ? 
                                                                       (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC))
                                                                        : (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC))))) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (0x7ffffffU 
                                                                     & VL_NEGATE_I((IData)((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags))))))), (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut 
        = (3U & (VL_SHIFTRS_III(17,17,4, vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c, 
                                (0xfU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                         >> 2U))) >> 8U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((2U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((1U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((2U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((1U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC) 
                  & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC 
        = ((VL_ULL(0xffffffffe) & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC 
                                   >> 2U)) | (QData)((IData)(
                                                             ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                                               ? 
                                                              ((7U 
                                                                == 
                                                                (7U 
                                                                 & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC))) 
                                                               & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)))
                                                               : 
                                                              ((0U 
                                                                != 
                                                                (7U 
                                                                 & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC))) 
                                                               | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
        = (0x7fffffU & (((0x7ffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA)) 
                         * (0x7ffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigB))) 
                        + (0x3fffffU & (IData)((vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC 
                                                >> 1U)))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
        = (0x1fffU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                       ? (0x200U | (0x1ffU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                               ? (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA)
                                               : ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                   ? (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigB)
                                                   : 
                                                  ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                    ? (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                                    : 0U)))))
                       : (IData)((vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC 
                                  >> 0x17U))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState 
        = (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
            << 5U) | ((((((((7U == (7U & (vlTOPp->a 
                                          >> 0xdU))) 
                            & (~ (vlTOPp->a >> 9U))) 
                           | ((7U == (7U & (vlTOPp->b 
                                            >> 0xdU))) 
                              & (~ (vlTOPp->b >> 9U)))) 
                          | ((7U == (7U & (vlTOPp->c 
                                           >> 0xdU))) 
                             & (~ (vlTOPp->c >> 9U)))) 
                         | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc)) 
                        | ((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                           & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd))) 
                       << 4U) | ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) 
                                   | ((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                      & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags))) 
                                  << 3U) | (((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                               | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
                                              | ((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                 & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant))) 
                                             << 2U) 
                                            | ((2U 
                                                & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                    | ((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                       & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
                                                      | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc))
                                                      ? 
                                                     ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                                       ? 
                                                      (1U 
                                                       & (vlTOPp->a 
                                                          >> 0x10U))
                                                       : 
                                                      ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                        ? 
                                                       (1U 
                                                        & (vlTOPp->b 
                                                           >> 0x10U))
                                                        : 
                                                       ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                         ? 
                                                        (1U 
                                                         & (vlTOPp->c 
                                                            >> 0x10U))
                                                         : 1U)))
                                                      : 
                                                     (((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                                         & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                        | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                                                           & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                                       | ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                            & (2U 
                                                               != (IData)(vlTOPp->roundingMode))) 
                                                           & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                          & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                                      | (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                          & (2U 
                                                             == (IData)(vlTOPp->roundingMode))) 
                                                         & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                                                            | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)))))))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isInf 
        = (1U & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 2U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__invalidExc 
        = (1U & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 4U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isNaN 
        = (1U & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 3U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum 
        = (((QData)((IData)((0x1fffU & ((0x400000U 
                                         & vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult)
                                         ? ((IData)(1U) 
                                            + (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC))
                                         : (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC))))) 
            << 0x17U) | (QData)((IData)(((0x7ffffeU 
                                          & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
                                             << 1U)) 
                                         | (1U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                  >> 1U))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isNaN));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
        = (0xffffffU & ((8U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                         ? (~ (IData)((vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum 
                                       >> 0xcU))) : 
                        ((0x600000U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC) 
                                       << 0xaU)) | 
                         (0x1fffffU & (IData)((vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum 
                                               >> 0xdU))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
        = (0x1ffffffU & ((1U & (IData)((vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum 
                                        >> 0x19U)))
                          ? (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum))
                          : ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum) 
                             + (1U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                      >> 3U)))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig 
        = (0xffffU & ((vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
                       << (0xfU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist))) 
                      >> 8U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((6U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | (0U != (0xfU & vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((5U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
                                      >> 4U)))) << 1U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((3U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (7U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
                                    >> 8U)))) << 2U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1ffeU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | (0U != (3U & vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1ffdU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 2U)))) << 1U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1ffbU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 4U)))) << 2U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1ff7U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 6U)))) << 3U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1fefU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 8U)))) << 4U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1fdfU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 0xaU)))) << 5U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1fbfU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 0xcU)))) << 6U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1f7fU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 0xeU)))) << 7U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1effU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 0x10U)))) << 8U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1dffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 0x12U)))) << 9U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1bffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 0x14U)))) << 0xaU));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x17ffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                    >> 0x16U)))) << 0xbU));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0xfffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)) 
           | (0x1000U & (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                         >> 0xcU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0xeU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | (0U != (2U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                           << 1U))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0xdU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                                    >> 1U)))) << 1U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0xbU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                                    >> 3U)))) << 2U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((7U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                    >> 2U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1ffeU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                    >> 0xcU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1ffdU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                    >> 0xaU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1ffbU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                    >> 8U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1ff7U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                    >> 6U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1fefU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x10U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                       >> 4U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1fdfU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x20U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                       >> 2U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1fbfU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x40U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1f7fU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x80U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                       << 2U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1effU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x100U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                        << 4U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1dffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x200U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                        << 6U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1bffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x400U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                        << 8U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x17ffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x800U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                        << 0xaU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0xfffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           | (0x1000U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
                         << 0xcU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn)))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0xfU & (((((((((((2U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                             ? 1U : 0U) | ((4U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                                            ? 2U : 0U)) 
                          | ((8U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                              ? 3U : 0U)) | ((0x10U 
                                              & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                                              ? 4U : 0U)) 
                        | ((0x20U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                            ? 5U : 0U)) | ((0x40U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                                            ? 6U : 0U)) 
                      | ((0x80U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                          ? 7U : 0U)) | ((0x100U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                                          ? 8U : 0U)) 
                    | ((0x200U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                        ? 9U : 0U)) | ((0x400U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                                        ? 0xaU : 0U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0xfU & ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                     | ((0x800U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                         ? 0xbU : 0U)) | ((0x1000U 
                                           & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                                           ? 0xcU : 0U)) 
                   | ((0x2000U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn))
                       ? 0xdU : 0U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig 
        = (0xffffU & ((vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                       << (0x1fU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__13__KET____DOT__countSoFar) 
                                    << 1U))) >> 0xaU));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut 
        = (7U & (VL_SHIFTRS_III(9,9,3, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__c), 
                                (7U & (~ ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__13__KET____DOT__countSoFar) 
                                          >> 1U)))) 
                 >> 1U));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sExp 
        = (0x7fU & ((4U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                     ? ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                        - (1U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                 >> 3U))) : ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                                             - (0x1fU 
                                                & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__13__KET____DOT__countSoFar) 
                                                   << 1U)))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((6U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 2U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((5U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (2U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((3U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    << 2U)));
    VL_SHIFTRS_WWI(65,65,6, __Vtemp6, vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0x3fU & (~ (VL_EXTENDS_II(6,7, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sExp)) 
                                | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                    ? 0x20U : 0U)))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0xfffU & ((__Vtemp6[1U] << 0x19U) | (__Vtemp6[0U] 
                                                >> 7U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
        = ((0x3ffeU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig) 
                       >> 2U)) | ((0U != (7U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig))) 
                                  | (0U != ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum) 
                                            & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffeU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (1U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 0xbU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffdU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (2U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 9U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffbU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (4U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 7U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xff7U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (8U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfefU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x10U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 3U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfdfU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x20U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 1U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfbfU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x40U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 1U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xf7fU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x80U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xeffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x100U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 5U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xdffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x200U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 7U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xbffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x400U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 9U)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x7ffU & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x800U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 0xbU)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isZero 
        = (1U & ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                   >> 5U) & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                             >> 1U)) | ((~ ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 2U)) 
                                        & (0U == (3U 
                                                  & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig) 
                                                     >> 0xcU))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sign 
        = (1U & (((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                    >> 5U) & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState)) 
                  | (((~ ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                          >> 5U)) & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                     >> 2U)) & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                 >> 4U) 
                                                ^ ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                   >> 3U)))) 
                 | (((~ ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                         >> 5U)) & (~ ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                       >> 2U))) & (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig) 
                                                        >> 0xcU)))
                                                    ? 
                                                   (2U 
                                                    == (IData)(vlTOPp->roundingMode))
                                                    : 
                                                   (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                     >> 4U) 
                                                    ^ (IData)(
                                                              (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum 
                                                               >> 0x19U)))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isNaN)
            ? (0x1000U | (0xffcU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC) 
                                    << 2U))) : ((4U 
                                                 & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                                                 ? 
                                                ((0x3ffeU 
                                                  & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig))) 
                                                        | (0U 
                                                           != 
                                                           ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig) 
                                                            & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)))) 
                                                       | ((8U 
                                                           & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                                                           ? 
                                                          (~ (IData)(
                                                                     (0x7ffU 
                                                                      == 
                                                                      (0x7ffU 
                                                                       & (IData)(
                                                                                (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum 
                                                                                >> 1U))))))
                                                           : 
                                                          (0U 
                                                           != 
                                                           (0xfffU 
                                                            & (IData)(
                                                                      (vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum 
                                                                       >> 1U))))))))
                                                 : (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isInf))) 
                 & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isZero))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sign))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (3U | (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                  << 2U) | (4U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                                  >> 0xbU))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                              >> 3U) & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                        >> 4U)))) | 
           ((0U != (7U & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                          & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                             >> 1U)))) & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
               >> 1U)) & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                              & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)) 
                             >> 3U))) | ((0U != (7U 
                                                 & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                                                    & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))) 
                                         & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x1fffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                         | (4U == (IData)(vlTOPp->roundingMode))) 
                        & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                       | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                          & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                       ? (((IData)(1U) + (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                                           | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                                          >> 2U)) & 
                          (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                               & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                               ? ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                  >> 1U) : 0U))) : 
                      ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                         & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask))) 
                        >> 2U) | (((6U == (IData)(vlTOPp->roundingMode)) 
                                   & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                   ? ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                      >> 1U) : 0U))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x3ffU & ((0x2000U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig))
                      ? ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                         >> 1U) : (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0xffU & (VL_EXTENDS_II(8,7, (0x7fU & VL_EXTENDS_II(7,7, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sExp)))) 
                    + (0x1fffU & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                  >> 0xbU))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 8U, VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 8U, VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,7, 
                                                                        (0x7fU 
                                                                         & VL_EXTENDS_II(7,7, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sExp)))), 5U))) 
               & ((0x2000U & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig))
                   ? ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                      >> 3U) : ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x2000U 
                                                       & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig))
                                                       ? 
                                                      ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                                       >> 4U)
                                                       : 
                                                      ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                                       >> 3U)))) 
                                                 & ((0x2000U 
                                                     & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig))
                                                     ? 
                                                    ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                                     >> 0xcU)
                                                     : 
                                                    ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                                     >> 0xbU))) 
                                                & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->roundingMode))) 
                                                   & ((0x2000U 
                                                       & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig))
                                                       ? 
                                                      ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                                                       >> 2U)
                                                       : 
                                                      ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                                                          >> 0xdU) 
                                                         & ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig) 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig))))))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 4U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                            & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 8U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                 | (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isInf) 
           | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_sign) 
                    << 0x10U) | ((0xfc00U & (((((((
                                                   (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                     & (~ 
                                                        (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isZero) 
                                                          | VL_GTS_III(1,32,32, 8U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                          ? 0x38U
                                                          : 0U))) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                         ? 0xfffffff7U
                                                         : 0U))) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                        ? 0x10U
                                                        : 0U))) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                       ? 8U
                                                       : 0U))) 
                                                 | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                     ? 8U
                                                     : 0U)) 
                                                | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                    ? 0x2fU
                                                    : 0U)) 
                                               | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                   ? 0x30U
                                                   : 0U)) 
                                              | ((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x38U
                                                  : 0U)) 
                                             << 0xaU)) 
                                 | (0x3ffU & (((((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                 << 9U) 
                                                | (0xfffffe00U 
                                                   & ((((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isZero)) 
                                                        & VL_LTES_III(1,32,32, 8U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                       << 9U) 
                                                      & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)))) 
                                               | (((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                   | ((~ (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__out_isZero)) 
                                                      & VL_LTES_III(1,32,32, 8U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                   ? 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))
                                                   : 0U)) 
                                              | VL_NEGATE_I((IData)((IData)(vlTOPp->mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
}

void VmulAddRecF16::_eval(VmulAddRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF16::_eval\n"); );
    VmulAddRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VmulAddRecF16::_eval_initial(VmulAddRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF16::_eval_initial\n"); );
    VmulAddRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmulAddRecF16::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF16::final\n"); );
    // Variables
    VmulAddRecF16__Syms* __restrict vlSymsp = this->__VlSymsp;
    VmulAddRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmulAddRecF16::_eval_settle(VmulAddRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF16::_eval_settle\n"); );
    VmulAddRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VmulAddRecF16::_change_request(VmulAddRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF16::_change_request\n"); );
    VmulAddRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VmulAddRecF16::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF16::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((op & 0xfcU))) {
        Verilated::overWidthError("op");}
    if (VL_UNLIKELY((a & 0xfffe0000U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b & 0xfffe0000U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((c & 0xfffe0000U))) {
        Verilated::overWidthError("c");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif  // VL_DEBUG

void VmulAddRecF16::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulAddRecF16::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    op = VL_RAND_RESET_I(2);
    a = VL_RAND_RESET_I(17);
    b = VL_RAND_RESET_I(17);
    c = VL_RAND_RESET_I(17);
    roundingMode = VL_RAND_RESET_I(3);
    out = VL_RAND_RESET_I(17);
    exceptionFlags = VL_RAND_RESET_I(5);
    mulAddRecF16__DOT__mulAddRecFN__DOT__invalidExc = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__out_isNaN = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__out_isInf = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__out_isZero = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__out_sign = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__out_sExp = VL_RAND_RESET_I(7);
    mulAddRecF16__DOT__mulAddRecFN__DOT__out_sig = VL_RAND_RESET_I(14);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_compactState = VL_RAND_RESET_I(6);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC = VL_RAND_RESET_I(13);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddResult = VL_RAND_RESET_I(23);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigA = VL_RAND_RESET_I(12);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigB = VL_RAND_RESET_I(12);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC = VL_RAND_RESET_I(12);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd = VL_RAND_RESET_I(8);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist = VL_RAND_RESET_I(8);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum = VL_RAND_RESET_I(7);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist = VL_RAND_RESET_I(6);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC = VL_RAND_RESET_Q(38);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC = VL_RAND_RESET_I(3);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask = VL_RAND_RESET_I(2);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC = VL_RAND_RESET_Q(36);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c = VL_RAND_RESET_I(17);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut = VL_RAND_RESET_I(2);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum = VL_RAND_RESET_Q(36);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum = VL_RAND_RESET_I(24);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig = VL_RAND_RESET_I(16);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig = VL_RAND_RESET_I(3);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask = VL_RAND_RESET_I(2);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum = VL_RAND_RESET_I(25);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum = VL_RAND_RESET_I(13);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig = VL_RAND_RESET_I(16);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum = VL_RAND_RESET_I(4);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask = VL_RAND_RESET_I(3);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig = VL_RAND_RESET_I(14);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__c = VL_RAND_RESET_I(5);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut = VL_RAND_RESET_I(2);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn = VL_RAND_RESET_I(13);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn = VL_RAND_RESET_I(14);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(4);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__13__KET____DOT__countSoFar = VL_RAND_RESET_I(4);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__c = VL_RAND_RESET_I(9);
    mulAddRecF16__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut = VL_RAND_RESET_I(3);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut = VL_RAND_RESET_I(10);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask = VL_RAND_RESET_I(14);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main = VL_RAND_RESET_I(12);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_I(14);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_I(13);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(65, mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c);
    mulAddRecF16__DOT__mulAddRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut = VL_RAND_RESET_I(12);
}
