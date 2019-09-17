/* gtestUnloadP.h - Gtest unload function */

/*
 * Copyright (c) 2018 Wind River Systems, Inc.
 *
 * The right to copy, distribute or otherwise make use of this software
 * may be licensed only pursuant to the terms of an applicable Wind River
 * license agreement.
 */

/*
modification history
--------------------
08dec18,gxu initial verson. 
*/

/*
DESCRIPTION

Provide for Gtest unload function.
*/

#ifndef __INCgtestUnloadPh
#define __INCgtestUnloadPh

/* includes */

#include <moduleLib.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void unldByModuleIdAndExitTask
    (
    MODULE_ID   moduleId,           /* module ID to unload */
    int         options             /* options */
    );

#ifdef __cplusplus
}
#endif

#endif /* __INCgtestUnloadPh */
