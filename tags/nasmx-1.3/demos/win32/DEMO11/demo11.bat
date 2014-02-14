@echo off
set file="DEMO11"
if exist %file%.obj del %file%.obj
if not exist %file%.asm goto errasm

..\..\..\bin\nasm -f win32 %file%.asm -o %file%.obj
if errorlevel 1 goto errasm

..\..\..\bin\GoLink.exe /console /mix /entry _main DEMO11.obj msvcrt.dll
if errorlevel 1 goto errlink

if exist %file%.obj del %file%.obj
goto TheEnd

:errlink
echo _
echo Link error
pause
goto TheEnd

:errasm
echo _
echo Assembly Error
pause
goto TheEnd

:TheEnd
echo _

