@echo off

SET CC=GCC
SET BIN=%cd%
SET INC=%cd%\include
SET SDLINC=F:\dev\SDL2\include
SET GFLIB=%cd%\lib
SET SDLLIB=F:\dev\SDL2\lib
SET BUILD=DEBUGx86
::Build types are 'DEBUGx86','DEBUGLnx','RELEASEx86','RELEASELnx'

echo ###### Building PokeWINEmerald #####
cd src
if %BUILD%==DEBUGx86 (gcc main.c -I%INC% -I%SDLINC% -L%SDLLIB% -L%GFLIB% -w -Wl,-subsystem,windows -lSDL2main -lSDL2 -o%BIN%\WIN_EMR.exe && goto complete)
if %BUILD%==DEBUGLnx (gcc main.c -I%INC% -I%GFLIB% -o%BIN%\WIN_EMR -L%GFLIB% -lSDL && goto complete)
if %BUILD%==RELEASEx86 (gcc main.c -I%INC% -I%GFLIB% -o%BIN%\WIN_EMR.exe -L%GFLIB% -lSDL && goto complete)
if %BUILD%==RELEASELnx (gcc main.c -I%INC% -I%GFLIB% -o%BIN%\WIN_EMR -L%GFLIB% -lSDL && goto complete)
echo Errors Occurred
cd ../
goto exit
:complete

cd ../
echo PokeWINEmerald Built!

goto exit
:usage

goto exit
:exit