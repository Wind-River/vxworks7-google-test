# Makefile - makefile for Google Test layer
#
# Copyright (c) 2018-2019 Wind River Systems, Inc.
#
# The right to copy, distribute, modify or otherwise make use of this software
# may be licensed only pursuant to the terms of an applicable Wind River
# license agreement.
#
# modification history
# --------------------
# 18jan19,gxu  remove exclude subdirs 
# 10jan19,gxu  fix doc generation issue (V7COR-6549)
# 02nov18,gxu  add google test support(US119070) 
#
# DESCRIPTION
# This file contains the makefile rules for building the google test layer
#

DOCSUBDIRS = __NO_DOC_SUBDIRS__
DOC_FILES =

LIB_BASE_NAME = gtest

ifeq ($(SPACE), user)
include $(WIND_USR_MK)/defs.library.mk
else
include $(WIND_KRNL_MK)/defs.default.mk
endif

BUILD_ALL_OBJS = true

vpath %.cc src

COMP_PATH = . 

OBJS  = gtest-all.o gtest_main.o

EXTRA_INCLUDE  += -I$(COMP_PATH) 
EXTRA_INCLUDE  += -Iinclude

EXTRA_DEFINE += -DGTEST_HAS_POSIX_RE=0
EXTRA_DEFINE += -DGTEST_HAS_TR1_TUPLE=0
EXTRA_DEFINE += -DGTEST_HAS_STREAM_REDIRECTION=0

ifeq ($(SPACE), user)
include $(WIND_USR_MK)/rules.library.mk
else
include $(WIND_KRNL_MK)/rules.library.mk
endif

# this is 3rd party code.  Suppress all compiler warnings
CC_WARNINGS = $(CC_WARNINGS_NONE)

