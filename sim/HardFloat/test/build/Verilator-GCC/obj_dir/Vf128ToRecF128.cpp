// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf128ToRecF128.h for the primary calling header

#include "Vf128ToRecF128.h"
#include "Vf128ToRecF128__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vf128ToRecF128) {
    Vf128ToRecF128__Syms* __restrict vlSymsp = __VlSymsp = new Vf128ToRecF128__Syms(this, name());
    Vf128ToRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vf128ToRecF128::__Vconfigure(Vf128ToRecF128__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vf128ToRecF128::~Vf128ToRecF128() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vf128ToRecF128::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vf128ToRecF128::eval\n"); );
    Vf128ToRecF128__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vf128ToRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/fNToRecFN_spec.v", 55, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vf128ToRecF128::_eval_initial_loop(Vf128ToRecF128__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/fNToRecFN_spec.v", 55, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vf128ToRecF128::_combo__TOP__1(Vf128ToRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf128ToRecF128::_combo__TOP__1\n"); );
    Vf128ToRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp2[4];
    WData/*127:0*/ __Vtemp5[4];
    WData/*127:0*/ __Vtemp6[4];
    WData/*127:0*/ __Vtemp7[4];
    WData/*127:0*/ __Vtemp18[4];
    WData/*127:0*/ __Vtemp19[4];
    WData/*127:0*/ __Vtemp20[4];
    // Body
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xfffffffeU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (1U & (vlTOPp->in[3U] >> 0xfU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xfffffffdU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (2U & (vlTOPp->in[3U] >> 0xdU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xfffffffbU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (4U & (vlTOPp->in[3U] >> 0xbU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xfffffff7U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (8U & (vlTOPp->in[3U] >> 9U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xffffffefU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x10U & (vlTOPp->in[3U] >> 7U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xffffffdfU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x20U & (vlTOPp->in[3U] >> 5U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xffffffbfU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x40U & (vlTOPp->in[3U] >> 3U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xffffff7fU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x80U & (vlTOPp->in[3U] >> 1U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xfffffeffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x100U & (vlTOPp->in[3U] << 1U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xfffffdffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x200U & (vlTOPp->in[3U] << 3U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xfffffbffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x400U & (vlTOPp->in[3U] << 5U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xfffff7ffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x800U & (vlTOPp->in[3U] << 7U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xffffefffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x1000U & (vlTOPp->in[3U] << 9U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xffffdfffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x2000U & (vlTOPp->in[3U] << 0xbU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xffffbfffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x4000U & (vlTOPp->in[3U] << 0xdU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xffff7fffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x8000U & (vlTOPp->in[3U] << 0xfU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xfffeffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x10000U & (vlTOPp->in[2U] >> 0xfU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xfffdffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x20000U & (vlTOPp->in[2U] >> 0xdU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xfffbffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x40000U & (vlTOPp->in[2U] >> 0xbU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xfff7ffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x80000U & (vlTOPp->in[2U] >> 9U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xffefffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x100000U & (vlTOPp->in[2U] >> 7U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xffdfffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x200000U & (vlTOPp->in[2U] >> 5U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xffbfffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x400000U & (vlTOPp->in[2U] >> 3U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xff7fffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x800000U & (vlTOPp->in[2U] >> 1U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xfeffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x1000000U & (vlTOPp->in[2U] << 1U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xfdffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x2000000U & (vlTOPp->in[2U] << 3U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xfbffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x4000000U & (vlTOPp->in[2U] << 5U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xf7ffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x8000000U & (vlTOPp->in[2U] << 7U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xefffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x10000000U & (vlTOPp->in[2U] << 9U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xdfffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x20000000U & (vlTOPp->in[2U] << 0xbU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0xbfffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x40000000U & (vlTOPp->in[2U] << 0xdU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
        = ((0x7fffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]) 
           | (0x80000000U & (vlTOPp->in[2U] << 0xfU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xfffffffeU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (1U & (vlTOPp->in[2U] >> 0xfU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xfffffffdU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (2U & (vlTOPp->in[2U] >> 0xdU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xfffffffbU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (4U & (vlTOPp->in[2U] >> 0xbU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xfffffff7U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (8U & (vlTOPp->in[2U] >> 9U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xffffffefU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x10U & (vlTOPp->in[2U] >> 7U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xffffffdfU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x20U & (vlTOPp->in[2U] >> 5U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xffffffbfU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x40U & (vlTOPp->in[2U] >> 3U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xffffff7fU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x80U & (vlTOPp->in[2U] >> 1U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xfffffeffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x100U & (vlTOPp->in[2U] << 1U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xfffffdffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x200U & (vlTOPp->in[2U] << 3U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xfffffbffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x400U & (vlTOPp->in[2U] << 5U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xfffff7ffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x800U & (vlTOPp->in[2U] << 7U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xffffefffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x1000U & (vlTOPp->in[2U] << 9U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xffffdfffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x2000U & (vlTOPp->in[2U] << 0xbU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xffffbfffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x4000U & (vlTOPp->in[2U] << 0xdU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xffff7fffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x8000U & (vlTOPp->in[2U] << 0xfU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xfffeffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x10000U & (vlTOPp->in[1U] >> 0xfU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xfffdffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x20000U & (vlTOPp->in[1U] >> 0xdU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xfffbffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x40000U & (vlTOPp->in[1U] >> 0xbU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xfff7ffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x80000U & (vlTOPp->in[1U] >> 9U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xffefffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x100000U & (vlTOPp->in[1U] >> 7U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xffdfffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x200000U & (vlTOPp->in[1U] >> 5U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xffbfffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x400000U & (vlTOPp->in[1U] >> 3U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xff7fffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x800000U & (vlTOPp->in[1U] >> 1U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xfeffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x1000000U & (vlTOPp->in[1U] << 1U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xfdffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x2000000U & (vlTOPp->in[1U] << 3U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xfbffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x4000000U & (vlTOPp->in[1U] << 5U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xf7ffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x8000000U & (vlTOPp->in[1U] << 7U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xefffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x10000000U & (vlTOPp->in[1U] << 9U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xdfffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x20000000U & (vlTOPp->in[1U] << 0xbU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0xbfffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x40000000U & (vlTOPp->in[1U] << 0xdU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
        = ((0x7fffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]) 
           | (0x80000000U & (vlTOPp->in[1U] << 0xfU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xfffffffeU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (1U & (vlTOPp->in[1U] >> 0xfU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xfffffffdU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (2U & (vlTOPp->in[1U] >> 0xdU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xfffffffbU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (4U & (vlTOPp->in[1U] >> 0xbU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xfffffff7U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (8U & (vlTOPp->in[1U] >> 9U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xffffffefU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x10U & (vlTOPp->in[1U] >> 7U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xffffffdfU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x20U & (vlTOPp->in[1U] >> 5U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xffffffbfU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x40U & (vlTOPp->in[1U] >> 3U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xffffff7fU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x80U & (vlTOPp->in[1U] >> 1U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xfffffeffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x100U & (vlTOPp->in[1U] << 1U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xfffffdffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x200U & (vlTOPp->in[1U] << 3U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xfffffbffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x400U & (vlTOPp->in[1U] << 5U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xfffff7ffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x800U & (vlTOPp->in[1U] << 7U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xffffefffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x1000U & (vlTOPp->in[1U] << 9U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xffffdfffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x2000U & (vlTOPp->in[1U] << 0xbU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xffffbfffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x4000U & (vlTOPp->in[1U] << 0xdU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xffff7fffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x8000U & (vlTOPp->in[1U] << 0xfU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xfffeffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x10000U & (vlTOPp->in[0U] >> 0xfU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xfffdffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x20000U & (vlTOPp->in[0U] >> 0xdU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xfffbffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x40000U & (vlTOPp->in[0U] >> 0xbU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xfff7ffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x80000U & (vlTOPp->in[0U] >> 9U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xffefffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x100000U & (vlTOPp->in[0U] >> 7U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xffdfffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x200000U & (vlTOPp->in[0U] >> 5U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xffbfffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x400000U & (vlTOPp->in[0U] >> 3U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xff7fffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x800000U & (vlTOPp->in[0U] >> 1U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xfeffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x1000000U & (vlTOPp->in[0U] << 1U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xfdffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x2000000U & (vlTOPp->in[0U] << 3U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xfbffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x4000000U & (vlTOPp->in[0U] << 5U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xf7ffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x8000000U & (vlTOPp->in[0U] << 7U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xefffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x10000000U & (vlTOPp->in[0U] << 9U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xdfffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x20000000U & (vlTOPp->in[0U] << 0xbU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0xbfffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x40000000U & (vlTOPp->in[0U] << 0xdU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
        = ((0x7fffffffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]) 
           | (0x80000000U & (vlTOPp->in[0U] << 0xfU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U] 
        = ((0xfffeU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           | (1U & (vlTOPp->in[0U] >> 0xfU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U] 
        = ((0xfffdU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           | (2U & (vlTOPp->in[0U] >> 0xdU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U] 
        = ((0xfffbU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           | (4U & (vlTOPp->in[0U] >> 0xbU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U] 
        = ((0xfff7U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           | (8U & (vlTOPp->in[0U] >> 9U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U] 
        = ((0xffefU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           | (0x10U & (vlTOPp->in[0U] >> 7U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U] 
        = ((0xffdfU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           | (0x20U & (vlTOPp->in[0U] >> 5U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U] 
        = ((0xffbfU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           | (0x40U & (vlTOPp->in[0U] >> 3U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U] 
        = ((0xff7fU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           | (0x80U & (vlTOPp->in[0U] >> 1U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U] 
        = ((0xfeffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           | (0x100U & (vlTOPp->in[0U] << 1U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U] 
        = ((0xfdffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           | (0x200U & (vlTOPp->in[0U] << 3U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U] 
        = ((0xfbffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           | (0x400U & (vlTOPp->in[0U] << 5U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U] 
        = ((0xf7ffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           | (0x800U & (vlTOPp->in[0U] << 7U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U] 
        = ((0xefffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           | (0x1000U & (vlTOPp->in[0U] << 9U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U] 
        = ((0xdfffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           | (0x2000U & (vlTOPp->in[0U] << 0xbU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U] 
        = ((0xbfffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           | (0x4000U & (vlTOPp->in[0U] << 0xdU)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U] 
        = ((0x7fffU & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           | (0x8000U & (vlTOPp->in[0U] << 0xfU)));
    __Vtemp2[0U] = 1U;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 0U;
    __Vtemp2[3U] = 0U;
    __Vtemp5[0U] = (~ vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U]);
    __Vtemp5[1U] = (~ vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U]);
    __Vtemp5[2U] = (~ vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U]);
    __Vtemp5[3U] = (0xffffU & (~ vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]));
    VL_EXTEND_WW(113,112, __Vtemp6, __Vtemp5);
    VL_ADD_W(4, __Vtemp7, __Vtemp2, __Vtemp6);
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U] 
        = (vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[0U] 
           & __Vtemp7[0U]);
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U] 
        = (vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[1U] 
           & __Vtemp7[1U]);
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U] 
        = (vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[2U] 
           & __Vtemp7[2U]);
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U] 
        = ((0x10000U | vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn[3U]) 
           & __Vtemp7[3U]);
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((2U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                              ? 1U : 0U) | ((4U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                             ? 2U : 0U)) 
                           | ((8U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                               ? 3U : 0U)) | ((0x10U 
                                               & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                             ? 5U : 0U)) | ((0x40U 
                                             & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                             ? 6U : 0U)) 
                       | ((0x80U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                           ? 7U : 0U)) | ((0x100U & 
                                           vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                           ? 8U : 0U)) 
                     | ((0x200U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                         ? 9U : 0U)) | ((0x400U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                         ? 0xaU : 0U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((0x800U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                 ? 0xbU : 0U)) | ((0x1000U 
                                                   & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((0x2000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                               ? 0xdU : 0U)) | ((0x4000U 
                                                 & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((0x8000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                             ? 0xfU : 0U)) | ((0x10000U 
                                               & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                               ? 0x10U
                                               : 0U)) 
                       | ((0x20000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                           ? 0x11U : 0U)) | ((0x40000U 
                                              & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                              ? 0x12U
                                              : 0U)) 
                     | ((0x80000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                         ? 0x13U : 0U)) | ((0x100000U 
                                            & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                            ? 0x14U
                                            : 0U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                             | ((0x200000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                 ? 0x15U : 0U)) | (
                                                   (0x400000U 
                                                    & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                                    ? 0x16U
                                                    : 0U)) 
                           | ((0x800000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                               ? 0x17U : 0U)) | ((0x1000000U 
                                                  & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                                  ? 0x18U
                                                  : 0U)) 
                         | ((0x2000000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                             ? 0x19U : 0U)) | ((0x4000000U 
                                                & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                                ? 0x1aU
                                                : 0U)) 
                       | ((0x8000000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                           ? 0x1bU : 0U)) | ((0x10000000U 
                                              & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                              ? 0x1cU
                                              : 0U)) 
                     | ((0x20000000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                         ? 0x1dU : 0U)) | ((0x40000000U 
                                            & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                            ? 0x1eU
                                            : 0U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__40__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar) 
                             | ((0x80000000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[0U])
                                 ? 0x1fU : 0U)) | (
                                                   (1U 
                                                    & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                    ? 0x20U
                                                    : 0U)) 
                           | ((2U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                               ? 0x21U : 0U)) | ((4U 
                                                  & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                  ? 0x22U
                                                  : 0U)) 
                         | ((8U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                             ? 0x23U : 0U)) | ((0x10U 
                                                & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                ? 0x24U
                                                : 0U)) 
                       | ((0x20U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                           ? 0x25U : 0U)) | ((0x40U 
                                              & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                              ? 0x26U
                                              : 0U)) 
                     | ((0x80U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                         ? 0x27U : 0U)) | ((0x100U 
                                            & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                            ? 0x28U
                                            : 0U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__50__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__40__KET____DOT__countSoFar) 
                             | ((0x200U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                 ? 0x29U : 0U)) | (
                                                   (0x400U 
                                                    & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                    ? 0x2aU
                                                    : 0U)) 
                           | ((0x800U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                               ? 0x2bU : 0U)) | ((0x1000U 
                                                  & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                  ? 0x2cU
                                                  : 0U)) 
                         | ((0x2000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                             ? 0x2dU : 0U)) | ((0x4000U 
                                                & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                ? 0x2eU
                                                : 0U)) 
                       | ((0x8000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                           ? 0x2fU : 0U)) | ((0x10000U 
                                              & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                              ? 0x30U
                                              : 0U)) 
                     | ((0x20000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                         ? 0x31U : 0U)) | ((0x40000U 
                                            & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                            ? 0x32U
                                            : 0U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__60__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__50__KET____DOT__countSoFar) 
                             | ((0x80000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                 ? 0x33U : 0U)) | (
                                                   (0x100000U 
                                                    & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                    ? 0x34U
                                                    : 0U)) 
                           | ((0x200000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                               ? 0x35U : 0U)) | ((0x400000U 
                                                  & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                  ? 0x36U
                                                  : 0U)) 
                         | ((0x800000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                             ? 0x37U : 0U)) | ((0x1000000U 
                                                & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                ? 0x38U
                                                : 0U)) 
                       | ((0x2000000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                           ? 0x39U : 0U)) | ((0x4000000U 
                                              & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                              ? 0x3aU
                                              : 0U)) 
                     | ((0x8000000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                         ? 0x3bU : 0U)) | ((0x10000000U 
                                            & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                            ? 0x3cU
                                            : 0U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__70__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__60__KET____DOT__countSoFar) 
                             | ((0x20000000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                 ? 0x3dU : 0U)) | (
                                                   (0x40000000U 
                                                    & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                                                    ? 0x3eU
                                                    : 0U)) 
                           | ((0x80000000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[1U])
                               ? 0x3fU : 0U)) | ((1U 
                                                  & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                                  ? 0x40U
                                                  : 0U)) 
                         | ((2U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                             ? 0x41U : 0U)) | ((4U 
                                                & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                                ? 0x42U
                                                : 0U)) 
                       | ((8U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                           ? 0x43U : 0U)) | ((0x10U 
                                              & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                              ? 0x44U
                                              : 0U)) 
                     | ((0x20U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                         ? 0x45U : 0U)) | ((0x40U & 
                                            vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                            ? 0x46U
                                            : 0U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__80__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__70__KET____DOT__countSoFar) 
                             | ((0x80U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                 ? 0x47U : 0U)) | (
                                                   (0x100U 
                                                    & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                                    ? 0x48U
                                                    : 0U)) 
                           | ((0x200U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                               ? 0x49U : 0U)) | ((0x400U 
                                                  & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                                  ? 0x4aU
                                                  : 0U)) 
                         | ((0x800U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                             ? 0x4bU : 0U)) | ((0x1000U 
                                                & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                                ? 0x4cU
                                                : 0U)) 
                       | ((0x2000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                           ? 0x4dU : 0U)) | ((0x4000U 
                                              & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                              ? 0x4eU
                                              : 0U)) 
                     | ((0x8000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                         ? 0x4fU : 0U)) | ((0x10000U 
                                            & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                            ? 0x50U
                                            : 0U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__90__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__80__KET____DOT__countSoFar) 
                             | ((0x20000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                 ? 0x51U : 0U)) | (
                                                   (0x40000U 
                                                    & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                                    ? 0x52U
                                                    : 0U)) 
                           | ((0x80000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                               ? 0x53U : 0U)) | ((0x100000U 
                                                  & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                                  ? 0x54U
                                                  : 0U)) 
                         | ((0x200000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                             ? 0x55U : 0U)) | ((0x400000U 
                                                & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                                ? 0x56U
                                                : 0U)) 
                       | ((0x800000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                           ? 0x57U : 0U)) | ((0x1000000U 
                                              & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                              ? 0x58U
                                              : 0U)) 
                     | ((0x2000000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                         ? 0x59U : 0U)) | ((0x4000000U 
                                            & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                            ? 0x5aU
                                            : 0U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__100__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__90__KET____DOT__countSoFar) 
                             | ((0x8000000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                 ? 0x5bU : 0U)) | (
                                                   (0x10000000U 
                                                    & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                                    ? 0x5cU
                                                    : 0U)) 
                           | ((0x20000000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                               ? 0x5dU : 0U)) | ((0x40000000U 
                                                  & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                                                  ? 0x5eU
                                                  : 0U)) 
                         | ((0x80000000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[2U])
                             ? 0x5fU : 0U)) | ((1U 
                                                & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                                                ? 0x60U
                                                : 0U)) 
                       | ((2U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                           ? 0x61U : 0U)) | ((4U & 
                                              vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                                              ? 0x62U
                                              : 0U)) 
                     | ((8U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                         ? 0x63U : 0U)) | ((0x10U & 
                                            vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                                            ? 0x64U
                                            : 0U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__110__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__100__KET____DOT__countSoFar) 
                             | ((0x20U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                                 ? 0x65U : 0U)) | (
                                                   (0x40U 
                                                    & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                                                    ? 0x66U
                                                    : 0U)) 
                           | ((0x80U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                               ? 0x67U : 0U)) | ((0x100U 
                                                  & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                                                  ? 0x68U
                                                  : 0U)) 
                         | ((0x200U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                             ? 0x69U : 0U)) | ((0x400U 
                                                & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                                                ? 0x6aU
                                                : 0U)) 
                       | ((0x800U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                           ? 0x6bU : 0U)) | ((0x1000U 
                                              & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                                              ? 0x6cU
                                              : 0U)) 
                     | ((0x2000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                         ? 0x6dU : 0U)) | ((0x4000U 
                                            & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                                            ? 0x6eU
                                            : 0U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__112__KET____DOT__countSoFar 
        = (0x7fU & (((IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__110__KET____DOT__countSoFar) 
                     | ((0x8000U & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                         ? 0x6fU : 0U)) | ((0x10000U 
                                            & vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn[3U])
                                            ? 0x70U
                                            : 0U)));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__adjustedExp 
        = (0xffffU & (((0U == (0x7fffU & (vlTOPp->in[3U] 
                                          >> 0x10U)))
                        ? (0xffffU ^ (IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__112__KET____DOT__countSoFar))
                        : (0x7fffU & (vlTOPp->in[3U] 
                                      >> 0x10U))) + 
                      (0x4000U | ((0U == (0x7fffU & 
                                          (vlTOPp->in[3U] 
                                           >> 0x10U)))
                                   ? 2U : 1U))));
    vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__exp 
        = ((0xe000U & (((3U == (3U & ((IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__adjustedExp) 
                                      >> 0xeU))) ? 
                        (6U | (0U != (((vlTOPp->in[0U] 
                                        | vlTOPp->in[1U]) 
                                       | vlTOPp->in[2U]) 
                                      | (0xffffU & 
                                         vlTOPp->in[3U]))))
                         : (((0U == (0x7fffU & (vlTOPp->in[3U] 
                                                >> 0x10U))) 
                             & (0U == (((vlTOPp->in[0U] 
                                         | vlTOPp->in[1U]) 
                                        | vlTOPp->in[2U]) 
                                       | (0xffffU & 
                                          vlTOPp->in[3U]))))
                             ? 0U : ((IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__adjustedExp) 
                                     >> 0xdU))) << 0xdU)) 
           | (0x1fffU & (IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__adjustedExp)));
    __Vtemp18[0U] = vlTOPp->in[0U];
    __Vtemp18[1U] = vlTOPp->in[1U];
    __Vtemp18[2U] = vlTOPp->in[2U];
    __Vtemp18[3U] = vlTOPp->in[3U];
    VL_SHIFTL_WWI(112,112,7, __Vtemp19, __Vtemp18, (IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__112__KET____DOT__countSoFar));
    VL_SHIFTL_WWI(112,112,32, __Vtemp20, __Vtemp19, 1U);
    vlTOPp->out[0U] = ((0U == (0x7fffU & (vlTOPp->in[3U] 
                                          >> 0x10U)))
                        ? __Vtemp20[0U] : vlTOPp->in[0U]);
    vlTOPp->out[1U] = ((0U == (0x7fffU & (vlTOPp->in[3U] 
                                          >> 0x10U)))
                        ? __Vtemp20[1U] : vlTOPp->in[1U]);
    vlTOPp->out[2U] = ((0U == (0x7fffU & (vlTOPp->in[3U] 
                                          >> 0x10U)))
                        ? __Vtemp20[2U] : vlTOPp->in[2U]);
    vlTOPp->out[3U] = ((0xffff0000U & ((IData)(vlTOPp->f128ToRecF128__DOT__fNToRecFN__DOT__exp) 
                                       << 0x10U)) | 
                       (0xffffU & ((0U == (0x7fffU 
                                           & (vlTOPp->in[3U] 
                                              >> 0x10U)))
                                    ? __Vtemp20[3U]
                                    : vlTOPp->in[3U])));
    vlTOPp->out[4U] = (1U & (vlTOPp->in[3U] >> 0x1fU));
}

void Vf128ToRecF128::_eval(Vf128ToRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf128ToRecF128::_eval\n"); );
    Vf128ToRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vf128ToRecF128::_eval_initial(Vf128ToRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf128ToRecF128::_eval_initial\n"); );
    Vf128ToRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vf128ToRecF128::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf128ToRecF128::final\n"); );
    // Variables
    Vf128ToRecF128__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vf128ToRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vf128ToRecF128::_eval_settle(Vf128ToRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf128ToRecF128::_eval_settle\n"); );
    Vf128ToRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vf128ToRecF128::_change_request(Vf128ToRecF128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf128ToRecF128::_change_request\n"); );
    Vf128ToRecF128* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vf128ToRecF128::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf128ToRecF128::_eval_debug_assertions\n"); );
}
#endif // VL_DEBUG

void Vf128ToRecF128::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf128ToRecF128::_ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(128, in);
    VL_RAND_RESET_W(129, out);
    f128ToRecF128__DOT__fNToRecFN__DOT__adjustedExp = VL_RAND_RESET_I(16);
    f128ToRecF128__DOT__fNToRecFN__DOT__exp = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(112, f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__reverseIn);
    VL_RAND_RESET_W(113, f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__oneLeastReverseIn);
    f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__30__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__40__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__50__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__60__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__70__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__80__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__90__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__100__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__110__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    f128ToRecF128__DOT__fNToRecFN__DOT__countLeadingZeros__DOT__Bit__BRA__112__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
}
