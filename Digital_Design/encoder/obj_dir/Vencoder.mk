# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vencoder.mk

default: Vencoder__ALL.a

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
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
VM_PREFIX = Vencoder
# Module prefix (from --prefix)
VM_MODPREFIX = Vencoder
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	auto_bind \
	testencoder \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/nullstarfish/Desktop/NullStarfish-s-ysyxRepo/Digital_Design/encoder/build \
	/home/nullstarfish/Desktop/NullStarfish-s-ysyxRepo/Digital_Design/encoder/csrc \


### Default rules...
# Include list of all generated classes
include Vencoder_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk
auto_bind.o: /home/nullstarfish/Desktop/NullStarfish-s-ysyxRepo/Digital_Design/encoder/build/auto_bind.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
testencoder.o: /home/nullstarfish/Desktop/NullStarfish-s-ysyxRepo/Digital_Design/encoder/csrc/testencoder.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

# Verilated -*- Makefile -*-
