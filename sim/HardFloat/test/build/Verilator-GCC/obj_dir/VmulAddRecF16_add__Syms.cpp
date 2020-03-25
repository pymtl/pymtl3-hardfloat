// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VmulAddRecF16_add__Syms.h"
#include "VmulAddRecF16_add.h"



// FUNCTIONS
VmulAddRecF16_add__Syms::VmulAddRecF16_add__Syms(VmulAddRecF16_add* topp, const char* namep)
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
