// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VaddRecF128_add.h for the primary calling header

#include "VaddRecF128_add.h"
#include "VaddRecF128_add__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VaddRecF128_add) {
    VaddRecF128_add__Syms* __restrict vlSymsp = __VlSymsp = new VaddRecF128_add__Syms(this, name());
    VaddRecF128_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VaddRecF128_add::__Vconfigure(VaddRecF128_add__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VaddRecF128_add::~VaddRecF128_add() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VaddRecF128_add::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VaddRecF128_add::eval\n"); );
    VaddRecF128_add__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VaddRecF128_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../source/addRecFN_spec.v", 86, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VaddRecF128_add::_eval_initial_loop(VaddRecF128_add__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("../../source/addRecFN_spec.v", 86, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VaddRecF128_add::_settle__TOP__1(VaddRecF128_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF128_add::_settle__TOP__1\n"); );
    VaddRecF128_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp15[4];
    WData/*127:0*/ __Vtemp16[4];
    WData/*127:0*/ __Vtemp20[4];
    WData/*127:0*/ __Vtemp21[4];
    WData/*127:0*/ __Vtemp26[4];
    WData/*127:0*/ __Vtemp30[4];
    WData/*127:0*/ __Vtemp31[4];
    WData/*127:0*/ __Vtemp32[4];
    WData/*127:0*/ __Vtemp33[4];
    WData/*127:0*/ __Vtemp37[4];
    WData/*127:0*/ __Vtemp38[4];
    WData/*127:0*/ __Vtemp45[4];
    WData/*127:0*/ __Vtemp46[4];
    WData/*127:0*/ __Vtemp49[4];
    WData/*127:0*/ __Vtemp50[4];
    WData/*127:0*/ __Vtemp53[4];
    WData/*127:0*/ __Vtemp54[4];
    WData/*127:0*/ __Vtemp57[4];
    WData/*127:0*/ __Vtemp58[4];
    WData/*127:0*/ __Vtemp61[4];
    WData/*127:0*/ __Vtemp62[4];
    WData/*127:0*/ __Vtemp65[4];
    WData/*127:0*/ __Vtemp66[4];
    WData/*127:0*/ __Vtemp69[4];
    WData/*127:0*/ __Vtemp70[4];
    WData/*127:0*/ __Vtemp73[4];
    WData/*127:0*/ __Vtemp74[4];
    WData/*127:0*/ __Vtemp77[4];
    WData/*127:0*/ __Vtemp78[4];
    WData/*127:0*/ __Vtemp81[4];
    WData/*127:0*/ __Vtemp82[4];
    WData/*127:0*/ __Vtemp85[4];
    WData/*127:0*/ __Vtemp86[4];
    WData/*127:0*/ __Vtemp89[4];
    WData/*127:0*/ __Vtemp90[4];
    WData/*127:0*/ __Vtemp93[4];
    WData/*127:0*/ __Vtemp94[4];
    WData/*127:0*/ __Vtemp97[4];
    WData/*127:0*/ __Vtemp98[4];
    WData/*127:0*/ __Vtemp101[4];
    WData/*127:0*/ __Vtemp102[4];
    WData/*127:0*/ __Vtemp105[4];
    WData/*127:0*/ __Vtemp106[4];
    WData/*127:0*/ __Vtemp109[4];
    WData/*127:0*/ __Vtemp110[4];
    WData/*127:0*/ __Vtemp113[4];
    WData/*127:0*/ __Vtemp114[4];
    WData/*127:0*/ __Vtemp117[4];
    WData/*127:0*/ __Vtemp118[4];
    WData/*127:0*/ __Vtemp121[4];
    WData/*127:0*/ __Vtemp122[4];
    WData/*127:0*/ __Vtemp125[4];
    WData/*127:0*/ __Vtemp126[4];
    WData/*127:0*/ __Vtemp129[4];
    WData/*127:0*/ __Vtemp130[4];
    WData/*127:0*/ __Vtemp133[4];
    WData/*127:0*/ __Vtemp134[4];
    WData/*127:0*/ __Vtemp137[4];
    WData/*127:0*/ __Vtemp138[4];
    WData/*127:0*/ __Vtemp141[4];
    WData/*127:0*/ __Vtemp142[4];
    WData/*127:0*/ __Vtemp145[4];
    WData/*127:0*/ __Vtemp146[4];
    WData/*127:0*/ __Vtemp149[4];
    WData/*127:0*/ __Vtemp150[4];
    WData/*127:0*/ __Vtemp153[4];
    WData/*127:0*/ __Vtemp154[4];
    WData/*127:0*/ __Vtemp157[4];
    WData/*127:0*/ __Vtemp158[4];
    WData/*127:0*/ __Vtemp161[4];
    WData/*127:0*/ __Vtemp162[4];
    WData/*127:0*/ __Vtemp165[4];
    WData/*127:0*/ __Vtemp166[4];
    WData/*127:0*/ __Vtemp169[4];
    WData/*127:0*/ __Vtemp170[4];
    WData/*127:0*/ __Vtemp173[4];
    WData/*127:0*/ __Vtemp174[4];
    WData/*127:0*/ __Vtemp177[4];
    WData/*127:0*/ __Vtemp178[4];
    WData/*127:0*/ __Vtemp181[4];
    WData/*127:0*/ __Vtemp182[4];
    WData/*127:0*/ __Vtemp185[4];
    WData/*127:0*/ __Vtemp186[4];
    WData/*127:0*/ __Vtemp189[4];
    WData/*127:0*/ __Vtemp190[4];
    WData/*127:0*/ __Vtemp193[4];
    WData/*127:0*/ __Vtemp194[4];
    WData/*127:0*/ __Vtemp197[4];
    WData/*127:0*/ __Vtemp198[4];
    WData/*127:0*/ __Vtemp201[4];
    WData/*127:0*/ __Vtemp202[4];
    WData/*127:0*/ __Vtemp205[4];
    WData/*127:0*/ __Vtemp206[4];
    WData/*127:0*/ __Vtemp209[4];
    WData/*127:0*/ __Vtemp210[4];
    WData/*127:0*/ __Vtemp213[4];
    WData/*127:0*/ __Vtemp214[4];
    WData/*127:0*/ __Vtemp217[4];
    WData/*127:0*/ __Vtemp218[4];
    WData/*127:0*/ __Vtemp221[4];
    WData/*127:0*/ __Vtemp222[4];
    WData/*127:0*/ __Vtemp225[4];
    WData/*127:0*/ __Vtemp226[4];
    WData/*127:0*/ __Vtemp229[4];
    WData/*127:0*/ __Vtemp230[4];
    WData/*127:0*/ __Vtemp233[4];
    WData/*127:0*/ __Vtemp234[4];
    WData/*127:0*/ __Vtemp237[4];
    WData/*127:0*/ __Vtemp238[4];
    WData/*127:0*/ __Vtemp241[4];
    WData/*127:0*/ __Vtemp242[4];
    WData/*127:0*/ __Vtemp245[4];
    WData/*127:0*/ __Vtemp246[4];
    WData/*127:0*/ __Vtemp249[4];
    WData/*127:0*/ __Vtemp250[4];
    WData/*127:0*/ __Vtemp253[4];
    WData/*127:0*/ __Vtemp254[4];
    WData/*127:0*/ __Vtemp257[4];
    WData/*127:0*/ __Vtemp258[4];
    WData/*127:0*/ __Vtemp261[4];
    WData/*127:0*/ __Vtemp262[4];
    WData/*127:0*/ __Vtemp265[4];
    WData/*127:0*/ __Vtemp266[4];
    WData/*127:0*/ __Vtemp269[4];
    WData/*127:0*/ __Vtemp270[4];
    WData/*127:0*/ __Vtemp273[4];
    WData/*127:0*/ __Vtemp274[4];
    WData/*127:0*/ __Vtemp277[4];
    WData/*127:0*/ __Vtemp278[4];
    WData/*127:0*/ __Vtemp289[4];
    WData/*127:0*/ __Vtemp290[4];
    WData/*127:0*/ __Vtemp291[4];
    WData/*127:0*/ __Vtemp292[4];
    WData/*127:0*/ __Vtemp297[4];
    WData/*127:0*/ __Vtemp298[4];
    WData/*127:0*/ __Vtemp299[4];
    WData/*127:0*/ __Vtemp300[4];
    WData/*127:0*/ __Vtemp303[4];
    WData/*127:0*/ __Vtemp304[4];
    WData/*127:0*/ __Vtemp305[4];
    WData/*127:0*/ __Vtemp317[4];
    WData/*127:0*/ __Vtemp318[4];
    WData/*127:0*/ __Vtemp320[4];
    WData/*127:0*/ __Vtemp321[4];
    WData/*127:0*/ __Vtemp329[4];
    WData/*127:0*/ __Vtemp333[4];
    WData/*127:0*/ __Vtemp334[4];
    WData/*127:0*/ __Vtemp339[4];
    WData/*127:0*/ __Vtemp340[4];
    WData/*127:0*/ __Vtemp341[4];
    WData/*127:0*/ __Vtemp343[4];
    WData/*127:0*/ __Vtemp352[4];
    WData/*127:0*/ __Vtemp353[4];
    WData/*127:0*/ __Vtemp354[4];
    WData/*127:0*/ __Vtemp355[4];
    WData/*127:0*/ __Vtemp356[4];
    WData/*127:0*/ __Vtemp357[4];
    WData/*127:0*/ __Vtemp358[4];
    WData/*127:0*/ __Vtemp364[4];
    WData/*127:0*/ __Vtemp366[4];
    WData/*127:0*/ __Vtemp367[4];
    WData/*127:0*/ __Vtemp368[4];
    WData/*127:0*/ __Vtemp380[4];
    WData/*127:0*/ __Vtemp387[4];
    WData/*127:0*/ __Vtemp400[4];
    // Body
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c = VL_ULL(0x100000000);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros 
        = ((0U == (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                      << 3U)) | (vlTOPp->a[3U] 
                                                 >> 0x1dU)))) 
           & (0U == (7U & ((0x7fff8U & (vlTOPp->b[4U] 
                                        << 3U)) | (
                                                   vlTOPp->b[3U] 
                                                   >> 0x1dU)))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                      << 2U)) | (vlTOPp->a[3U] 
                                                 >> 0x1eU)))) 
           & (vlTOPp->a[3U] >> 0x1dU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->b[4U] 
                                      << 2U)) | (vlTOPp->b[3U] 
                                                 >> 0x1eU)))) 
           & (vlTOPp->b[3U] >> 0x1dU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                      << 2U)) | (vlTOPp->a[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->a[3U] >> 0x1dU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->b[4U] 
                                      << 2U)) | (vlTOPp->b[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->b[3U] >> 0x1dU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns 
        = ((1U & vlTOPp->a[4U]) == (1U & vlTOPp->b[4U]));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[0U] 
        = vlTOPp->a[0U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[1U] 
        = vlTOPp->a[1U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[2U] 
        = vlTOPp->a[2U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->a[4U] 
                                             << 3U)) 
                                         | (vlTOPp->a[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->a[3U]));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[0U] 
        = vlTOPp->b[0U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[1U] 
        = vlTOPp->b[1U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[2U] 
        = vlTOPp->b[2U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->b[4U] 
                                             << 3U)) 
                                         | (vlTOPp->b[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->b[3U]));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps 
        = (0x1ffffU & ((0xffffU & ((vlTOPp->a[4U] << 0x10U) 
                                   | (vlTOPp->a[3U] 
                                      >> 0x10U))) - 
                       (0xffffU & ((vlTOPp->b[4U] << 0x10U) 
                                   | (vlTOPp->b[3U] 
                                      >> 0x10U)))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA) 
            & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB)) 
           & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
        = (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
            ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[0U]
            : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[0U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
        = (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
            ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[1U]
            : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[1U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
        = (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
            ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[2U]
            : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[2U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
        = (0x1ffffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                        ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[3U]
                        : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[3U]));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign 
        = ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps), 7U)) 
           & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                             VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps), 7U)) 
              | (0U == (0x7fU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist 
        = (0x7fU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                     ? ((0xffffU & ((vlTOPp->b[4U] 
                                     << 0x10U) | (vlTOPp->b[3U] 
                                                  >> 0x10U))) 
                        - (0xffffU & ((vlTOPp->a[4U] 
                                       << 0x10U) | 
                                      (vlTOPp->a[3U] 
                                       >> 0x10U))))
                     : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps));
    VL_EXTEND_WW(116,114, __Vtemp15, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA);
    VL_SHIFTL_WWI(116,116,32, __Vtemp16, __Vtemp15, 2U);
    VL_EXTEND_WW(116,114, __Vtemp20, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA);
    VL_SHIFTL_WWI(116,116,32, __Vtemp21, __Vtemp20, 1U);
    VL_EXTEND_WW(116,114, __Vtemp26, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA);
    __Vtemp30[0U] = ((((VL_LTES_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)) 
                        & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)
                        ? __Vtemp16[0U] : 0U) | ((VL_LTES_III(1,32,32, 0U, 
                                                              VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)) 
                                                  & (~ vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                                                  ? 
                                                 __Vtemp21[0U]
                                                  : 0U)) 
                     | (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                         ? __Vtemp26[0U] : 0U));
    __Vtemp30[1U] = ((((VL_LTES_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)) 
                        & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)
                        ? __Vtemp16[1U] : 0U) | ((VL_LTES_III(1,32,32, 0U, 
                                                              VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)) 
                                                  & (~ vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                                                  ? 
                                                 __Vtemp21[1U]
                                                  : 0U)) 
                     | (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                         ? __Vtemp26[1U] : 0U));
    __Vtemp30[2U] = ((((VL_LTES_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)) 
                        & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)
                        ? __Vtemp16[2U] : 0U) | ((VL_LTES_III(1,32,32, 0U, 
                                                              VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)) 
                                                  & (~ vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                                                  ? 
                                                 __Vtemp21[2U]
                                                  : 0U)) 
                     | (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                         ? __Vtemp26[2U] : 0U));
    __Vtemp30[3U] = ((((VL_LTES_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)) 
                        & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)
                        ? __Vtemp16[3U] : 0U) | ((VL_LTES_III(1,32,32, 0U, 
                                                              VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)) 
                                                  & (~ vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                                                  ? 
                                                 __Vtemp21[3U]
                                                  : 0U)) 
                     | (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                         ? __Vtemp26[3U] : 0U));
    VL_EXTEND_WW(116,114, __Vtemp31, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB);
    VL_SHIFTL_WWI(116,116,32, __Vtemp32, __Vtemp31, 1U);
    VL_SUB_W(4, __Vtemp33, __Vtemp30, __Vtemp32);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum[0U] 
        = __Vtemp33[0U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum[1U] 
        = __Vtemp33[1U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum[2U] 
        = __Vtemp33[2U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum[3U] 
        = (0xfffffU & __Vtemp33[3U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__invalidExc 
        = ((((7U == (7U & ((vlTOPp->a[4U] << 3U) | 
                           (vlTOPp->a[3U] >> 0x1dU)))) 
             & (~ (vlTOPp->a[3U] >> 0xfU))) | ((7U 
                                                == 
                                                (7U 
                                                 & ((vlTOPp->b[4U] 
                                                     << 3U) 
                                                    | (vlTOPp->b[3U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  (vlTOPp->b[3U] 
                                                   >> 0xfU)))) 
           | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_isNaN 
        = (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA) 
            | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)) 
           | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffffffeU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | (0U != (3U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U])));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffffffdU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       << 0x1eU) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                       >> 2U))))) << 1U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffffffbU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       << 0x1aU) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                       >> 6U))))) << 2U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffffff7U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       << 0x16U) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                       >> 0xaU))))) 
              << 3U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fffffefU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       << 0x12U) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                       >> 0xeU))))) 
              << 4U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fffffdfU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       << 0xeU) | (
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                                   >> 0x12U))))) 
              << 5U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fffffbfU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       << 0xaU) | (
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                                   >> 0x16U))))) 
              << 6U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fffff7fU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       << 6U) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                                 >> 0x1aU))))) 
              << 7U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffffeffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       << 2U) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                                 >> 0x1eU))))) 
              << 8U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffffdffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       << 0x1eU) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       >> 2U))))) << 9U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffffbffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       << 0x1aU) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       >> 6U))))) << 0xaU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffff7ffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       << 0x16U) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       >> 0xaU))))) 
              << 0xbU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fffefffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       << 0x12U) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       >> 0xeU))))) 
              << 0xcU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fffdfffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       << 0xeU) | (
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                                   >> 0x12U))))) 
              << 0xdU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fffbfffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       << 0xaU) | (
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                                   >> 0x16U))))) 
              << 0xeU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fff7fffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       << 6U) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                                 >> 0x1aU))))) 
              << 0xfU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffeffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       << 2U) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                                 >> 0x1eU))))) 
              << 0x10U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffdffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                       << 0x1eU) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       >> 2U))))) << 0x11U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffbffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                       << 0x1aU) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       >> 6U))))) << 0x12U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ff7ffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                       << 0x16U) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       >> 0xaU))))) 
              << 0x13U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fefffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                       << 0x12U) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       >> 0xeU))))) 
              << 0x14U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fdfffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                       << 0xeU) | (
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                                   >> 0x12U))))) 
              << 0x15U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fbfffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                       << 0xaU) | (
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                                   >> 0x16U))))) 
              << 0x16U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1f7fffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                       << 6U) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                                 >> 0x1aU))))) 
              << 0x17U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1effffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                       << 2U) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                                 >> 0x1eU))))) 
              << 0x18U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1dffffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                      >> 2U)))) << 0x19U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1bffffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                      >> 6U)))) << 0x1aU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x17ffffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                      >> 0xaU)))) << 0x1bU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0xfffffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (7U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                    >> 0xeU)))) << 0x1cU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags 
        = (((~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)) 
            & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign))) 
           & (1U >= (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign)
            ? 0x7fU : (0x7fU & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    __Vtemp37[0U] = 0U;
    __Vtemp37[1U] = 0U;
    __Vtemp37[2U] = 0U;
    __Vtemp37[3U] = 0U;
    VL_NEGATE_W(4, __Vtemp38, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum[0U] 
        = (VL_GTS_IWW(1,116,116, __Vtemp37, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)
            ? __Vtemp38[0U] : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum[0U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum[1U] 
        = (VL_GTS_IWW(1,116,116, __Vtemp37, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)
            ? __Vtemp38[1U] : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum[1U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum[2U] 
        = (VL_GTS_IWW(1,116,116, __Vtemp37, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)
            ? __Vtemp38[2U] : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum[2U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum[3U] 
        = (0x7ffffU & (VL_GTS_IWW(1,116,116, __Vtemp37, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)
                        ? __Vtemp38[3U] : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum[3U]));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_isNaN));
    __Vtemp45[0U] = (0xffffffe0U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                    << 5U));
    __Vtemp45[1U] = ((0x1fU & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                               >> 0x1bU)) | (0xffffffe0U 
                                             & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                                << 5U)));
    __Vtemp45[2U] = ((0x1fU & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                               >> 0x1bU)) | (0xffffffe0U 
                                             & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                                << 5U)));
    __Vtemp45[3U] = ((0x1fU & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                               >> 0x1bU)) | (0xffffffe0U 
                                             & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                                << 5U)));
    VL_SHIFTR_WWI(118,118,7, __Vtemp46, __Vtemp45, (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[0U] 
        = __Vtemp46[0U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[1U] 
        = __Vtemp46[1U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[2U] 
        = __Vtemp46[2U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[3U] 
        = (0x3fffffU & __Vtemp46[3U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
        = (0x1fffffffU & (IData)((VL_ULL(0x3fffffff) 
                                  & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist) 
                                                        >> 2U))) 
                                     >> 3U))));
    VL_EXTEND_WW(116,115, __Vtemp49, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp50, __Vtemp49, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffffffe) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | (IData)((IData)((0U != (3U & __Vtemp50[0U])))));
    VL_EXTEND_WW(116,115, __Vtemp53, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp54, __Vtemp53, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffffffd) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp54[1U] 
                                             << 0x1eU) 
                                            | (__Vtemp54[0U] 
                                               >> 2U)))))) 
              << 1U));
    VL_EXTEND_WW(116,115, __Vtemp57, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp58, __Vtemp57, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffffffb) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp58[1U] 
                                             << 0x1cU) 
                                            | (__Vtemp58[0U] 
                                               >> 4U)))))) 
              << 2U));
    VL_EXTEND_WW(116,115, __Vtemp61, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp62, __Vtemp61, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffffff7) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp62[1U] 
                                             << 0x1aU) 
                                            | (__Vtemp62[0U] 
                                               >> 6U)))))) 
              << 3U));
    VL_EXTEND_WW(116,115, __Vtemp65, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp66, __Vtemp65, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffffffef) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp66[1U] 
                                             << 0x18U) 
                                            | (__Vtemp66[0U] 
                                               >> 8U)))))) 
              << 4U));
    VL_EXTEND_WW(116,115, __Vtemp69, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp70, __Vtemp69, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffffffdf) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp70[1U] 
                                             << 0x16U) 
                                            | (__Vtemp70[0U] 
                                               >> 0xaU)))))) 
              << 5U));
    VL_EXTEND_WW(116,115, __Vtemp73, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp74, __Vtemp73, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffffffbf) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp74[1U] 
                                             << 0x14U) 
                                            | (__Vtemp74[0U] 
                                               >> 0xcU)))))) 
              << 6U));
    VL_EXTEND_WW(116,115, __Vtemp77, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp78, __Vtemp77, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffffff7f) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp78[1U] 
                                             << 0x12U) 
                                            | (__Vtemp78[0U] 
                                               >> 0xeU)))))) 
              << 7U));
    VL_EXTEND_WW(116,115, __Vtemp81, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp82, __Vtemp81, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffffeff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp82[1U] 
                                             << 0x10U) 
                                            | (__Vtemp82[0U] 
                                               >> 0x10U)))))) 
              << 8U));
    VL_EXTEND_WW(116,115, __Vtemp85, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp86, __Vtemp85, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffffdff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp86[1U] 
                                             << 0xeU) 
                                            | (__Vtemp86[0U] 
                                               >> 0x12U)))))) 
              << 9U));
    VL_EXTEND_WW(116,115, __Vtemp89, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp90, __Vtemp89, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffffbff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp90[1U] 
                                             << 0xcU) 
                                            | (__Vtemp90[0U] 
                                               >> 0x14U)))))) 
              << 0xaU));
    VL_EXTEND_WW(116,115, __Vtemp93, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp94, __Vtemp93, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffff7ff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp94[1U] 
                                             << 0xaU) 
                                            | (__Vtemp94[0U] 
                                               >> 0x16U)))))) 
              << 0xbU));
    VL_EXTEND_WW(116,115, __Vtemp97, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp98, __Vtemp97, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffffefff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp98[1U] 
                                             << 8U) 
                                            | (__Vtemp98[0U] 
                                               >> 0x18U)))))) 
              << 0xcU));
    VL_EXTEND_WW(116,115, __Vtemp101, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp102, __Vtemp101, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffffdfff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp102[1U] 
                                             << 6U) 
                                            | (__Vtemp102[0U] 
                                               >> 0x1aU)))))) 
              << 0xdU));
    VL_EXTEND_WW(116,115, __Vtemp105, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp106, __Vtemp105, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffffbfff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp106[1U] 
                                             << 4U) 
                                            | (__Vtemp106[0U] 
                                               >> 0x1cU)))))) 
              << 0xeU));
    VL_EXTEND_WW(116,115, __Vtemp109, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp110, __Vtemp109, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffff7fff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp110[1U] 
                                             << 2U) 
                                            | (__Vtemp110[0U] 
                                               >> 0x1eU)))))) 
              << 0xfU));
    VL_EXTEND_WW(116,115, __Vtemp113, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp114, __Vtemp113, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffeffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & __Vtemp114[1U])))) 
              << 0x10U));
    VL_EXTEND_WW(116,115, __Vtemp117, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp118, __Vtemp117, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffdffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp118[2U] 
                                             << 0x1eU) 
                                            | (__Vtemp118[1U] 
                                               >> 2U)))))) 
              << 0x11U));
    VL_EXTEND_WW(116,115, __Vtemp121, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp122, __Vtemp121, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffbffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp122[2U] 
                                             << 0x1cU) 
                                            | (__Vtemp122[1U] 
                                               >> 4U)))))) 
              << 0x12U));
    VL_EXTEND_WW(116,115, __Vtemp125, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp126, __Vtemp125, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffff7ffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp126[2U] 
                                             << 0x1aU) 
                                            | (__Vtemp126[1U] 
                                               >> 6U)))))) 
              << 0x13U));
    VL_EXTEND_WW(116,115, __Vtemp129, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp130, __Vtemp129, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffefffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp130[2U] 
                                             << 0x18U) 
                                            | (__Vtemp130[1U] 
                                               >> 8U)))))) 
              << 0x14U));
    VL_EXTEND_WW(116,115, __Vtemp133, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp134, __Vtemp133, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffdfffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp134[2U] 
                                             << 0x16U) 
                                            | (__Vtemp134[1U] 
                                               >> 0xaU)))))) 
              << 0x15U));
    VL_EXTEND_WW(116,115, __Vtemp137, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp138, __Vtemp137, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffbfffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp138[2U] 
                                             << 0x14U) 
                                            | (__Vtemp138[1U] 
                                               >> 0xcU)))))) 
              << 0x16U));
    VL_EXTEND_WW(116,115, __Vtemp141, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp142, __Vtemp141, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffff7fffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp142[2U] 
                                             << 0x12U) 
                                            | (__Vtemp142[1U] 
                                               >> 0xeU)))))) 
              << 0x17U));
    VL_EXTEND_WW(116,115, __Vtemp145, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp146, __Vtemp145, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffeffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp146[2U] 
                                             << 0x10U) 
                                            | (__Vtemp146[1U] 
                                               >> 0x10U)))))) 
              << 0x18U));
    VL_EXTEND_WW(116,115, __Vtemp149, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp150, __Vtemp149, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffdffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp150[2U] 
                                             << 0xeU) 
                                            | (__Vtemp150[1U] 
                                               >> 0x12U)))))) 
              << 0x19U));
    VL_EXTEND_WW(116,115, __Vtemp153, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp154, __Vtemp153, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffbffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp154[2U] 
                                             << 0xcU) 
                                            | (__Vtemp154[1U] 
                                               >> 0x14U)))))) 
              << 0x1aU));
    VL_EXTEND_WW(116,115, __Vtemp157, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp158, __Vtemp157, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffff7ffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp158[2U] 
                                             << 0xaU) 
                                            | (__Vtemp158[1U] 
                                               >> 0x16U)))))) 
              << 0x1bU));
    VL_EXTEND_WW(116,115, __Vtemp161, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp162, __Vtemp161, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffefffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp162[2U] 
                                             << 8U) 
                                            | (__Vtemp162[1U] 
                                               >> 0x18U)))))) 
              << 0x1cU));
    VL_EXTEND_WW(116,115, __Vtemp165, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp166, __Vtemp165, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffdfffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp166[2U] 
                                             << 6U) 
                                            | (__Vtemp166[1U] 
                                               >> 0x1aU)))))) 
              << 0x1dU));
    VL_EXTEND_WW(116,115, __Vtemp169, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp170, __Vtemp169, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffbfffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp170[2U] 
                                             << 4U) 
                                            | (__Vtemp170[1U] 
                                               >> 0x1cU)))))) 
              << 0x1eU));
    VL_EXTEND_WW(116,115, __Vtemp173, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp174, __Vtemp173, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffff7fffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp174[2U] 
                                             << 2U) 
                                            | (__Vtemp174[1U] 
                                               >> 0x1eU)))))) 
              << 0x1fU));
    VL_EXTEND_WW(116,115, __Vtemp177, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp178, __Vtemp177, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffeffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & __Vtemp178[2U])))) 
              << 0x20U));
    VL_EXTEND_WW(116,115, __Vtemp181, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp182, __Vtemp181, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffdffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xc0000000U 
                                             & (__Vtemp182[3U] 
                                                << 0x1eU)) 
                                            | (__Vtemp182[2U] 
                                               >> 2U)))))) 
              << 0x21U));
    VL_EXTEND_WW(116,115, __Vtemp185, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp186, __Vtemp185, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffbffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xf0000000U 
                                             & (__Vtemp186[3U] 
                                                << 0x1cU)) 
                                            | (__Vtemp186[2U] 
                                               >> 4U)))))) 
              << 0x22U));
    VL_EXTEND_WW(116,115, __Vtemp189, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp190, __Vtemp189, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffff7ffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xfc000000U 
                                             & (__Vtemp190[3U] 
                                                << 0x1aU)) 
                                            | (__Vtemp190[2U] 
                                               >> 6U)))))) 
              << 0x23U));
    VL_EXTEND_WW(116,115, __Vtemp193, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp194, __Vtemp193, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffefffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xff000000U 
                                             & (__Vtemp194[3U] 
                                                << 0x18U)) 
                                            | (__Vtemp194[2U] 
                                               >> 8U)))))) 
              << 0x24U));
    VL_EXTEND_WW(116,115, __Vtemp197, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp198, __Vtemp197, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffdfffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xffc00000U 
                                             & (__Vtemp198[3U] 
                                                << 0x16U)) 
                                            | (__Vtemp198[2U] 
                                               >> 0xaU)))))) 
              << 0x25U));
    VL_EXTEND_WW(116,115, __Vtemp201, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp202, __Vtemp201, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffbfffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xfff00000U 
                                             & (__Vtemp202[3U] 
                                                << 0x14U)) 
                                            | (__Vtemp202[2U] 
                                               >> 0xcU)))))) 
              << 0x26U));
    VL_EXTEND_WW(116,115, __Vtemp205, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp206, __Vtemp205, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffff7fffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xfffc0000U 
                                             & (__Vtemp206[3U] 
                                                << 0x12U)) 
                                            | (__Vtemp206[2U] 
                                               >> 0xeU)))))) 
              << 0x27U));
    VL_EXTEND_WW(116,115, __Vtemp209, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp210, __Vtemp209, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffeffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xffff0000U 
                                             & (__Vtemp210[3U] 
                                                << 0x10U)) 
                                            | (__Vtemp210[2U] 
                                               >> 0x10U)))))) 
              << 0x28U));
    VL_EXTEND_WW(116,115, __Vtemp213, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp214, __Vtemp213, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffdffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xffffc000U 
                                             & (__Vtemp214[3U] 
                                                << 0xeU)) 
                                            | (__Vtemp214[2U] 
                                               >> 0x12U)))))) 
              << 0x29U));
    VL_EXTEND_WW(116,115, __Vtemp217, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp218, __Vtemp217, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffbffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xfffff000U 
                                             & (__Vtemp218[3U] 
                                                << 0xcU)) 
                                            | (__Vtemp218[2U] 
                                               >> 0x14U)))))) 
              << 0x2aU));
    VL_EXTEND_WW(116,115, __Vtemp221, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp222, __Vtemp221, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fff7ffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0x3ffffc00U 
                                             & (__Vtemp222[3U] 
                                                << 0xaU)) 
                                            | (__Vtemp222[2U] 
                                               >> 0x16U)))))) 
              << 0x2bU));
    VL_EXTEND_WW(116,115, __Vtemp225, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp226, __Vtemp225, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffefffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xfffff00U 
                                             & (__Vtemp226[3U] 
                                                << 8U)) 
                                            | (__Vtemp226[2U] 
                                               >> 0x18U)))))) 
              << 0x2cU));
    VL_EXTEND_WW(116,115, __Vtemp229, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp230, __Vtemp229, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffdfffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0x3ffffc0U 
                                             & (__Vtemp230[3U] 
                                                << 6U)) 
                                            | (__Vtemp230[2U] 
                                               >> 0x1aU)))))) 
              << 0x2dU));
    VL_EXTEND_WW(116,115, __Vtemp233, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp234, __Vtemp233, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffbfffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xfffff0U 
                                             & (__Vtemp234[3U] 
                                                << 4U)) 
                                            | (__Vtemp234[2U] 
                                               >> 0x1cU)))))) 
              << 0x2eU));
    VL_EXTEND_WW(116,115, __Vtemp237, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp238, __Vtemp237, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ff7fffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0x3ffffcU 
                                             & (__Vtemp238[3U] 
                                                << 2U)) 
                                            | (__Vtemp238[2U] 
                                               >> 0x1eU)))))) 
              << 0x2fU));
    VL_EXTEND_WW(116,115, __Vtemp241, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp242, __Vtemp241, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3feffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & __Vtemp242[3U])))) 
              << 0x30U));
    VL_EXTEND_WW(116,115, __Vtemp245, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp246, __Vtemp245, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fdffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp246[3U] 
                                            >> 2U))))) 
              << 0x31U));
    VL_EXTEND_WW(116,115, __Vtemp249, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp250, __Vtemp249, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fbffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp250[3U] 
                                            >> 4U))))) 
              << 0x32U));
    VL_EXTEND_WW(116,115, __Vtemp253, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp254, __Vtemp253, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3f7ffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp254[3U] 
                                            >> 6U))))) 
              << 0x33U));
    VL_EXTEND_WW(116,115, __Vtemp257, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp258, __Vtemp257, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3efffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp258[3U] 
                                            >> 8U))))) 
              << 0x34U));
    VL_EXTEND_WW(116,115, __Vtemp261, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp262, __Vtemp261, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3dfffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp262[3U] 
                                            >> 0xaU))))) 
              << 0x35U));
    VL_EXTEND_WW(116,115, __Vtemp265, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp266, __Vtemp265, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3bfffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp266[3U] 
                                            >> 0xcU))))) 
              << 0x36U));
    VL_EXTEND_WW(116,115, __Vtemp269, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp270, __Vtemp269, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x37fffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp270[3U] 
                                            >> 0xeU))))) 
              << 0x37U));
    VL_EXTEND_WW(116,115, __Vtemp273, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp274, __Vtemp273, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x2ffffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp274[3U] 
                                            >> 0x10U))))) 
              << 0x38U));
    VL_EXTEND_WW(116,115, __Vtemp277, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp278, __Vtemp277, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x1ffffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp278[3U] 
                                            >> 0x12U))))) 
              << 0x39U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffffffeU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (1U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                    >> 0x1cU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffffffdU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (2U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                    >> 0x1aU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffffffbU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (4U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                    >> 0x18U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffffff7U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (8U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                    >> 0x16U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fffffefU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x10U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                       >> 0x14U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fffffdfU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x20U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                       >> 0x12U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fffffbfU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x40U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                       >> 0x10U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fffff7fU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x80U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                       >> 0xeU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffffeffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x100U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                        >> 0xcU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffffdffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x200U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                        >> 0xaU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffffbffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x400U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                        >> 8U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffff7ffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x800U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                        >> 6U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fffefffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x1000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                         >> 4U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fffdfffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x2000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                         >> 2U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fffbfffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x4000U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fff7fffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x8000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                         << 2U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffeffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x10000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                          << 4U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffdffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x20000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                          << 6U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffbffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x40000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                          << 8U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ff7ffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x80000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                          << 0xaU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fefffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x100000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                           << 0xcU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fdfffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x200000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                           << 0xeU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fbfffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x400000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                           << 0x10U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1f7fffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x800000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                           << 0x12U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1effffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x1000000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                            << 0x14U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1dffffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x2000000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                            << 0x16U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1bffffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x4000000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                            << 0x18U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x17ffffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x8000000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                            << 0x1aU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0xfffffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x10000000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                             << 0x1cU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffffffe) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (IData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                            >> 0x39U))))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffffffd) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x38U))))) 
              << 1U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffffffb) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x37U))))) 
              << 2U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffffff7) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x36U))))) 
              << 3U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffffffef) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x35U))))) 
              << 4U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffffffdf) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x34U))))) 
              << 5U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffffffbf) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x33U))))) 
              << 6U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffffff7f) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x32U))))) 
              << 7U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffffeff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x31U))))) 
              << 8U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffffdff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x30U))))) 
              << 9U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffffbff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x2fU))))) 
              << 0xaU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffff7ff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x2eU))))) 
              << 0xbU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffffefff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x2dU))))) 
              << 0xcU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffffdfff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x2cU))))) 
              << 0xdU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffffbfff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x2bU))))) 
              << 0xeU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffff7fff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x2aU))))) 
              << 0xfU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffeffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x29U))))) 
              << 0x10U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffdffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x28U))))) 
              << 0x11U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffbffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x27U))))) 
              << 0x12U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffff7ffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x26U))))) 
              << 0x13U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffefffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x25U))))) 
              << 0x14U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffdfffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x24U))))) 
              << 0x15U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffbfffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x23U))))) 
              << 0x16U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffff7fffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x22U))))) 
              << 0x17U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffeffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x21U))))) 
              << 0x18U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffdffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x20U))))) 
              << 0x19U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffbffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x1fU))))) 
              << 0x1aU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffff7ffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x1eU))))) 
              << 0x1bU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffefffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x1dU))))) 
              << 0x1cU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffdfffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x1cU))))) 
              << 0x1dU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffbfffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x1bU))))) 
              << 0x1eU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffff7fffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x1aU))))) 
              << 0x1fU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffeffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x19U))))) 
              << 0x20U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffdffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x18U))))) 
              << 0x21U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffbffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x17U))))) 
              << 0x22U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffff7ffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x16U))))) 
              << 0x23U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffefffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x15U))))) 
              << 0x24U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffdfffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x14U))))) 
              << 0x25U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffbfffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x13U))))) 
              << 0x26U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffff7fffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x12U))))) 
              << 0x27U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffeffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x11U))))) 
              << 0x28U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffdffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x10U))))) 
              << 0x29U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffbffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0xfU))))) 
              << 0x2aU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fff7ffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0xeU))))) 
              << 0x2bU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffefffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0xdU))))) 
              << 0x2cU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffdfffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0xcU))))) 
              << 0x2dU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffbfffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0xbU))))) 
              << 0x2eU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ff7fffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0xaU))))) 
              << 0x2fU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3feffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 9U))))) 
              << 0x30U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fdffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 8U))))) 
              << 0x31U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fbffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 7U))))) 
              << 0x32U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3f7ffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 6U))))) 
              << 0x33U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3efffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 5U))))) 
              << 0x34U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3dfffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 4U))))) 
              << 0x35U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3bfffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 3U))))) 
              << 0x36U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x37fffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 2U))))) 
              << 0x37U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x2ffffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 1U))))) 
              << 0x38U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x1ffffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)))) 
              << 0x39U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller[0U] 
        = ((0xfffffffeU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[1U] 
                            << 0x1eU) | (0x3ffffffeU 
                                         & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[0U] 
                                            >> 2U)))) 
           | ((0U != (7U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[0U])) 
              | (0U != (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
                        & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller[1U] 
        = ((1U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[1U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[2U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[1U] 
                                                  >> 2U)))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller[2U] 
        = ((1U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[2U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[3U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[2U] 
                                                  >> 2U)))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller[3U] 
        = ((1U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[3U] 
                  >> 2U)) | (0xffffeU & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[3U] 
                                         >> 2U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((VL_ULL(0x400000000000000) | vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           & (VL_ULL(1) + (VL_ULL(0x3ffffffffffffff) 
                           & (~ vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn))));
    __Vtemp289[0U] = (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                       ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[0U]
                       : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[0U]);
    __Vtemp289[1U] = (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                       ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[1U]
                       : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[1U]);
    __Vtemp289[2U] = (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                       ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[2U]
                       : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[2U]);
    __Vtemp289[3U] = (0x1ffffU & (VL_GTS_III(1,32,32, 0U, 
                                             VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                                   ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[3U]
                                   : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[3U]));
    VL_EXTEND_WW(117,113, __Vtemp290, __Vtemp289);
    VL_SHIFTL_WWI(117,117,32, __Vtemp291, __Vtemp290, 3U);
    VL_EXTEND_WW(117,116, __Vtemp292, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller);
    __Vtemp297[0U] = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                       ? __Vtemp292[0U] : (~ vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller[0U]));
    __Vtemp297[1U] = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                       ? __Vtemp292[1U] : (~ vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller[1U]));
    __Vtemp297[2U] = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                       ? __Vtemp292[2U] : (~ vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller[2U]));
    __Vtemp297[3U] = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                       ? __Vtemp292[3U] : (0x100000U 
                                           | (0xfffffU 
                                              & (~ 
                                                 vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller[3U]))));
    VL_ADD_W(4, __Vtemp298, __Vtemp291, __Vtemp297);
    VL_EXTEND_WI(117,1, __Vtemp299, (1U & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))));
    VL_ADD_W(4, __Vtemp300, __Vtemp298, __Vtemp299);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[0U] 
        = __Vtemp300[0U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[1U] 
        = __Vtemp300[1U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[2U] 
        = __Vtemp300[2U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[3U] 
        = (0x1fffffU & __Vtemp300[3U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                            >> 1U)))
                              ? 1U : 0U) | ((1U & (IData)(
                                                          (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                           >> 2U)))
                                             ? 2U : 0U)) 
                           | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                             >> 3U)))
                               ? 3U : 0U)) | ((1U & (IData)(
                                                            (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                             >> 4U)))
                                               ? 4U
                                               : 0U)) 
                         | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                           >> 5U)))
                             ? 5U : 0U)) | ((1U & (IData)(
                                                          (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                           >> 6U)))
                                             ? 6U : 0U)) 
                       | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                         >> 7U))) ? 7U
                           : 0U)) | ((1U & (IData)(
                                                   (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                    >> 8U)))
                                      ? 8U : 0U)) | 
                     ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                     >> 9U))) ? 9U : 0U)) 
                    | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                      >> 0xaU))) ? 0xaU
                        : 0U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                               >> 0xbU)))
                                 ? 0xbU : 0U)) | ((1U 
                                                   & (IData)(
                                                             (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                              >> 0xcU)))
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                             >> 0xdU)))
                               ? 0xdU : 0U)) | ((1U 
                                                 & (IData)(
                                                           (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                            >> 0xeU)))
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                           >> 0xfU)))
                             ? 0xfU : 0U)) | ((1U & (IData)(
                                                            (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                             >> 0x10U)))
                                               ? 0x10U
                                               : 0U)) 
                       | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                         >> 0x11U)))
                           ? 0x11U : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                            >> 0x12U)))
                                              ? 0x12U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                       >> 0x13U))) ? 0x13U
                         : 0U)) | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                  >> 0x14U)))
                                    ? 0x14U : 0U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__30__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                               >> 0x15U)))
                                 ? 0x15U : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                               >> 0x16U)))
                                                    ? 0x16U
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                             >> 0x17U)))
                               ? 0x17U : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                             >> 0x18U)))
                                                  ? 0x18U
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                           >> 0x19U)))
                             ? 0x19U : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                           >> 0x1aU)))
                                                ? 0x1aU
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                         >> 0x1bU)))
                           ? 0x1bU : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                            >> 0x1cU)))
                                              ? 0x1cU
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                       >> 0x1dU))) ? 0x1dU
                         : 0U)) | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                  >> 0x1eU)))
                                    ? 0x1eU : 0U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__40__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__30__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                               >> 0x1fU)))
                                 ? 0x1fU : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                               >> 0x20U)))
                                                    ? 0x20U
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                             >> 0x21U)))
                               ? 0x21U : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                             >> 0x22U)))
                                                  ? 0x22U
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                           >> 0x23U)))
                             ? 0x23U : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                           >> 0x24U)))
                                                ? 0x24U
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                         >> 0x25U)))
                           ? 0x25U : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                            >> 0x26U)))
                                              ? 0x26U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                       >> 0x27U))) ? 0x27U
                         : 0U)) | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                  >> 0x28U)))
                                    ? 0x28U : 0U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__50__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__40__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                               >> 0x29U)))
                                 ? 0x29U : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                               >> 0x2aU)))
                                                    ? 0x2aU
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                             >> 0x2bU)))
                               ? 0x2bU : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                             >> 0x2cU)))
                                                  ? 0x2cU
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                           >> 0x2dU)))
                             ? 0x2dU : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                           >> 0x2eU)))
                                                ? 0x2eU
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                         >> 0x2fU)))
                           ? 0x2fU : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                            >> 0x30U)))
                                              ? 0x30U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                       >> 0x31U))) ? 0x31U
                         : 0U)) | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                  >> 0x32U)))
                                    ? 0x32U : 0U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__58__KET____DOT__countSoFar 
        = (0x7fU & (((((((((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__50__KET____DOT__countSoFar) 
                           | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                             >> 0x33U)))
                               ? 0x33U : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                             >> 0x34U)))
                                                  ? 0x34U
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                           >> 0x35U)))
                             ? 0x35U : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                           >> 0x36U)))
                                                ? 0x36U
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                         >> 0x37U)))
                           ? 0x37U : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                            >> 0x38U)))
                                              ? 0x38U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                       >> 0x39U))) ? 0x39U
                         : 0U)) | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                  >> 0x3aU)))
                                    ? 0x3aU : 0U)));
    VL_EXTEND_WW(116,115, __Vtemp303, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,7, __Vtemp304, __Vtemp303, 
                  (0x7fU & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__58__KET____DOT__countSoFar) 
                            << 1U)));
    VL_SHIFTL_WWI(116,116,32, __Vtemp305, __Vtemp304, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[0U] 
        = __Vtemp305[0U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[1U] 
        = __Vtemp305[1U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[2U] 
        = __Vtemp305[2U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[3U] 
        = (0xfffffU & __Vtemp305[3U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros) 
           | (((~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut)) 
               & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)) 
              & (~ (IData)((0U != (3U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[3U] 
                                         >> 0x12U)))))));
    __Vtemp317[0U] = (0xfffffffcU & (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                                       ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[0U]
                                       : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                           ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[0U]
                                           : 0U)) << 2U));
    __Vtemp317[1U] = ((3U & (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                               ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[0U]
                               : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                   ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[0U]
                                   : 0U)) >> 0x1eU)) 
                      | (0xfffffffcU & (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                                          ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[1U]
                                          : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                              ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[1U]
                                              : 0U)) 
                                        << 2U)));
    __Vtemp317[2U] = ((3U & (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                               ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[1U]
                               : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                   ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[1U]
                                   : 0U)) >> 0x1eU)) 
                      | (0xfffffffcU & (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                                          ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[2U]
                                          : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                              ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[2U]
                                              : 0U)) 
                                        << 2U)));
    __Vtemp317[3U] = (0x60000U | ((3U & (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                                           ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[2U]
                                           : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                               ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[2U]
                                               : 0U)) 
                                         >> 0x1eU)) 
                                  | (0x1fffcU & (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                                                   ? 
                                                  vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[3U]
                                                   : 
                                                  ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                                    ? 
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[3U]
                                                    : 0U)) 
                                                 << 2U))));
    VL_EXTEND_WW(116,115, __Vtemp318, __Vtemp317);
    VL_SHIFTR_WWI(117,117,32, __Vtemp320, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum, 1U);
    VL_EXTEND_WI(117,1, __Vtemp321, (1U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[0U]));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[0U] 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_isNaN)
            ? __Vtemp318[0U] : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                 ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[0U]
                                 : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                     ? (__Vtemp320[0U] 
                                        | __Vtemp321[0U])
                                     : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[0U])));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[1U] 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_isNaN)
            ? __Vtemp318[1U] : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                 ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[1U]
                                 : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                     ? (__Vtemp320[1U] 
                                        | __Vtemp321[1U])
                                     : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[1U])));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[2U] 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_isNaN)
            ? __Vtemp318[2U] : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                 ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[2U]
                                 : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                     ? (__Vtemp320[2U] 
                                        | __Vtemp321[2U])
                                     : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[2U])));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
        = (0xfffffU & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_isNaN)
                        ? __Vtemp318[3U] : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                             ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[3U]
                                             : (0x1fffffU 
                                                & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                                    ? 
                                                   (__Vtemp320[3U] 
                                                    | __Vtemp321[3U])
                                                    : 
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[3U])))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))));
    __Vtemp329[0U] = 0U;
    __Vtemp329[1U] = 0U;
    __Vtemp329[2U] = 0U;
    __Vtemp329[3U] = 0U;
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sign 
        = (1U & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_isNaN)
                  ? ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                      ? (1U & vlTOPp->a[4U]) : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                                 ? 
                                                (1U 
                                                 & vlTOPp->b[4U])
                                                 : 1U))
                  : (((((((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns) 
                          | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA)) 
                         & vlTOPp->a[4U]) | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB) 
                                             & vlTOPp->b[4U])) 
                       | (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut) 
                           & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))) 
                          & ((2U == (IData)(vlTOPp->roundingMode))
                              ? 1U : 0U))) | ((((~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                                & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[3U] 
                                                      >> 0x12U)))) 
                                              & (vlTOPp->a[4U] 
                                                 ^ 
                                                 VL_GTS_IWW(1,116,116, __Vtemp329, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)))) 
                     | (((~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                         & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags))) 
                        & (VL_GTS_III(1,32,32, 0U, 
                                      VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                            ? vlTOPp->b[4U] : vlTOPp->a[4U])))));
    VL_EXTEND_WI(116,3, __Vtemp333, (3U | (4U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                                 >> 0x11U))));
    VL_SHIFTR_WWI(116,116,32, __Vtemp334, __Vtemp333, 1U);
    VL_EXTEND_WI(116,3, __Vtemp339, (3U | (4U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                                 >> 0x11U))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != ((((((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[1U] 
                        << 0x1dU) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[0U] 
                                     >> 3U)) & ((__Vtemp334[1U] 
                                                 << 0x1dU) 
                                                | (__Vtemp334[0U] 
                                                   >> 3U))) 
                     | (((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[2U] 
                          << 0x1dU) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[1U] 
                                       >> 3U)) & ((
                                                   __Vtemp334[2U] 
                                                   << 0x1dU) 
                                                  | (__Vtemp334[1U] 
                                                     >> 3U)))) 
                    | (((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                         << 0x1dU) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[2U] 
                                      >> 3U)) & ((0xe0000000U 
                                                  & (__Vtemp334[3U] 
                                                     << 0x1dU)) 
                                                 | (__Vtemp334[2U] 
                                                    >> 3U)))) 
                   | (0x1ffffU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                   >> 3U) & (__Vtemp334[3U] 
                                             >> 3U))))) 
           | ((0U != (7U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[0U] 
                            & ((__Vtemp339[1U] << 0x1fU) 
                               | (__Vtemp339[0U] >> 1U))))) 
              & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    VL_EXTEND_WI(116,3, __Vtemp340, (3U | (4U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                                 >> 0x11U))));
    VL_SHIFTR_WWI(116,116,32, __Vtemp341, __Vtemp340, 1U);
    VL_EXTEND_WI(116,3, __Vtemp343, (3U | (4U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                                 >> 0x11U))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U] 
        = ((~ __Vtemp341[0U]) & __Vtemp343[0U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
        = ((~ __Vtemp341[1U]) & __Vtemp343[1U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
        = ((~ __Vtemp341[2U]) & __Vtemp343[2U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U] 
        = ((~ __Vtemp341[3U]) & __Vtemp343[3U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sign))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != ((((((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[1U] 
                        << 0x1dU) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[0U] 
                                     >> 3U)) & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U] 
                                                   >> 3U))) 
                     | (((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[2U] 
                          << 0x1dU) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[1U] 
                                       >> 3U)) & ((
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
                                                     >> 3U)))) 
                    | (((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                         << 0x1dU) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[2U] 
                                      >> 3U)) & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U] 
                                                  << 0x1dU) 
                                                 | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
                                                    >> 3U)))) 
                   | (0x1ffffU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                   & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U]) 
                                  >> 3U)))) | ((0U 
                                                != 
                                                (7U 
                                                 & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[0U] 
                                                    & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U]))) 
                                               & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    __Vtemp352[0U] = 1U;
    __Vtemp352[1U] = 0U;
    __Vtemp352[2U] = 0U;
    __Vtemp352[3U] = 0U;
    VL_EXTEND_WI(116,3, __Vtemp353, (3U | (4U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                                 >> 0x11U))));
    __Vtemp354[0U] = (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[0U] 
                      | __Vtemp353[0U]);
    __Vtemp354[1U] = (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[1U] 
                      | __Vtemp353[1U]);
    __Vtemp354[2U] = (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[2U] 
                      | __Vtemp353[2U]);
    __Vtemp354[3U] = (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                      | __Vtemp353[3U]);
    VL_SHIFTR_WWI(116,116,32, __Vtemp355, __Vtemp354, 2U);
    VL_ADD_W(4, __Vtemp356, __Vtemp352, __Vtemp355);
    VL_EXTEND_WI(116,3, __Vtemp357, (3U | (4U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                                 >> 0x11U))));
    VL_SHIFTR_WWI(116,116,32, __Vtemp358, __Vtemp357, 1U);
    VL_EXTEND_WI(116,3, __Vtemp364, (3U | (4U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                                 >> 0x11U))));
    __Vtemp366[0U] = (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[0U] 
                      & (~ __Vtemp364[0U]));
    __Vtemp366[1U] = (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[1U] 
                      & (~ __Vtemp364[1U]));
    __Vtemp366[2U] = (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[2U] 
                      & (~ __Vtemp364[2U]));
    __Vtemp366[3U] = (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                      & (~ __Vtemp364[3U]));
    VL_SHIFTR_WWI(116,116,32, __Vtemp367, __Vtemp366, 2U);
    VL_SHIFTR_WWI(116,116,32, __Vtemp368, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[0U] 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              | (4U == (IData)(vlTOPp->roundingMode))) 
             & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp356[0U] & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                      & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                     & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                     ? __Vtemp358[0U]
                                     : 0U))) : (__Vtemp367[0U] 
                                                | (((6U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                    ? 
                                                   __Vtemp368[0U]
                                                    : 0U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[1U] 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              | (4U == (IData)(vlTOPp->roundingMode))) 
             & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp356[1U] & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                      & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                     & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                     ? __Vtemp358[1U]
                                     : 0U))) : (__Vtemp367[1U] 
                                                | (((6U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                    ? 
                                                   __Vtemp368[1U]
                                                    : 0U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[2U] 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              | (4U == (IData)(vlTOPp->roundingMode))) 
             & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp356[2U] & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                      & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                     & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                     ? __Vtemp358[2U]
                                     : 0U))) : (__Vtemp367[2U] 
                                                | (((6U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                    ? 
                                                   __Vtemp368[2U]
                                                    : 0U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
        = (0x7ffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                          | (4U == (IData)(vlTOPp->roundingMode))) 
                         & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                        | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                           & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                        ? (__Vtemp356[3U] & (~ ((((0U 
                                                   == (IData)(vlTOPp->roundingMode)) 
                                                  & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                                 & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                                 ? 
                                                __Vtemp358[3U]
                                                 : 0U)))
                        : (__Vtemp367[3U] | (((6U == (IData)(vlTOPp->roundingMode)) 
                                              & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                              ? __Vtemp368[3U]
                                              : 0U))));
    VL_SHIFTR_WWI(115,115,32, __Vtemp380, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[0U] 
        = ((0x80000U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U])
            ? __Vtemp380[0U] : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[0U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[1U] 
        = ((0x80000U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U])
            ? __Vtemp380[1U] : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[1U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[2U] 
        = ((0x80000U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U])
            ? __Vtemp380[2U] : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[2U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U] 
        = (0xffffU & ((0x80000U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U])
                       ? __Vtemp380[3U] : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U]));
    VL_SHIFTR_WWI(115,115,32, __Vtemp387, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig, 0x71U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x3ffffU & (VL_EXTENDS_II(18,17, (0x1ffffU 
                                             & VL_EXTENDS_II(17,17, 
                                                             (0x1ffffU 
                                                              & ((((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags) 
                                                                   | VL_GTS_III(1,32,32, 0U, 
                                                                                VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                                                   ? 
                                                                  (0xffffU 
                                                                   & ((vlTOPp->b[4U] 
                                                                       << 0x10U) 
                                                                      | (vlTOPp->b[3U] 
                                                                         >> 0x10U)))
                                                                   : 
                                                                  (0xffffU 
                                                                   & ((vlTOPp->a[4U] 
                                                                       << 0x10U) 
                                                                      | (vlTOPp->a[3U] 
                                                                         >> 0x10U)))) 
                                                                 - 
                                                                 ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                                                   ? 
                                                                  (0x7fU 
                                                                   & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__58__KET____DOT__countSoFar) 
                                                                      << 1U))
                                                                   : 
                                                                  (1U 
                                                                   & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))))))))) 
                       + __Vtemp387[0U]));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,18, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp), 0xeU)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp400[3U] = ((0xffff0000U & (((((((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
                                            & (~ ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                   ? 0xe000U
                                                   : 0U))) 
                                           & (~ ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                  ? 0x4000U
                                                  : 0U))) 
                                          & (~ ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                 ? 0x2000U
                                                 : 0U))) 
                                         | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                             ? 0xbfffU
                                             : 0U)) 
                                        | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                            ? 0xc000U
                                            : 0U)) 
                                       | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                           ? 0xe000U
                                           : 0U)) << 0x10U)) 
                      | (0xffffU & (((0x8000U & (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                  << 0xfU) 
                                                 | (0xffff8000U 
                                                    & (((~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                        << 0xfU) 
                                                       & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U])))) 
                                     | ((1U & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                               | (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                                         ? (0x7fffU 
                                            & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U])
                                         : 0U)) | VL_NEGATE_I((IData)((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))))));
    vlTOPp->out[0U] = (((1U & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                               | (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                         ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[0U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[1U] = (((1U & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                               | (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                         ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[1U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[2U] = (((1U & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                               | (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                         ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[2U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[3U] = __Vtemp400[3U];
    vlTOPp->out[4U] = vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sign;
}

VL_INLINE_OPT void VaddRecF128_add::_combo__TOP__2(VaddRecF128_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF128_add::_combo__TOP__2\n"); );
    VaddRecF128_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp416[4];
    WData/*127:0*/ __Vtemp417[4];
    WData/*127:0*/ __Vtemp421[4];
    WData/*127:0*/ __Vtemp422[4];
    WData/*127:0*/ __Vtemp427[4];
    WData/*127:0*/ __Vtemp431[4];
    WData/*127:0*/ __Vtemp432[4];
    WData/*127:0*/ __Vtemp433[4];
    WData/*127:0*/ __Vtemp434[4];
    WData/*127:0*/ __Vtemp438[4];
    WData/*127:0*/ __Vtemp439[4];
    WData/*127:0*/ __Vtemp446[4];
    WData/*127:0*/ __Vtemp447[4];
    WData/*127:0*/ __Vtemp450[4];
    WData/*127:0*/ __Vtemp451[4];
    WData/*127:0*/ __Vtemp454[4];
    WData/*127:0*/ __Vtemp455[4];
    WData/*127:0*/ __Vtemp458[4];
    WData/*127:0*/ __Vtemp459[4];
    WData/*127:0*/ __Vtemp462[4];
    WData/*127:0*/ __Vtemp463[4];
    WData/*127:0*/ __Vtemp466[4];
    WData/*127:0*/ __Vtemp467[4];
    WData/*127:0*/ __Vtemp470[4];
    WData/*127:0*/ __Vtemp471[4];
    WData/*127:0*/ __Vtemp474[4];
    WData/*127:0*/ __Vtemp475[4];
    WData/*127:0*/ __Vtemp478[4];
    WData/*127:0*/ __Vtemp479[4];
    WData/*127:0*/ __Vtemp482[4];
    WData/*127:0*/ __Vtemp483[4];
    WData/*127:0*/ __Vtemp486[4];
    WData/*127:0*/ __Vtemp487[4];
    WData/*127:0*/ __Vtemp490[4];
    WData/*127:0*/ __Vtemp491[4];
    WData/*127:0*/ __Vtemp494[4];
    WData/*127:0*/ __Vtemp495[4];
    WData/*127:0*/ __Vtemp498[4];
    WData/*127:0*/ __Vtemp499[4];
    WData/*127:0*/ __Vtemp502[4];
    WData/*127:0*/ __Vtemp503[4];
    WData/*127:0*/ __Vtemp506[4];
    WData/*127:0*/ __Vtemp507[4];
    WData/*127:0*/ __Vtemp510[4];
    WData/*127:0*/ __Vtemp511[4];
    WData/*127:0*/ __Vtemp514[4];
    WData/*127:0*/ __Vtemp515[4];
    WData/*127:0*/ __Vtemp518[4];
    WData/*127:0*/ __Vtemp519[4];
    WData/*127:0*/ __Vtemp522[4];
    WData/*127:0*/ __Vtemp523[4];
    WData/*127:0*/ __Vtemp526[4];
    WData/*127:0*/ __Vtemp527[4];
    WData/*127:0*/ __Vtemp530[4];
    WData/*127:0*/ __Vtemp531[4];
    WData/*127:0*/ __Vtemp534[4];
    WData/*127:0*/ __Vtemp535[4];
    WData/*127:0*/ __Vtemp538[4];
    WData/*127:0*/ __Vtemp539[4];
    WData/*127:0*/ __Vtemp542[4];
    WData/*127:0*/ __Vtemp543[4];
    WData/*127:0*/ __Vtemp546[4];
    WData/*127:0*/ __Vtemp547[4];
    WData/*127:0*/ __Vtemp550[4];
    WData/*127:0*/ __Vtemp551[4];
    WData/*127:0*/ __Vtemp554[4];
    WData/*127:0*/ __Vtemp555[4];
    WData/*127:0*/ __Vtemp558[4];
    WData/*127:0*/ __Vtemp559[4];
    WData/*127:0*/ __Vtemp562[4];
    WData/*127:0*/ __Vtemp563[4];
    WData/*127:0*/ __Vtemp566[4];
    WData/*127:0*/ __Vtemp567[4];
    WData/*127:0*/ __Vtemp570[4];
    WData/*127:0*/ __Vtemp571[4];
    WData/*127:0*/ __Vtemp574[4];
    WData/*127:0*/ __Vtemp575[4];
    WData/*127:0*/ __Vtemp578[4];
    WData/*127:0*/ __Vtemp579[4];
    WData/*127:0*/ __Vtemp582[4];
    WData/*127:0*/ __Vtemp583[4];
    WData/*127:0*/ __Vtemp586[4];
    WData/*127:0*/ __Vtemp587[4];
    WData/*127:0*/ __Vtemp590[4];
    WData/*127:0*/ __Vtemp591[4];
    WData/*127:0*/ __Vtemp594[4];
    WData/*127:0*/ __Vtemp595[4];
    WData/*127:0*/ __Vtemp598[4];
    WData/*127:0*/ __Vtemp599[4];
    WData/*127:0*/ __Vtemp602[4];
    WData/*127:0*/ __Vtemp603[4];
    WData/*127:0*/ __Vtemp606[4];
    WData/*127:0*/ __Vtemp607[4];
    WData/*127:0*/ __Vtemp610[4];
    WData/*127:0*/ __Vtemp611[4];
    WData/*127:0*/ __Vtemp614[4];
    WData/*127:0*/ __Vtemp615[4];
    WData/*127:0*/ __Vtemp618[4];
    WData/*127:0*/ __Vtemp619[4];
    WData/*127:0*/ __Vtemp622[4];
    WData/*127:0*/ __Vtemp623[4];
    WData/*127:0*/ __Vtemp626[4];
    WData/*127:0*/ __Vtemp627[4];
    WData/*127:0*/ __Vtemp630[4];
    WData/*127:0*/ __Vtemp631[4];
    WData/*127:0*/ __Vtemp634[4];
    WData/*127:0*/ __Vtemp635[4];
    WData/*127:0*/ __Vtemp638[4];
    WData/*127:0*/ __Vtemp639[4];
    WData/*127:0*/ __Vtemp642[4];
    WData/*127:0*/ __Vtemp643[4];
    WData/*127:0*/ __Vtemp646[4];
    WData/*127:0*/ __Vtemp647[4];
    WData/*127:0*/ __Vtemp650[4];
    WData/*127:0*/ __Vtemp651[4];
    WData/*127:0*/ __Vtemp654[4];
    WData/*127:0*/ __Vtemp655[4];
    WData/*127:0*/ __Vtemp658[4];
    WData/*127:0*/ __Vtemp659[4];
    WData/*127:0*/ __Vtemp662[4];
    WData/*127:0*/ __Vtemp663[4];
    WData/*127:0*/ __Vtemp666[4];
    WData/*127:0*/ __Vtemp667[4];
    WData/*127:0*/ __Vtemp670[4];
    WData/*127:0*/ __Vtemp671[4];
    WData/*127:0*/ __Vtemp674[4];
    WData/*127:0*/ __Vtemp675[4];
    WData/*127:0*/ __Vtemp678[4];
    WData/*127:0*/ __Vtemp679[4];
    WData/*127:0*/ __Vtemp690[4];
    WData/*127:0*/ __Vtemp691[4];
    WData/*127:0*/ __Vtemp692[4];
    WData/*127:0*/ __Vtemp693[4];
    WData/*127:0*/ __Vtemp698[4];
    WData/*127:0*/ __Vtemp699[4];
    WData/*127:0*/ __Vtemp700[4];
    WData/*127:0*/ __Vtemp701[4];
    WData/*127:0*/ __Vtemp704[4];
    WData/*127:0*/ __Vtemp705[4];
    WData/*127:0*/ __Vtemp706[4];
    WData/*127:0*/ __Vtemp718[4];
    WData/*127:0*/ __Vtemp719[4];
    WData/*127:0*/ __Vtemp721[4];
    WData/*127:0*/ __Vtemp722[4];
    WData/*127:0*/ __Vtemp730[4];
    WData/*127:0*/ __Vtemp734[4];
    WData/*127:0*/ __Vtemp735[4];
    WData/*127:0*/ __Vtemp740[4];
    WData/*127:0*/ __Vtemp741[4];
    WData/*127:0*/ __Vtemp742[4];
    WData/*127:0*/ __Vtemp744[4];
    WData/*127:0*/ __Vtemp753[4];
    WData/*127:0*/ __Vtemp754[4];
    WData/*127:0*/ __Vtemp755[4];
    WData/*127:0*/ __Vtemp756[4];
    WData/*127:0*/ __Vtemp757[4];
    WData/*127:0*/ __Vtemp758[4];
    WData/*127:0*/ __Vtemp759[4];
    WData/*127:0*/ __Vtemp765[4];
    WData/*127:0*/ __Vtemp767[4];
    WData/*127:0*/ __Vtemp768[4];
    WData/*127:0*/ __Vtemp769[4];
    WData/*127:0*/ __Vtemp781[4];
    WData/*127:0*/ __Vtemp788[4];
    WData/*127:0*/ __Vtemp801[4];
    // Body
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros 
        = ((0U == (7U & ((0x7fff8U & (vlTOPp->a[4U] 
                                      << 3U)) | (vlTOPp->a[3U] 
                                                 >> 0x1dU)))) 
           & (0U == (7U & ((0x7fff8U & (vlTOPp->b[4U] 
                                        << 3U)) | (
                                                   vlTOPp->b[3U] 
                                                   >> 0x1dU)))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                      << 2U)) | (vlTOPp->a[3U] 
                                                 >> 0x1eU)))) 
           & (vlTOPp->a[3U] >> 0x1dU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->b[4U] 
                                      << 2U)) | (vlTOPp->b[3U] 
                                                 >> 0x1eU)))) 
           & (vlTOPp->b[3U] >> 0x1dU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->a[4U] 
                                      << 2U)) | (vlTOPp->a[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->a[3U] >> 0x1dU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & ((0x3fffcU & (vlTOPp->b[4U] 
                                      << 2U)) | (vlTOPp->b[3U] 
                                                 >> 0x1eU)))) 
           & (~ (vlTOPp->b[3U] >> 0x1dU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns 
        = ((1U & vlTOPp->a[4U]) == (1U & vlTOPp->b[4U]));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[0U] 
        = vlTOPp->a[0U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[1U] 
        = vlTOPp->a[1U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[2U] 
        = vlTOPp->a[2U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->a[4U] 
                                             << 3U)) 
                                         | (vlTOPp->a[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->a[3U]));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[0U] 
        = vlTOPp->b[0U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[1U] 
        = vlTOPp->b[1U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[2U] 
        = vlTOPp->b[2U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[3U] 
        = ((0xffff0000U & ((0U != (7U & ((0x7fff8U 
                                          & (vlTOPp->b[4U] 
                                             << 3U)) 
                                         | (vlTOPp->b[3U] 
                                            >> 0x1dU)))) 
                           << 0x10U)) | (0xffffU & 
                                         vlTOPp->b[3U]));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps 
        = (0x1ffffU & ((0xffffU & ((vlTOPp->a[4U] << 0x10U) 
                                   | (vlTOPp->a[3U] 
                                      >> 0x10U))) - 
                       (0xffffU & ((vlTOPp->b[4U] << 0x10U) 
                                   | (vlTOPp->b[3U] 
                                      >> 0x10U)))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA) 
            & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB)) 
           & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
        = (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
            ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[0U]
            : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[0U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
        = (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
            ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[1U]
            : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[1U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
        = (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
            ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[2U]
            : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[2U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
        = (0x1ffffU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                        ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[3U]
                        : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[3U]));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign 
        = ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps), 7U)) 
           & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                             VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps), 7U)) 
              | (0U == (0x7fU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist 
        = (0x7fU & (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                     ? ((0xffffU & ((vlTOPp->b[4U] 
                                     << 0x10U) | (vlTOPp->b[3U] 
                                                  >> 0x10U))) 
                        - (0xffffU & ((vlTOPp->a[4U] 
                                       << 0x10U) | 
                                      (vlTOPp->a[3U] 
                                       >> 0x10U))))
                     : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps));
    VL_EXTEND_WW(116,114, __Vtemp416, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA);
    VL_SHIFTL_WWI(116,116,32, __Vtemp417, __Vtemp416, 2U);
    VL_EXTEND_WW(116,114, __Vtemp421, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA);
    VL_SHIFTL_WWI(116,116,32, __Vtemp422, __Vtemp421, 1U);
    VL_EXTEND_WW(116,114, __Vtemp427, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA);
    __Vtemp431[0U] = ((((VL_LTES_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)) 
                         & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)
                         ? __Vtemp417[0U] : 0U) | (
                                                   (VL_LTES_III(1,32,32, 0U, 
                                                                VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)) 
                                                    & (~ vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                                                    ? 
                                                   __Vtemp422[0U]
                                                    : 0U)) 
                      | (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                          ? __Vtemp427[0U] : 0U));
    __Vtemp431[1U] = ((((VL_LTES_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)) 
                         & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)
                         ? __Vtemp417[1U] : 0U) | (
                                                   (VL_LTES_III(1,32,32, 0U, 
                                                                VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)) 
                                                    & (~ vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                                                    ? 
                                                   __Vtemp422[1U]
                                                    : 0U)) 
                      | (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                          ? __Vtemp427[1U] : 0U));
    __Vtemp431[2U] = ((((VL_LTES_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)) 
                         & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)
                         ? __Vtemp417[2U] : 0U) | (
                                                   (VL_LTES_III(1,32,32, 0U, 
                                                                VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)) 
                                                    & (~ vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                                                    ? 
                                                   __Vtemp422[2U]
                                                    : 0U)) 
                      | (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                          ? __Vtemp427[2U] : 0U));
    __Vtemp431[3U] = ((((VL_LTES_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)) 
                         & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)
                         ? __Vtemp417[3U] : 0U) | (
                                                   (VL_LTES_III(1,32,32, 0U, 
                                                                VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)) 
                                                    & (~ vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                                                    ? 
                                                   __Vtemp422[3U]
                                                    : 0U)) 
                      | (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                          ? __Vtemp427[3U] : 0U));
    VL_EXTEND_WW(116,114, __Vtemp432, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB);
    VL_SHIFTL_WWI(116,116,32, __Vtemp433, __Vtemp432, 1U);
    VL_SUB_W(4, __Vtemp434, __Vtemp431, __Vtemp433);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum[0U] 
        = __Vtemp434[0U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum[1U] 
        = __Vtemp434[1U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum[2U] 
        = __Vtemp434[2U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum[3U] 
        = (0xfffffU & __Vtemp434[3U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__invalidExc 
        = ((((7U == (7U & ((vlTOPp->a[4U] << 3U) | 
                           (vlTOPp->a[3U] >> 0x1dU)))) 
             & (~ (vlTOPp->a[3U] >> 0xfU))) | ((7U 
                                                == 
                                                (7U 
                                                 & ((vlTOPp->b[4U] 
                                                     << 3U) 
                                                    | (vlTOPp->b[3U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  (vlTOPp->b[3U] 
                                                   >> 0xfU)))) 
           | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_isNaN 
        = (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA) 
            | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)) 
           | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffffffeU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | (0U != (3U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U])));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffffffdU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       << 0x1eU) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                       >> 2U))))) << 1U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffffffbU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       << 0x1aU) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                       >> 6U))))) << 2U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffffff7U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       << 0x16U) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                       >> 0xaU))))) 
              << 3U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fffffefU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       << 0x12U) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                       >> 0xeU))))) 
              << 4U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fffffdfU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       << 0xeU) | (
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                                   >> 0x12U))))) 
              << 5U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fffffbfU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       << 0xaU) | (
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                                   >> 0x16U))))) 
              << 6U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fffff7fU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       << 6U) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                                 >> 0x1aU))))) 
              << 7U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffffeffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       << 2U) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                                 >> 0x1eU))))) 
              << 8U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffffdffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       << 0x1eU) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       >> 2U))))) << 9U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffffbffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       << 0x1aU) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       >> 6U))))) << 0xaU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffff7ffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       << 0x16U) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       >> 0xaU))))) 
              << 0xbU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fffefffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       << 0x12U) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                       >> 0xeU))))) 
              << 0xcU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fffdfffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       << 0xeU) | (
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                                   >> 0x12U))))) 
              << 0xdU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fffbfffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       << 0xaU) | (
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                                   >> 0x16U))))) 
              << 0xeU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fff7fffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       << 6U) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                                 >> 0x1aU))))) 
              << 0xfU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffeffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       << 2U) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                                 >> 0x1eU))))) 
              << 0x10U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffdffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                       << 0x1eU) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       >> 2U))))) << 0x11U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ffbffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                       << 0x1aU) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       >> 6U))))) << 0x12U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1ff7ffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                       << 0x16U) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       >> 0xaU))))) 
              << 0x13U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fefffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                       << 0x12U) | 
                                      (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                       >> 0xeU))))) 
              << 0x14U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fdfffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                       << 0xeU) | (
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                                   >> 0x12U))))) 
              << 0x15U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1fbfffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                       << 0xaU) | (
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                                   >> 0x16U))))) 
              << 0x16U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1f7fffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                       << 6U) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                                 >> 0x1aU))))) 
              << 0x17U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1effffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                       << 2U) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                                 >> 0x1eU))))) 
              << 0x18U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1dffffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                      >> 2U)))) << 0x19U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x1bffffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                      >> 6U)))) << 0x1aU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0x17ffffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (0xfU & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                      >> 0xaU)))) << 0x1bU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
        = ((0xfffffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller) 
           | ((IData)((0U != (7U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                    >> 0xeU)))) << 0x1cU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags 
        = (((~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)) 
            & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign))) 
           & (1U >= (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign)
            ? 0x7fU : (0x7fU & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist)));
    __Vtemp438[0U] = 0U;
    __Vtemp438[1U] = 0U;
    __Vtemp438[2U] = 0U;
    __Vtemp438[3U] = 0U;
    VL_NEGATE_W(4, __Vtemp439, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum[0U] 
        = (VL_GTS_IWW(1,116,116, __Vtemp438, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)
            ? __Vtemp439[0U] : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum[0U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum[1U] 
        = (VL_GTS_IWW(1,116,116, __Vtemp438, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)
            ? __Vtemp439[1U] : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum[1U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum[2U] 
        = (VL_GTS_IWW(1,116,116, __Vtemp438, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)
            ? __Vtemp439[2U] : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum[2U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum[3U] 
        = (0x7ffffU & (VL_GTS_IWW(1,116,116, __Vtemp438, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)
                        ? __Vtemp439[3U] : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum[3U]));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__invalidExc) 
           | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_isNaN));
    __Vtemp446[0U] = (0xffffffe0U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                     << 5U));
    __Vtemp446[1U] = ((0x1fU & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[0U] 
                                >> 0x1bU)) | (0xffffffe0U 
                                              & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                                 << 5U)));
    __Vtemp446[2U] = ((0x1fU & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[1U] 
                                >> 0x1bU)) | (0xffffffe0U 
                                              & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                                 << 5U)));
    __Vtemp446[3U] = ((0x1fU & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[2U] 
                                >> 0x1bU)) | (0xffffffe0U 
                                              & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller[3U] 
                                                 << 5U)));
    VL_SHIFTR_WWI(118,118,7, __Vtemp447, __Vtemp446, (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[0U] 
        = __Vtemp447[0U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[1U] 
        = __Vtemp447[1U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[2U] 
        = __Vtemp447[2U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[3U] 
        = (0x3fffffU & __Vtemp447[3U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
        = (0x1fffffffU & (IData)((VL_ULL(0x3fffffff) 
                                  & (VL_SHIFTRS_QQI(33,33,5, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c, 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist) 
                                                        >> 2U))) 
                                     >> 3U))));
    VL_EXTEND_WW(116,115, __Vtemp450, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp451, __Vtemp450, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffffffe) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | (IData)((IData)((0U != (3U & __Vtemp451[0U])))));
    VL_EXTEND_WW(116,115, __Vtemp454, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp455, __Vtemp454, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffffffd) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp455[1U] 
                                             << 0x1eU) 
                                            | (__Vtemp455[0U] 
                                               >> 2U)))))) 
              << 1U));
    VL_EXTEND_WW(116,115, __Vtemp458, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp459, __Vtemp458, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffffffb) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp459[1U] 
                                             << 0x1cU) 
                                            | (__Vtemp459[0U] 
                                               >> 4U)))))) 
              << 2U));
    VL_EXTEND_WW(116,115, __Vtemp462, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp463, __Vtemp462, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffffff7) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp463[1U] 
                                             << 0x1aU) 
                                            | (__Vtemp463[0U] 
                                               >> 6U)))))) 
              << 3U));
    VL_EXTEND_WW(116,115, __Vtemp466, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp467, __Vtemp466, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffffffef) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp467[1U] 
                                             << 0x18U) 
                                            | (__Vtemp467[0U] 
                                               >> 8U)))))) 
              << 4U));
    VL_EXTEND_WW(116,115, __Vtemp470, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp471, __Vtemp470, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffffffdf) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp471[1U] 
                                             << 0x16U) 
                                            | (__Vtemp471[0U] 
                                               >> 0xaU)))))) 
              << 5U));
    VL_EXTEND_WW(116,115, __Vtemp474, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp475, __Vtemp474, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffffffbf) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp475[1U] 
                                             << 0x14U) 
                                            | (__Vtemp475[0U] 
                                               >> 0xcU)))))) 
              << 6U));
    VL_EXTEND_WW(116,115, __Vtemp478, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp479, __Vtemp478, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffffff7f) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp479[1U] 
                                             << 0x12U) 
                                            | (__Vtemp479[0U] 
                                               >> 0xeU)))))) 
              << 7U));
    VL_EXTEND_WW(116,115, __Vtemp482, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp483, __Vtemp482, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffffeff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp483[1U] 
                                             << 0x10U) 
                                            | (__Vtemp483[0U] 
                                               >> 0x10U)))))) 
              << 8U));
    VL_EXTEND_WW(116,115, __Vtemp486, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp487, __Vtemp486, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffffdff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp487[1U] 
                                             << 0xeU) 
                                            | (__Vtemp487[0U] 
                                               >> 0x12U)))))) 
              << 9U));
    VL_EXTEND_WW(116,115, __Vtemp490, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp491, __Vtemp490, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffffbff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp491[1U] 
                                             << 0xcU) 
                                            | (__Vtemp491[0U] 
                                               >> 0x14U)))))) 
              << 0xaU));
    VL_EXTEND_WW(116,115, __Vtemp494, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp495, __Vtemp494, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffff7ff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp495[1U] 
                                             << 0xaU) 
                                            | (__Vtemp495[0U] 
                                               >> 0x16U)))))) 
              << 0xbU));
    VL_EXTEND_WW(116,115, __Vtemp498, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp499, __Vtemp498, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffffefff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp499[1U] 
                                             << 8U) 
                                            | (__Vtemp499[0U] 
                                               >> 0x18U)))))) 
              << 0xcU));
    VL_EXTEND_WW(116,115, __Vtemp502, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp503, __Vtemp502, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffffdfff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp503[1U] 
                                             << 6U) 
                                            | (__Vtemp503[0U] 
                                               >> 0x1aU)))))) 
              << 0xdU));
    VL_EXTEND_WW(116,115, __Vtemp506, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp507, __Vtemp506, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffffbfff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp507[1U] 
                                             << 4U) 
                                            | (__Vtemp507[0U] 
                                               >> 0x1cU)))))) 
              << 0xeU));
    VL_EXTEND_WW(116,115, __Vtemp510, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp511, __Vtemp510, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffff7fff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp511[1U] 
                                             << 2U) 
                                            | (__Vtemp511[0U] 
                                               >> 0x1eU)))))) 
              << 0xfU));
    VL_EXTEND_WW(116,115, __Vtemp514, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp515, __Vtemp514, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffeffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & __Vtemp515[1U])))) 
              << 0x10U));
    VL_EXTEND_WW(116,115, __Vtemp518, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp519, __Vtemp518, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffdffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp519[2U] 
                                             << 0x1eU) 
                                            | (__Vtemp519[1U] 
                                               >> 2U)))))) 
              << 0x11U));
    VL_EXTEND_WW(116,115, __Vtemp522, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp523, __Vtemp522, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffffbffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp523[2U] 
                                             << 0x1cU) 
                                            | (__Vtemp523[1U] 
                                               >> 4U)))))) 
              << 0x12U));
    VL_EXTEND_WW(116,115, __Vtemp526, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp527, __Vtemp526, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffff7ffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp527[2U] 
                                             << 0x1aU) 
                                            | (__Vtemp527[1U] 
                                               >> 6U)))))) 
              << 0x13U));
    VL_EXTEND_WW(116,115, __Vtemp530, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp531, __Vtemp530, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffefffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp531[2U] 
                                             << 0x18U) 
                                            | (__Vtemp531[1U] 
                                               >> 8U)))))) 
              << 0x14U));
    VL_EXTEND_WW(116,115, __Vtemp534, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp535, __Vtemp534, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffdfffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp535[2U] 
                                             << 0x16U) 
                                            | (__Vtemp535[1U] 
                                               >> 0xaU)))))) 
              << 0x15U));
    VL_EXTEND_WW(116,115, __Vtemp538, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp539, __Vtemp538, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffffbfffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp539[2U] 
                                             << 0x14U) 
                                            | (__Vtemp539[1U] 
                                               >> 0xcU)))))) 
              << 0x16U));
    VL_EXTEND_WW(116,115, __Vtemp542, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp543, __Vtemp542, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffff7fffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp543[2U] 
                                             << 0x12U) 
                                            | (__Vtemp543[1U] 
                                               >> 0xeU)))))) 
              << 0x17U));
    VL_EXTEND_WW(116,115, __Vtemp546, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp547, __Vtemp546, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffeffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp547[2U] 
                                             << 0x10U) 
                                            | (__Vtemp547[1U] 
                                               >> 0x10U)))))) 
              << 0x18U));
    VL_EXTEND_WW(116,115, __Vtemp550, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp551, __Vtemp550, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffdffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp551[2U] 
                                             << 0xeU) 
                                            | (__Vtemp551[1U] 
                                               >> 0x12U)))))) 
              << 0x19U));
    VL_EXTEND_WW(116,115, __Vtemp554, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp555, __Vtemp554, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffffbffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp555[2U] 
                                             << 0xcU) 
                                            | (__Vtemp555[1U] 
                                               >> 0x14U)))))) 
              << 0x1aU));
    VL_EXTEND_WW(116,115, __Vtemp558, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp559, __Vtemp558, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffff7ffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp559[2U] 
                                             << 0xaU) 
                                            | (__Vtemp559[1U] 
                                               >> 0x16U)))))) 
              << 0x1bU));
    VL_EXTEND_WW(116,115, __Vtemp562, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp563, __Vtemp562, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffefffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp563[2U] 
                                             << 8U) 
                                            | (__Vtemp563[1U] 
                                               >> 0x18U)))))) 
              << 0x1cU));
    VL_EXTEND_WW(116,115, __Vtemp566, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp567, __Vtemp566, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffdfffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp567[2U] 
                                             << 6U) 
                                            | (__Vtemp567[1U] 
                                               >> 0x1aU)))))) 
              << 0x1dU));
    VL_EXTEND_WW(116,115, __Vtemp570, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp571, __Vtemp570, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffffbfffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp571[2U] 
                                             << 4U) 
                                            | (__Vtemp571[1U] 
                                               >> 0x1cU)))))) 
              << 0x1eU));
    VL_EXTEND_WW(116,115, __Vtemp574, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp575, __Vtemp574, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffff7fffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((__Vtemp575[2U] 
                                             << 2U) 
                                            | (__Vtemp575[1U] 
                                               >> 0x1eU)))))) 
              << 0x1fU));
    VL_EXTEND_WW(116,115, __Vtemp578, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp579, __Vtemp578, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffeffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & __Vtemp579[2U])))) 
              << 0x20U));
    VL_EXTEND_WW(116,115, __Vtemp582, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp583, __Vtemp582, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffdffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xc0000000U 
                                             & (__Vtemp583[3U] 
                                                << 0x1eU)) 
                                            | (__Vtemp583[2U] 
                                               >> 2U)))))) 
              << 0x21U));
    VL_EXTEND_WW(116,115, __Vtemp586, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp587, __Vtemp586, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffffbffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xf0000000U 
                                             & (__Vtemp587[3U] 
                                                << 0x1cU)) 
                                            | (__Vtemp587[2U] 
                                               >> 4U)))))) 
              << 0x22U));
    VL_EXTEND_WW(116,115, __Vtemp590, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp591, __Vtemp590, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffff7ffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xfc000000U 
                                             & (__Vtemp591[3U] 
                                                << 0x1aU)) 
                                            | (__Vtemp591[2U] 
                                               >> 6U)))))) 
              << 0x23U));
    VL_EXTEND_WW(116,115, __Vtemp594, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp595, __Vtemp594, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffefffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xff000000U 
                                             & (__Vtemp595[3U] 
                                                << 0x18U)) 
                                            | (__Vtemp595[2U] 
                                               >> 8U)))))) 
              << 0x24U));
    VL_EXTEND_WW(116,115, __Vtemp598, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp599, __Vtemp598, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffdfffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xffc00000U 
                                             & (__Vtemp599[3U] 
                                                << 0x16U)) 
                                            | (__Vtemp599[2U] 
                                               >> 0xaU)))))) 
              << 0x25U));
    VL_EXTEND_WW(116,115, __Vtemp602, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp603, __Vtemp602, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffffbfffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xfff00000U 
                                             & (__Vtemp603[3U] 
                                                << 0x14U)) 
                                            | (__Vtemp603[2U] 
                                               >> 0xcU)))))) 
              << 0x26U));
    VL_EXTEND_WW(116,115, __Vtemp606, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp607, __Vtemp606, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffff7fffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xfffc0000U 
                                             & (__Vtemp607[3U] 
                                                << 0x12U)) 
                                            | (__Vtemp607[2U] 
                                               >> 0xeU)))))) 
              << 0x27U));
    VL_EXTEND_WW(116,115, __Vtemp610, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp611, __Vtemp610, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffeffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xffff0000U 
                                             & (__Vtemp611[3U] 
                                                << 0x10U)) 
                                            | (__Vtemp611[2U] 
                                               >> 0x10U)))))) 
              << 0x28U));
    VL_EXTEND_WW(116,115, __Vtemp614, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp615, __Vtemp614, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffdffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xffffc000U 
                                             & (__Vtemp615[3U] 
                                                << 0xeU)) 
                                            | (__Vtemp615[2U] 
                                               >> 0x12U)))))) 
              << 0x29U));
    VL_EXTEND_WW(116,115, __Vtemp618, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp619, __Vtemp618, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fffbffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xfffff000U 
                                             & (__Vtemp619[3U] 
                                                << 0xcU)) 
                                            | (__Vtemp619[2U] 
                                               >> 0x14U)))))) 
              << 0x2aU));
    VL_EXTEND_WW(116,115, __Vtemp622, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp623, __Vtemp622, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fff7ffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0x3ffffc00U 
                                             & (__Vtemp623[3U] 
                                                << 0xaU)) 
                                            | (__Vtemp623[2U] 
                                               >> 0x16U)))))) 
              << 0x2bU));
    VL_EXTEND_WW(116,115, __Vtemp626, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp627, __Vtemp626, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffefffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xfffff00U 
                                             & (__Vtemp627[3U] 
                                                << 8U)) 
                                            | (__Vtemp627[2U] 
                                               >> 0x18U)))))) 
              << 0x2cU));
    VL_EXTEND_WW(116,115, __Vtemp630, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp631, __Vtemp630, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffdfffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0x3ffffc0U 
                                             & (__Vtemp631[3U] 
                                                << 6U)) 
                                            | (__Vtemp631[2U] 
                                               >> 0x1aU)))))) 
              << 0x2dU));
    VL_EXTEND_WW(116,115, __Vtemp634, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp635, __Vtemp634, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ffbfffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0xfffff0U 
                                             & (__Vtemp635[3U] 
                                                << 4U)) 
                                            | (__Vtemp635[2U] 
                                               >> 0x1cU)))))) 
              << 0x2eU));
    VL_EXTEND_WW(116,115, __Vtemp638, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp639, __Vtemp638, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3ff7fffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & ((0x3ffffcU 
                                             & (__Vtemp639[3U] 
                                                << 2U)) 
                                            | (__Vtemp639[2U] 
                                               >> 0x1eU)))))) 
              << 0x2fU));
    VL_EXTEND_WW(116,115, __Vtemp642, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp643, __Vtemp642, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3feffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & __Vtemp643[3U])))) 
              << 0x30U));
    VL_EXTEND_WW(116,115, __Vtemp646, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp647, __Vtemp646, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fdffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp647[3U] 
                                            >> 2U))))) 
              << 0x31U));
    VL_EXTEND_WW(116,115, __Vtemp650, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp651, __Vtemp650, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3fbffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp651[3U] 
                                            >> 4U))))) 
              << 0x32U));
    VL_EXTEND_WW(116,115, __Vtemp654, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp655, __Vtemp654, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3f7ffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp655[3U] 
                                            >> 6U))))) 
              << 0x33U));
    VL_EXTEND_WW(116,115, __Vtemp658, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp659, __Vtemp658, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3efffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp659[3U] 
                                            >> 8U))))) 
              << 0x34U));
    VL_EXTEND_WW(116,115, __Vtemp662, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp663, __Vtemp662, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3dfffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp663[3U] 
                                            >> 0xaU))))) 
              << 0x35U));
    VL_EXTEND_WW(116,115, __Vtemp666, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp667, __Vtemp666, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x3bfffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp667[3U] 
                                            >> 0xcU))))) 
              << 0x36U));
    VL_EXTEND_WW(116,115, __Vtemp670, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp671, __Vtemp670, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x37fffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp671[3U] 
                                            >> 0xeU))))) 
              << 0x37U));
    VL_EXTEND_WW(116,115, __Vtemp674, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp675, __Vtemp674, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x2ffffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp675[3U] 
                                            >> 0x10U))))) 
              << 0x38U));
    VL_EXTEND_WW(116,115, __Vtemp678, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,32, __Vtemp679, __Vtemp678, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
        = ((VL_ULL(0x1ffffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum) 
           | ((QData)((IData)((0U != (3U & (__Vtemp679[3U] 
                                            >> 0x12U))))) 
              << 0x39U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffffffeU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (1U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                    >> 0x1cU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffffffdU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (2U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                    >> 0x1aU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffffffbU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (4U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                    >> 0x18U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffffff7U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (8U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                    >> 0x16U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fffffefU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x10U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                       >> 0x14U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fffffdfU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x20U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                       >> 0x12U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fffffbfU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x40U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                       >> 0x10U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fffff7fU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x80U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                       >> 0xeU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffffeffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x100U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                        >> 0xcU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffffdffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x200U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                        >> 0xaU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffffbffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x400U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                        >> 8U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffff7ffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x800U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                        >> 6U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fffefffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x1000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                         >> 4U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fffdfffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x2000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                         >> 2U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fffbfffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x4000U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fff7fffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x8000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                         << 2U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffeffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x10000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                          << 4U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffdffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x20000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                          << 6U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ffbffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x40000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                          << 8U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1ff7ffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x80000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                          << 0xaU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fefffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x100000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                           << 0xcU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fdfffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x200000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                           << 0xeU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1fbfffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x400000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                           << 0x10U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1f7fffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x800000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                           << 0x12U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1effffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x1000000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                            << 0x14U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1dffffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x2000000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                            << 0x16U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x1bffffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x4000000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                            << 0x18U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0x17ffffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x8000000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                            << 0x1aU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask 
        = ((0xfffffffU & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask) 
           | (0x10000000U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut 
                             << 0x1cU)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffffffe) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | (IData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                            >> 0x39U))))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffffffd) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x38U))))) 
              << 1U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffffffb) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x37U))))) 
              << 2U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffffff7) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x36U))))) 
              << 3U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffffffef) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x35U))))) 
              << 4U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffffffdf) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x34U))))) 
              << 5U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffffffbf) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x33U))))) 
              << 6U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffffff7f) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x32U))))) 
              << 7U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffffeff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x31U))))) 
              << 8U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffffdff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x30U))))) 
              << 9U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffffbff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x2fU))))) 
              << 0xaU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffff7ff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x2eU))))) 
              << 0xbU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffffefff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x2dU))))) 
              << 0xcU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffffdfff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x2cU))))) 
              << 0xdU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffffbfff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x2bU))))) 
              << 0xeU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffff7fff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x2aU))))) 
              << 0xfU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffeffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x29U))))) 
              << 0x10U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffdffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x28U))))) 
              << 0x11U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffffbffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x27U))))) 
              << 0x12U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffff7ffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x26U))))) 
              << 0x13U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffefffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x25U))))) 
              << 0x14U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffdfffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x24U))))) 
              << 0x15U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffffbfffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x23U))))) 
              << 0x16U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffff7fffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x22U))))) 
              << 0x17U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffeffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x21U))))) 
              << 0x18U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffdffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x20U))))) 
              << 0x19U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffffbffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x1fU))))) 
              << 0x1aU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffff7ffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x1eU))))) 
              << 0x1bU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffefffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x1dU))))) 
              << 0x1cU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffdfffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x1cU))))) 
              << 0x1dU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffffbfffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x1bU))))) 
              << 0x1eU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffff7fffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x1aU))))) 
              << 0x1fU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffeffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x19U))))) 
              << 0x20U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffdffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x18U))))) 
              << 0x21U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffffbffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x17U))))) 
              << 0x22U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffff7ffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x16U))))) 
              << 0x23U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffefffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x15U))))) 
              << 0x24U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffdfffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x14U))))) 
              << 0x25U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffffbfffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x13U))))) 
              << 0x26U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffff7fffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x12U))))) 
              << 0x27U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffeffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x11U))))) 
              << 0x28U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffdffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0x10U))))) 
              << 0x29U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fffbffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0xfU))))) 
              << 0x2aU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fff7ffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0xeU))))) 
              << 0x2bU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffefffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0xdU))))) 
              << 0x2cU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffdfffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0xcU))))) 
              << 0x2dU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ffbfffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0xbU))))) 
              << 0x2eU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3ff7fffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 0xaU))))) 
              << 0x2fU));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3feffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 9U))))) 
              << 0x30U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fdffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 8U))))) 
              << 0x31U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3fbffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 7U))))) 
              << 0x32U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3f7ffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 6U))))) 
              << 0x33U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3efffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 5U))))) 
              << 0x34U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3dfffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 4U))))) 
              << 0x35U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x3bfffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 3U))))) 
              << 0x36U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x37fffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 2U))))) 
              << 0x37U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x2ffffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum 
                                             >> 1U))))) 
              << 0x38U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((VL_ULL(0x1ffffffffffffff) & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           | ((QData)((IData)((1U & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum)))) 
              << 0x39U));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller[0U] 
        = ((0xfffffffeU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[1U] 
                            << 0x1eU) | (0x3ffffffeU 
                                         & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[0U] 
                                            >> 2U)))) 
           | ((0U != (7U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[0U])) 
              | (0U != (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller 
                        & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller[1U] 
        = ((1U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[1U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[2U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[1U] 
                                                  >> 2U)))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller[2U] 
        = ((1U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[2U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[3U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[2U] 
                                                  >> 2U)))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller[3U] 
        = ((1U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[3U] 
                  >> 2U)) | (0xffffeU & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller[3U] 
                                         >> 2U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((VL_ULL(0x400000000000000) | vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn) 
           & (VL_ULL(1) + (VL_ULL(0x3ffffffffffffff) 
                           & (~ vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn))));
    __Vtemp690[0U] = (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                       ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[0U]
                       : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[0U]);
    __Vtemp690[1U] = (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                       ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[1U]
                       : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[1U]);
    __Vtemp690[2U] = (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                       ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[2U]
                       : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[2U]);
    __Vtemp690[3U] = (0x1ffffU & (VL_GTS_III(1,32,32, 0U, 
                                             VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                                   ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[3U]
                                   : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[3U]));
    VL_EXTEND_WW(117,113, __Vtemp691, __Vtemp690);
    VL_SHIFTL_WWI(117,117,32, __Vtemp692, __Vtemp691, 3U);
    VL_EXTEND_WW(117,116, __Vtemp693, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller);
    __Vtemp698[0U] = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                       ? __Vtemp693[0U] : (~ vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller[0U]));
    __Vtemp698[1U] = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                       ? __Vtemp693[1U] : (~ vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller[1U]));
    __Vtemp698[2U] = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                       ? __Vtemp693[2U] : (~ vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller[2U]));
    __Vtemp698[3U] = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                       ? __Vtemp693[3U] : (0x100000U 
                                           | (0xfffffU 
                                              & (~ 
                                                 vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller[3U]))));
    VL_ADD_W(4, __Vtemp699, __Vtemp692, __Vtemp698);
    VL_EXTEND_WI(117,1, __Vtemp700, (1U & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))));
    VL_ADD_W(4, __Vtemp701, __Vtemp699, __Vtemp700);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[0U] 
        = __Vtemp701[0U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[1U] 
        = __Vtemp701[1U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[2U] 
        = __Vtemp701[2U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[3U] 
        = (0x1fffffU & __Vtemp701[3U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                            >> 1U)))
                              ? 1U : 0U) | ((1U & (IData)(
                                                          (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                           >> 2U)))
                                             ? 2U : 0U)) 
                           | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                             >> 3U)))
                               ? 3U : 0U)) | ((1U & (IData)(
                                                            (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                             >> 4U)))
                                               ? 4U
                                               : 0U)) 
                         | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                           >> 5U)))
                             ? 5U : 0U)) | ((1U & (IData)(
                                                          (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                           >> 6U)))
                                             ? 6U : 0U)) 
                       | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                         >> 7U))) ? 7U
                           : 0U)) | ((1U & (IData)(
                                                   (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                    >> 8U)))
                                      ? 8U : 0U)) | 
                     ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                     >> 9U))) ? 9U : 0U)) 
                    | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                      >> 0xaU))) ? 0xaU
                        : 0U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                               >> 0xbU)))
                                 ? 0xbU : 0U)) | ((1U 
                                                   & (IData)(
                                                             (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                              >> 0xcU)))
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                             >> 0xdU)))
                               ? 0xdU : 0U)) | ((1U 
                                                 & (IData)(
                                                           (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                            >> 0xeU)))
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                           >> 0xfU)))
                             ? 0xfU : 0U)) | ((1U & (IData)(
                                                            (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                             >> 0x10U)))
                                               ? 0x10U
                                               : 0U)) 
                       | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                         >> 0x11U)))
                           ? 0x11U : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                            >> 0x12U)))
                                              ? 0x12U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                       >> 0x13U))) ? 0x13U
                         : 0U)) | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                  >> 0x14U)))
                                    ? 0x14U : 0U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__30__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                               >> 0x15U)))
                                 ? 0x15U : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                               >> 0x16U)))
                                                    ? 0x16U
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                             >> 0x17U)))
                               ? 0x17U : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                             >> 0x18U)))
                                                  ? 0x18U
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                           >> 0x19U)))
                             ? 0x19U : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                           >> 0x1aU)))
                                                ? 0x1aU
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                         >> 0x1bU)))
                           ? 0x1bU : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                            >> 0x1cU)))
                                              ? 0x1cU
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                       >> 0x1dU))) ? 0x1dU
                         : 0U)) | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                  >> 0x1eU)))
                                    ? 0x1eU : 0U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__40__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__30__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                               >> 0x1fU)))
                                 ? 0x1fU : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                               >> 0x20U)))
                                                    ? 0x20U
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                             >> 0x21U)))
                               ? 0x21U : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                             >> 0x22U)))
                                                  ? 0x22U
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                           >> 0x23U)))
                             ? 0x23U : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                           >> 0x24U)))
                                                ? 0x24U
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                         >> 0x25U)))
                           ? 0x25U : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                            >> 0x26U)))
                                              ? 0x26U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                       >> 0x27U))) ? 0x27U
                         : 0U)) | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                  >> 0x28U)))
                                    ? 0x28U : 0U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__50__KET____DOT__countSoFar 
        = (0x7fU & (((((((((((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__40__KET____DOT__countSoFar) 
                             | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                               >> 0x29U)))
                                 ? 0x29U : 0U)) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                               >> 0x2aU)))
                                                    ? 0x2aU
                                                    : 0U)) 
                           | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                             >> 0x2bU)))
                               ? 0x2bU : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                             >> 0x2cU)))
                                                  ? 0x2cU
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                           >> 0x2dU)))
                             ? 0x2dU : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                           >> 0x2eU)))
                                                ? 0x2eU
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                         >> 0x2fU)))
                           ? 0x2fU : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                            >> 0x30U)))
                                              ? 0x30U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                       >> 0x31U))) ? 0x31U
                         : 0U)) | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                  >> 0x32U)))
                                    ? 0x32U : 0U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__58__KET____DOT__countSoFar 
        = (0x7fU & (((((((((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__50__KET____DOT__countSoFar) 
                           | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                             >> 0x33U)))
                               ? 0x33U : 0U)) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                             >> 0x34U)))
                                                  ? 0x34U
                                                  : 0U)) 
                         | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                           >> 0x35U)))
                             ? 0x35U : 0U)) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                           >> 0x36U)))
                                                ? 0x36U
                                                : 0U)) 
                       | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                         >> 0x37U)))
                           ? 0x37U : 0U)) | ((1U & (IData)(
                                                           (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                            >> 0x38U)))
                                              ? 0x38U
                                              : 0U)) 
                     | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                       >> 0x39U))) ? 0x39U
                         : 0U)) | ((1U & (IData)((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
                                                  >> 0x3aU)))
                                    ? 0x3aU : 0U)));
    VL_EXTEND_WW(116,115, __Vtemp704, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    VL_SHIFTL_WWI(116,116,7, __Vtemp705, __Vtemp704, 
                  (0x7fU & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__58__KET____DOT__countSoFar) 
                            << 1U)));
    VL_SHIFTL_WWI(116,116,32, __Vtemp706, __Vtemp705, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[0U] 
        = __Vtemp706[0U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[1U] 
        = __Vtemp706[1U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[2U] 
        = __Vtemp706[2U];
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[3U] 
        = (0xfffffU & __Vtemp706[3U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros) 
           | (((~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut)) 
               & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)) 
              & (~ (IData)((0U != (3U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[3U] 
                                         >> 0x12U)))))));
    __Vtemp718[0U] = (0xfffffffcU & (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                                       ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[0U]
                                       : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                           ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[0U]
                                           : 0U)) << 2U));
    __Vtemp718[1U] = ((3U & (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                               ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[0U]
                               : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                   ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[0U]
                                   : 0U)) >> 0x1eU)) 
                      | (0xfffffffcU & (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                                          ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[1U]
                                          : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                              ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[1U]
                                              : 0U)) 
                                        << 2U)));
    __Vtemp718[2U] = ((3U & (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                               ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[1U]
                               : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                   ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[1U]
                                   : 0U)) >> 0x1eU)) 
                      | (0xfffffffcU & (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                                          ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[2U]
                                          : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                              ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[2U]
                                              : 0U)) 
                                        << 2U)));
    __Vtemp718[3U] = (0x60000U | ((3U & (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                                           ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[2U]
                                           : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                               ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[2U]
                                               : 0U)) 
                                         >> 0x1eU)) 
                                  | (0x1fffcU & (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                                                   ? 
                                                  vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA[3U]
                                                   : 
                                                  ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                                    ? 
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB[3U]
                                                    : 0U)) 
                                                 << 2U))));
    VL_EXTEND_WW(116,115, __Vtemp719, __Vtemp718);
    VL_SHIFTR_WWI(117,117,32, __Vtemp721, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum, 1U);
    VL_EXTEND_WI(117,1, __Vtemp722, (1U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[0U]));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[0U] 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_isNaN)
            ? __Vtemp719[0U] : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                 ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[0U]
                                 : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                     ? (__Vtemp721[0U] 
                                        | __Vtemp722[0U])
                                     : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[0U])));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[1U] 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_isNaN)
            ? __Vtemp719[1U] : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                 ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[1U]
                                 : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                     ? (__Vtemp721[1U] 
                                        | __Vtemp722[1U])
                                     : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[1U])));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[2U] 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_isNaN)
            ? __Vtemp719[2U] : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                 ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[2U]
                                 : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                     ? (__Vtemp721[2U] 
                                        | __Vtemp722[2U])
                                     : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[2U])));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
        = (0xfffffU & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_isNaN)
                        ? __Vtemp719[3U] : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                             ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[3U]
                                             : (0x1fffffU 
                                                & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns)
                                                    ? 
                                                   (__Vtemp721[3U] 
                                                    | __Vtemp722[3U])
                                                    : 
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum[3U])))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))));
    __Vtemp730[0U] = 0U;
    __Vtemp730[1U] = 0U;
    __Vtemp730[2U] = 0U;
    __Vtemp730[3U] = 0U;
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sign 
        = (1U & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_isNaN)
                  ? ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA)
                      ? (1U & vlTOPp->a[4U]) : ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB)
                                                 ? 
                                                (1U 
                                                 & vlTOPp->b[4U])
                                                 : 1U))
                  : (((((((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns) 
                          | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA)) 
                         & vlTOPp->a[4U]) | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB) 
                                             & vlTOPp->b[4U])) 
                       | (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut) 
                           & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))) 
                          & ((2U == (IData)(vlTOPp->roundingMode))
                              ? 1U : 0U))) | ((((~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                                                & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut[3U] 
                                                      >> 0x12U)))) 
                                              & (vlTOPp->a[4U] 
                                                 ^ 
                                                 VL_GTS_IWW(1,116,116, __Vtemp730, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum)))) 
                     | (((~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase)) 
                         & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags))) 
                        & (VL_GTS_III(1,32,32, 0U, 
                                      VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps))
                            ? vlTOPp->b[4U] : vlTOPp->a[4U])))));
    VL_EXTEND_WI(116,3, __Vtemp734, (3U | (4U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                                 >> 0x11U))));
    VL_SHIFTR_WWI(116,116,32, __Vtemp735, __Vtemp734, 1U);
    VL_EXTEND_WI(116,3, __Vtemp740, (3U | (4U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                                 >> 0x11U))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != ((((((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[1U] 
                        << 0x1dU) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[0U] 
                                     >> 3U)) & ((__Vtemp735[1U] 
                                                 << 0x1dU) 
                                                | (__Vtemp735[0U] 
                                                   >> 3U))) 
                     | (((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[2U] 
                          << 0x1dU) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[1U] 
                                       >> 3U)) & ((
                                                   __Vtemp735[2U] 
                                                   << 0x1dU) 
                                                  | (__Vtemp735[1U] 
                                                     >> 3U)))) 
                    | (((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                         << 0x1dU) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[2U] 
                                      >> 3U)) & ((0xe0000000U 
                                                  & (__Vtemp735[3U] 
                                                     << 0x1dU)) 
                                                 | (__Vtemp735[2U] 
                                                    >> 3U)))) 
                   | (0x1ffffU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                   >> 3U) & (__Vtemp735[3U] 
                                             >> 3U))))) 
           | ((0U != (7U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[0U] 
                            & ((__Vtemp740[1U] << 0x1fU) 
                               | (__Vtemp740[0U] >> 1U))))) 
              & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    VL_EXTEND_WI(116,3, __Vtemp741, (3U | (4U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                                 >> 0x11U))));
    VL_SHIFTR_WWI(116,116,32, __Vtemp742, __Vtemp741, 1U);
    VL_EXTEND_WI(116,3, __Vtemp744, (3U | (4U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                                 >> 0x11U))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U] 
        = ((~ __Vtemp742[0U]) & __Vtemp744[0U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
        = ((~ __Vtemp742[1U]) & __Vtemp744[1U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
        = ((~ __Vtemp742[2U]) & __Vtemp744[2U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U] 
        = ((~ __Vtemp742[3U]) & __Vtemp744[3U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sign)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sign))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != ((((((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[1U] 
                        << 0x1dU) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[0U] 
                                     >> 3U)) & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U] 
                                                   >> 3U))) 
                     | (((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[2U] 
                          << 0x1dU) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[1U] 
                                       >> 3U)) & ((
                                                   vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[1U] 
                                                     >> 3U)))) 
                    | (((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                         << 0x1dU) | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[2U] 
                                      >> 3U)) & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U] 
                                                  << 0x1dU) 
                                                 | (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[2U] 
                                                    >> 3U)))) 
                   | (0x1ffffU & ((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                   & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[3U]) 
                                  >> 3U)))) | ((0U 
                                                != 
                                                (7U 
                                                 & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[0U] 
                                                    & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask[0U]))) 
                                               & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    __Vtemp753[0U] = 1U;
    __Vtemp753[1U] = 0U;
    __Vtemp753[2U] = 0U;
    __Vtemp753[3U] = 0U;
    VL_EXTEND_WI(116,3, __Vtemp754, (3U | (4U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                                 >> 0x11U))));
    __Vtemp755[0U] = (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[0U] 
                      | __Vtemp754[0U]);
    __Vtemp755[1U] = (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[1U] 
                      | __Vtemp754[1U]);
    __Vtemp755[2U] = (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[2U] 
                      | __Vtemp754[2U]);
    __Vtemp755[3U] = (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                      | __Vtemp754[3U]);
    VL_SHIFTR_WWI(116,116,32, __Vtemp756, __Vtemp755, 2U);
    VL_ADD_W(4, __Vtemp757, __Vtemp753, __Vtemp756);
    VL_EXTEND_WI(116,3, __Vtemp758, (3U | (4U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                                 >> 0x11U))));
    VL_SHIFTR_WWI(116,116,32, __Vtemp759, __Vtemp758, 1U);
    VL_EXTEND_WI(116,3, __Vtemp765, (3U | (4U & (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                                                 >> 0x11U))));
    __Vtemp767[0U] = (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[0U] 
                      & (~ __Vtemp765[0U]));
    __Vtemp767[1U] = (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[1U] 
                      & (~ __Vtemp765[1U]));
    __Vtemp767[2U] = (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[2U] 
                      & (~ __Vtemp765[2U]));
    __Vtemp767[3U] = (vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U] 
                      & (~ __Vtemp765[3U]));
    VL_SHIFTR_WWI(116,116,32, __Vtemp768, __Vtemp767, 2U);
    VL_SHIFTR_WWI(116,116,32, __Vtemp769, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[0U] 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              | (4U == (IData)(vlTOPp->roundingMode))) 
             & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp757[0U] & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                      & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                     & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                     ? __Vtemp759[0U]
                                     : 0U))) : (__Vtemp768[0U] 
                                                | (((6U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                    ? 
                                                   __Vtemp769[0U]
                                                    : 0U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[1U] 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              | (4U == (IData)(vlTOPp->roundingMode))) 
             & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp757[1U] & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                      & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                     & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                     ? __Vtemp759[1U]
                                     : 0U))) : (__Vtemp768[1U] 
                                                | (((6U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                    ? 
                                                   __Vtemp769[1U]
                                                    : 0U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[2U] 
        = (((((0U == (IData)(vlTOPp->roundingMode)) 
              | (4U == (IData)(vlTOPp->roundingMode))) 
             & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
            | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
               & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
            ? (__Vtemp757[2U] & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                      & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                     & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                     ? __Vtemp759[2U]
                                     : 0U))) : (__Vtemp768[2U] 
                                                | (((6U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                                    ? 
                                                   __Vtemp769[2U]
                                                    : 0U)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U] 
        = (0x7ffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                          | (4U == (IData)(vlTOPp->roundingMode))) 
                         & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                        | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                           & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                        ? (__Vtemp757[3U] & (~ ((((0U 
                                                   == (IData)(vlTOPp->roundingMode)) 
                                                  & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                                 & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                                 ? 
                                                __Vtemp759[3U]
                                                 : 0U)))
                        : (__Vtemp768[3U] | (((6U == (IData)(vlTOPp->roundingMode)) 
                                              & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                              ? __Vtemp769[3U]
                                              : 0U))));
    VL_SHIFTR_WWI(115,115,32, __Vtemp781, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig, 1U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[0U] 
        = ((0x80000U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U])
            ? __Vtemp781[0U] : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[0U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[1U] 
        = ((0x80000U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U])
            ? __Vtemp781[1U] : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[1U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[2U] 
        = ((0x80000U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U])
            ? __Vtemp781[2U] : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[2U]);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U] 
        = (0xffffU & ((0x80000U & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sig[3U])
                       ? __Vtemp781[3U] : vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig[3U]));
    VL_SHIFTR_WWI(115,115,32, __Vtemp788, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig, 0x71U);
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x3ffffU & (VL_EXTENDS_II(18,17, (0x1ffffU 
                                             & VL_EXTENDS_II(17,17, 
                                                             (0x1ffffU 
                                                              & ((((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags) 
                                                                   | VL_GTS_III(1,32,32, 0U, 
                                                                                VL_EXTENDS_II(32,17, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps)))
                                                                   ? 
                                                                  (0xffffU 
                                                                   & ((vlTOPp->b[4U] 
                                                                       << 0x10U) 
                                                                      | (vlTOPp->b[3U] 
                                                                         >> 0x10U)))
                                                                   : 
                                                                  (0xffffU 
                                                                   & ((vlTOPp->a[4U] 
                                                                       << 0x10U) 
                                                                      | (vlTOPp->a[3U] 
                                                                         >> 0x10U)))) 
                                                                 - 
                                                                 ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags)
                                                                   ? 
                                                                  (0x7fU 
                                                                   & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__58__KET____DOT__countSoFar) 
                                                                      << 1U))
                                                                   : 
                                                                  (1U 
                                                                   & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns))))))))) 
                       + __Vtemp788[0U]));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,18, vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp), 0xeU)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp801[3U] = ((0xffff0000U & (((((((vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
                                            & (~ ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)
                                                   ? 0xe000U
                                                   : 0U))) 
                                           & (~ ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                  ? 0x4000U
                                                  : 0U))) 
                                          & (~ ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                 ? 0x2000U
                                                 : 0U))) 
                                         | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                             ? 0xbfffU
                                             : 0U)) 
                                        | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                            ? 0xc000U
                                            : 0U)) 
                                       | ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                           ? 0xe000U
                                           : 0U)) << 0x10U)) 
                      | (0xffffU & (((0x8000U & (((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                  << 0xfU) 
                                                 | (0xffff8000U 
                                                    & (((~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                        << 0xfU) 
                                                       & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U])))) 
                                     | ((1U & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                               | (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                                         ? (0x7fffU 
                                            & vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[3U])
                                         : 0U)) | VL_NEGATE_I((IData)((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))))));
    vlTOPp->out[0U] = (((1U & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                               | (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                         ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[0U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[1U] = (((1U & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                               | (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                         ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[1U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[2U] = (((1U & ((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                               | (~ (IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut))))
                         ? vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut[2U]
                         : 0U) | VL_NEGATE_I((IData)((IData)(vlTOPp->addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut))));
    vlTOPp->out[3U] = __Vtemp801[3U];
    vlTOPp->out[4U] = vlTOPp->addRecF128_add__DOT__addRecFN__DOT__out_sign;
}

void VaddRecF128_add::_eval(VaddRecF128_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF128_add::_eval\n"); );
    VaddRecF128_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VaddRecF128_add::_eval_initial(VaddRecF128_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF128_add::_eval_initial\n"); );
    VaddRecF128_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VaddRecF128_add::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF128_add::final\n"); );
    // Variables
    VaddRecF128_add__Syms* __restrict vlSymsp = this->__VlSymsp;
    VaddRecF128_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VaddRecF128_add::_eval_settle(VaddRecF128_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF128_add::_eval_settle\n"); );
    VaddRecF128_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VaddRecF128_add::_change_request(VaddRecF128_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF128_add::_change_request\n"); );
    VaddRecF128_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VaddRecF128_add::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF128_add::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((a[4U] & 0xfffffffeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b[4U] & 0xfffffffeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif // VL_DEBUG

void VaddRecF128_add::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddRecF128_add::_ctor_var_reset\n"); );
    // Body
    control = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, a);
    VL_RAND_RESET_W(129, b);
    roundingMode = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(129, out);
    exceptionFlags = VL_RAND_RESET_I(5);
    addRecF128_add__DOT__addRecFN__DOT__invalidExc = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__out_isNaN = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__out_sign = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(116, addRecF128_add__DOT__addRecFN__DOT__out_sig);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNA = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfA = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(114, addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigA);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isNaNB = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isInfB = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(114, addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sigB);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__eqSigns = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__sDiffExps = VL_RAND_RESET_I(17);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__modNatAlignDist = VL_RAND_RESET_I(7);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__isMaxAlign = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__alignDist = VL_RAND_RESET_I(7);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__closeSubMags = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(116, addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sSigSum);
    VL_RAND_RESET_W(115, addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigSum);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_reduced2SigSum = VL_RAND_RESET_Q(58);
    VL_RAND_RESET_W(116, addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__close_sigOut);
    VL_RAND_RESET_W(113, addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSmaller);
    VL_RAND_RESET_W(118, addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_reduced4SigSmaller = VL_RAND_RESET_I(29);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_roundExtraMask = VL_RAND_RESET_I(29);
    VL_RAND_RESET_W(116, addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_alignedSigSmaller);
    VL_RAND_RESET_W(117, addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__far_sigSum);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notSigNaN_invalidExc = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__addZeros = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_specialCase = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__notNaN_isZeroOut = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn = VL_RAND_RESET_Q(58);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = VL_RAND_RESET_Q(59);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__20__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__30__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__40__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__50__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__58__KET____DOT__countSoFar = VL_RAND_RESET_I(7);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__c = VL_RAND_RESET_Q(33);
    addRecF128_add__DOT__addRecFN__DOT__addRecFNToRaw__DOT__lowMask_far_roundExtraMask__DOT__reverseOut = VL_RAND_RESET_I(29);
    addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut);
    addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(116, addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask);
    addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(115, addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig);
    addRecF128_add__DOT__addRecFN__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(18);
}
