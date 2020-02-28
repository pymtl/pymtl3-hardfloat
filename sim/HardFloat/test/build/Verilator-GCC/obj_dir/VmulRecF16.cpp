// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmulRecF16.h for the primary calling header

#include "VmulRecF16.h"
#include "VmulRecF16__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VmulRecF16) {
    VmulRecF16__Syms* __restrict vlSymsp = __VlSymsp = new VmulRecF16__Syms(this, name());
    VmulRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VmulRecF16::__Vconfigure(VmulRecF16__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VmulRecF16::~VmulRecF16() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VmulRecF16::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmulRecF16::eval\n"); );
    VmulRecF16__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VmulRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/mulRecFN_spec.v", 41, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VmulRecF16::_eval_initial_loop(VmulRecF16__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/mulRecFN_spec.v", 41, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VmulRecF16::_settle__TOP__1(VmulRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF16::_settle__TOP__1\n"); );
    VmulRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2[3];
    WData/*95:0*/ __Vtemp3[3];
    // Body
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0U] = 0U;
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[1U] = 0U;
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[2U] = 1U;
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((0U == (7U & (vlTOPp->a >> 0xdU))) | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->b 
                                                     >> 0xdU))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA 
        = (((0U != (7U & (vlTOPp->a >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->a));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB 
        = (((0U != (7U & (vlTOPp->b >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->b));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut 
        = (0x7fU & ((VL_EXTENDS_II(7,7, (0x3fU & (vlTOPp->a 
                                                  >> 0xaU))) 
                     + VL_EXTENDS_II(7,7, (0x3fU & 
                                           (vlTOPp->b 
                                            >> 0xaU)))) 
                    - (IData)(0x20U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (vlTOPp->a 
                                                 >> 0xdU));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB 
        = ((3U == (3U & (vlTOPp->b >> 0xeU))) & (vlTOPp->b 
                                                 >> 0xdU));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (~ 
                                                 (vlTOPp->a 
                                                  >> 0xdU)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & (vlTOPp->b >> 0xeU))) & (~ 
                                                 (vlTOPp->b 
                                                  >> 0xdU)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd 
        = (0x3fffffU & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA) 
                        * (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA) 
            & (0U == (7U & (vlTOPp->b >> 0xdU)))) | 
           ((0U == (7U & (vlTOPp->a >> 0xdU))) & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__invalidExc 
        = ((((7U == (7U & (vlTOPp->a >> 0xdU))) & (~ 
                                                   (vlTOPp->a 
                                                    >> 9U))) 
            | ((7U == (7U & (vlTOPp->b >> 0xdU))) & 
               (~ (vlTOPp->b >> 9U)))) | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_isNaN 
        = (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA) 
            | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)) 
           | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sign 
        = (1U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_isNaN)
                  ? ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                      ? (1U & (vlTOPp->a >> 0x10U))
                      : ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                          ? (1U & (vlTOPp->b >> 0x10U))
                          : 1U)) : ((vlTOPp->a ^ vlTOPp->b) 
                                    >> 0x10U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig 
        = ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_isNaN)
            ? (0x1800U | (0x7fcU & (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                                      ? (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA)
                                      : ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                          ? (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB)
                                          : 0U)) << 2U)))
            : ((0x3ffeU & (vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd 
                           >> 8U)) | (0U != (0x1ffU 
                                             & vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_isNaN));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sign))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut))));
    __Vtemp2[0U] = 0U;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp3, __Vtemp2, (0x3fU 
                                                 & (~ 
                                                    (VL_EXTENDS_II(6,7, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)) 
                                                     | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                         ? 0x20U
                                                         : 0U)))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0xfffU & ((__Vtemp3[1U] << 0x19U) | (__Vtemp3[0U] 
                                                >> 7U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffeU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (1U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 0xbU)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffdU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (2U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 9U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffbU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (4U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 7U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xff7U & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (8U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfefU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x10U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 3U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfdfU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x20U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 1U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfbfU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x40U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 1U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xf7fU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x80U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xeffU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x100U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 5U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xdffU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x200U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 7U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xbffU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x400U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 9U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x7ffU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x800U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 0xbU)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (3U | (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                  << 2U) | (4U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                                  >> 0xbU))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                              >> 3U) & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                        >> 4U)))) | 
           ((0U != (7U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                          & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                             >> 1U)))) & (~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
               >> 1U)) & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                              & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)) 
                             >> 3U))) | ((0U != (7U 
                                                 & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                                                    & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))) 
                                         & (~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x1fffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                         | (4U == (IData)(vlTOPp->roundingMode))) 
                        & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                       | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                          & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                       ? (((IData)(1U) + (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                                           | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                                          >> 2U)) & 
                          (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                               & (~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                               ? ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                  >> 1U) : 0U))) : 
                      ((((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                         & (~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask))) 
                        >> 2U) | (((6U == (IData)(vlTOPp->roundingMode)) 
                                   & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                   ? ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                      >> 1U) : 0U))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x3ffU & ((0x2000U & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig))
                      ? ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                         >> 1U) : (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0xffU & (VL_EXTENDS_II(8,7, (0x7fU & VL_EXTENDS_II(7,7, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)))) 
                    + (0x1fffU & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                  >> 0xbU))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 8U, VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 8U, VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,7, 
                                                                        (0x7fU 
                                                                         & VL_EXTENDS_II(7,7, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)))), 5U))) 
               & ((0x2000U & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig))
                   ? ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                      >> 3U) : ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x2000U 
                                                       & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig))
                                                       ? 
                                                      ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                                       >> 4U)
                                                       : 
                                                      ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                                       >> 3U)))) 
                                                 & ((0x2000U 
                                                     & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig))
                                                     ? 
                                                    ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                                     >> 0xcU)
                                                     : 
                                                    ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                                     >> 0xbU))) 
                                                & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->roundingMode))) 
                                                   & ((0x2000U 
                                                       & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig))
                                                       ? 
                                                      ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                                                       >> 2U)
                                                       : 
                                                      ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & ((((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                                                          >> 0xdU) 
                                                         & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig))))))))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 4U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                            & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 8U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                 | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sign) 
                    << 0x10U) | ((0xfc00U & (((((((
                                                   (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                     & (~ 
                                                        (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut) 
                                                          | VL_GTS_III(1,32,32, 8U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                          ? 0x38U
                                                          : 0U))) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                         ? 0xfffffff7U
                                                         : 0U))) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                        ? 0x10U
                                                        : 0U))) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                       ? 8U
                                                       : 0U))) 
                                                 | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                     ? 8U
                                                     : 0U)) 
                                                | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                    ? 0x2fU
                                                    : 0U)) 
                                               | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                   ? 0x30U
                                                   : 0U)) 
                                              | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x38U
                                                  : 0U)) 
                                             << 0xaU)) 
                                 | (0x3ffU & (((((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                 << 9U) 
                                                | (0xfffffe00U 
                                                   & ((((~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                        & VL_LTES_III(1,32,32, 8U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                       << 9U) 
                                                      & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)))) 
                                               | (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                   | ((~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                      & VL_LTES_III(1,32,32, 8U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                   ? 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))
                                                   : 0U)) 
                                              | VL_NEGATE_I((IData)((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
}

VL_INLINE_OPT void VmulRecF16::_combo__TOP__2(VmulRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF16::_combo__TOP__2\n"); );
    VmulRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp6[3];
    // Body
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((0U == (7U & (vlTOPp->a >> 0xdU))) | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->b 
                                                     >> 0xdU))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA 
        = (((0U != (7U & (vlTOPp->a >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->a));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB 
        = (((0U != (7U & (vlTOPp->b >> 0xdU))) << 0xaU) 
           | (0x3ffU & vlTOPp->b));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut 
        = (0x7fU & ((VL_EXTENDS_II(7,7, (0x3fU & (vlTOPp->a 
                                                  >> 0xaU))) 
                     + VL_EXTENDS_II(7,7, (0x3fU & 
                                           (vlTOPp->b 
                                            >> 0xaU)))) 
                    - (IData)(0x20U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (vlTOPp->a 
                                                 >> 0xdU));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB 
        = ((3U == (3U & (vlTOPp->b >> 0xeU))) & (vlTOPp->b 
                                                 >> 0xdU));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & (vlTOPp->a >> 0xeU))) & (~ 
                                                 (vlTOPp->a 
                                                  >> 0xdU)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & (vlTOPp->b >> 0xeU))) & (~ 
                                                 (vlTOPp->b 
                                                  >> 0xdU)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd 
        = (0x3fffffU & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA) 
                        * (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA) 
            & (0U == (7U & (vlTOPp->b >> 0xdU)))) | 
           ((0U == (7U & (vlTOPp->a >> 0xdU))) & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__invalidExc 
        = ((((7U == (7U & (vlTOPp->a >> 0xdU))) & (~ 
                                                   (vlTOPp->a 
                                                    >> 9U))) 
            | ((7U == (7U & (vlTOPp->b >> 0xdU))) & 
               (~ (vlTOPp->b >> 9U)))) | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_isNaN 
        = (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA) 
            | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)) 
           | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sign 
        = (1U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_isNaN)
                  ? ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                      ? (1U & (vlTOPp->a >> 0x10U))
                      : ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                          ? (1U & (vlTOPp->b >> 0x10U))
                          : 1U)) : ((vlTOPp->a ^ vlTOPp->b) 
                                    >> 0x10U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig 
        = ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_isNaN)
            ? (0x1800U | (0x7fcU & (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA)
                                      ? (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA)
                                      : ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB)
                                          ? (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB)
                                          : 0U)) << 2U)))
            : ((0x3ffeU & (vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd 
                           >> 8U)) | (0U != (0x1ffU 
                                             & vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_isNaN));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sign))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut))));
    VL_SHIFTRS_WWI(65,65,6, __Vtemp6, vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0x3fU & (~ (VL_EXTENDS_II(6,7, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)) 
                                | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                    ? 0x20U : 0U)))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0xfffU & ((__Vtemp6[1U] << 0x19U) | (__Vtemp6[0U] 
                                                >> 7U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffeU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (1U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 0xbU)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffdU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (2U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 9U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffbU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (4U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 7U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xff7U & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (8U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfefU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x10U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 3U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfdfU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x20U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       >> 1U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfbfU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x40U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 1U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xf7fU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x80U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xeffU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x100U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 5U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xdffU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x200U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 7U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xbffU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x400U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 9U)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x7ffU & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main)) 
           | (0x800U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut) 
                        << 0xbU)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (3U | (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
                  << 2U) | (4U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                                  >> 0xbU))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                              >> 3U) & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                        >> 4U)))) | 
           ((0U != (7U & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                          & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                             >> 1U)))) & (~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
               >> 1U)) & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7ffU & (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                              & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)) 
                             >> 3U))) | ((0U != (7U 
                                                 & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                                                    & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask)))) 
                                         & (~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x1fffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                         | (4U == (IData)(vlTOPp->roundingMode))) 
                        & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                       | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                          & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                       ? (((IData)(1U) + (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                                           | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                                          >> 2U)) & 
                          (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                               & (~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                               ? ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                  >> 1U) : 0U))) : 
                      ((((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                         & (~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask))) 
                        >> 2U) | (((6U == (IData)(vlTOPp->roundingMode)) 
                                   & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                   ? ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                      >> 1U) : 0U))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x3ffU & ((0x2000U & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig))
                      ? ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                         >> 1U) : (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0xffU & (VL_EXTENDS_II(8,7, (0x7fU & VL_EXTENDS_II(7,7, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)))) 
                    + (0x1fffU & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                  >> 0xbU))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 8U, VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 8U, VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,7, 
                                                                        (0x7fU 
                                                                         & VL_EXTENDS_II(7,7, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut)))), 5U))) 
               & ((0x2000U & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig))
                   ? ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                      >> 3U) : ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x2000U 
                                                       & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig))
                                                       ? 
                                                      ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                                       >> 4U)
                                                       : 
                                                      ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                                       >> 3U)))) 
                                                 & ((0x2000U 
                                                     & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig))
                                                     ? 
                                                    ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                                     >> 0xcU)
                                                     : 
                                                    ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig) 
                                                     >> 0xbU))) 
                                                & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->roundingMode))) 
                                                   & ((0x2000U 
                                                       & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig))
                                                       ? 
                                                      ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                                                       >> 2U)
                                                       : 
                                                      ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & ((((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                                                          >> 0xdU) 
                                                         & ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig) 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sig))))))))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 4U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                            & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 8U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                 | (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__out_sign) 
                    << 0x10U) | ((0xfc00U & (((((((
                                                   (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                     & (~ 
                                                        (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut) 
                                                          | VL_GTS_III(1,32,32, 8U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                          ? 0x38U
                                                          : 0U))) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                         ? 0xfffffff7U
                                                         : 0U))) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                        ? 0x10U
                                                        : 0U))) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                       ? 8U
                                                       : 0U))) 
                                                 | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                     ? 8U
                                                     : 0U)) 
                                                | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                    ? 0x2fU
                                                    : 0U)) 
                                               | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                   ? 0x30U
                                                   : 0U)) 
                                              | ((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x38U
                                                  : 0U)) 
                                             << 0xaU)) 
                                 | (0x3ffU & (((((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                 << 9U) 
                                                | (0xfffffe00U 
                                                   & ((((~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                        & VL_LTES_III(1,32,32, 8U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
                                                       << 9U) 
                                                      & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)))) 
                                               | (((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                   | ((~ (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                      & VL_LTES_III(1,32,32, 8U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))))
                                                   ? 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut))
                                                   : 0U)) 
                                              | VL_NEGATE_I((IData)((IData)(vlTOPp->mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))));
}

void VmulRecF16::_eval(VmulRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF16::_eval\n"); );
    VmulRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VmulRecF16::_eval_initial(VmulRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF16::_eval_initial\n"); );
    VmulRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmulRecF16::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF16::final\n"); );
    // Variables
    VmulRecF16__Syms* __restrict vlSymsp = this->__VlSymsp;
    VmulRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmulRecF16::_eval_settle(VmulRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF16::_eval_settle\n"); );
    VmulRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VmulRecF16::_change_request(VmulRecF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF16::_change_request\n"); );
    VmulRecF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VmulRecF16::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF16::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((a & 0xfffe0000U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b & 0xfffe0000U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif  // VL_DEBUG

void VmulRecF16::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmulRecF16::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_I(17);
    b = VL_RAND_RESET_I(17);
    roundingMode = VL_RAND_RESET_I(3);
    out = VL_RAND_RESET_I(17);
    exceptionFlags = VL_RAND_RESET_I(5);
    mulRecF16__DOT__mulRecFN__DOT__invalidExc = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__out_isNaN = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__out_sign = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__out_sig = VL_RAND_RESET_I(14);
    mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNA = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfA = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigA = VL_RAND_RESET_I(12);
    mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isNaNB = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__isInfB = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigB = VL_RAND_RESET_I(12);
    mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notSigNaN_invalidExc = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__common_sExpOut = VL_RAND_RESET_I(7);
    mulRecF16__DOT__mulRecFN__DOT__mulRecFNToRaw__DOT__sigProd = VL_RAND_RESET_I(22);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut = VL_RAND_RESET_I(10);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask = VL_RAND_RESET_I(14);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main = VL_RAND_RESET_I(12);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_I(14);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_I(13);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(65, mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c);
    mulRecF16__DOT__mulRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut = VL_RAND_RESET_I(12);
}
