@echo off

SET CC=GCC
SET BIN=%cd%
SET INC=%cd%\include
SET SDLINC=F:\dev\SDL2x86\include
SET SDLINC64=F:\dev\SDL2\include
SET GFLIB=%cd%\lib
SET SDLLIB=F:\dev\SDL2x86\lib
SET SDLLIB64=F:\dev\SDL2\lib
SET BUILD=DEBUGx86_64
::Build types are 'DEBUGx86_64','DEBUGx32','RELEASEx86_64','RELEASEx86'

echo ###### Building PokeWINEmerald #####
cd src

if %BUILD%==DEBUGx86_64 (gcc main.c -I%INC% -I%SDLINC64% -L%SDLLIB64% -L%GFLIB% -w -Wl,-subsystem,windows -lSDL2main -lSDL2 -DDEBUG -o%BIN%\WIN_EMR.exe && goto complete)
if %BUILD%==RELEASEx86_64 (gcc main.c -I%INC% -I%SDLINC64% -L%SDLLIB64% -L%GFLIB% -w -Wl,-subsystem,windows -lSDL2main -lSDL2 -o%BIN%\WIN_EMR.exe && goto complete)
if %BUILD%==DEBUGx86 (gcc main.c -I%INC% -I%SDLINC% -L%SDLLIB% -L%GFLIB% -w -Wl,-subsystem,windows -m32 -lSDL2main -lSDL2 -DDEBUG -o%BIN%\WIN_EMR.exe && goto complete)
if %BUILD%==RELEASEx86 (gcc main.c -I%INC% -I%SDLINC% -L%SDLLIB% -L%GFLIB% -w -Wl,-subsystem,windows -m32 -lSDL2main -lSDL2 -o%BIN%\WIN_EMR.exe && goto complete)

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