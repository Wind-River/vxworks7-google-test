/* usrGtestUnload.c - Gtest unload function */

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
19dec18,gxu initial version. 
*/

/*
DESCRIPTION

Provide for Gtest unload function.
*/

#include <vxWorks.h>
#include <stdio.h>
#include <moduleLib.h>
#include <unldLib.h>
#include <taskLib.h>
void unldByModuleIdAndExitTask
    (
    MODULE_ID   moduleId,           /* module ID to unload */
    int         options             /* options */
    )
{
    if (unldByModuleId(moduleId, options) != OK)
    {
       printf("unldByModuleIdAndExitTask fail \n");
       taskExit( ERROR );
    }
    else
    {
       taskExit( OK );
    }
}

