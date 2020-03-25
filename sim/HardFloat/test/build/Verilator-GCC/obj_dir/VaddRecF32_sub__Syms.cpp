// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VaddRecF32_sub__Syms.h"
#include "VaddRecF32_sub.h"



// FUNCTIONS
VaddRecF32_sub__Syms::VaddRecF32_sub__Syms(VaddRecF32_sub* topp, const char* namep)
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
