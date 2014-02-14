nasm -fwin32 demo17.asm
golink /entry _main kernel32.dll user32.dll gdi32.dll demo17.obj
