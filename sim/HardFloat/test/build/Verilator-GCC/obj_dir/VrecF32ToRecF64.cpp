// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecF32ToRecF64.h for the primary calling header

#include "VrecF32ToRecF64.h"
#include "VrecF32ToRecF64__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VrecF32ToRecF64) {
    VrecF32ToRecF64__Syms* __restrict vlSymsp = __VlSymsp = new VrecF32ToRecF64__Syms(this, name());
    VrecF32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VrecF32ToRecF64::__Vconfigure(VrecF32ToRecF64__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VrecF32ToRecF64::~VrecF32ToRecF64() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VrecF32ToRecF64::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecF32ToRecF64::eval\n"); );
    VrecF32ToRecF64__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecF32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/recFNToRecFN_spec.v", 139, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VrecF32ToRecF64::_eval_initial_loop(VrecF32ToRecF64__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/recFNToRecFN_spec.v", 139, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VrecF32ToRecF64::_combo__TOP__1(VrecF32ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF64::_combo__TOP__1\n"); );
    VrecF32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    // Body
    vlTOPp->recF32ToRecF64__DOT__recFNToRecFN__DOT__isInf 
        = ((3U == (3U & ((IData)((vlTOPp->in >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->in 
                                                >> 0x1dU))));
    vlTOPp->recF32ToRecF64__DOT__recFNToRecFN__DOT__isSigNaN 
        = ((7U == (7U & (IData)((vlTOPp->in >> 0x1dU)))) 
           & (~ (IData)((vlTOPp->in >> 0x16U))));
    vlTOPp->exceptionFlags = ((IData)(vlTOPp->recF32ToRecF64__DOT__recFNToRecFN__DOT__isSigNaN) 
                              << 4U);
    vlTOPp->recF32ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlTOPp->recF32ToRecF64__DOT__recFNToRecFN__DOT__isSigNaN) 
           | ((3U == (3U & ((IData)((vlTOPp->in >> 0x17U)) 
                            >> 7U))) & (IData)((vlTOPp->in 
                                                >> 0x1dU))));
    __Vtemp1[0U] = (IData)((((QData)((IData)((0xfffU 
                                              & ((((((IData)(0x700U) 
                                                     + 
                                                     VL_EXTENDS_II(12,10, 
                                                                   (0x1ffU 
                                                                    & (IData)(
                                                                              (vlTOPp->in 
                                                                               >> 0x17U))))) 
                                                    & (~ 
                                                       ((0U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(
                                                                     (vlTOPp->in 
                                                                      >> 0x17U)) 
                                                             >> 6U)))
                                                         ? 0xe00U
                                                         : 0U))) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->recF32ToRecF64__DOT__recFNToRecFN__DOT__isInf)
                                                        ? 0x200U
                                                        : 0U))) 
                                                  | ((IData)(vlTOPp->recF32ToRecF64__DOT__recFNToRecFN__DOT__isInf)
                                                      ? 0xc00U
                                                      : 0U)) 
                                                 | ((IData)(vlTOPp->recF32ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                                     ? 0xe00U
                                                     : 0U))))) 
                             << 0x34U) | (((QData)((IData)(
                                                           ((IData)(vlTOPp->recF32ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                            | ((0U 
                                                                != 
                                                                (7U 
                                                                 & ((IData)(
                                                                            (vlTOPp->in 
                                                                             >> 0x17U)) 
                                                                    >> 6U))) 
                                                               & (IData)(
                                                                         (VL_ULL(7) 
                                                                          & ((QData)((IData)(
                                                                                (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & ((IData)(
                                                                                (vlTOPp->in 
                                                                                >> 0x17U)) 
                                                                                >> 6U))) 
                                                                                << 0x17U) 
                                                                                | (0x7fffffU 
                                                                                & (IData)(vlTOPp->in))))) 
                                                                             >> 0x16U))))))) 
                                           << 0x33U) 
                                          | (((IData)(vlTOPp->recF32ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                              | (0U 
                                                 != 
                                                 (7U 
                                                  & ((IData)(
                                                             (vlTOPp->in 
                                                              >> 0x17U)) 
                                                     >> 6U))))
                                              ? (VL_ULL(0x7ffffe0000000) 
                                                 & ((QData)((IData)(
                                                                    (((0U 
                                                                       != 
                                                                       (7U 
                                                                        & ((IData)(
                                                                                (vlTOPp->in 
                                                                                >> 0x17U)) 
                                                                           >> 6U))) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & (IData)(vlTOPp->in))))) 
                                                    << 0x1dU))
                                              : VL_ULL(0)))));
    __Vtemp1[1U] = (IData)(((((QData)((IData)((0xfffU 
                                               & ((((((IData)(0x700U) 
                                                      + 
                                                      VL_EXTENDS_II(12,10, 
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlTOPp->in 
                                                                                >> 0x17U))))) 
                                                     & (~ 
                                                        ((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(
                                                                      (vlTOPp->in 
                                                                       >> 0x17U)) 
                                                              >> 6U)))
                                                          ? 0xe00U
                                                          : 0U))) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->recF32ToRecF64__DOT__recFNToRecFN__DOT__isInf)
                                                         ? 0x200U
                                                         : 0U))) 
                                                   | ((IData)(vlTOPp->recF32ToRecF64__DOT__recFNToRecFN__DOT__isInf)
                                                       ? 0xc00U
                                                       : 0U)) 
                                                  | ((IData)(vlTOPp->recF32ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut)
                                                      ? 0xe00U
                                                      : 0U))))) 
                              << 0x34U) | (((QData)((IData)(
                                                            ((IData)(vlTOPp->recF32ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                                             | ((0U 
                                                                 != 
                                                                 (7U 
                                                                  & ((IData)(
                                                                             (vlTOPp->in 
                                                                              >> 0x17U)) 
                                                                     >> 6U))) 
                                                                & (IData)(
                                                                          (VL_ULL(7) 
                                                                           & ((QData)((IData)(
                                                                                (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & ((IData)(
                                                                                (vlTOPp->in 
                                                                                >> 0x17U)) 
                                                                                >> 6U))) 
                                                                                << 0x17U) 
                                                                                | (0x7fffffU 
                                                                                & (IData)(vlTOPp->in))))) 
                                                                              >> 0x16U))))))) 
                                            << 0x33U) 
                                           | (((IData)(vlTOPp->recF32ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut) 
                                               | (0U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(
                                                              (vlTOPp->in 
                                                               >> 0x17U)) 
                                                      >> 6U))))
                                               ? (VL_ULL(0x7ffffe0000000) 
                                                  & ((QData)((IData)(
                                                                     (((0U 
                                                                        != 
                                                                        (7U 
                                                                         & ((IData)(
                                                                                (vlTOPp->in 
                                                                                >> 0x17U)) 
                                                                            >> 6U))) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & (IData)(vlTOPp->in))))) 
                                                     << 0x1dU))
                                               : VL_ULL(0)))) 
                            >> 0x20U));
    vlTOPp->out[0U] = __Vtemp1[0U];
    vlTOPp->out[1U] = __Vtemp1[1U];
    vlTOPp->out[2U] = (1U & (IData)((vlTOPp->in >> 0x20U)));
}

void VrecF32ToRecF64::_eval(VrecF32ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF64::_eval\n"); );
    VrecF32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VrecF32ToRecF64::_eval_initial(VrecF32ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF64::_eval_initial\n"); );
    VrecF32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF32ToRecF64::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF64::final\n"); );
    // Variables
    VrecF32ToRecF64__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecF32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF32ToRecF64::_eval_settle(VrecF32ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF64::_eval_settle\n"); );
    VrecF32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VrecF32ToRecF64::_change_request(VrecF32ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF64::_change_request\n"); );
    VrecF32ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecF32ToRecF64::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF64::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((in & VL_ULL(0)))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif  // VL_DEBUG

void VrecF32ToRecF64::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToRecF64::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_Q(33);
    roundingMode = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(65, out);
    exceptionFlags = VL_RAND_RESET_I(5);
    recF32ToRecF64__DOT__recFNToRecFN__DOT__isInf = VL_RAND_RESET_I(1);
    recF32ToRecF64__DOT__recFNToRecFN__DOT__isSigNaN = VL_RAND_RESET_I(1);
    recF32ToRecF64__DOT__recFNToRecFN__DOT__genblk2__DOT__roundRawInToOut__DOT__isNaNOut = VL_RAND_RESET_I(1);
}
