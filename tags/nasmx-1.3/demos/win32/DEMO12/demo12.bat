@echo off
set file="DEMO12"
if exist %file%.obj del %file%.obj
if not exist %file%.asm goto errasm

..\..\..\bin\nasm -f win32 %file%.asm -o %file%.obj
if errorlevel 1 goto errasm

..\..\..\bin\GoLink.exe /console /entry _main DEMO12.obj kernel32.dll
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

