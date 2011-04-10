#!/bin/bash
# A simple script to set nasm's NASMENV env var.
# It should be sourced from either the NASMX root
# or subdirectory ( ie: . setpaths )
#
# If you copy this file to your nasm bin directory
# then you can source it from any NASMX subdirectory.
# Useful for when you forget to source it and drill
# down into the directory structure as the author
# of this script has one too many times...

# check for nasmx from current directory on up
NASMXROOT=`\pwd`
while [ ${#NASMXROOT} -gt 0 ]; do
    if [ -r "$NASMXROOT/inc/nasmx.inc" ]; then
        break;
    fi
    NASMXROOT=${NASMXROOT%/*}
done

if [ ${#NASMXROOT} -gt 0 ]; then
    export NASMENV=-I${NASMXROOT}/inc/
    echo "NASMENV=$NASMENV"
else
    echo "Cannot find nasmx.inc"
fi

