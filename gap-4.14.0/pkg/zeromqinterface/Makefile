#
# Makefile rules for the ZeroMQInterface package
#
KEXT_NAME = zeromqinterface
KEXT_SOURCES = src/zmqgap.c

KEXT_CFLAGS = -I/opt/homebrew/opt/zeromq/include
KEXT_LDFLAGS = -L/opt/homebrew/opt/zeromq/lib -lzmq

KEXT_USE_AUTOCONF = 1

# include shared GAP package build system
GAPPATH = /Users/cheldt/Documents/Code/GAP/gap-4.14.0
include Makefile.gappkg
