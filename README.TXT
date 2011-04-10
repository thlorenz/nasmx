The NASMX Project
By: Bryant Keller, Keith Kanios, and Rob Neff
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Welcome to NASMX, a collection of macros, include files and
examples all built around the Netwide Assembler (NASM) for
all to use freely.

The project page is located at:
  http://www.asmcommunity.net/projects/nasmx/

The community forum can be found at:
  http://www.asmcommunity.net/board/index.php

Downloads and snapshots are available from:
  http://sourceforge.net/projects/nasmx/

In this package, you will find 3 main directories and they
are as follows...

bin	- This directory is the primary location of all
          software utilized by the NASMX package for
          Windows development.  Note that the linux
          package includes source only, not binaries.
          Linux users need to download and install the
          gcc and nasm packages to assemble the demos.

demos	- This directory holds various applications that
          demonstrate NASMX usage, very useful for learning
          NASMX. Please be advised, however, that these
          demos are far from complete/adequate programming
          examples and should not be substituted for proper
          assembly language programming tutorials. *NOTE*
          All file and directory paths found in the related
          demo files are relative to where NASMX is
          installed.

inc	- This directory holds vital include files needed
          by NASMX... PLEASE DO NOT ALTER ANY FILES IN THIS
          DIRECTORY!!!


The NASMENV environment variable must be set correctly
to assemble the demos.  A small script contained in the
nasmx directory can be used for this purpose:

    $ . setpaths.sh

or you may set it from the shell command prompt:

    Linux:
        $ export NASMENV=-I/usr/local/src/nasmx/inc/

    Windows:
        C:\> set NASMENV=-IC:\Projects\nasmx\inc\

It is a good idea to get in the habit of always setting this
variable even when developing your own projects.  Refer to
Section 2.1.16 of NASMDOC.TXT for further information.

That is about it. Please utilize all README.TXT files you
come across in this package. Enjoy :)

