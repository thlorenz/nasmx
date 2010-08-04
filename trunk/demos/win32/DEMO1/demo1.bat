@echo off
set file="DEMO1"
if not exist %file%.asm goto errasm
if exist %file%.obj del %file%.obj

..\..\..\bin\nasm -f win32 %file%.asm -o %file%.obj -l %file%.lst
if errorlevel 1 goto errasm

..\..\..\bin\GoLink.exe /entry _main DEMO1.obj kernel32.dll user32.dll
if errorlevel 1 goto errlink

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

