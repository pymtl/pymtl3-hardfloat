# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VmulAddRecF128_mul.mk

default: VmulAddRecF128_mul

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /classes/ece5745/install/stow-pkgs/x86_64-rhel7/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VmulAddRecF128_mul
# Module prefix (from --prefix)
VM_MODPREFIX = VmulAddRecF128_mul
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I.. -O2 \
	-DunitName=mulAddRecF128_mul -DunitVHeader=\"VmulAddRecF128_mul.h\" -DCHECKNANS=true -I../../../source/Verilator \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	testCommon \
	test_abz_recF128-mulAddRecF128_mul \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	../../source/Verilator \
	obj_dir \


### Default rules...
# Include list of all generated classes
include VmulAddRecF128_mul_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

testCommon.o: ../../source/Verilator/testCommon.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
test_abz_recF128-mulAddRecF128_mul.o: obj_dir/test_abz_recF128-mulAddRecF128_mul.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
VmulAddRecF128_mul: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) -o $@ $(LIBS) $(SC_LIBS)


# Verilated -*- Makefile -*-
