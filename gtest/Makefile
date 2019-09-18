# Makefile - Google Test layer Makefile
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
# 19dec18,gxu add unloadByModuleIdAndExitTask
# 27nov18,gxu create for google test US129093

include $(WIND_KRNL_MK)/defs.layers.mk

SHARED_PUBLIC_H_DIRS = src/include
KERNEL_PUBLIC_H_DIRS += h
BUILD_DIRS = src

POST_NOBUILD_CFGDIRS = configlette
ifdef _WRS_CONFIG_RTP
BUILD_USER_DIRS = src
endif

POST_NOBUILD_CDFDIRS = cdf

include $(WIND_KRNL_MK)/rules.layers.mk
