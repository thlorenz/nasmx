@echo off
echo "NASMX Development Toolkit"

chdir > nasmx_chdir.tmp
set /p NASMXROOT=<nasmx_chdir.tmp

if not exist %NASMXROOT%\inc\nasmx.inc (
        echo "Cannot find nasmx.inc"
        GOTO END
)

set NASMENV=-I%NASMXROOT%\inc\

for %%i in (nasm.exe) do @echo.%%~$PATH:i > nasmx_which.tmp
set /p WHICHNASM=<nasmx_which.tmp

if "%WHICHNASM%"==" " (
 echo "You do not have the Netwide Assembler installed"
)

:END

REM CLEANUP
if exist nasmx_chdir.tmp del /F nasmx_chdir.tmp
if exist nasmx_which.tmp del /F nasmx_which.tmp
