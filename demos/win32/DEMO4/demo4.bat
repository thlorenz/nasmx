@echo off
set file="DEMO4"
if exist %file%.obj del %file%.obj
if not exist %file%.asm goto errasm

..\..\..\bin\nasm -f win32 %file%.asm -o %file%.obj
if errorlevel 1 goto errasm

..\..\..\bin\GoRC.exe /r=DEMO4.res DEMO4.rc
if errorlevel 1 goto errres

..\..\..\bin\GoLink.exe /entry _main DEMO4.obj DEMO4.res kernel32.dll user32.dll
if errorlevel 1 goto errlink

if exist %file%.obj del %file%.obj
if exist %file%.res del %file%.res
goto TheEnd

:errlink
echo _
echo Link error
pause
goto TheEnd

:errres
echo _
echo Resource Error
pause
goto TheEnd

:errasm
echo _
echo Assembly Error
pause
goto TheEnd

:TheEnd
echo _

