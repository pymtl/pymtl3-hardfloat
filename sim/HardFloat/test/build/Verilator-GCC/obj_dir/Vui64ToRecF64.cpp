// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vui64ToRecF64.h for the primary calling header

#include "Vui64ToRecF64.h"
#include "Vui64ToRecF64__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vui64ToRecF64) {
    Vui64ToRecF64__Syms* __restrict vlSymsp = __VlSymsp = new Vui64ToRecF64__Syms(this, name());
    Vui64ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vui64ToRecF64::__Vconfigure(Vui64ToRecF64__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vui64ToRecF64::~Vui64ToRecF64() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vui64ToRecF64::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vui64ToRecF64::eval\n"); );
    Vui64ToRecF64__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vui64ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/iNToRecFN_spec.v", 125, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vui64ToRecF64::_eval_initial_loop(Vui64ToRecF64__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/iNToRecFN_spec.v", 125, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vui64ToRecF64::_combo__TOP__1(Vui64ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui64ToRecF64::_combo__TOP__1\n"); );
    Vui64ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2[3];
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp4[3];
    WData/*95:0*/ __Vtemp7[3];
    WData/*95:0*/ __Vtemp8[3];
    WData/*95:0*/ __Vtemp10[3];
    // Body
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffffffe) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (IData)((IData)((1U & (IData)((vlTOPp->in 
                                            >> 0x3fU))))));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffffffd) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x3eU))))) 
              << 1U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffffffb) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x3dU))))) 
              << 2U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffffff7) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x3cU))))) 
              << 3U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffffef) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x3bU))))) 
              << 4U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffffdf) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x3aU))))) 
              << 5U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffffbf) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x39U))))) 
              << 6U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffff7f) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x38U))))) 
              << 7U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffffeff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x37U))))) 
              << 8U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffffdff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x36U))))) 
              << 9U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffffbff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x35U))))) 
              << 0xaU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffff7ff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x34U))))) 
              << 0xbU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffefff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x33U))))) 
              << 0xcU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffdfff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x32U))))) 
              << 0xdU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffbfff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x31U))))) 
              << 0xeU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffff7fff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x30U))))) 
              << 0xfU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffeffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x2fU))))) 
              << 0x10U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffdffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x2eU))))) 
              << 0x11U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffbffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x2dU))))) 
              << 0x12U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffff7ffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x2cU))))) 
              << 0x13U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffefffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x2bU))))) 
              << 0x14U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffdfffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x2aU))))) 
              << 0x15U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffbfffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x29U))))) 
              << 0x16U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffff7fffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x28U))))) 
              << 0x17U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffeffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x27U))))) 
              << 0x18U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffdffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x26U))))) 
              << 0x19U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffbffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x25U))))) 
              << 0x1aU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffff7ffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x24U))))) 
              << 0x1bU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffefffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x23U))))) 
              << 0x1cU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffdfffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x22U))))) 
              << 0x1dU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffbfffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x21U))))) 
              << 0x1eU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffff7fffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x20U))))) 
              << 0x1fU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffeffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x1fU))))) 
              << 0x20U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffdffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x1eU))))) 
              << 0x21U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffbffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x1dU))))) 
              << 0x22U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffff7ffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x1cU))))) 
              << 0x23U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffefffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x1bU))))) 
              << 0x24U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffdfffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x1aU))))) 
              << 0x25U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffbfffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x19U))))) 
              << 0x26U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffff7fffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x18U))))) 
              << 0x27U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffeffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x17U))))) 
              << 0x28U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffdffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x16U))))) 
              << 0x29U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffbffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x15U))))) 
              << 0x2aU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffff7ffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x14U))))) 
              << 0x2bU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffefffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x13U))))) 
              << 0x2cU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffdfffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x12U))))) 
              << 0x2dU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffbfffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x11U))))) 
              << 0x2eU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffff7fffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x10U))))) 
              << 0x2fU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffeffffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0xfU))))) 
              << 0x30U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffdffffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0xeU))))) 
              << 0x31U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffbffffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0xdU))))) 
              << 0x32U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfff7ffffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0xcU))))) 
              << 0x33U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffefffffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0xbU))))) 
              << 0x34U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffdfffffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0xaU))))) 
              << 0x35U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffbfffffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 9U))))) 
              << 0x36U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xff7fffffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 8U))))) 
              << 0x37U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfeffffffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 7U))))) 
              << 0x38U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfdffffffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 6U))))) 
              << 0x39U));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfbffffffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 5U))))) 
              << 0x3aU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xf7ffffffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 4U))))) 
              << 0x3bU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xefffffffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 3U))))) 
              << 0x3cU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xdfffffffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 2U))))) 
              << 0x3dU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xbfffffffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 1U))))) 
              << 0x3eU));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0x7fffffffffffffff) & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)(vlTOPp->in)))) 
              << 0x3fU));
    __Vtemp2[0U] = 1U;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp3, (~ vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn));
    VL_ADD_W(3, __Vtemp4, __Vtemp2, __Vtemp3);
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U] 
        = ((IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn) 
           & __Vtemp4[0U]);
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U] 
        = ((IData)((vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn 
                    >> 0x20U)) & __Vtemp4[1U]);
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U] 
        = (1U & __Vtemp4[2U]);
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((2U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                              ? 1U : 0U) | ((4U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                             ? 2U : 0U)) 
                           | ((8U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                               ? 3U : 0U)) | ((0x10U 
                                               & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                             ? 5U : 0U)) | ((0x40U 
                                             & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                             ? 6U : 0U)) 
                       | ((0x80U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                           ? 7U : 0U)) | ((0x100U & 
                                           vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                           ? 8U : 0U)) 
                     | ((0x200U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                         ? 9U : 0U)) | ((0x400U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                         ? 0xaU : 0U)));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((0x800U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                 ? 0xbU : 0U)) | ((0x1000U 
                                                   & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((0x2000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                               ? 0xdU : 0U)) | ((0x4000U 
                                                 & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((0x8000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                             ? 0xfU : 0U)) | ((0x10000U 
                                               & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                               ? 0x10U
                                               : 0U)) 
                       | ((0x20000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                           ? 0x11U : 0U)) | ((0x40000U 
                                              & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                              ? 0x12U
                                              : 0U)) 
                     | ((0x80000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                         ? 0x13U : 0U)) | ((0x100000U 
                                            & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                            ? 0x14U
                                            : 0U)));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                             | ((0x200000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                 ? 0x15U : 0U)) | (
                                                   (0x400000U 
                                                    & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                                    ? 0x16U
                                                    : 0U)) 
                           | ((0x800000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                               ? 0x17U : 0U)) | ((0x1000000U 
                                                  & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                                  ? 0x18U
                                                  : 0U)) 
                         | ((0x2000000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                             ? 0x19U : 0U)) | ((0x4000000U 
                                                & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                                ? 0x1aU
                                                : 0U)) 
                       | ((0x8000000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                           ? 0x1bU : 0U)) | ((0x10000000U 
                                              & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                              ? 0x1cU
                                              : 0U)) 
                     | ((0x20000000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                         ? 0x1dU : 0U)) | ((0x40000000U 
                                            & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                            ? 0x1eU
                                            : 0U)));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__40__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar) 
                             | ((0x80000000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                 ? 0x1fU : 0U)) | (
                                                   (1U 
                                                    & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                    ? 0x20U
                                                    : 0U)) 
                           | ((2U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                               ? 0x21U : 0U)) | ((4U 
                                                  & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                  ? 0x22U
                                                  : 0U)) 
                         | ((8U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                             ? 0x23U : 0U)) | ((0x10U 
                                                & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                ? 0x24U
                                                : 0U)) 
                       | ((0x20U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                           ? 0x25U : 0U)) | ((0x40U 
                                              & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                              ? 0x26U
                                              : 0U)) 
                     | ((0x80U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                         ? 0x27U : 0U)) | ((0x100U 
                                            & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                            ? 0x28U
                                            : 0U)));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__50__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__40__KET____DOT__countSoFar) 
                             | ((0x200U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                 ? 0x29U : 0U)) | (
                                                   (0x400U 
                                                    & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                    ? 0x2aU
                                                    : 0U)) 
                           | ((0x800U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                               ? 0x2bU : 0U)) | ((0x1000U 
                                                  & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                  ? 0x2cU
                                                  : 0U)) 
                         | ((0x2000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                             ? 0x2dU : 0U)) | ((0x4000U 
                                                & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                ? 0x2eU
                                                : 0U)) 
                       | ((0x8000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                           ? 0x2fU : 0U)) | ((0x10000U 
                                              & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                              ? 0x30U
                                              : 0U)) 
                     | ((0x20000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                         ? 0x31U : 0U)) | ((0x40000U 
                                            & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                            ? 0x32U
                                            : 0U)));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__60__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__50__KET____DOT__countSoFar) 
                             | ((0x80000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                 ? 0x33U : 0U)) | (
                                                   (0x100000U 
                                                    & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                    ? 0x34U
                                                    : 0U)) 
                           | ((0x200000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                               ? 0x35U : 0U)) | ((0x400000U 
                                                  & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                  ? 0x36U
                                                  : 0U)) 
                         | ((0x800000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                             ? 0x37U : 0U)) | ((0x1000000U 
                                                & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                ? 0x38U
                                                : 0U)) 
                       | ((0x2000000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                           ? 0x39U : 0U)) | ((0x4000000U 
                                              & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                              ? 0x3aU
                                              : 0U)) 
                     | ((0x8000000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                         ? 0x3bU : 0U)) | ((0x10000000U 
                                            & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                            ? 0x3cU
                                            : 0U)));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__64__KET____DOT__countSoFar 
        = (0x3fU & (((((IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__60__KET____DOT__countSoFar) 
                       | ((0x20000000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                           ? 0x3dU : 0U)) | ((0x40000000U 
                                              & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                              ? 0x3eU
                                              : 0U)) 
                     | ((0x80000000U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                         ? 0x3fU : 0U)) | ((1U & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                            ? 0x40U
                                            : 0U)));
    VL_EXTEND_WQ(65,64, __Vtemp7, vlTOPp->in);
    VL_SHIFTL_WWI(65,65,6, __Vtemp8, __Vtemp7, (IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__64__KET____DOT__countSoFar));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__sig[0U] 
        = __Vtemp8[0U];
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__sig[1U] 
        = __Vtemp8[1U];
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__sig[2U] 
        = (1U & __Vtemp8[2U]);
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig 
        = ((VL_ULL(0xfffffffffffffe) & (((QData)((IData)(
                                                         vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__sig[2U])) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__sig[1U])) 
                                            << 0x17U) 
                                           | (VL_ULL(0x7ffffffffffffe) 
                                              & ((QData)((IData)(
                                                                 vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__sig[0U])) 
                                                 >> 9U))))) 
           | (QData)((IData)((0U != (0x3ffU & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__sig[0U])))));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__anyRound 
        = ((0U != (2U & (IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig))) 
           | (0U != (1U & (IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig))));
    vlTOPp->exceptionFlags = ((vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__sig[1U] 
                               >> 0x1fU) & (IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__anyRound));
    vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__roundedSig 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->roundingMode)) 
                                          | (4U == (IData)(vlTOPp->roundingMode))) 
                                         & (0U != (2U 
                                                   & (IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig)))) 
                                        | ((3U == (IData)(vlTOPp->roundingMode)) 
                                           & (IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__anyRound)))
                                        ? ((VL_ULL(1) 
                                            + (vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig 
                                               >> 2U)) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (0U 
                                                      != 
                                                      (2U 
                                                       & (IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig)))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (1U 
                                                                 & (IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig))))))
                                                  ? VL_ULL(1)
                                                  : VL_ULL(0))))
                                        : ((VL_ULL(0x3fffffffffffff) 
                                            & (vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig 
                                               >> 2U)) 
                                           | (((6U 
                                                == (IData)(vlTOPp->roundingMode)) 
                                               & (IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__anyRound))
                                               ? VL_ULL(1)
                                               : VL_ULL(0)))));
    VL_EXTEND_WQ(65,64, __Vtemp10, (((QData)((IData)(
                                                     (0xfffU 
                                                      & (((0x1fffU 
                                                           & VL_EXTENDS_II(13,12, 
                                                                           (0xfffU 
                                                                            & ((IData)(0x780U) 
                                                                               + 
                                                                               VL_EXTENDS_II(12,9, 
                                                                                (0x80U 
                                                                                | (0x3fU 
                                                                                & (~ (IData)(vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__64__KET____DOT__countSoFar))))))))) 
                                                          + (IData)(
                                                                    (VL_ULL(0x7fffffffffffff) 
                                                                     & (vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__roundedSig 
                                                                        >> 0x35U)))) 
                                                         & (~ 
                                                            ((0x80000000U 
                                                              & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__sig[1U])
                                                              ? 0U
                                                              : 0xe00U)))))) 
                                     << 0x34U) | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__sig[1U] 
                                                                        >> 0x1fU) 
                                                                       & (IData)(
                                                                                (vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__roundedSig 
                                                                                >> 0x33U)))))) 
                                                   << 0x33U) 
                                                  | ((0x80000000U 
                                                      & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__sig[1U])
                                                      ? 
                                                     (VL_ULL(0x7ffffffffffff) 
                                                      & vlTOPp->ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__roundedSig)
                                                      : VL_ULL(0)))));
    vlTOPp->out[0U] = __Vtemp10[0U];
    vlTOPp->out[1U] = __Vtemp10[1U];
    vlTOPp->out[2U] = __Vtemp10[2U];
}

