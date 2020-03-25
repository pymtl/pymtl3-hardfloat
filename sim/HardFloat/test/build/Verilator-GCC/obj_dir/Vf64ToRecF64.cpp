// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf64ToRecF64.h for the primary calling header

#include "Vf64ToRecF64.h"
#include "Vf64ToRecF64__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vf64ToRecF64) {
    Vf64ToRecF64__Syms* __restrict vlSymsp = __VlSymsp = new Vf64ToRecF64__Syms(this, name());
    Vf64ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vf64ToRecF64::__Vconfigure(Vf64ToRecF64__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vf64ToRecF64::~Vf64ToRecF64() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vf64ToRecF64::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vf64ToRecF64::eval\n"); );
    Vf64ToRecF64__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vf64ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/fNToRecFN_spec.v", 49, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vf64ToRecF64::_eval_initial_loop(Vf64ToRecF64__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/fNToRecFN_spec.v", 49, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vf64ToRecF64::_combo__TOP__1(Vf64ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf64ToRecF64::_combo__TOP__1\n"); );
    Vf64ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffe) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | (IData)((IData)((1U & (IData)((vlTOPp->in 
                                            >> 0x33U))))));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffd) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x32U))))) 
              << 1U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffffb) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x31U))))) 
              << 2U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffff7) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x30U))))) 
              << 3U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffef) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x2fU))))) 
              << 4U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffdf) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x2eU))))) 
              << 5U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffffbf) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x2dU))))) 
              << 6U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffff7f) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x2cU))))) 
              << 7U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffeff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x2bU))))) 
              << 8U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffdff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x2aU))))) 
              << 9U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffffbff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x29U))))) 
              << 0xaU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffff7ff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x28U))))) 
              << 0xbU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffefff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x27U))))) 
              << 0xcU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffdfff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x26U))))) 
              << 0xdU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffffbfff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x25U))))) 
              << 0xeU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffff7fff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x24U))))) 
              << 0xfU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffeffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x23U))))) 
              << 0x10U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffdffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x22U))))) 
              << 0x11U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffffbffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x21U))))) 
              << 0x12U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffff7ffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x20U))))) 
              << 0x13U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffefffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x1fU))))) 
              << 0x14U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffdfffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x1eU))))) 
              << 0x15U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffffbfffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x1dU))))) 
              << 0x16U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffff7fffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x1cU))))) 
              << 0x17U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffeffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x1bU))))) 
              << 0x18U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffdffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x1aU))))) 
              << 0x19U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffffbffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x19U))))) 
              << 0x1aU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffff7ffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x18U))))) 
              << 0x1bU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffefffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x17U))))) 
              << 0x1cU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffdfffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x16U))))) 
              << 0x1dU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffffbfffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x15U))))) 
              << 0x1eU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffff7fffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x14U))))) 
              << 0x1fU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffeffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x13U))))) 
              << 0x20U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffdffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x12U))))) 
              << 0x21U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffffbffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x11U))))) 
              << 0x22U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffff7ffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0x10U))))) 
              << 0x23U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffefffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0xfU))))) 
              << 0x24U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffdfffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0xeU))))) 
              << 0x25U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfffbfffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0xdU))))) 
              << 0x26U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfff7fffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0xcU))))) 
              << 0x27U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffeffffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0xbU))))) 
              << 0x28U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffdffffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 0xaU))))) 
              << 0x29U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xffbffffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 9U))))) 
              << 0x2aU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xff7ffffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 8U))))) 
              << 0x2bU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfefffffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 7U))))) 
              << 0x2cU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfdfffffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 6U))))) 
              << 0x2dU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xfbfffffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 5U))))) 
              << 0x2eU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xf7fffffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 4U))))) 
              << 0x2fU));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xeffffffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 3U))))) 
              << 0x30U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xdffffffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 2U))))) 
              << 0x31U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0xbffffffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->in 
                                             >> 1U))))) 
              << 0x32U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn 
        = ((VL_ULL(0x7ffffffffffff) & vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)(vlTOPp->in)))) 
              << 0x33U));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((VL_ULL(0x10000000000000) | vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn) 
           & (VL_ULL(1) + (VL_ULL(0xfffffffffffff) 
                           & (~ vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn))));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                            >> 1U)))
                              ? 1U : 0U) | ((1U & (IData)(
                                                          (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                           >> 2U)))
                                             ? 2U : 0U)) 
                           | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                             >> 3U)))
                               ? 3U : 0U)) | ((1U & (IData)(
                                                            (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                             >> 4U)))
                                               ? 4U
                                               : 0U)) 
                         | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                           >> 5U)))
                             ? 5U : 0U)) | ((1U & (IData)(
                                                          (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                           >> 6U)))
                                             ? 6U : 0U)) 
                       | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                         >> 7U))) ? 7U
                           : 0U)) | ((1U & (IData)(
                                                   (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                    >> 8U)))
                                      ? 8U : 0U)) | 
                     ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                     >> 9U))) ? 9U : 0U)) 
                    | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                      >> 0xaU))) ? 0xaU
                        : 0U)));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                               >> 0xbU)))
                                 ? 0xbU : 0U)) | ((1U 
                                                   & (IData)(
                                                             (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                              >> 0xcU)))
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                             >> 0xdU)))
                               ? 0xdU : 0U)) | ((1U 
                                                 & (IData)(
                                                           (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                            >> 0xeU)))
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                           >> 0xfU)))
                             ? 0xfU : 0U)) | ((1U & (IData)(
                                                            (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                             >> 0x10U)))
                                               ? 0x10U
                                               : 0U)) 
                       | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                         >> 0x11U)))
                           ? 0x11U : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                            >> 0x12U)))
                                              ? 0x12U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                       >> 0x13U))) ? 0x13U
                         : 0U)) | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                  >> 0x14U)))
                                    ? 0x14U : 0U)));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                               >> 0x15U)))
                                 ? 0x15U : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                               >> 0x16U)))
                                                    ? 0x16U
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                             >> 0x17U)))
                               ? 0x17U : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                             >> 0x18U)))
                                                  ? 0x18U
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                           >> 0x19U)))
                             ? 0x19U : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                           >> 0x1aU)))
                                                ? 0x1aU
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                         >> 0x1bU)))
                           ? 0x1bU : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                            >> 0x1cU)))
                                              ? 0x1cU
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                       >> 0x1dU))) ? 0x1dU
                         : 0U)) | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                  >> 0x1eU)))
                                    ? 0x1eU : 0U)));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__40__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                               >> 0x1fU)))
                                 ? 0x1fU : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                               >> 0x20U)))
                                                    ? 0x20U
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                             >> 0x21U)))
                               ? 0x21U : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                             >> 0x22U)))
                                                  ? 0x22U
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                           >> 0x23U)))
                             ? 0x23U : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                           >> 0x24U)))
                                                ? 0x24U
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                         >> 0x25U)))
                           ? 0x25U : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                            >> 0x26U)))
                                              ? 0x26U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                       >> 0x27U))) ? 0x27U
                         : 0U)) | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                  >> 0x28U)))
                                    ? 0x28U : 0U)));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__50__KET____DOT__countSoFar 
        = (0x3fU & (((((((((((IData)(vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__40__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                               >> 0x29U)))
                                 ? 0x29U : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                               >> 0x2aU)))
                                                    ? 0x2aU
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                             >> 0x2bU)))
                               ? 0x2bU : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                             >> 0x2cU)))
                                                  ? 0x2cU
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                           >> 0x2dU)))
                             ? 0x2dU : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                           >> 0x2eU)))
                                                ? 0x2eU
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                         >> 0x2fU)))
                           ? 0x2fU : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                            >> 0x30U)))
                                              ? 0x30U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                       >> 0x31U))) ? 0x31U
                         : 0U)) | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                  >> 0x32U)))
                                    ? 0x32U : 0U)));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__52__KET____DOT__countSoFar 
        = (0x3fU & (((IData)(vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__50__KET____DOT__countSoFar) 
                     | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                       >> 0x33U))) ? 0x33U
                         : 0U)) | ((1U & (IData)((vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
                                                  >> 0x34U)))
                                    ? 0x34U : 0U)));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__adjustedExp 
        = (0xfffU & (((0U == (0x7ffU & (IData)((vlTOPp->in 
                                                >> 0x34U))))
                       ? (0xfffU ^ (IData)(vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__52__KET____DOT__countSoFar))
                       : (0x7ffU & (IData)((vlTOPp->in 
                                            >> 0x34U)))) 
                     + (0x400U | ((0U == (0x7ffU & (IData)(
                                                           (vlTOPp->in 
                                                            >> 0x34U))))
                                   ? 2U : 1U))));
    vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__exp = 
        ((0xe00U & (((3U == (3U & ((IData)(vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__adjustedExp) 
                                   >> 0xaU))) ? (6U 
                                                 | (VL_ULL(0) 
                                                    != 
                                                    (VL_ULL(0xfffffffffffff) 
                                                     & vlTOPp->in)))
                      : (((0U == (0x7ffU & (IData)(
                                                   (vlTOPp->in 
                                                    >> 0x34U)))) 
                          & (VL_ULL(0) == (VL_ULL(0xfffffffffffff) 
                                           & vlTOPp->in)))
                          ? 0U : ((IData)(vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__adjustedExp) 
                                  >> 9U))) << 9U)) 
         | (0x1ffU & (IData)(vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__adjustedExp)));
    vlTOPp->out[0U] = (IData)((((QData)((IData)(vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__exp)) 
                                << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                             & ((0U 
                                                 == 
                                                 (0x7ffU 
                                                  & (IData)(
                                                            (vlTOPp->in 
                                                             >> 0x34U))))
                                                 ? 
                                                ((vlTOPp->in 
                                                  << (IData)(vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__52__KET____DOT__countSoFar)) 
                                                 << 1U)
                                                 : vlTOPp->in))));
    vlTOPp->out[1U] = (IData)(((((QData)((IData)(vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__exp)) 
                                 << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                              & ((0U 
                                                  == 
                                                  (0x7ffU 
                                                   & (IData)(
                                                             (vlTOPp->in 
                                                              >> 0x34U))))
                                                  ? 
                                                 ((vlTOPp->in 
                                                   << (IData)(vlTOPp->f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__52__KET____DOT__countSoFar)) 
                                                  << 1U)
                                                  : vlTOPp->in))) 
                               >> 0x20U));
    vlTOPp->out[2U] = (1U & (IData)((vlTOPp->in >> 0x3fU)));
}

