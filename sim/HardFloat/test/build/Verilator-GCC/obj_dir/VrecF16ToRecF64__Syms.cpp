// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VrecF16ToRecF64__Syms.h"
#include "VrecF16ToRecF64.h"



// FUNCTIONS
VrecF16ToRecF64__Syms::VrecF16ToRecF64__Syms(VrecF16ToRecF64* topp, const char* namep)
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
