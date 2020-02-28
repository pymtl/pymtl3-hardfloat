// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecF16ToRecF64.h for the primary calling header

#include "VrecF16ToRecF64.h"
#include "VrecF16ToRecF64__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VrecF16ToRecF64) {
    VrecF16ToRecF64__Syms* __restrict vlSymsp = __VlSymsp = new VrecF16ToRecF64__Syms(this, name());
    VrecF16ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VrecF16ToRecF64::__Vconfigure(VrecF16ToRecF64__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VrecF16ToRecF64::~VrecF16ToRecF64() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VrecF16ToRecF64::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecF16ToRecF64::eval\n"); );
    VrecF16ToRecF64__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecF16ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/recFNToRecFN_spec.v", 125, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VrecF16ToRecF64::_eval_initial_loop(VrecF16ToRecF64__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/recFNToRecFN_spec.v", 125, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VrecF16ToRecF64::_combo__TOP__1(VrecF16ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToRecF64::_combo__TOP__1\n"); );
    VrecF16ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    // Body
    vlTOPp->recF16ToRecF64__DOT__recFNToRecFN__DOT__isInf 
        = ((3U == (3U & (vlTOPp->in >> 0xeU))) & (~ 
                                                  (vlTOPp->in 
                                                   >> 0xdU)));
    vlTOPp->recF16ToRecF64__DOT__recFNToRecFN__DOT__isSigNaN 
        = ((7U == (7U & (vlTOPp->in >> 0xdU))) & (~ 
                                                  (vlTOPp->in 
                                                   >> 9U)));
    vlTOPp->exceptionFlags = ((IData)(vlTOPp->recF16ToRecF64__DOT__recFNToRecFN__DOT__isSigNaN) 
                              << 4U);
    vlTOPp->recF16ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlTOPp->recF16ToRecF64__DOT__recFNToRecFN__DOT__isSigNaN) 
           | ((3U == (3U & (vlTOPp->in >> 0xeU))) & 
              (vlTOPp->in >> 0xdU)));
    __Vtemp1[0U] = (IData)((((QData)((IData)((0xfffU 
                                              & ((((((IData)(0x7e0U) 
                                                     + 
                                                     VL_EXTENDS_II(12,7, 
                                                                   (0x3fU 
                                                                    & (vlTOPp->in 
                                                                       >> 0xaU)))) 
                                                    & (~ 
                                                       ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->in 
                                                             >> 0xdU)))
                                                         ? 0xe00U
                                                         : 0U))) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->recF16ToRecF64__DOT__recFNToRecFN__DOT__isInf)
                                                        ? 0x200U
                                                        : 0U))) 
                                                  | ((IData)(vlTOPp->recF16ToRecF64__DOT__recFNToRecFN__DOT__isInf)
                                                      ? 0xc00U
                                                      : 0U)) 
                                                 | ((IData)(vlTOPp->recF16ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                                     ? 0xe00U
                                                     : 0U))))) 
                             << 0x34U) | (((QData)((IData)(
                                                           ((IData)(vlTOPp->recF16ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                            | ((0U 
                                                                != 
                                                                (7U 
                                                                 & (vlTOPp->in 
                                                                    >> 0xdU))) 
                                                               & (IData)(
                                                                         (VL_ULL(7) 
                                                                          & ((QData)((IData)(
                                                                                (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlTOPp->in 
                                                                                >> 0xdU))) 
                                                                                << 0xaU) 
                                                                                | (0x3ffU 
                                                                                & vlTOPp->in)))) 
                                                                             >> 9U))))))) 
                                           << 0x33U) 
                                          | (((IData)(vlTOPp->recF16ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                              | (0U 
                                                 != 
                                                 (7U 
                                                  & (vlTOPp->in 
                                                     >> 0xdU))))
                                              ? (VL_ULL(0x7fc0000000000) 
                                                 & ((QData)((IData)(
                                                                    (((0U 
                                                                       != 
                                                                       (7U 
                                                                        & (vlTOPp->in 
                                                                           >> 0xdU))) 
                                                                      << 0xaU) 
                                                                     | (0x3ffU 
                                                                        & vlTOPp->in)))) 
                                                    << 0x2aU))
                                              : VL_ULL(0)))));
    __Vtemp1[1U] = (IData)(((((QData)((IData)((0xfffU 
                                               & ((((((IData)(0x7e0U) 
                                                      + 
                                                      VL_EXTENDS_II(12,7, 
                                                                    (0x3fU 
                                                                     & (vlTOPp->in 
                                                                        >> 0xaU)))) 
                                                     & (~ 
                                                        ((0U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->in 
                                                              >> 0xdU)))
                                                          ? 0xe00U
                                                          : 0U))) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->recF16ToRecF64__DOT__recFNToRecFN__DOT__isInf)
                                                         ? 0x200U
                                                         : 0U))) 
                                                   | ((IData)(vlTOPp->recF16ToRecF64__DOT__recFNToRecFN__DOT__isInf)
                                                       ? 0xc00U
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->recF16ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                                      ? 0xe00U
                                                      : 0U))))) 
                              << 0x34U) | (((QData)((IData)(
                                                            ((IData)(vlTOPp->recF16ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                             | ((0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlTOPp->in 
                                                                     >> 0xdU))) 
                                                                & (IData)(
                                                                          (VL_ULL(7) 
                                                                           & ((QData)((IData)(
                                                                                (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlTOPp->in 
                                                                                >> 0xdU))) 
                                                                                << 0xaU) 
                                                                                | (0x3ffU 
                                                                                & vlTOPp->in)))) 
                                                                              >> 9U))))))) 
                                            << 0x33U) 
                                           | (((IData)(vlTOPp->recF16ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                               | (0U 
                                                  != 
                                                  (7U 
                                                   & (vlTOPp->in 
                                                      >> 0xdU))))
                                               ? (VL_ULL(0x7fc0000000000) 
                                                  & ((QData)((IData)(
                                                                     (((0U 
                                                                        != 
                                                                        (7U 
                                                                         & (vlTOPp->in 
                                                                            >> 0xdU))) 
                                                                       << 0xaU) 
                                                                      | (0x3ffU 
                                                                         & vlTOPp->in)))) 
                                                     << 0x2aU))
                                               : VL_ULL(0)))) 
                            >> 0x20U));
    vlTOPp->out[0U] = __Vtemp1[0U];
    vlTOPp->out[1U] = __Vtemp1[1U];
    vlTOPp->out[2U] = (1U & (vlTOPp->in >> 0x10U));
}

void VrecF16ToRecF64::_eval(VrecF16ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToRecF64::_eval\n"); );
    VrecF16ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VrecF16ToRecF64::_eval_initial(VrecF16ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToRecF64::_eval_initial\n"); );
    VrecF16ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF16ToRecF64::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToRecF64::final\n"); );
    // Variables
    VrecF16ToRecF64__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecF16ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF16ToRecF64::_eval_settle(VrecF16ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToRecF64::_eval_settle\n"); );
    VrecF16ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VrecF16ToRecF64::_change_request(VrecF16ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToRecF64::_change_request\n"); );
    VrecF16ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecF16ToRecF64::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToRecF64::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((in & 0xfffe0000U))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif  // VL_DEBUG

void VrecF16ToRecF64::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToRecF64::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_I(17);
    roundingMode = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(65, out);
    exceptionFlags = VL_RAND_RESET_I(5);
    recF16ToRecF64__DOT__recFNToRecFN__DOT__isInf = VL_RAND_RESET_I(1);
    recF16ToRecF64__DOT__recFNToRecFN__DOT__isSigNaN = VL_RAND_RESET_I(1);
    recF16ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut = VL_RAND_RESET_I(1);
}
