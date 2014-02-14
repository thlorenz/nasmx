nasm -fwin64 demo6.asm
golink /entry main kernel32.dll user32.dll gdi32.dll demo6.obj
