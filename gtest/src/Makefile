# Makefile - makefile for Google Test layer
#
# Copyright (c) 2019, Wind River Systems, Inc. 
#
# Redistribution and use in source and binary forms, with or without modification, are
# permitted provided that the following conditions are met:
# 
# 1) Redistributions of source code must retain the above copyright notice,
# this list of conditions and the following disclaimer.
# 
# 2) Redistributions in binary form must reproduce the above copyright notice,
# this list of conditions and the following disclaimer in the documentation and/or
# other materials provided with the distribution.
# 
# 3) Neither the name of Wind River Systems nor the names of its contributors may be
# used to endorse or promote products derived from this software without specific
# prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
# SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
# CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
# OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
# USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
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

