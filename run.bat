@echo off
set EMU_DIR=..\..\vs2019\x16-bin
::set EMU=.\x16emu_Release.exe
set EMU=.\x16emu_Release.exe

cd %EMU_DIR%
%EMU_DIR%\%EMU% -prg "x16-racer.prg" -debug -scale 2 -quality nearest -joy1 SNES -draw_irq