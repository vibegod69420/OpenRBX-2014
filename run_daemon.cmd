@echo off
set PATH=C:\Python312;C:\Python312\Scripts;C:\tools\git\cmd;%PATH%
cd /d C:\OpenRBX-2014
:loop
C:\Python312\python.exe C:\OpenRBX-2014\tools\autonomous_harness.py >> C:\OpenRBX-2014\harness.log 2>&1
timeout /t 5 /nobreak >nul
goto loop