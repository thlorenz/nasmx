Linux64 NASM Demo Applications
Copyright (c) 2006-2014 The NASMX Project
All rights reserved.
Contributors:
    Bryant Keller <bkeller@asmcommunity.net>
    Keith Kanios <keith@asmcommunity.net>
    Rob Neff <p1ranha@javalin.org>
    Mathi Maaran <mathi_tuty@rediffmail.com>

 IMPORTANT:
 To properly assemble the Linux demos make sure you set the
 NASMENV environment variable to the location you installed
 NASMX ( ie: export NASMENV=-I/usr/include/nasmx/inc/ )
 Don't forget to include the trailing slash character!
 You can either add the NASMENV path to your ~/.bashrc
 file or edit/use the simple setpaths.sh file included with
 NASMX to point to your installed path and execute it
 before assembling.  You can also modify the Makefiles
 contained within each demo directory if you so choose.
 
 Each of the subdirectories contain fully functional
 applications which have been designed around NASMX.INC
 file's capabilities. Each one demonstrates the usage of
 this collection for the design of Linux applications.
 Below is a list of all current demonstration packages
 and their function.


  DEMO1  - Demonstrates a basic "Hello, World!!!" program
           using the Linux Kernel SYSCALL mechanism.

  DEMO2  - Demonstrates how to access the command line and
           use the C library.
  
  DEMO3  - Demonstrates accessing command line, environment,
           and procedural function usage.

  DEMO4  - Demonstrates basic double-precision floating
           point arithmetic.

  DEMO5  - Demonstrates using X11 Xlib library functions.

 You are permitted to use these demonstration applications and
 the NASMX.INC file as you see fit, so long as any source
 releases of your software gives us credit for our file.
 (basically, leave the NASMX.INC header alone)

