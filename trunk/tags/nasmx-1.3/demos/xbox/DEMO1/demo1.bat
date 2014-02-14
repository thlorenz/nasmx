@echo off
set file="DEMO1"
if exist %file%.xbe del %file%.xbe
if not exist %file%.asm goto errasm

..\..\..\bin\nasm -f bin %file%.asm -o %file%.xbe
if errorlevel 1 goto errasm

dir /b /a-d
goto TheEnd

:errasm
echo _
echo Assembly Error
goto TheEnd

:TheEnd
echo _
pause

