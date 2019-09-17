/* google_test_krnl.cdf - VxWorks google test components description */

/*
 * Copyright (c) 2018 Wind River Systems, Inc.
 *
 * The right to copy, distribute, modify or otherwise make use of this software
 * may be licensed only pursuant to the terms of an applicable Wind River
 * license agreement.
 */

/*
modification history            
--------------------
02nov18,gxu  Created for adding google test function(US119070)
 
*/

/*
DESCRIPTION
This file contains descriptions for VxWorks google test  components.
*/

Component INCLUDE_GTEST { 
    SYNOPSIS        This component includes support for google test 
    CONFIGLETTES    usrGtestUnload.c  
    _CHILDREN       FOLDER_TOOLS
    REQUIRES        INCLUDE_UNLOADER
}