void Vf64ToRecF64::_eval(Vf64ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf64ToRecF64::_eval\n"); );
    Vf64ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vf64ToRecF64::_eval_initial(Vf64ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf64ToRecF64::_eval_initial\n"); );
    Vf64ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vf64ToRecF64::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf64ToRecF64::final\n"); );
    // Variables
    Vf64ToRecF64__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vf64ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vf64ToRecF64::_eval_settle(Vf64ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf64ToRecF64::_eval_settle\n"); );
    Vf64ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vf64ToRecF64::_change_request(Vf64ToRecF64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf64ToRecF64::_change_request\n"); );
    Vf64ToRecF64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vf64ToRecF64::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf64ToRecF64::_eval_debug_assertions\n"); );
}
#endif // VL_DEBUG

void Vf64ToRecF64::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf64ToRecF64::_ctor_var_reset\n"); );
    // Body
    in = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, out);
    f64ToRecF64__DOT__fNToRecFN__DOT__adjustedExp = VL_RAND_RESET_I(12);
    f64ToRecF64__DOT__fNToRecFN__DOT__exp = VL_RAND_RESET_I(12);
    f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn = VL_RAND_RESET_Q(52);
    f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn = VL_RAND_RESET_Q(53);
    f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__40__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__50__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
    f64ToRecF64__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__52__KET____DOT__countSoFar = VL_RAND_RESET_I(6);
}
