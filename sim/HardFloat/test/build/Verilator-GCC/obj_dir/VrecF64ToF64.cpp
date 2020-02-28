// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecF64ToF64.h for the primary calling header

#include "VrecF64ToF64.h"
#include "VrecF64ToF64__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VrecF64ToF64) {
    VrecF64ToF64__Syms* __restrict vlSymsp = __VlSymsp = new VrecF64ToF64__Syms(this, name());
    VrecF64ToF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VrecF64ToF64::__Vconfigure(VrecF64ToF64__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VrecF64ToF64::~VrecF64ToF64() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VrecF64ToF64::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecF64ToF64::eval\n"); );
    VrecF64ToF64__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecF64ToF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/recFNToFN_spec.v", 49, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VrecF64ToF64::_eval_initial_loop(VrecF64ToF64__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/recFNToFN_spec.v", 49, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VrecF64ToF64::_combo__TOP__1(VrecF64ToF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToF64::_combo__TOP__1\n"); );
    VrecF64ToF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->recF64ToF64__DOT__recFNToFN__DOT__isInf 
        = ((3U == (3U & ((0x3ffffcU & (vlTOPp->in[2U] 
                                       << 2U)) | (vlTOPp->in[1U] 
                                                  >> 0x1eU)))) 
           & (~ (vlTOPp->in[1U] >> 0x1dU)));
    vlTOPp->recF64ToF64__DOT__recFNToFN__DOT__sig = 
        (((QData)((IData)((0U != (7U & ((0x7ffff8U 
                                         & (vlTOPp->in[2U] 
                                            << 3U)) 
                                        | (vlTOPp->in[1U] 
                                           >> 0x1dU)))))) 
          << 0x34U) | (VL_ULL(0xfffffffffffff) & (((QData)((IData)(
                                                                   vlTOPp->in[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->in[0U])))));
    vlTOPp->out = (((QData)((IData)((1U & vlTOPp->in[2U]))) 
                    << 0x3fU) | (((QData)((IData)((0x7ffU 
                                                   & (((0x402U 
                                                        > 
                                                        (0xfffU 
                                                         & ((vlTOPp->in[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->in[1U] 
                                                               >> 0x14U))))
                                                        ? 0U
                                                        : 
                                                       ((IData)(1U) 
                                                        + 
                                                        ((0xfffU 
                                                          & ((vlTOPp->in[2U] 
                                                              << 0xcU) 
                                                             | (vlTOPp->in[1U] 
                                                                >> 0x14U))) 
                                                         - (IData)(0x402U)))) 
                                                      | ((((3U 
                                                            == 
                                                            (3U 
                                                             & ((0x3ffffcU 
                                                                 & (vlTOPp->in[2U] 
                                                                    << 2U)) 
                                                                | (vlTOPp->in[1U] 
                                                                   >> 0x1eU)))) 
                                                           & (vlTOPp->in[1U] 
                                                              >> 0x1dU)) 
                                                          | (IData)(vlTOPp->recF64ToF64__DOT__recFNToFN__DOT__isInf))
                                                          ? 0x7ffU
                                                          : 0U))))) 
                                  << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                               & ((0x402U 
                                                   > 
                                                   (0xfffU 
                                                    & ((vlTOPp->in[2U] 
                                                        << 0xcU) 
                                                       | (vlTOPp->in[1U] 
                                                          >> 0x14U))))
                                                   ? 
                                                  ((VL_ULL(0x3fffffffffffff) 
                                                    & (vlTOPp->recF64ToF64__DOT__recFNToFN__DOT__sig 
                                                       >> 1U)) 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (0xfffU 
                                                        & ((vlTOPp->in[2U] 
                                                            << 0xcU) 
                                                           | (vlTOPp->in[1U] 
                                                              >> 0x14U))))))
                                                   : 
                                                  ((IData)(vlTOPp->recF64ToF64__DOT__recFNToFN__DOT__isInf)
                                                    ? VL_ULL(0)
                                                    : vlTOPp->recF64ToF64__DOT__recFNToFN__DOT__sig)))));
}

void VrecF64ToF64::_eval(VrecF64ToF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToF64::_eval\n"); );
    VrecF64ToF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VrecF64ToF64::_eval_initial(VrecF64ToF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToF64::_eval_initial\n"); );
    VrecF64ToF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF64ToF64::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToF64::final\n"); );
    // Variables
    VrecF64ToF64__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecF64ToF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF64ToF64::_eval_settle(VrecF64ToF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToF64::_eval_settle\n"); );
    VrecF64ToF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VrecF64ToF64::_change_request(VrecF64ToF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToF64::_change_request\n"); );
    VrecF64ToF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecF64ToF64::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToF64::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((in[2U] & 0xfffffffeU))) {
        Verilated::overWidthError("in");}
}
#endif  // VL_DEBUG

void VrecF64ToF64::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF64ToF64::_ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(65, in);
    out = VL_RAND_RESET_Q(64);
    recF64ToF64__DOT__recFNToFN__DOT__isInf = VL_RAND_RESET_I(1);
    recF64ToF64__DOT__recFNToFN__DOT__sig = VL_RAND_RESET_Q(54);
}
