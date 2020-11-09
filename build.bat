@echo off

SET CC=GCC
SET BIN=%cd%
SET WININC=%cd%\include
SET INC=F:\dev\SDL2x86\include
::SET INC64=F:\dev\SDL2\include
SET INC64=F:\dev\CSFMLx86_64\include
SET GFLIB=%cd%\lib
SET LIB=F:\dev\SDL2x86\lib
::SET LIB64=F:\dev\SDL2\lib
SET LIB64=F:\dev\CSFMLx86_64\lib\gcc
SET BUILD=DEBUGx86_64
::Build types are 'DEBUGx86_64','DEBUGx32','RELEASEx86_64','RELEASEx86'

echo ###### Building PokeWINEmerald #####
cd src

::if %BUILD%==DEBUGx86_64 (gcc main.c -I%WININC% -I%INC64% -L%LIB64% -L%GFLIB% -w -Wl,-subsystem,windows -lSDL2main -lSDL2 -DDEBUG -o%BIN%\WIN_EMR.exe && goto complete)
if %BUILD%==DEBUGx86_64 (gcc main.c -I%WININC% -I%INC64% -L%LIB64% -L%GFLIB% -w -Wl,-subsystem,windows -lcsfml-system -lcsfml-window -lcsfml-graphics -lcsfml-audio -lcsfml-network -DDEBUG -o%BIN%\WIN_EMR.exe && goto complete)
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