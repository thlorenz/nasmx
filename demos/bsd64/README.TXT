BSD64 NASM Demo Applications
Copyright (c) 2006-2012 The NASMX Project
All rights reserved.
Contributors:
    Bryant Keller <bkeller@asmcommunity.net>
    Keith Kanios <keith@asmcommunity.net>
    Rob Neff <p1ranha@javalin.org>

 IMPORTANT:
 To properly assemble the BSD demos make sure you set the
 NASMENV environment variable to the location you installed
 NASMX ( ie: export NASMENV=-I/usr/include/nasmx/inc/ )
 Don't forget to include the trailing slash character!
 You can either add the NASMENV path to your ~/.bashrc
 file or edit/use the simple setpaths.sh file included with
 NASMX to point to your installed path and execute it
 before assembling.

 You must modify the Makefiles contained within each demo
 directory to configure for your environment.  By default
 all demos are pre-configured as FreeBSD 64-bit.  In order
 to use OpenBSD or NetBSD simply change the define in the
 Makefile to OPENBSD or NETBSD respectively.

 Each of the subdirectories contain fully functional
 applications which have been designed around NASMX.INC
 file's capabilities. Each one demonstrates the usage of
 this collection for the design of BSD applications.
 Below is a list of all current demonstration packages
 and their function.


  DEMO1  - Demonstrates a basic "Hello, World!!!" program
           using the BSD Kernel SYSCALL mechanism.

  DEMO2  - Demonstrates how to access the command line and
           use the C library.
  
  DEMO3  - Demonstrates accessing command line, environment,
           and procedural function usage.

  DEMO4  - Demonstrates basic double-precision floating
           point arithmetic.

 All of these applications, as well as the NASMX.INC file,
 were completely developed and designed by Bryant Keller,
 Keith Kanios, and/or Rob Neff. As such, all rights over these
 files belong to Bryant Keller, Keith Kanios, and Rob Neff.
 You are permitted to use these demonstration applications and
 the NASMX.INC file as you see fit, so long as any source
 releases of your software gives us credit for our file.
 (basically, leave the NASMX.INC header alone)

