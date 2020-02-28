// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecF16ToF16.h for the primary calling header

#include "VrecF16ToF16.h"
#include "VrecF16ToF16__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VrecF16ToF16) {
    VrecF16ToF16__Syms* __restrict vlSymsp = __VlSymsp = new VrecF16ToF16__Syms(this, name());
    VrecF16ToF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VrecF16ToF16::__Vconfigure(VrecF16ToF16__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VrecF16ToF16::~VrecF16ToF16() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VrecF16ToF16::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecF16ToF16::eval\n"); );
    VrecF16ToF16__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecF16ToF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/recFNToFN_spec.v", 37, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VrecF16ToF16::_eval_initial_loop(VrecF16ToF16__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/recFNToFN_spec.v", 37, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VrecF16ToF16::_combo__TOP__1(VrecF16ToF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToF16::_combo__TOP__1\n"); );
    VrecF16ToF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->recF16ToF16__DOT__recFNToFN__DOT__isInf 
        = ((3U == (3U & (vlTOPp->in >> 0xeU))) & (~ 
                                                  (vlTOPp->in 
                                                   >> 0xdU)));
    vlTOPp->recF16ToF16__DOT__recFNToFN__DOT__sig = 
        (((0U != (7U & (vlTOPp->in >> 0xdU))) << 0xaU) 
         | (0x3ffU & vlTOPp->in));
    vlTOPp->out = ((0x8000U & (vlTOPp->in >> 1U)) | 
                   ((0x7c00U & ((((0x12U > (0x3fU & 
                                            (vlTOPp->in 
                                             >> 0xaU)))
                                   ? 0U : ((IData)(1U) 
                                           + ((0x3fU 
                                               & (vlTOPp->in 
                                                  >> 0xaU)) 
                                              - (IData)(0x12U)))) 
                                 | ((((3U == (3U & 
                                              (vlTOPp->in 
                                               >> 0xeU))) 
                                      & (vlTOPp->in 
                                         >> 0xdU)) 
                                     | (IData)(vlTOPp->recF16ToF16__DOT__recFNToFN__DOT__isInf))
                                     ? 0x1fU : 0U)) 
                                << 0xaU)) | (0x3ffU 
                                             & ((0x12U 
                                                 > 
                                                 (0x3fU 
                                                  & (vlTOPp->in 
                                                     >> 0xaU)))
                                                 ? 
                                                (((IData)(vlTOPp->recF16ToF16__DOT__recFNToFN__DOT__sig) 
                                                  >> 1U) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(1U) 
                                                     - 
                                                     (0x3fU 
                                                      & (vlTOPp->in 
                                                         >> 0xaU)))))
                                                 : 
                                                ((IData)(vlTOPp->recF16ToF16__DOT__recFNToFN__DOT__isInf)
                                                  ? 0U
                                                  : (IData)(vlTOPp->recF16ToF16__DOT__recFNToFN__DOT__sig))))));
}

void VrecF16ToF16::_eval(VrecF16ToF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToF16::_eval\n"); );
    VrecF16ToF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VrecF16ToF16::_eval_initial(VrecF16ToF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToF16::_eval_initial\n"); );
    VrecF16ToF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF16ToF16::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToF16::final\n"); );
    // Variables
    VrecF16ToF16__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecF16ToF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecF16ToF16::_eval_settle(VrecF16ToF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToF16::_eval_settle\n"); );
    VrecF16ToF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VrecF16ToF16::_change_request(VrecF16ToF16__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToF16::_change_request\n"); );
    VrecF16ToF16* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecF16ToF16::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToF16::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((in & 0xfffe0000U))) {
        Verilated::overWidthError("in");}
}
#endif  // VL_DEBUG

void VrecF16ToF16::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecF16ToF16::_ctor_var_reset\n"); );
    // Body
    in = VL_RAND_RESET_I(17);
    out = VL_RAND_RESET_I(16);
    recF16ToF16__DOT__recFNToFN__DOT__isInf = VL_RAND_RESET_I(1);
    recF16ToF16__DOT__recFNToFN__DOT__sig = VL_RAND_RESET_I(12);
}
