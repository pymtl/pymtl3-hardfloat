// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vi64ToRecF128__Syms.h"
#include "Vi64ToRecF128.h"



// FUNCTIONS
Vi64ToRecF128__Syms::Vi64ToRecF128__Syms(Vi64ToRecF128* topp, const char* namep)
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
