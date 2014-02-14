#!/bin/sh
# A simple script to set nasm's NASMENV env var.
# It should be sourced from either the NASMX root
# or subdirectory ( ie: . setpaths )
#
# If you copy this file to your nasm bin directory
# then you can source it from any NASMX subdirectory.
# Useful for when you forget to source it and drill
# down into the directory structure as the author
# of this script has one too many times...

echo "NASMX Development Toolkit"

NASMXROOT=`\pwd`
while [ ${#NASMROOT} -gt 0 ]
do
   if [ -r "$NASMXROOT/inc/nasmx.inc" ]
   then
      break
   fi
   NASMXROOT=${NASMXROOT%/*}
done

if [ ${#NASMXROOT} -gt 0 ]
then
   export NASMENV=-I${NASMXROOT}/inc/
else
   echo "Cannot find nasmx.inc"
fi

if [ "$(which nasm)" = "" ]
then
    echo "You do not have the Netwide Assembler installed"
fi

