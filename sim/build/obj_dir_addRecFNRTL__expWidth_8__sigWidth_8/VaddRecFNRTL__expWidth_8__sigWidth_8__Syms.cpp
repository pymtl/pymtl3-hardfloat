// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VaddRecFNRTL__expWidth_8__sigWidth_8__Syms.h"
#include "VaddRecFNRTL__expWidth_8__sigWidth_8.h"



// FUNCTIONS
VaddRecFNRTL__expWidth_8__sigWidth_8__Syms::VaddRecFNRTL__expWidth_8__sigWidth_8__Syms(VaddRecFNRTL__expWidth_8__sigWidth_8* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
