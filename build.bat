@echo off

SET CC=g++
SET BIN=%cd%
SET WININC=%cd%\WINinc
SET INC64=\dev\SFMLx86_64\include
SET GFLIB=%cd%\WINlib
SET LIB64=\dev\SFMLx86_64\lib
SET BUILD=DEBUGx86_64
::Build types are 'DEBUGx86_64','DEBUGx32','RELEASEx86_64','RELEASEx86'

echo ###### Building PokeWINEmerald #####
cd WINsrc

::if %BUILD%==DEBUGx86_64 (gcc main.c -I%WININC% -I%INC64% -L%LIB64% -L%GFLIB% -w -Wl,-subsystem,windows -lSDL2main -lSDL2 -DDEBUG -o%BIN%\WIN_EMR.exe && goto complete)
if %BUILD%==DEBUGx86_64 (%CC% main.cpp -I%WININC% -I%INC64% -L%LIB64% -L%GFLIB% -w -Wl,-subsystem,windows -lsfml-main -lsfml-system -lsfml-window -lsfml-graphics -lsfml-audio -lsfml-network -DDEBUG -o%BIN%\WIN_EMR.exe && goto complete)
::if %BUILD%==DEBUGx86_64 (%CC% main.cpp -I%WININC% -I%INC64% -L%LIB64% -L%GFLIB% -w -Wl,-subsystem,windows -lsfml-system -lsfml-window -lsfml-graphics -lsfml-audio -lsfml-network -DDEBUG -o%BIN%\WIN_EMR.exe && goto complete)
::if %BUILD%==RELEASEx86_64 (gcc main.c -I%INC% -I%INC64% -L%LIB64% -L%GFLIB% -w -Wl,-subsystem,windows -lSDL2main -lSDL2 -o%BIN%\WIN_EMR.exe && goto complete)
::if %BUILD%==DEBUGx86 (gcc main.c -I%INC% -I%INC% -L%LIB% -L%GFLIB% -w -Wl,-subsystem,windows -m32 -lSDL2main -lSDL2 -DDEBUG -o%BIN%\WIN_EMR.exe && goto complete)
::if %BUILD%==RELEASEx86 (gcc main.c -I%INC% -I%INC% -L%LIB% -L%GFLIB% -w -Wl,-subsystem,windows -m32 -lSDL2main -lSDL2 -o%BIN%\WIN_EMR.exe && goto complete)

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
