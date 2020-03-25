// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecF128ToF128.h for the primary calling header

#include "VrecF128ToF128.h"
#include "VrecF128ToF128__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VrecF128ToF128) {
    VrecF128ToF128__Syms* __restrict vlSymsp = __VlSymsp = new VrecF128ToF128__Syms(this, name());
    VrecF128ToF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VrecF128ToF128::__Vconfigure(VrecF128ToF128__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VrecF128ToF128::~VrecF128ToF128() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VrecF128ToF128::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecF128ToF128::eval\n"); );
    VrecF128ToF128__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecF128ToF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/recFNToFN_spec.v", 55, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VrecF128ToF128::_eval_initial_loop(VrecF128ToF128__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/recFNToFN_spec.v", 55, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VrecF128ToF128::_combo__TOP__1(VrecF128ToF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToF128::_combo__TOP__1\n"); );
    VrecF128ToF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp8[4];
    WData/*127:0*/ __Vtemp9[4];
    WData/*127:0*/ __Vtemp10[4];
    WData/*127:0*/ __Vtemp18[4];
    // Body
    vlTOPp->recF128ToF128__DOT__recFNToFN__DOT__isInf 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->in[4U] 
                                      << 2U)) | (vlTOPp->in[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->in[3U] >> 0x1dU)));
    vlTOPp->recF128ToF128__DOT__recFNToFN__DOT__sig[0U] 
        = vlTOPp->in[0U];
    vlTOPp->recF128ToF128__DOT__recFNToFN__DOT__sig[1U] 
        = vlTOPp->in[1U];
    vlTOPp->recF128ToF128__DOT__recFNToFN__DOT__sig[2U] 
        = vlTOPp->in[2U];
    vlTOPp->recF128ToF128__DOT__recFNToFN__DOT__sig[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->in[4U] 
                                             << 3U)) 
                                         | (vlTOPp->in[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->in[3U]));
    VL_SHIFTR_WWI(114,114,32, __Vtemp8, vlTOPp->recF128ToF128__DOT__recFNToFN__DOT__sig, 1U);
    __Vtemp9[0U] = __Vtemp8[0U];
    __Vtemp9[1U] = __Vtemp8[1U];
    __Vtemp9[2U] = __Vtemp8[2U];
    __Vtemp9[3U] = (0x3ffffU & __Vtemp8[3U]);
    VL_SHIFTR_WWI(114,114,7, __Vtemp10, __Vtemp9, (0x7fU 
                                                   & ((IData)(1U) 
                                                      - 
                                                      (0xffffU 
                                                       & ((vlTOPp->in[4U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->in[3U] 
                                                             >> 0x10U))))));
    __Vtemp18[3U] = ((0x7fff0000U & ((((0x4002U > (0xffffU 
                                                   & ((vlTOPp->in[4U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->in[3U] 
                                                         >> 0x10U))))
                                        ? 0U : ((IData)(1U) 
                                                + (
                                                   (0xffffU 
                                                    & ((vlTOPp->in[4U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->in[3U] 
                                                          >> 0x10U))) 
                                                   - (IData)(0x4002U)))) 
                                      | ((((3U == (3U 
                                                   & ((0x3fffcU 
                                                       & (vlTOPp->in[4U] 
                                                          << 2U)) 
                                                      | (vlTOPp->in[3U] 
                                                         >> 0x1eU)))) 
                                           & (vlTOPp->in[3U] 
                                              >> 0x1dU)) 
                                          | (IData)(vlTOPp->recF128ToF128__DOT__recFNToFN__DOT__isInf))
                                          ? 0x7fffU
                                          : 0U)) << 0x10U)) 
                     | (0xffffU & ((0x4002U > (0xffffU 
                                               & ((vlTOPp->in[4U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->in[3U] 
                                                     >> 0x10U))))
                                    ? __Vtemp10[3U]
                                    : ((IData)(vlTOPp->recF128ToF128__DOT__recFNToFN__DOT__isInf)
                                        ? 0U : vlTOPp->recF128ToF128__DOT__recFNToFN__DOT__sig[3U]))));
    vlTOPp->out[0U] = ((0x4002U > (0xffffU & ((vlTOPp->in[4U] 
                                               << 0x10U) 
                                              | (vlTOPp->in[3U] 
                                                 >> 0x10U))))
                        ? __Vtemp10[0U] : ((IData)(vlTOPp->recF128ToF128__DOT__recFNToFN__DOT__isInf)
                                            ? 0U : 
                                           vlTOPp->recF128ToF128__DOT__recFNToFN__DOT__sig[0U]));
    vlTOPp->out[1U] = ((0x4002U > (0xffffU & ((vlTOPp->in[4U] 
                                               << 0x10U) 
                                              | (vlTOPp->in[3U] 
                                                 >> 0x10U))))
                        ? __Vtemp10[1U] : ((IData)(vlTOPp->recF128ToF128__DOT__recFNToFN__DOT__isInf)
                                            ? 0U : 
                                           vlTOPp->recF128ToF128__DOT__recFNToFN__DOT__sig[1U]));
    vlTOPp->out[2U] = ((0x4002U > (0xffffU & ((vlTOPp->in[4U] 
                                               << 0x10U) 
                                              | (vlTOPp->in[3U] 
                                                 >> 0x10U))))
                        ? __Vtemp10[2U] : ((IData)(vlTOPp->recF128ToF128__DOT__recFNToFN__DOT__isInf)
                                            ? 0U : 
                                           vlTOPp->recF128ToF128__DOT__recFNToFN__DOT__sig[2U]));
    vlTOPp->out[3U] = ((0x80000000U & (vlTOPp->in[4U] 
                                       << 0x1fU)) | 
                       __Vtemp18[3U]);
}

void VrecF128ToF128::_eval(VrecF128ToF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToF128::_eval\n"); );
    VrecF128ToF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VrecF128ToF128::_eval_initial(VrecF128ToF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToF128::_eval_initial\n"); );
    VrecF128ToF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF128ToF128::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToF128::final\n"); );
    // Variables
    VrecF128ToF128__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecF128ToF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF128ToF128::_eval_settle(VrecF128ToF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToF128::_eval_settle\n"); );
    VrecF128ToF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VrecF128ToF128::_change_request(VrecF128ToF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToF128::_change_request\n"); );
    VrecF128ToF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecF128ToF128::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToF128::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((in[4U] & 0xfffffffeU))) {
        Verilated::overWidthError("in");}
}
#endif // VL_DEBUG

void VrecF128ToF128::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF128ToF128::_ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(129, in);
    VL_RAND_RESET_W(128, out);
    recF128ToF128__DOT__recFNToFN__DOT__isInf = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(114, recF128ToF128__DOT__recFNToFN__DOT__sig);
}
