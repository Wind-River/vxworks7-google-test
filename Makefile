# Makefile - Google Test layer Makefile
#
# Copyright 2018 Wind River Systems, Inc.
#      
# The right to copy, distribute, modify or otherwise make use
# of this software may be licensed only pursuant to the terms
# of an applicable Wind River license agreement.
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
