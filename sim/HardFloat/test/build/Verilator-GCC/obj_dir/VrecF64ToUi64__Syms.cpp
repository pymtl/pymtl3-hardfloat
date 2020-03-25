// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VrecF64ToUi64__Syms.h"
#include "VrecF64ToUi64.h"



// FUNCTIONS
VrecF64ToUi64__Syms::VrecF64ToUi64__Syms(VrecF64ToUi64* topp, const char* namep)
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
