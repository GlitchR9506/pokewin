@echo off
echo You You Like To Install DLE / XBTME V0.0.5?
echo ==Yes== ==No== ==Custom==
choice /C YNC >nul
if %ERRORLEVEL% == 1 (goto autoconfig)
if %ERRORLEVEL% == 2 (goto cancel)
if %ERRORLEVEL% == 3 (goto custom)
echo ERROR
echo Press Any Key To Exit
pause > nul
nircmd.exe monitor off
goto exit
:autoconfig
SET INSTALLDIRDLE="C:\DXBT\DLE"
goto install
goto exit
:custom
echo deafult install location:"C:\DXBT\DLE"
echo Enter New Install Location
SET /P %INSTALLDIRDLE%=""
goto install
goto exit
:install
7za x files.zip -oTEMP
ECHO (D)irectory
xcopy /E TEMP\*.* %INSTALLDIRDLE%
RD /S /Q TEMP
echo DLE Was Installed To %INSTALLDIRDLE%
echo Thank You For Installing DLE / XBTME! 
nircmd beep 700 200

pause > nul
goto exit
:cancel
nircmd.exe monitor off
nircmd.exe setsysvolume 65535
nircmd beep 500 2000
echo lol
echo Check out NirCMD its pretty Cool
pause > nul

:exit