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
to point to the vxworks7-google-test. Please refer to the VxWorks 
documentation for details on the WIND_LAYER_PATHS variable.

2. Confirm the layer is present in your VxWorks 7 installation. In a VxWorks 
development shell, you may run "vxprj vsb listAll" and look for GTEST_1_8_0_0
to confirm that the layer has been found.


## Creating the VSB and VIP Using WrTool

Create the VxWorks 7 VxWorks source build (VSB) and VxWorks image project (VIP) using either the Wind River Workbench environment or the command line tool **WrTool**. This procedure uses the *vxsim_linux* board support package (BSP) as an example.  

1. Set the environment variable and change the directory.

        export WIND_WRTOOL_WORKSPACE=$HOME/WindRiver/workspace   
        cd $WIND_WRTOOL_WORKSPACE

2. Create the VSB using the **WrTool**.

        wrtool prj vsb create -force -bsp vxsim_linux myVSB -S
        cd myVSB
        wrtool prj vsb config -w -add _WRS_CONFIG_GTEST=y
        make -j[jobs]  
        cd ..

3. Create the VIP using the **WrTool**.

        wrtool prj vip create -force -vsb myVSB -profile PROFILE_STANDALONE_DEVELOPMENT vxsim_linux llvm myVIP
        cd myVIP
        wrtool prj vip component add INCLUDE_GTEST
        cd ..


## Build RTP project with gtest library

1.  In your RTP project, create a .cc file and write down your test code. 
    No need to add test entry for RTP, compiler will generate one automatically.

2.  Build Properties->Libraries, Add "-l ${VSB_DIR}/usr/*/common/libgtest.a". 

3.  Build your RTP project.


## Build DKM project with gtest library

1.  Create a DKM project, add .cc file and write down your test code. Add the test entry in your .cc file. 

        int main()
        {
            int argc = 1;
            char *argv = (char *)"your dkm binary path, empty string also works";
            ::testing::InitGoogleTest(&argc, &argv);
            return RUN_ALL_TESTS_AND_UNLOAD_SELF();
        }
   
2.  Add libgtest.a to DKM Project properties -> build properties -> Libraries
        -L $(VSB_DIR)/krnl/SIMLINUX/common
        -l gtest

3.  Build your DKM project.


The namespace in kernel isn't isolated between different dkms, Only one google test instance is allowed 
to exist at the same time. The current dkm has to be unloaded for the next one to work properly.
Two help functions GTEST_UNLOAD_SELF and RUN_ALL_TESTS_AND_UNLOAD_SELF are provided to
replace the  RUN_ALL_TESTS. The purpose is unload the dkm itself.
There are two style in function main depending on if the test rusult is returned.

a. Return with getting the testing result.

        int main()
        {
            int argc = 1;
            char *argv = (char *)"your dkm binary path, empty string also works";
            ::testing::InitGoogleTest(&argc, &argv);
            ret = RUN_ALL_TESTS()
            if(ret>0)
            do some work ;
            return GTEST_UNLOAD_SELF();
        }
 
b.  Return without getting the testing result.

        int main()
        {
            int argc = 1;
            char *argv = (char *)"your dkm binary path, empty string also works";
            ::testing::InitGoogleTest(&argc, &argv);
            return RUN_ALL_TESTS_AND_UNLOAD_SELF();
        }


# Legal Notices

Google Test has been modified for interoperability with the VxWorks real-time
operating system. Google is a trademark of Google LLC.

All product names, logos, and brands are property of their respective owners.All
company, product and service names used in this software are for identification
purposes only. Wind River and VxWorks are registered trademarks of Wind River
Systems.

Disclaimer of Warranty / No Support: Wind River does not provide support and
maintenance services for this software, under Wind River's standard Software
Support and Maintenance Agreement or otherwise. Unless required by applicable
law, Wind River provides the software (and each contributor provides its
contribution) on an AS IS BASIS, WITHOUT WARRANTIES OF ANY KIND, either express
or implied, including, without limitation, any warranties of TITLE,
NONINFRINGEMENT, MERCHANTABILITY, or FITNESS FOR A PARTICULAR PURPOSE. You are
solely responsible for determining the appropriateness of using or
redistributing the software and assume ay risks associated with your exercise of
permissions under the license.

This BSP is not covered by Wind River's standard support. Should you need
support, please work with the community, or should you need commercial support,
please contact your local Wind River Sales Representative.

