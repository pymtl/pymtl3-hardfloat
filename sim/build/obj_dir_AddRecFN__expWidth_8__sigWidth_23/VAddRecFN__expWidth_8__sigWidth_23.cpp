// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAddRecFN__expWidth_8__sigWidth_23.h for the primary calling header

#include "VAddRecFN__expWidth_8__sigWidth_23.h"
#include "VAddRecFN__expWidth_8__sigWidth_23__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VAddRecFN__expWidth_8__sigWidth_23) {
    VAddRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp = __VlSymsp = new VAddRecFN__expWidth_8__sigWidth_23__Syms(this, name());
    VAddRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAddRecFN__expWidth_8__sigWidth_23::__Vconfigure(VAddRecFN__expWidth_8__sigWidth_23__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAddRecFN__expWidth_8__sigWidth_23::~VAddRecFN__expWidth_8__sigWidth_23() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VAddRecFN__expWidth_8__sigWidth_23::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAddRecFN__expWidth_8__sigWidth_23::eval\n"); );
    VAddRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAddRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("addRecFN.v", 262, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAddRecFN__expWidth_8__sigWidth_23::_eval_initial_loop(VAddRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("addRecFN.v", 262, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VAddRecFN__expWidth_8__sigWidth_23::_settle__TOP__1(VAddRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAddRecFN__expWidth_8__sigWidth_23::_settle__TOP__1\n"); );
    VAddRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c = 0x100U;
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__addZeros 
        = ((0U == (7U & (vlTOPp->a >> 0x1cU))) & (0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->b 
                                                      >> 0x1cU))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & (vlTOPp->a >> 0x1dU))) & (~ 
                                                  (vlTOPp->a 
                                                   >> 0x1cU)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & (vlTOPp->b >> 0x1dU))) & (~ 
                                                  (vlTOPp->b 
                                                   >> 0x1cU)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__effSignB 
        = (1U & ((IData)(vlTOPp->subOp) ? (~ (vlTOPp->b 
                                              >> 0x1fU))
                  : (vlTOPp->b >> 0x1fU)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigA 
        = (((0U != (7U & (vlTOPp->a >> 0x1cU))) << 0x16U) 
           | (0x3fffffU & vlTOPp->a));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigB 
        = (((0U != (7U & (vlTOPp->b >> 0x1cU))) << 0x16U) 
           | (0x3fffffU & vlTOPp->b));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps 
        = (0x3ffU & ((0x1ffU & (vlTOPp->a >> 0x16U)) 
                     - (0x1ffU & (vlTOPp->b >> 0x16U))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfB));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns 
        = ((1U & (vlTOPp->a >> 0x1fU)) == (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__effSignB));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
        = (0x7fffffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                         ? vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigA
                         : vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigB));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign 
        = ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)), 5U)) 
           & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                             VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)), 5U)) 
              | (0U == (0x1fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist 
        = (0x1fU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                     ? ((0x1ffU & (vlTOPp->b >> 0x16U)) 
                        - (0x1ffU & (vlTOPp->a >> 0x16U)))
                     : (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum 
        = (0x3ffffffU & (((((VL_LTES_III(1,32,32, 0U, 
                                         VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                             & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))
                             ? (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigA 
                                << 2U) : 0U) | ((VL_LTES_III(1,32,32, 0U, 
                                                             VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                                                 & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                                 ? 
                                                (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigA 
                                                 << 1U)
                                                 : 0U)) 
                          | (VL_GTS_III(1,32,32, 0U, 
                                        VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                              ? vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigA
                              : 0U)) - (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigB 
                                        << 1U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__addZeros));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__invalidExc 
        = ((((7U == (7U & (vlTOPp->a >> 0x1cU))) & 
             (~ (vlTOPp->a >> 0x15U))) | ((7U == (7U 
                                                  & (vlTOPp->b 
                                                     >> 0x1cU))) 
                                          & (~ (vlTOPp->b 
                                                >> 0x15U)))) 
           | (((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfA) 
               & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfB)) 
              & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x7eU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (0U != (3U & vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x7dU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 2U)))) << 1U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x7bU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 6U)))) << 2U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x77U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 0xaU)))) << 3U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x6fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 0xeU)))) << 4U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x5fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 0x12U)))) 
              << 5U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (0x40U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                       >> 0x10U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags 
        = (((~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)) 
            & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign))) 
           & (1U >= (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__alignDist 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign)
            ? 0x1fU : (0x1fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
        = (0x1ffffffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,26, vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum))
                          ? VL_NEGATE_I(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum)
                          : vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__invalidExc) 
           | (((3U == (3U & (vlTOPp->a >> 0x1dU))) 
               & (vlTOPp->a >> 0x1cU)) | ((3U == (3U 
                                                  & (vlTOPp->b 
                                                     >> 0x1dU))) 
                                          & (vlTOPp->b 
                                             >> 0x1cU))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
        = (0xfffffffU & ((vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                          << 5U) >> (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__alignDist)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
        = (0x7fU & (VL_SHIFTRS_III(9,9,3, 0x100U, (7U 
                                                   & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__alignDist) 
                                                      >> 2U))) 
                    >> 1U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1ffeU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | (0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                           << 1U))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1ffdU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 1U)))) << 1U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1ffbU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 3U)))) << 2U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1ff7U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 5U)))) << 3U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1fefU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 7U)))) << 4U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1fdfU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 9U)))) << 5U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1fbfU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0xbU)))) << 6U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1f7fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0xdU)))) << 7U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1effU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0xfU)))) << 8U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1dffU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x11U)))) << 9U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1bffU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x13U)))) << 0xaU));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x17ffU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x15U)))) << 0xbU));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x17U)))) << 0xcU));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x7eU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (1U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 6U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x7dU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (2U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 4U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x7bU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (4U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 2U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x77U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (8U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x6fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       << 2U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x5fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       << 4U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x40U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       << 6U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1ffeU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (1U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 0xcU)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1ffdU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (2U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 0xaU)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1ffbU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (4U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 8U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1ff7U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (8U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 6U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1fefU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x10U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       >> 4U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1fdfU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x20U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       >> 2U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1fbfU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x40U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1f7fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x80U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 2U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1effU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x100U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                        << 4U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1dffU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x200U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                        << 6U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1bffU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x400U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                        << 8U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x17ffU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x800U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                        << 0xaU)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x1000U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                         << 0xcU)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller 
        = ((0x3fffffeU & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
                          >> 2U)) | ((0U != (7U & vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller)) 
                                     | (0U != ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
                                               & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum 
        = (0x7ffffffU & (((0x3fffff8U & ((VL_GTS_III(1,32,32, 0U, 
                                                     VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                           ? vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigB
                                           : vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigA) 
                                         << 3U)) + 
                          ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)
                            ? vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller
                            : (0x4000000U | (0x3ffffffU 
                                             & (~ vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller))))) 
                         + (1U & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut 
        = (0x3ffffffU & ((vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                          << (0x1fU & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar) 
                                       << 1U))) << 1U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__addZeros) 
           | (((~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut)) 
               & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)) 
              & (~ (IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut 
                                         >> 0x18U)))))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
        = (0x3ffffffU & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)
                          ? vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut
                          : (0x7ffffffU & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)
                                            ? ((vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum 
                                                >> 1U) 
                                               | (1U 
                                                  & vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum))
                                            : vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut 
        = (1U & (((((((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns) 
                      | (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfA)) 
                     & (vlTOPp->a >> 0x1fU)) | ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfB) 
                                                & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__effSignB))) 
                   | (((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut) 
                       & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))) 
                      & ((2U == (IData)(vlTOPp->roundingMode))
                          ? 1U : 0U))) | ((((~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                            & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)) 
                                           & (0U != 
                                              (3U & 
                                               (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut 
                                                >> 0x18U)))) 
                                          & ((vlTOPp->a 
                                              >> 0x1fU) 
                                             ^ VL_GTS_III(1,32,32, 0U, 
                                                          VL_EXTENDS_II(32,26, vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum))))) 
                 | (((~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                     & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags))) 
                    & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                        ? (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__effSignB)
                        : (vlTOPp->a >> 0x1fU)))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = (0U != (7U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                        & (1U | (2U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                       >> 0x18U))))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (1U | (2U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                           >> 0x18U)))) & (3U | (4U 
                                                 & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                                    >> 0x17U))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7fffffU & ((vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                 & vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                >> 3U))) | (0U != (7U 
                                                   & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                                      & vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x1ffffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                            | (4U == (IData)(vlTOPp->roundingMode))) 
                           & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                          | ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                              >> 2U) 
                                             | (1U 
                                                & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                                   >> 0x19U)))) 
                             & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                     & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? (1U | (2U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                                   >> 0x18U)))
                                    : 0U))) : (((vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                                 & (~ 
                                                    (3U 
                                                     | (4U 
                                                        & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                                           >> 0x17U))))) 
                                                >> 2U) 
                                               | (((6U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                   ? 
                                                  (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x3fffffU & ((0x2000000U & vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut)
                         ? (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                            >> 1U) : vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & ((((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags) 
                                                               | VL_GTS_III(1,32,32, 0U, 
                                                                            VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))))
                                                               ? 
                                                              (0x1ffU 
                                                               & (vlTOPp->b 
                                                                  >> 0x16U))
                                                               : 
                                                              (0x1ffU 
                                                               & (vlTOPp->a 
                                                                  >> 0x16U))) 
                                                             - 
                                                             ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)
                                                               ? 
                                                              (0x1fU 
                                                               & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar) 
                                                                  << 1U))
                                                               : 
                                                              (1U 
                                                               & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))))))))) 
                     + (0x1ffffffU & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                      >> 0x17U))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,11, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 7U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          | ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = ((((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                      ? 0U : (1U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut))) 
                    << 0x1fU) | ((0x7fc00000U & (((
                                                   (((((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                            ? 0x1c0U
                                                            : 0U))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                           ? 0x80U
                                                           : 0U))) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                          ? 0x40U
                                                          : 0U))) 
                                                    | ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                        ? 0x17fU
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                       ? 0x180U
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                      ? 0x1c0U
                                                      : 0U)) 
                                                 << 0x16U)) 
                                 | (0x3fffffU & (((
                                                   ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                     ? 0x200000U
                                                     : 0U) 
                                                   | ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                       ? 0U
                                                       : 
                                                      (0x200000U 
                                                       & vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))) 
                                                  | ((1U 
                                                      & ((~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                         & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                                                      ? 
                                                     (0xffdfffffU 
                                                      & vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                      : 0U)) 
                                                 | VL_NEGATE_I((IData)((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
}

VL_INLINE_OPT void VAddRecFN__expWidth_8__sigWidth_23::_combo__TOP__2(VAddRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAddRecFN__expWidth_8__sigWidth_23::_combo__TOP__2\n"); );
    VAddRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__addZeros 
        = ((0U == (7U & (vlTOPp->a >> 0x1cU))) & (0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->b 
                                                      >> 0x1cU))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & (vlTOPp->a >> 0x1dU))) & (~ 
                                                  (vlTOPp->a 
                                                   >> 0x1cU)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & (vlTOPp->b >> 0x1dU))) & (~ 
                                                  (vlTOPp->b 
                                                   >> 0x1cU)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__effSignB 
        = (1U & ((IData)(vlTOPp->subOp) ? (~ (vlTOPp->b 
                                              >> 0x1fU))
                  : (vlTOPp->b >> 0x1fU)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigA 
        = (((0U != (7U & (vlTOPp->a >> 0x1cU))) << 0x16U) 
           | (0x3fffffU & vlTOPp->a));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigB 
        = (((0U != (7U & (vlTOPp->b >> 0x1cU))) << 0x16U) 
           | (0x3fffffU & vlTOPp->b));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps 
        = (0x3ffU & ((0x1ffU & (vlTOPp->a >> 0x16U)) 
                     - (0x1ffU & (vlTOPp->b >> 0x16U))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfB));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns 
        = ((1U & (vlTOPp->a >> 0x1fU)) == (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__effSignB));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
        = (0x7fffffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                         ? vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigA
                         : vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigB));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign 
        = ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)), 5U)) 
           & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                             VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)), 5U)) 
              | (0U == (0x1fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist 
        = (0x1fU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                     ? ((0x1ffU & (vlTOPp->b >> 0x16U)) 
                        - (0x1ffU & (vlTOPp->a >> 0x16U)))
                     : (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum 
        = (0x3ffffffU & (((((VL_LTES_III(1,32,32, 0U, 
                                         VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                             & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))
                             ? (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigA 
                                << 2U) : 0U) | ((VL_LTES_III(1,32,32, 0U, 
                                                             VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                                                 & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                                 ? 
                                                (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigA 
                                                 << 1U)
                                                 : 0U)) 
                          | (VL_GTS_III(1,32,32, 0U, 
                                        VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                              ? vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigA
                              : 0U)) - (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigB 
                                        << 1U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__addZeros));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__invalidExc 
        = ((((7U == (7U & (vlTOPp->a >> 0x1cU))) & 
             (~ (vlTOPp->a >> 0x15U))) | ((7U == (7U 
                                                  & (vlTOPp->b 
                                                     >> 0x1cU))) 
                                          & (~ (vlTOPp->b 
                                                >> 0x15U)))) 
           | (((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfA) 
               & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfB)) 
              & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x7eU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (0U != (3U & vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x7dU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 2U)))) << 1U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x7bU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 6U)))) << 2U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x77U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 0xaU)))) << 3U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x6fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 0xeU)))) << 4U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x5fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                      >> 0x12U)))) 
              << 5U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (0x40U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                       >> 0x10U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags 
        = (((~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)) 
            & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign))) 
           & (1U >= (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__alignDist 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign)
            ? 0x1fU : (0x1fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
        = (0x1ffffffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,26, vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum))
                          ? VL_NEGATE_I(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum)
                          : vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__invalidExc) 
           | (((3U == (3U & (vlTOPp->a >> 0x1dU))) 
               & (vlTOPp->a >> 0x1cU)) | ((3U == (3U 
                                                  & (vlTOPp->b 
                                                     >> 0x1dU))) 
                                          & (vlTOPp->b 
                                             >> 0x1cU))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
        = (0xfffffffU & ((vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                          << 5U) >> (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__alignDist)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
        = (0x7fU & (VL_SHIFTRS_III(9,9,3, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c), 
                                   (7U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__alignDist) 
                                          >> 2U))) 
                    >> 1U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1ffeU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | (0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                           << 1U))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1ffdU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 1U)))) << 1U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1ffbU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 3U)))) << 2U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1ff7U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 5U)))) << 3U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1fefU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 7U)))) << 4U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1fdfU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 9U)))) << 5U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1fbfU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0xbU)))) << 6U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1f7fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0xdU)))) << 7U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1effU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0xfU)))) << 8U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1dffU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x11U)))) << 9U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x1bffU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x13U)))) << 0xaU));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x17ffU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x15U)))) << 0xbU));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                                    >> 0x17U)))) << 0xcU));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x7eU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (1U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 6U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x7dU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (2U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 4U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x7bU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (4U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 2U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x77U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (8U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x6fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       << 2U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x5fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       << 4U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x40U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       << 6U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1ffeU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (1U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 0xcU)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1ffdU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (2U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 0xaU)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1ffbU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (4U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 8U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1ff7U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (8U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                    >> 6U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1fefU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x10U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       >> 4U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1fdfU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x20U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       >> 2U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1fbfU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x40U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1f7fU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x80U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                       << 2U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1effU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x100U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                        << 4U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1dffU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x200U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                        << 6U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x1bffU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x400U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                        << 8U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x17ffU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x800U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                        << 0xaU)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffU & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           | (0x1000U & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
                         << 0xcU)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller 
        = ((0x3fffffeU & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
                          >> 2U)) | ((0U != (7U & vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller)) 
                                     | (0U != ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
                                               & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask)))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum 
        = (0x7ffffffU & (((0x3fffff8U & ((VL_GTS_III(1,32,32, 0U, 
                                                     VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                           ? vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigB
                                           : vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigA) 
                                         << 3U)) + 
                          ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)
                            ? vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller
                            : (0x4000000U | (0x3ffffffU 
                                             & (~ vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller))))) 
                         + (1U & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut 
        = (0x3ffffffU & ((vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum 
                          << (0x1fU & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar) 
                                       << 1U))) << 1U));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__addZeros) 
           | (((~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut)) 
               & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)) 
              & (~ (IData)((0U != (3U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut 
                                         >> 0x18U)))))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
        = (0x3ffffffU & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)
                          ? vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut
                          : (0x7ffffffU & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns)
                                            ? ((vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum 
                                                >> 1U) 
                                               | (1U 
                                                  & vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum))
                                            : vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut 
        = (1U & (((((((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns) 
                      | (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfA)) 
                     & (vlTOPp->a >> 0x1fU)) | ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfB) 
                                                & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__effSignB))) 
                   | (((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut) 
                       & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))) 
                      & ((2U == (IData)(vlTOPp->roundingMode))
                          ? 1U : 0U))) | ((((~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                            & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)) 
                                           & (0U != 
                                              (3U & 
                                               (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut 
                                                >> 0x18U)))) 
                                          & ((vlTOPp->a 
                                              >> 0x1fU) 
                                             ^ VL_GTS_III(1,32,32, 0U, 
                                                          VL_EXTENDS_II(32,26, vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum))))) 
                 | (((~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                     & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags))) 
                    & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps)))
                        ? (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__effSignB)
                        : (vlTOPp->a >> 0x1fU)))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = (0U != (7U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                        & (1U | (2U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                       >> 0x18U))))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (1U | (2U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                           >> 0x18U)))) & (3U | (4U 
                                                 & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                                    >> 0x17U))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7fffffU & ((vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                 & vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                >> 3U))) | (0U != (7U 
                                                   & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                                      & vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x1ffffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                            | (4U == (IData)(vlTOPp->roundingMode))) 
                           & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                          | ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                              >> 2U) 
                                             | (1U 
                                                & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                                   >> 0x19U)))) 
                             & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                     & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? (1U | (2U & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                                   >> 0x18U)))
                                    : 0U))) : (((vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                                 & (~ 
                                                    (3U 
                                                     | (4U 
                                                        & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut 
                                                           >> 0x17U))))) 
                                                >> 2U) 
                                               | (((6U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                   ? 
                                                  (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x3fffffU & ((0x2000000U & vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut)
                         ? (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                            >> 1U) : vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & ((((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags) 
                                                               | VL_GTS_III(1,32,32, 0U, 
                                                                            VL_EXTENDS_II(32,10, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps))))
                                                               ? 
                                                              (0x1ffU 
                                                               & (vlTOPp->b 
                                                                  >> 0x16U))
                                                               : 
                                                              (0x1ffU 
                                                               & (vlTOPp->a 
                                                                  >> 0x16U))) 
                                                             - 
                                                             ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags)
                                                               ? 
                                                              (0x1fU 
                                                               & ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar) 
                                                                  << 1U))
                                                               : 
                                                              (1U 
                                                               & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns))))))))) 
                     + (0x1ffffffU & (vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                      >> 0x17U))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,11, (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 7U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          | ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = ((((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                      ? 0U : (1U & (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut))) 
                    << 0x1fU) | ((0x7fc00000U & (((
                                                   (((((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                            ? 0x1c0U
                                                            : 0U))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                           ? 0x80U
                                                           : 0U))) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                          ? 0x40U
                                                          : 0U))) 
                                                    | ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                        ? 0x17fU
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                       ? 0x180U
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                      ? 0x1c0U
                                                      : 0U)) 
                                                 << 0x16U)) 
                                 | (0x3fffffU & (((
                                                   ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                     ? 0x200000U
                                                     : 0U) 
                                                   | ((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                       ? 0U
                                                       : 
                                                      (0x200000U 
                                                       & vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))) 
                                                  | ((1U 
                                                      & ((~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                         & (~ (IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                                                      ? 
                                                     (0xffdfffffU 
                                                      & vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                      : 0U)) 
                                                 | VL_NEGATE_I((IData)((IData)(vlTOPp->AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
}

void VAddRecFN__expWidth_8__sigWidth_23::_eval(VAddRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAddRecFN__expWidth_8__sigWidth_23::_eval\n"); );
    VAddRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VAddRecFN__expWidth_8__sigWidth_23::_eval_initial(VAddRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAddRecFN__expWidth_8__sigWidth_23::_eval_initial\n"); );
    VAddRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAddRecFN__expWidth_8__sigWidth_23::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAddRecFN__expWidth_8__sigWidth_23::final\n"); );
    // Variables
    VAddRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAddRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAddRecFN__expWidth_8__sigWidth_23::_eval_settle(VAddRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAddRecFN__expWidth_8__sigWidth_23::_eval_settle\n"); );
    VAddRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VAddRecFN__expWidth_8__sigWidth_23::_change_request(VAddRecFN__expWidth_8__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAddRecFN__expWidth_8__sigWidth_23::_change_request\n"); );
    VAddRecFN__expWidth_8__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAddRecFN__expWidth_8__sigWidth_23::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAddRecFN__expWidth_8__sigWidth_23::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
    if (VL_UNLIKELY((subOp & 0xfeU))) {
        Verilated::overWidthError("subOp");}
}
#endif  // VL_DEBUG

void VAddRecFN__expWidth_8__sigWidth_23::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAddRecFN__expWidth_8__sigWidth_23::_ctor_var_reset\n"); );
    // Body
    reset = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_I(32);
    b = VL_RAND_RESET_I(32);
    control = VL_RAND_RESET_I(1);
    exceptionFlags = VL_RAND_RESET_I(5);
    out = VL_RAND_RESET_I(32);
    roundingMode = VL_RAND_RESET_I(3);
    subOp = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__invalidExc = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfA = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigA = VL_RAND_RESET_I(24);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isInfB = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sigB = VL_RAND_RESET_I(24);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__effSignB = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__eqSigns = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__sDiffExps = VL_RAND_RESET_I(10);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__modNatAlignDist = VL_RAND_RESET_I(5);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__isMaxAlign = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__alignDist = VL_RAND_RESET_I(5);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__closeSubMags = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sSigSum = VL_RAND_RESET_I(26);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigSum = VL_RAND_RESET_I(25);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_reduced2SigSum = VL_RAND_RESET_I(13);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__close_sigOut = VL_RAND_RESET_I(26);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSmaller = VL_RAND_RESET_I(23);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller = VL_RAND_RESET_I(28);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller = VL_RAND_RESET_I(7);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_roundExtraMask = VL_RAND_RESET_I(7);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller = VL_RAND_RESET_I(26);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__far_sigSum = VL_RAND_RESET_I(27);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__addZeros = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_specialCase = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__notNaN_signOut = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__common_sigOut = VL_RAND_RESET_I(26);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn = VL_RAND_RESET_I(13);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = VL_RAND_RESET_I(14);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = VL_RAND_RESET_I(5);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c = VL_RAND_RESET_I(9);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut = VL_RAND_RESET_I(7);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut = VL_RAND_RESET_I(22);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_I(26);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_I(25);
    AddRecFN___05FexpWidth_8___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(11);
}