void Vui64ToRecF64::_eval(Vui64ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui64ToRecF64::_eval\n"); );
    Vui64ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vui64ToRecF64::_eval_initial(Vui64ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui64ToRecF64::_eval_initial\n"); );
    Vui64ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vui64ToRecF64::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui64ToRecF64::final\n"); );
    // Variables
    Vui64ToRecF64__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vui64ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vui64ToRecF64::_eval_settle(Vui64ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui64ToRecF64::_eval_settle\n"); );
    Vui64ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vui64ToRecF64::_change_request(Vui64ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui64ToRecF64::_change_request\n"); );
    Vui64ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vui64ToRecF64::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui64ToRecF64::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif  // VL_DEBUG

void Vui64ToRecF64::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vui64ToRecF64::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_Q(64);
    roundingMode = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(65, out);
    exceptionFlags = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(65, ui64ToRecF64__DOT__iNToRecFN__DOT__sig);
    ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__reverseIn = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn);
    ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__40__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__50__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__60__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    ui64ToRecF64__DOT__iNToRecFN__DOT__iNToRawFN__DOT__countLeadingZeros__DOT__Bit__BRA__64__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__adjustedSig = VL_RAND_RESET_Q(56);
    ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    ui64ToRecF64__DOT__iNToRecFN__DOT__roundRawToOut__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_Q(55);
}
