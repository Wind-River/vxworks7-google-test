Google Test support for VxWorks® 7
===
---

# Overview

The Google Test support for VxWorks® 7 provides the makefiles for building the
latest OpenCV release on VxWorks.

This layer is an adapter to make standard OpenCV build and run on
VxWorks. This layer does not contain the OpenCV source, it only
contains all functions required to allow OpenCV to build and execute
on top of VxWorks. Use this layer to add the OpenCV library to your 
user space, and to build the OpenCV example applications as RTPs.

NOTE: OpenCV 4.x is not part of any VxWorks® product. If you need help, 
use the resources available or contact your Wind River sales representative 
to arrange for consulting services.

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

All product names, logos, and brands are property of their respective owners. All company, 
product and service names used in this software are for identification purposes only. 
Wind River and VxWorks are registered trademarks of Wind River Systems, Inc.

Disclaimer of Warranty / No Support: Wind River does not provide support 
and maintenance services for this software, under Wind River’s standard 
Software Support and Maintenance Agreement or otherwise. Unless required 
by applicable law, Wind River provides the software (and each contributor 
provides its contribution) on an “AS IS” BASIS, WITHOUT WARRANTIES OF ANY 
KIND, either express or implied, including, without limitation, any warranties 
of TITLE, NONINFRINGEMENT, MERCHANTABILITY, or FITNESS FOR A PARTICULAR 
PURPOSE. You are solely responsible for determining the appropriateness of 
using or redistributing the software and assume any risks associated with 
your exercise of permissions under the license.
