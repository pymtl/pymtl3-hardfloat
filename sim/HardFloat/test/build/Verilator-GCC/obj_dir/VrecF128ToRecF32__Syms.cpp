// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VrecF128ToRecF32__Syms.h"
#include "VrecF128ToRecF32.h"



// FUNCTIONS
VrecF128ToRecF32__Syms::VrecF128ToRecF32__Syms(VrecF128ToRecF32* topp, const char* namep)
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
