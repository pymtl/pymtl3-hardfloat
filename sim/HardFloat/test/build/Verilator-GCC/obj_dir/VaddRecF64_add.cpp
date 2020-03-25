// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VaddRecF64_add.h for the primary calling header

#include "VaddRecF64_add.h"
#include "VaddRecF64_add__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VaddRecF64_add) {
    VaddRecF64_add__Syms* __restrict vlSymsp = __VlSymsp = new VaddRecF64_add__Syms(this, name());
    VaddRecF64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VaddRecF64_add::__Vconfigure(VaddRecF64_add__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VaddRecF64_add::~VaddRecF64_add() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VaddRecF64_add::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VaddRecF64_add::eval\n"); );
    VaddRecF64_add__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VaddRecF64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/addRecFN_spec.v", 71, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VaddRecF64_add::_eval_initial_loop(VaddRecF64_add__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/addRecFN_spec.v", 71, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VaddRecF64_add::_settle__TOP__1(VaddRecF64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF64_add::_settle__TOP__1\n"); );
    VaddRecF64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    // Body
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c = 0x10000U;
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros 
        = ((0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                       << 3U)) | (vlTOPp->a[1U] 
                                                  >> 0x1dU)))) 
           & (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                         << 3U)) | 
                           (vlTOPp->b[1U] >> 0x1dU)))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                       << 2U)) | (vlTOPp->a[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->a[1U] >> 0x1dU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                       << 2U)) | (vlTOPp->b[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->b[1U] >> 0x1dU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                       << 2U)) | (vlTOPp->a[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->a[1U] >> 0x1dU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                       << 2U)) | (vlTOPp->b[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->b[1U] >> 0x1dU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns 
        = ((1U & vlTOPp->a[2U]) == (1U & vlTOPp->b[2U]));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->a[2U] 
                                              << 3U)) 
                                          | (vlTOPp->a[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->a[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->a[0U])))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->b[2U] 
                                              << 3U)) 
                                          | (vlTOPp->b[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->b[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->b[0U])))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps 
        = (0x1fffU & ((0xfffU & ((vlTOPp->a[2U] << 0xcU) 
                                 | (vlTOPp->a[1U] >> 0x14U))) 
                      - (0xfffU & ((vlTOPp->b[2U] << 0xcU) 
                                   | (vlTOPp->b[1U] 
                                      >> 0x14U)))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA) 
            & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB)) 
           & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
        = (VL_ULL(0x1fffffffffffff) & (VL_GTS_III(1,32,32, 0U, 
                                                  VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                        ? vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA
                                        : vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign 
        = ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)), 6U)) 
           & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                             VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)), 6U)) 
              | (0U == (0x3fU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist 
        = (0x3fU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                     ? ((0xfffU & ((vlTOPp->b[2U] << 0xcU) 
                                   | (vlTOPp->b[1U] 
                                      >> 0x14U))) - 
                        (0xfffU & ((vlTOPp->a[2U] << 0xcU) 
                                   | (vlTOPp->a[1U] 
                                      >> 0x14U)))) : (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum 
        = (VL_ULL(0xffffffffffffff) & (((((VL_LTES_III(1,32,32, 0U, 
                                                       VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                                           & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                                           ? (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA 
                                              << 2U)
                                           : VL_ULL(0)) 
                                         | ((VL_LTES_III(1,32,32, 0U, 
                                                         VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                                             & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                             ? (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA 
                                                << 1U)
                                             : VL_ULL(0))) 
                                        | (VL_GTS_III(1,32,32, 0U, 
                                                      VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                            ? vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA
                                            : VL_ULL(0))) 
                                       - (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB 
                                          << 1U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__invalidExc 
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
           | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_isNaN 
        = (((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA) 
            | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)) 
           | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3ffeU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (0U != (3U & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3ffdU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 2U))))) 
              << 1U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3ffbU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 6U))))) 
              << 2U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3ff7U & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0xaU))))) 
              << 3U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3fefU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0xeU))))) 
              << 4U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3fdfU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0x12U))))) 
              << 5U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3fbfU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0x16U))))) 
              << 6U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3f7fU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0x1aU))))) 
              << 7U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3effU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0x1eU))))) 
              << 8U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3dffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0x22U))))) 
              << 9U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3bffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0x26U))))) 
              << 0xaU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x37ffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0x2aU))))) 
              << 0xbU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x2fffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0x2eU))))) 
              << 0xcU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (7U & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                            >> 0x32U))))) 
              << 0xdU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags 
        = (((~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)) 
            & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign))) 
           & (1U >= (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign)
            ? 0x3fU : (0x3fU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
        = (VL_ULL(0x7fffffffffffff) & (VL_GTS_IQQ(1,56,56, VL_ULL(0), vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)
                                        ? VL_NEGATE_Q(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)
                                        : vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_isNaN));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
        = (VL_ULL(0x3ffffffffffffff) & ((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                         << 5U) >> (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
        = (0x3fffU & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                     (0xfU & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist) 
                                              >> 2U))) 
                      >> 2U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffffffeU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | (0U != (3U & (IData)((VL_ULL(0xffffffffffffff) 
                                   & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                      << 1U))))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffffffdU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3fffffffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 1U)))))) 
              << 1U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffffffbU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xfffffffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 3U)))))) 
              << 2U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffffff7U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3ffffffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 5U)))))) 
              << 3U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffffefU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xffffffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 7U)))))) 
              << 4U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffffdfU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3fffffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 9U)))))) 
              << 5U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffffbfU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xfffffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0xbU)))))) 
              << 6U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffff7fU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3ffffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0xdU)))))) 
              << 7U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffffeffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xffffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0xfU)))))) 
              << 8U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffffdffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3fffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x11U)))))) 
              << 9U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffffbffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xfffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x13U)))))) 
              << 0xaU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffff7ffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3ffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x15U)))))) 
              << 0xbU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffefffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x17U)))))) 
              << 0xcU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffdfffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3fffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x19U)))))) 
              << 0xdU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffbfffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xfffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x1bU)))))) 
              << 0xeU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfff7fffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3ffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x1dU)))))) 
              << 0xfU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffeffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x1fU)))))) 
              << 0x10U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffdffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3fffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x21U)))))) 
              << 0x11U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffbffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xfffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x23U)))))) 
              << 0x12U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xff7ffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3ffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x25U)))))) 
              << 0x13U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfefffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x27U)))))) 
              << 0x14U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfdfffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3fff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x29U)))))) 
              << 0x15U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfbfffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xfff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x2bU)))))) 
              << 0x16U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xf7fffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3ff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x2dU)))))) 
              << 0x17U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xeffffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x2fU)))))) 
              << 0x18U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xdffffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3f) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x31U)))))) 
              << 0x19U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xbffffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xf) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x33U)))))) 
              << 0x1aU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x7ffffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(3) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x35U)))))) 
              << 0x1bU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3ffeU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (1U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 0xdU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3ffdU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (2U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 0xbU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3ffbU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (4U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 9U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3ff7U & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (8U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 7U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3fefU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       >> 5U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3fdfU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       >> 3U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3fbfU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x40U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       >> 1U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3f7fU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x80U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       << 1U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3effU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x100U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                        << 3U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3dffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x200U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                        << 5U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3bffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x400U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                        << 7U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x37ffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x800U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                        << 9U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x2fffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x1000U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                         << 0xbU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x2000U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                         << 0xdU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffffffeU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (1U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                    >> 0x1bU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffffffdU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (2U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                    >> 0x19U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffffffbU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (4U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                    >> 0x17U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffffff7U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (8U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                    >> 0x15U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffffefU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x10U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                       >> 0x13U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffffdfU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x20U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                       >> 0x11U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffffbfU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x40U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                       >> 0xfU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffff7fU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x80U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                       >> 0xdU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffffeffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x100U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                        >> 0xbU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffffdffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x200U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                        >> 9U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffffbffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x400U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                        >> 7U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffff7ffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x800U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                        >> 5U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffefffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x1000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                         >> 3U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffdfffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x2000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                         >> 1U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffbfffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x4000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                         << 1U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfff7fffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x8000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                         << 3U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffeffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x10000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                          << 5U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffdffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x20000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                          << 7U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffbffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x40000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                          << 9U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xff7ffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x80000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                          << 0xbU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfefffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x100000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                           << 0xdU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfdfffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x200000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                           << 0xfU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfbfffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x400000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                           << 0x11U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xf7fffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x800000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                           << 0x13U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xeffffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x1000000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                            << 0x15U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xdffffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x2000000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                            << 0x17U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xbffffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x4000000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                            << 0x19U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x7ffffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x8000000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                            << 0x1bU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller 
        = ((VL_ULL(0xfffffffffffffe) & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
                                        >> 2U)) | (QData)((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller))) 
                                                                   | (0U 
                                                                      != 
                                                                      ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
                                                                       & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)))))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x10000000U | vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           & ((IData)(1U) + (0xfffffffU & (~ vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum 
        = (VL_ULL(0x1ffffffffffffff) & (((VL_ULL(0xfffffffffffff8) 
                                          & ((VL_GTS_III(1,32,32, 0U, 
                                                         VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                               ? vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB
                                               : vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA) 
                                             << 3U)) 
                                         + ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                             ? vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller
                                             : (VL_ULL(0x100000000000000) 
                                                | (VL_ULL(0xffffffffffffff) 
                                                   & (~ vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller))))) 
                                        + (QData)((IData)(
                                                          (1U 
                                                           & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)))))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((2U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                              ? 1U : 0U) | ((4U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                             ? 2U : 0U)) 
                           | ((8U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                               ? 3U : 0U)) | ((0x10U 
                                               & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                             ? 5U : 0U)) | ((0x40U 
                                             & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                             ? 6U : 0U)) 
                       | ((0x80U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                           ? 7U : 0U)) | ((0x100U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                           ? 8U : 0U)) 
                     | ((0x200U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                         ? 9U : 0U)) | ((0x400U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                         ? 0xaU : 0U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((0x800U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                 ? 0xbU : 0U)) | ((0x1000U 
                                                   & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((0x2000U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                               ? 0xdU : 0U)) | ((0x4000U 
                                                 & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((0x8000U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                             ? 0xfU : 0U)) | ((0x10000U 
                                               & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                               ? 0x10U
                                               : 0U)) 
                       | ((0x20000U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                           ? 0x11U : 0U)) | ((0x40000U 
                                              & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                              ? 0x12U
                                              : 0U)) 
                     | ((0x80000U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                         ? 0x13U : 0U)) | ((0x100000U 
                                            & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                            ? 0x14U
                                            : 0U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__28__KET____DOT__countSoFar 
        = (0x3fU & (((((((((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                           | ((0x200000U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                               ? 0x15U : 0U)) | ((0x400000U 
                                                  & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                                  ? 0x16U
                                                  : 0U)) 
                         | ((0x800000U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                             ? 0x17U : 0U)) | ((0x1000000U 
                                                & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                                ? 0x18U
                                                : 0U)) 
                       | ((0x2000000U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                           ? 0x19U : 0U)) | ((0x4000000U 
                                              & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                              ? 0x1aU
                                              : 0U)) 
                     | ((0x8000000U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                         ? 0x1bU : 0U)) | ((0x10000000U 
                                            & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                            ? 0x1cU
                                            : 0U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut 
        = (VL_ULL(0xffffffffffffff) & ((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                        << (0x3fU & 
                                            ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__28__KET____DOT__countSoFar) 
                                             << 1U))) 
                                       << 1U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros) 
           | (((~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut)) 
               & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)) 
              & (~ (IData)((0U != (3U & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut 
                                                 >> 0x36U))))))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
        = (VL_ULL(0xffffffffffffff) & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_isNaN)
                                        ? (VL_ULL(0x60000000000000) 
                                           | (VL_ULL(0x1ffffffffffffc) 
                                              & (((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                                                   ? vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA
                                                   : 
                                                  ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                                    ? vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB
                                                    : VL_ULL(0))) 
                                                 << 2U)))
                                        : ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                            ? vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut
                                            : (VL_ULL(0x1ffffffffffffff) 
                                               & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                                   ? 
                                                  ((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum 
                                                    >> 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum)))))
                                                   : vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum)))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sign 
        = (1U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_isNaN)
                  ? ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                      ? (1U & vlTOPp->a[2U]) : ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                                 ? 
                                                (1U 
                                                 & vlTOPp->b[2U])
                                                 : 1U))
                  : (((((((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns) 
                          | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA)) 
                         & vlTOPp->a[2U]) | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB) 
                                             & vlTOPp->b[2U])) 
                       | (((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut) 
                           & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))) 
                          & ((2U == (IData)(vlTOPp->roundingMode))
                              ? 1U : 0U))) | ((((~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                                & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut 
                                                              >> 0x36U))))) 
                                              & (vlTOPp->a[2U] 
                                                 ^ 
                                                 VL_GTS_IQQ(1,56,56, VL_ULL(0), vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)))) 
                     | (((~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                         & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags))) 
                        & (VL_GTS_III(1,32,32, 0U, 
                                      VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                            ? vlTOPp->b[2U] : vlTOPp->a[2U])))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                >> 3U) 
                                               & ((QData)((IData)(
                                                                  (3U 
                                                                   | (4U 
                                                                      & ((IData)(
                                                                                (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                                                >> 0x37U)) 
                                                                         << 2U))))) 
                                                  >> 4U)))) 
           | ((0U != (7U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig) 
                            & (IData)(((QData)((IData)(
                                                       (3U 
                                                        | (4U 
                                                           & ((IData)(
                                                                      (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                                       >> 0x37U)) 
                                                              << 2U))))) 
                                       >> 1U))))) & 
              (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ ((QData)((IData)((3U | (4U & ((IData)(
                                                    (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                     >> 0x37U)) 
                                            << 2U))))) 
               >> 1U)) & (QData)((IData)((3U | (4U 
                                                & ((IData)(
                                                           (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                            >> 0x37U)) 
                                                   << 2U))))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sign))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                               >> 3U))) 
           | ((0U != (7U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig) 
                            & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))) 
              & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->roundingMode)) 
                                          | (4U == (IData)(vlTOPp->roundingMode))) 
                                         & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                        | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                           & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                                        ? ((VL_ULL(1) 
                                            + ((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                | (QData)((IData)(
                                                                  (3U 
                                                                   | (4U 
                                                                      & ((IData)(
                                                                                (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                                                >> 0x37U)) 
                                                                         << 2U)))))) 
                                               >> 2U)) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                                  & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (3U 
                                                                   | (4U 
                                                                      & ((IData)(
                                                                                (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                                                >> 0x37U)) 
                                                                         << 2U))))) 
                                                  >> 1U)
                                                  : VL_ULL(0))))
                                        : (((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                             & (~ (QData)((IData)(
                                                                  (3U 
                                                                   | (4U 
                                                                      & ((IData)(
                                                                                (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                                                >> 0x37U)) 
                                                                         << 2U))))))) 
                                            >> 2U) 
                                           | (((6U 
                                                == (IData)(vlTOPp->roundingMode)) 
                                               & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                               ? (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                                  >> 1U)
                                               : VL_ULL(0)))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (VL_ULL(0xfffffffffffff) & ((1U & (IData)(
                                                    (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                     >> 0x37U)))
                                       ? (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                          >> 1U) : vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (0x1fffU 
                                            & VL_EXTENDS_II(13,13, 
                                                            (0x1fffU 
                                                             & ((((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags) 
                                                                  | VL_GTS_III(1,32,32, 0U, 
                                                                               VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))))
                                                                  ? 
                                                                 (0xfffU 
                                                                  & ((vlTOPp->b[2U] 
                                                                      << 0xcU) 
                                                                     | (vlTOPp->b[1U] 
                                                                        >> 0x14U)))
                                                                  : 
                                                                 (0xfffU 
                                                                  & ((vlTOPp->a[2U] 
                                                                      << 0xcU) 
                                                                     | (vlTOPp->a[1U] 
                                                                        >> 0x14U)))) 
                                                                - 
                                                                ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                                                  ? 
                                                                 (0x3fU 
                                                                  & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__28__KET____DOT__countSoFar) 
                                                                     << 1U))
                                                                  : 
                                                                 (1U 
                                                                  & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))))))))) 
                      + (IData)((VL_ULL(0x7fffffffffffff) 
                                 & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                    >> 0x35U)))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,14, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 0xaU)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp1[0U] = (IData)((((QData)((IData)((0xfffU 
                                              & (((((((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                           ? 0xe00U
                                                           : 0U))) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                          ? 0x400U
                                                          : 0U))) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                         ? 0x200U
                                                         : 0U))) 
                                                   | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                       ? 0xbffU
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                      ? 0xc00U
                                                      : 0U)) 
                                                 | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                     ? 0xe00U
                                                     : 0U))))) 
                             << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                          & ((((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                   | ((~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                                      & (IData)(
                                                                                (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
                                                                                >> 0x33U))))))) 
                                               << 0x33U) 
                                              | ((1U 
                                                  & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                     | (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                                                  ? 
                                                 (VL_ULL(0x7ffffffffffff) 
                                                  & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                  : VL_ULL(0))) 
                                             | VL_NEGATE_Q((QData)((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
    __Vtemp1[1U] = (IData)(((((QData)((IData)((0xfffU 
                                               & (((((((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                            ? 0xe00U
                                                            : 0U))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                           ? 0x400U
                                                           : 0U))) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                          ? 0x200U
                                                          : 0U))) 
                                                    | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                        ? 0xbffU
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                       ? 0xc00U
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                      ? 0xe00U
                                                      : 0U))))) 
                              << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                           & ((((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                    | ((~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                                       & (IData)(
                                                                                (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
                                                                                >> 0x33U))))))) 
                                                << 0x33U) 
                                               | ((1U 
                                                   & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                      | (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                                                   ? 
                                                  (VL_ULL(0x7ffffffffffff) 
                                                   & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                   : VL_ULL(0))) 
                                              | VL_NEGATE_Q((QData)((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))) 
                            >> 0x20U));
    vlTOPp->out[0U] = __Vtemp1[0U];
    vlTOPp->out[1U] = __Vtemp1[1U];
    vlTOPp->out[2U] = vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sign;
}

VL_INLINE_OPT void VaddRecF64_add::_combo__TOP__2(VaddRecF64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF64_add::_combo__TOP__2\n"); );
    VaddRecF64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2[3];
    // Body
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros 
        = ((0U == (7U & ((0x7ffff8U & (vlTOPp->a[2U] 
                                       << 3U)) | (vlTOPp->a[1U] 
                                                  >> 0x1dU)))) 
           & (0U == (7U & ((0x7ffff8U & (vlTOPp->b[2U] 
                                         << 3U)) | 
                           (vlTOPp->b[1U] >> 0x1dU)))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                       << 2U)) | (vlTOPp->a[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->a[1U] >> 0x1dU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                       << 2U)) | (vlTOPp->b[1U] 
                                                  >> 0x1eU)))) 
           & (vlTOPp->b[1U] >> 0x1dU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->a[2U] 
                                       << 2U)) | (vlTOPp->a[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->a[1U] >> 0x1dU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->b[2U] 
                                       << 2U)) | (vlTOPp->b[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->b[1U] >> 0x1dU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns 
        = ((1U & vlTOPp->a[2U]) == (1U & vlTOPp->b[2U]));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->a[2U] 
                                              << 3U)) 
                                          | (vlTOPp->a[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->a[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->a[0U])))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB 
        = (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                           & (vlTOPp->b[2U] 
                                              << 3U)) 
                                          | (vlTOPp->b[1U] 
                                             >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->b[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->b[0U])))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps 
        = (0x1fffU & ((0xfffU & ((vlTOPp->a[2U] << 0xcU) 
                                 | (vlTOPp->a[1U] >> 0x14U))) 
                      - (0xfffU & ((vlTOPp->b[2U] << 0xcU) 
                                   | (vlTOPp->b[1U] 
                                      >> 0x14U)))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA) 
            & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB)) 
           & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
        = (VL_ULL(0x1fffffffffffff) & (VL_GTS_III(1,32,32, 0U, 
                                                  VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                        ? vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA
                                        : vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign 
        = ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)), 6U)) 
           & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                             VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)), 6U)) 
              | (0U == (0x3fU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist 
        = (0x3fU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                     ? ((0xfffU & ((vlTOPp->b[2U] << 0xcU) 
                                   | (vlTOPp->b[1U] 
                                      >> 0x14U))) - 
                        (0xfffU & ((vlTOPp->a[2U] << 0xcU) 
                                   | (vlTOPp->a[1U] 
                                      >> 0x14U)))) : (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum 
        = (VL_ULL(0xffffffffffffff) & (((((VL_LTES_III(1,32,32, 0U, 
                                                       VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                                           & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                                           ? (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA 
                                              << 2U)
                                           : VL_ULL(0)) 
                                         | ((VL_LTES_III(1,32,32, 0U, 
                                                         VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))) 
                                             & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                             ? (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA 
                                                << 1U)
                                             : VL_ULL(0))) 
                                        | (VL_GTS_III(1,32,32, 0U, 
                                                      VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                            ? vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA
                                            : VL_ULL(0))) 
                                       - (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB 
                                          << 1U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__invalidExc 
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
           | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_isNaN 
        = (((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA) 
            | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)) 
           | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3ffeU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | (0U != (3U & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3ffdU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 2U))))) 
              << 1U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3ffbU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 6U))))) 
              << 2U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3ff7U & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0xaU))))) 
              << 3U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3fefU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0xeU))))) 
              << 4U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3fdfU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0x12U))))) 
              << 5U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3fbfU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0x16U))))) 
              << 6U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3f7fU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0x1aU))))) 
              << 7U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3effU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0x1eU))))) 
              << 8U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3dffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0x22U))))) 
              << 9U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x3bffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0x26U))))) 
              << 0xaU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x37ffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0x2aU))))) 
              << 0xbU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x2fffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (0xfU & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                              >> 0x2eU))))) 
              << 0xcU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller)) 
           | ((IData)((0U != (7U & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                            >> 0x32U))))) 
              << 0xdU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags 
        = (((~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)) 
            & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign))) 
           & (1U >= (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign)
            ? 0x3fU : (0x3fU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
        = (VL_ULL(0x7fffffffffffff) & (VL_GTS_IQQ(1,56,56, VL_ULL(0), vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)
                                        ? VL_NEGATE_Q(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)
                                        : vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_isNaN));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
        = (VL_ULL(0x3ffffffffffffff) & ((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller 
                                         << 5U) >> (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
        = (0x3fffU & (VL_SHIFTRS_III(17,17,4, vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c, 
                                     (0xfU & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist) 
                                              >> 2U))) 
                      >> 2U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffffffeU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | (0U != (3U & (IData)((VL_ULL(0xffffffffffffff) 
                                   & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                      << 1U))))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffffffdU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3fffffffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 1U)))))) 
              << 1U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffffffbU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xfffffffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 3U)))))) 
              << 2U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffffff7U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3ffffffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 5U)))))) 
              << 3U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffffefU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xffffffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 7U)))))) 
              << 4U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffffdfU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3fffffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 9U)))))) 
              << 5U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffffbfU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xfffffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0xbU)))))) 
              << 6U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffff7fU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3ffffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0xdU)))))) 
              << 7U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffffeffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xffffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0xfU)))))) 
              << 8U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffffdffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3fffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x11U)))))) 
              << 9U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffffbffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xfffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x13U)))))) 
              << 0xaU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffff7ffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3ffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x15U)))))) 
              << 0xbU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffefffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xffffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x17U)))))) 
              << 0xcU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffdfffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3fffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x19U)))))) 
              << 0xdU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfffbfffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xfffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x1bU)))))) 
              << 0xeU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfff7fffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3ffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x1dU)))))) 
              << 0xfU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffeffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xffffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x1fU)))))) 
              << 0x10U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffdffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3fffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x21U)))))) 
              << 0x11U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xffbffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xfffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x23U)))))) 
              << 0x12U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xff7ffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3ffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x25U)))))) 
              << 0x13U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfefffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xffff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x27U)))))) 
              << 0x14U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfdfffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3fff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x29U)))))) 
              << 0x15U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xfbfffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xfff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x2bU)))))) 
              << 0x16U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xf7fffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3ff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x2dU)))))) 
              << 0x17U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xeffffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xff) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x2fU)))))) 
              << 0x18U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xdffffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0x3f) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x31U)))))) 
              << 0x19U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0xbffffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(0xf) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x33U)))))) 
              << 0x1aU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((0x7ffffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((IData)((0U != (3U & (IData)((VL_ULL(3) 
                                            & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                               >> 0x35U)))))) 
              << 0x1bU));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3ffeU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (1U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 0xdU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3ffdU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (2U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 0xbU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3ffbU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (4U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 9U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3ff7U & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (8U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                    >> 7U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3fefU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       >> 5U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3fdfU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       >> 3U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3fbfU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x40U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       >> 1U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3f7fU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x80U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                       << 1U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3effU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x100U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                        << 3U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3dffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x200U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                        << 5U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x3bffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x400U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                        << 7U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x37ffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x800U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                        << 9U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x2fffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x1000U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                         << 0xbU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fffU & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)) 
           | (0x2000U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut) 
                         << 0xdU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffffffeU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (1U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                    >> 0x1bU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffffffdU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (2U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                    >> 0x19U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffffffbU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (4U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                    >> 0x17U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffffff7U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (8U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                    >> 0x15U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffffefU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x10U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                       >> 0x13U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffffdfU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x20U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                       >> 0x11U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffffbfU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x40U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                       >> 0xfU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffff7fU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x80U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                       >> 0xdU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffffeffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x100U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                        >> 0xbU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffffdffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x200U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                        >> 9U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffffbffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x400U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                        >> 7U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffff7ffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x800U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                        >> 5U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffefffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x1000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                         >> 3U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffdfffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x2000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                         >> 1U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfffbfffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x4000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                         << 1U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfff7fffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x8000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                         << 3U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffeffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x10000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                          << 5U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffdffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x20000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                          << 7U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xffbffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x40000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                          << 9U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xff7ffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x80000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                          << 0xbU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfefffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x100000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                           << 0xdU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfdfffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x200000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                           << 0xfU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xfbfffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x400000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                           << 0x11U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xf7fffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x800000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                           << 0x13U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xeffffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x1000000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                            << 0x15U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xdffffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x2000000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                            << 0x17U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0xbffffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x4000000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                            << 0x19U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((0x7ffffffU & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (0x8000000U & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                            << 0x1bU)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller 
        = ((VL_ULL(0xfffffffffffffe) & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
                                        >> 2U)) | (QData)((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller))) 
                                                                   | (0U 
                                                                      != 
                                                                      ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
                                                                       & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask)))))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x10000000U | vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           & ((IData)(1U) + (0xfffffffU & (~ vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum 
        = (VL_ULL(0x1ffffffffffffff) & (((VL_ULL(0xfffffffffffff8) 
                                          & ((VL_GTS_III(1,32,32, 0U, 
                                                         VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                               ? vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB
                                               : vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA) 
                                             << 3U)) 
                                         + ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                             ? vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller
                                             : (VL_ULL(0x100000000000000) 
                                                | (VL_ULL(0xffffffffffffff) 
                                                   & (~ vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller))))) 
                                        + (QData)((IData)(
                                                          (1U 
                                                           & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)))))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((2U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                              ? 1U : 0U) | ((4U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                             ? 2U : 0U)) 
                           | ((8U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                               ? 3U : 0U)) | ((0x10U 
                                               & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                             ? 5U : 0U)) | ((0x40U 
                                             & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                             ? 6U : 0U)) 
                       | ((0x80U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                           ? 7U : 0U)) | ((0x100U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                           ? 8U : 0U)) 
                     | ((0x200U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                         ? 9U : 0U)) | ((0x400U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                         ? 0xaU : 0U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((0x800U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                 ? 0xbU : 0U)) | ((0x1000U 
                                                   & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((0x2000U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                               ? 0xdU : 0U)) | ((0x4000U 
                                                 & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((0x8000U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                             ? 0xfU : 0U)) | ((0x10000U 
                                               & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                               ? 0x10U
                                               : 0U)) 
                       | ((0x20000U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                           ? 0x11U : 0U)) | ((0x40000U 
                                              & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                              ? 0x12U
                                              : 0U)) 
                     | ((0x80000U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                         ? 0x13U : 0U)) | ((0x100000U 
                                            & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                            ? 0x14U
                                            : 0U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__28__KET____DOT__countSoFar 
        = (0x3fU & (((((((((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                           | ((0x200000U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                               ? 0x15U : 0U)) | ((0x400000U 
                                                  & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                                  ? 0x16U
                                                  : 0U)) 
                         | ((0x800000U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                             ? 0x17U : 0U)) | ((0x1000000U 
                                                & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                                ? 0x18U
                                                : 0U)) 
                       | ((0x2000000U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                           ? 0x19U : 0U)) | ((0x4000000U 
                                              & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                              ? 0x1aU
                                              : 0U)) 
                     | ((0x8000000U & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                         ? 0x1bU : 0U)) | ((0x10000000U 
                                            & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn)
                                            ? 0x1cU
                                            : 0U)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut 
        = (VL_ULL(0xffffffffffffff) & ((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum 
                                        << (0x3fU & 
                                            ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__28__KET____DOT__countSoFar) 
                                             << 1U))) 
                                       << 1U));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros) 
           | (((~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut)) 
               & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)) 
              & (~ (IData)((0U != (3U & (IData)((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut 
                                                 >> 0x36U))))))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
        = (VL_ULL(0xffffffffffffff) & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_isNaN)
                                        ? (VL_ULL(0x60000000000000) 
                                           | (VL_ULL(0x1ffffffffffffc) 
                                              & (((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                                                   ? vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA
                                                   : 
                                                  ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                                    ? vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB
                                                    : VL_ULL(0))) 
                                                 << 2U)))
                                        : ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                            ? vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut
                                            : (VL_ULL(0x1ffffffffffffff) 
                                               & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                                   ? 
                                                  ((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum 
                                                    >> 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum)))))
                                                   : vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum)))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sign 
        = (1U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_isNaN)
                  ? ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                      ? (1U & vlTOPp->a[2U]) : ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                                 ? 
                                                (1U 
                                                 & vlTOPp->b[2U])
                                                 : 1U))
                  : (((((((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns) 
                          | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA)) 
                         & vlTOPp->a[2U]) | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB) 
                                             & vlTOPp->b[2U])) 
                       | (((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut) 
                           & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))) 
                          & ((2U == (IData)(vlTOPp->roundingMode))
                              ? 1U : 0U))) | ((((~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                                & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut 
                                                              >> 0x36U))))) 
                                              & (vlTOPp->a[2U] 
                                                 ^ 
                                                 VL_GTS_IQQ(1,56,56, VL_ULL(0), vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)))) 
                     | (((~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                         & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags))) 
                        & (VL_GTS_III(1,32,32, 0U, 
                                      VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                            ? vlTOPp->b[2U] : vlTOPp->a[2U])))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                >> 3U) 
                                               & ((QData)((IData)(
                                                                  (3U 
                                                                   | (4U 
                                                                      & ((IData)(
                                                                                (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                                                >> 0x37U)) 
                                                                         << 2U))))) 
                                                  >> 4U)))) 
           | ((0U != (7U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig) 
                            & (IData)(((QData)((IData)(
                                                       (3U 
                                                        | (4U 
                                                           & ((IData)(
                                                                      (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                                       >> 0x37U)) 
                                                              << 2U))))) 
                                       >> 1U))))) & 
              (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ ((QData)((IData)((3U | (4U & ((IData)(
                                                    (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                     >> 0x37U)) 
                                            << 2U))))) 
               >> 1U)) & (QData)((IData)((3U | (4U 
                                                & ((IData)(
                                                           (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                            >> 0x37U)) 
                                                   << 2U))))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sign))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (VL_ULL(0x1fffffffffffff) & ((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                               >> 3U))) 
           | ((0U != (7U & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig) 
                            & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))) 
              & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->roundingMode)) 
                                          | (4U == (IData)(vlTOPp->roundingMode))) 
                                         & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                        | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                           & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                                        ? ((VL_ULL(1) 
                                            + ((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                | (QData)((IData)(
                                                                  (3U 
                                                                   | (4U 
                                                                      & ((IData)(
                                                                                (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                                                >> 0x37U)) 
                                                                         << 2U)))))) 
                                               >> 2U)) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                                  & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (3U 
                                                                   | (4U 
                                                                      & ((IData)(
                                                                                (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                                                >> 0x37U)) 
                                                                         << 2U))))) 
                                                  >> 1U)
                                                  : VL_ULL(0))))
                                        : (((vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                             & (~ (QData)((IData)(
                                                                  (3U 
                                                                   | (4U 
                                                                      & ((IData)(
                                                                                (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                                                >> 0x37U)) 
                                                                         << 2U))))))) 
                                            >> 2U) 
                                           | (((6U 
                                                == (IData)(vlTOPp->roundingMode)) 
                                               & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                               ? (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                                  >> 1U)
                                               : VL_ULL(0)))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (VL_ULL(0xfffffffffffff) & ((1U & (IData)(
                                                    (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sig 
                                                     >> 0x37U)))
                                       ? (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                          >> 1U) : vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (0x1fffU 
                                            & VL_EXTENDS_II(13,13, 
                                                            (0x1fffU 
                                                             & ((((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags) 
                                                                  | VL_GTS_III(1,32,32, 0U, 
                                                                               VL_EXTENDS_II(32,13, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))))
                                                                  ? 
                                                                 (0xfffU 
                                                                  & ((vlTOPp->b[2U] 
                                                                      << 0xcU) 
                                                                     | (vlTOPp->b[1U] 
                                                                        >> 0x14U)))
                                                                  : 
                                                                 (0xfffU 
                                                                  & ((vlTOPp->a[2U] 
                                                                      << 0xcU) 
                                                                     | (vlTOPp->a[1U] 
                                                                        >> 0x14U)))) 
                                                                - 
                                                                ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                                                  ? 
                                                                 (0x3fU 
                                                                  & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__28__KET____DOT__countSoFar) 
                                                                     << 1U))
                                                                  : 
                                                                 (1U 
                                                                  & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))))))))) 
                      + (IData)((VL_ULL(0x7fffffffffffff) 
                                 & (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                    >> 0x35U)))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,14, (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 0xaU)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp2[0U] = (IData)((((QData)((IData)((0xfffU 
                                              & (((((((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                           ? 0xe00U
                                                           : 0U))) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                          ? 0x400U
                                                          : 0U))) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                         ? 0x200U
                                                         : 0U))) 
                                                   | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                       ? 0xbffU
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                      ? 0xc00U
                                                      : 0U)) 
                                                 | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                     ? 0xe00U
                                                     : 0U))))) 
                             << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                          & ((((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                   | ((~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                                      & (IData)(
                                                                                (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
                                                                                >> 0x33U))))))) 
                                               << 0x33U) 
                                              | ((1U 
                                                  & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                     | (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                                                  ? 
                                                 (VL_ULL(0x7ffffffffffff) 
                                                  & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                  : VL_ULL(0))) 
                                             | VL_NEGATE_Q((QData)((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
    __Vtemp2[1U] = (IData)(((((QData)((IData)((0xfffU 
                                               & (((((((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                            ? 0xe00U
                                                            : 0U))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                           ? 0x400U
                                                           : 0U))) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                          ? 0x200U
                                                          : 0U))) 
                                                    | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                        ? 0xbffU
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                       ? 0xc00U
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                      ? 0xe00U
                                                      : 0U))))) 
                              << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                           & ((((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                    | ((~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                                       & (IData)(
                                                                                (vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
                                                                                >> 0x33U))))))) 
                                                << 0x33U) 
                                               | ((1U 
                                                   & ((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                      | (~ (IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                                                   ? 
                                                  (VL_ULL(0x7ffffffffffff) 
                                                   & vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                   : VL_ULL(0))) 
                                              | VL_NEGATE_Q((QData)((IData)(vlTOPp->addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))) 
                            >> 0x20U));
    vlTOPp->out[0U] = __Vtemp2[0U];
    vlTOPp->out[1U] = __Vtemp2[1U];
    vlTOPp->out[2U] = vlTOPp->addRecF64_add__DOT__addRecFN__DOT__out_sign;
}

void VaddRecF64_add::_eval(VaddRecF64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF64_add::_eval\n"); );
    VaddRecF64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VaddRecF64_add::_eval_initial(VaddRecF64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF64_add::_eval_initial\n"); );
    VaddRecF64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VaddRecF64_add::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF64_add::final\n"); );
    // Variables
    VaddRecF64_add__Syms* __restrict vlSymsp = this->__VlSymsp;
    VaddRecF64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VaddRecF64_add::_eval_settle(VaddRecF64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF64_add::_eval_settle\n"); );
    VaddRecF64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VaddRecF64_add::_change_request(VaddRecF64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF64_add::_change_request\n"); );
    VaddRecF64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VaddRecF64_add::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF64_add::_eval_debug_assertions\n"); );
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

void VaddRecF64_add::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF64_add::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, a);
    VL_RAND_RESET_W(65, b);
    roundingMode = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(65, out);
    exceptionFlags = VL_RAND_RESET_I(5);
    addRecF64_add__DOT__addRecFN__DOT__invalidExc = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__out_isNaN = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__out_sign = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__out_sig = VL_RAND_RESET_Q(56);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA = VL_RAND_RESET_Q(54);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB = VL_RAND_RESET_Q(54);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps = VL_RAND_RESET_I(13);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist = VL_RAND_RESET_I(6);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist = VL_RAND_RESET_I(6);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum = VL_RAND_RESET_Q(56);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum = VL_RAND_RESET_Q(55);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum = VL_RAND_RESET_I(28);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut = VL_RAND_RESET_Q(56);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller = VL_RAND_RESET_Q(53);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller = VL_RAND_RESET_Q(58);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller = VL_RAND_RESET_I(14);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask = VL_RAND_RESET_I(14);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller = VL_RAND_RESET_Q(56);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum = VL_RAND_RESET_Q(57);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn = VL_RAND_RESET_I(28);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = VL_RAND_RESET_I(29);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__20__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__28__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c = VL_RAND_RESET_I(17);
    addRecF64_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut = VL_RAND_RESET_I(14);
    addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut = VL_RAND_RESET_Q(52);
    addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_Q(56);
    addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_Q(55);
    addRecF64_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(14);
}
