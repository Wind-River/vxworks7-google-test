Google Test support for VxWorks® 7
===
---

# Overview

The Google Test support for VxWorks® 7 provides the makefiles and source 
files derived form https://github.com/google/googletest and VxWorks layer
configuration files to buid google test to a static library. The static 
library can be linked to DKM and RTP to support the google test framwork.

# Project License

The source code for this project is provided under the BSD 3-Clause "New" or 
"Revised" License A permissive license similar to the BSD 2-Clause License, 
but with a 3rd clause that prohibits others from using the name of the project
or its contributors to promote derived products without written consent.
Text for the Goolge Test dependencies and other applicable license notices can
be found in the License_Notices.txt file in the project top level directory. 
Different files may be under different licenses. Each source file should 
include a license notice that designates the licensing terms for the respective
file.

# Prerequisite(s)

* Install the Wind River® VxWorks® 7 operating system version SR0610 or later.

* The build system will need to download source code from github.com.  A
  working Internet connection with access to both sites is required.

* Install the git tool and ensure it oeprates from the command line.

### Setup

1. Download the **vxworks7-google-test Private* from the following location:

   https://github.com/Wind-River/vxworks7-google-test

2. Set WIND_LAYER_PATHS to point to the vxworks7-google-test directory. 
Command-line users may set this directly using export on Linux or set on 
Windows. Developers working on a Microsoft Windows host may also set the system
environment variables. On Microsoft Windows 10, these can be found in the 
Control Panel under View advanced system Settings. Click the "Advanced" tab to
find the "Environment Variables" button. From here you may set WIND_LAYER_PATHS
to point to the vxworks7-layers-for-opencv. Please refer to the VxWorks 
documentation for details on the WIND_LAYER_PATHS variable.

2. Confirm the layer is present in your VxWorks 7 installation. In a VxWorks 
development shell, you may run "vxprj vsb listAll" and look for GTEST_1_8_0_0
to confirm that the layer has been found.


# Legal Notices
Google Test has been modified for interoperability with the VxWorks real-time
operating system. Google is a trademark of Google LLC.
