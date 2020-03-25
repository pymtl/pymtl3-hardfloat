// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecF64ToRecF128.h for the primary calling header

#include "VrecF64ToRecF128.h"
#include "VrecF64ToRecF128__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VrecF64ToRecF128) {
    VrecF64ToRecF128__Syms* __restrict vlSymsp = __VlSymsp = new VrecF64ToRecF128__Syms(this, name());
    VrecF64ToRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VrecF64ToRecF128::__Vconfigure(VrecF64ToRecF128__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VrecF64ToRecF128::~VrecF64ToRecF128() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VrecF64ToRecF128::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecF64ToRecF128::eval\n"); );
    VrecF64ToRecF128__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecF64ToRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/recFNToRecFN_spec.v", 195, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VrecF64ToRecF128::_eval_initial_loop(VrecF64ToRecF128__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/recFNToRecFN_spec.v", 195, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VrecF64ToRecF128::_combo__TOP__1(VrecF64ToRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToRecF128::_combo__TOP__1\n"); );
    VrecF64ToRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp2[4];
    WData/*127:0*/ __Vtemp3[4];
    WData/*127:0*/ __Vtemp7[4];
    WData/*127:0*/ __Vtemp8[4];
    WData/*127:0*/ __Vtemp16[4];
    // Body
    vlTOPp->recF64ToRecF128__DOT__recFNToRecFN__DOT__isInf 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->in[2U] 
                                       << 2U)) | (vlTOPp->in[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->in[1U] >> 0x1dU)));
    vlTOPp->recF64ToRecF128__DOT__recFNToRecFN__DOT__isSigNaN 
        = ((7U == (7U & ((vlTOPp->in[2U] << 3U) | (
                                                   vlTOPp->in[1U] 
                                                   >> 0x1dU)))) 
           & (~ (vlTOPp->in[1U] >> 0x13U)));
    vlTOPp->exceptionFlags = ((IData)(vlTOPp->recF64ToRecF128__DOT__recFNToRecFN__DOT__isSigNaN) 
                              << 4U);
    vlTOPp->recF64ToRecF128__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlTOPp->recF64ToRecF128__DOT__recFNToRecFN__DOT__isSigNaN) 
           | ((3U == (3U & ((0x3ffffcU & (vlTOPp->in[2U] 
                                          << 2U)) | 
                            (vlTOPp->in[1U] >> 0x1eU)))) 
              & (vlTOPp->in[1U] >> 0x1dU)));
    VL_EXTEND_WQ(116,54, __Vtemp2, (((QData)((IData)(
                                                     (0U 
                                                      != 
                                                      (7U 
                                                       & ((0x7ffff8U 
                                                           & (vlTOPp->in[2U] 
                                                              << 3U)) 
                                                          | (vlTOPp->in[1U] 
                                                             >> 0x1dU)))))) 
                                     << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->in[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->in[0U]))))));
    VL_SHIFTL_WWI(116,116,32, __Vtemp3, __Vtemp2, 0x3eU);
    VL_EXTEND_WQ(116,54, __Vtemp7, (((QData)((IData)(
                                                     (0U 
                                                      != 
                                                      (7U 
                                                       & ((0x7ffff8U 
                                                           & (vlTOPp->in[2U] 
                                                              << 3U)) 
                                                          | (vlTOPp->in[1U] 
                                                             >> 0x1dU)))))) 
                                     << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->in[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->in[0U]))))));
    VL_SHIFTL_WWI(116,116,32, __Vtemp8, __Vtemp7, 0x3eU);
    __Vtemp16[3U] = ((0xffff0000U & (((((((IData)(0x7800U) 
                                          + VL_EXTENDS_II(16,13, 
                                                          (0xfffU 
                                                           & ((vlTOPp->in[2U] 
                                                               << 0xcU) 
                                                              | (vlTOPp->in[1U] 
                                                                 >> 0x14U))))) 
                                         & (~ ((0U 
                                                == 
                                                (7U 
                                                 & ((0x7ffff8U 
                                                     & (vlTOPp->in[2U] 
                                                        << 3U)) 
                                                    | (vlTOPp->in[1U] 
                                                       >> 0x1dU))))
                                                ? 0xe000U
                                                : 0U))) 
                                        & (~ ((IData)(vlTOPp->recF64ToRecF128__DOT__recFNToRecFN__DOT__isInf)
                                               ? 0x2000U
                                               : 0U))) 
                                       | ((IData)(vlTOPp->recF64ToRecF128__DOT__recFNToRecFN__DOT__isInf)
                                           ? 0xc000U
                                           : 0U)) | 
                                      ((IData)(vlTOPp->recF64ToRecF128__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                        ? 0xe000U : 0U)) 
                                     << 0x10U)) | (
                                                   (0xffff8000U 
                                                    & (((IData)(vlTOPp->recF64ToRecF128__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                        << 0xfU) 
                                                       | (0x38000U 
                                                          & (((0U 
                                                               != 
                                                               (7U 
                                                                & ((0x7ffff8U 
                                                                    & (vlTOPp->in[2U] 
                                                                       << 3U)) 
                                                                   | (vlTOPp->in[1U] 
                                                                      >> 0x1dU)))) 
                                                              << 0xfU) 
                                                             & (__Vtemp3[3U] 
                                                                >> 2U))))) 
                                                   | (((IData)(vlTOPp->recF64ToRecF128__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                       | (0U 
                                                          != 
                                                          (7U 
                                                           & ((0x7ffff8U 
                                                               & (vlTOPp->in[2U] 
                                                                  << 3U)) 
                                                              | (vlTOPp->in[1U] 
                                                                 >> 0x1dU)))))
                                                       ? 
                                                      (0x7fffU 
                                                       & (__Vtemp8[3U] 
                                                          >> 2U))
                                                       : 0U)));
    vlTOPp->out[0U] = (((IData)(vlTOPp->recF64ToRecF128__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                        | (0U != (7U & ((0x7ffff8U 
                                         & (vlTOPp->in[2U] 
                                            << 3U)) 
                                        | (vlTOPp->in[1U] 
                                           >> 0x1dU)))))
                        ? ((__Vtemp8[1U] << 0x1eU) 
                           | (__Vtemp8[0U] >> 2U)) : 0U);
    vlTOPp->out[1U] = (((IData)(vlTOPp->recF64ToRecF128__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                        | (0U != (7U & ((0x7ffff8U 
                                         & (vlTOPp->in[2U] 
                                            << 3U)) 
                                        | (vlTOPp->in[1U] 
                                           >> 0x1dU)))))
                        ? ((__Vtemp8[2U] << 0x1eU) 
                           | (__Vtemp8[1U] >> 2U)) : 0U);
    vlTOPp->out[2U] = (((IData)(vlTOPp->recF64ToRecF128__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                        | (0U != (7U & ((0x7ffff8U 
                                         & (vlTOPp->in[2U] 
                                            << 3U)) 
                                        | (vlTOPp->in[1U] 
                                           >> 0x1dU)))))
                        ? ((0xc0000000U & (__Vtemp8[3U] 
                                           << 0x1eU)) 
                           | (__Vtemp8[2U] >> 2U)) : 0U);
    vlTOPp->out[3U] = __Vtemp16[3U];
    vlTOPp->out[4U] = (1U & vlTOPp->in[2U]);
}

void VrecF64ToRecF128::_eval(VrecF64ToRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToRecF128::_eval\n"); );
    VrecF64ToRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VrecF64ToRecF128::_eval_initial(VrecF64ToRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToRecF128::_eval_initial\n"); );
    VrecF64ToRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF64ToRecF128::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToRecF128::final\n"); );
    // Variables
    VrecF64ToRecF128__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecF64ToRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF64ToRecF128::_eval_settle(VrecF64ToRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToRecF128::_eval_settle\n"); );
    VrecF64ToRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VrecF64ToRecF128::_change_request(VrecF64ToRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToRecF128::_change_request\n"); );
    VrecF64ToRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecF64ToRecF128::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToRecF128::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((in[2U] & 0xfffffffeU))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif // VL_DEBUG

void VrecF64ToRecF128::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToRecF128::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, in);
    roundingMode = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(129, out);
    exceptionFlags = VL_RAND_RESET_I(5);
    recF64ToRecF128__DOT__recFNToRecFN__DOT__isInf = VL_RAND_RESET_I(1);
    recF64ToRecF128__DOT__recFNToRecFN__DOT__isSigNaN = VL_RAND_RESET_I(1);
    recF64ToRecF128__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut = VL_RAND_RESET_I(1);
}
