@echo off

SET CC=GCC
SET BIN=%cd%\binaries
SET INC=%cd%\include
SET GFLIB=%cd%\gflib

echo ###### Building PokeWINEmeraldPRET #####
cd src
gcc main.c -I%INC% -I%GFLIB% -o%BIN%\WIN_EMR_PRET.exe 
cd ../