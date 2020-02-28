// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecF32ToF32.h for the primary calling header

#include "VrecF32ToF32.h"
#include "VrecF32ToF32__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VrecF32ToF32) {
    VrecF32ToF32__Syms* __restrict vlSymsp = __VlSymsp = new VrecF32ToF32__Syms(this, name());
    VrecF32ToF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VrecF32ToF32::__Vconfigure(VrecF32ToF32__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VrecF32ToF32::~VrecF32ToF32() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VrecF32ToF32::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecF32ToF32::eval\n"); );
    VrecF32ToF32__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecF32ToF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/recFNToFN_spec.v", 43, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VrecF32ToF32::_eval_initial_loop(VrecF32ToF32__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/recFNToFN_spec.v", 43, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VrecF32ToF32::_combo__TOP__1(VrecF32ToF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToF32::_combo__TOP__1\n"); );
    VrecF32ToF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->recF32ToF32__DOT__recFNToFN__DOT__isInf 
        = ((3U == (3U & ((IData)((vlTOPp->in >> 0x17U)) 
                         >> 7U))) & (~ (IData)((vlTOPp->in 
                                                >> 0x1dU))));
    vlTOPp->recF32ToF32__DOT__recFNToFN__DOT__sig = 
        (((0U != (7U & ((IData)((vlTOPp->in >> 0x17U)) 
                        >> 6U))) << 0x17U) | (0x7fffffU 
                                              & (IData)(vlTOPp->in)));
    vlTOPp->out = ((0x80000000U & ((IData)((vlTOPp->in 
                                            >> 0x20U)) 
                                   << 0x1fU)) | ((0x7f800000U 
                                                  & ((((0x82U 
                                                        > 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlTOPp->in 
                                                                    >> 0x17U))))
                                                        ? 0U
                                                        : 
                                                       ((IData)(1U) 
                                                        + 
                                                        ((0x1ffU 
                                                          & (IData)(
                                                                    (vlTOPp->in 
                                                                     >> 0x17U))) 
                                                         - (IData)(0x82U)))) 
                                                      | ((((3U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(
                                                                        (vlTOPp->in 
                                                                         >> 0x17U)) 
                                                                >> 7U))) 
                                                           & (IData)(
                                                                     (vlTOPp->in 
                                                                      >> 0x1dU))) 
                                                          | (IData)(vlTOPp->recF32ToF32__DOT__recFNToFN__DOT__isInf))
                                                          ? 0xffU
                                                          : 0U)) 
                                                     << 0x17U)) 
                                                 | (0x7fffffU 
                                                    & ((0x82U 
                                                        > 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlTOPp->in 
                                                                    >> 0x17U))))
                                                        ? 
                                                       ((vlTOPp->recF32ToF32__DOT__recFNToFN__DOT__sig 
                                                         >> 1U) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            - 
                                                            (0x1ffU 
                                                             & (IData)(
                                                                       (vlTOPp->in 
                                                                        >> 0x17U))))))
                                                        : 
                                                       ((IData)(vlTOPp->recF32ToF32__DOT__recFNToFN__DOT__isInf)
                                                         ? 0U
                                                         : vlTOPp->recF32ToF32__DOT__recFNToFN__DOT__sig)))));
}

void VrecF32ToF32::_eval(VrecF32ToF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToF32::_eval\n"); );
    VrecF32ToF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VrecF32ToF32::_eval_initial(VrecF32ToF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToF32::_eval_initial\n"); );
    VrecF32ToF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF32ToF32::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToF32::final\n"); );
    // Variables
    VrecF32ToF32__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecF32ToF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF32ToF32::_eval_settle(VrecF32ToF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToF32::_eval_settle\n"); );
    VrecF32ToF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VrecF32ToF32::_change_request(VrecF32ToF32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToF32::_change_request\n"); );
    VrecF32ToF32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecF32ToF32::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToF32::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((in & VL_ULL(0)))) {
        Verilated::overWidthError("in");}
}
#endif  // VL_DEBUG

void VrecF32ToF32::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF32ToF32::_ctor_var_reset\n"); );
    // Body
    in = VL_RAND_RESET_Q(33);
    out = VL_RAND_RESET_I(32);
    recF32ToF32__DOT__recFNToFN__DOT__isInf = VL_RAND_RESET_I(1);
    recF32ToF32__DOT__recFNToFN__DOT__sig = VL_RAND_RESET_I(25);
}
