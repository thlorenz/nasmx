@echo off
set file="DEMO5"
if exist %file%.obj del %file%.obj
if not exist %file%.asm goto errasm

..\..\..\bin\nasm -f win32 %file%.asm -o %file%.obj
if errorlevel 1 goto errasm

..\..\..\bin\GoRC.exe /r=DEMO5.res DEMO5.rc
if errorlevel 1 goto errres

..\..\..\bin\GoLink.exe /entry _main DEMO5.obj DEMO5.res kernel32.dll user32.dll
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

