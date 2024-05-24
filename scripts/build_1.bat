@echo off
setlocal

:: Set the path to the solution file
set SOLUTION_PATH=E:\Raki47-Post-Rest\_new engine\Magna Engine\Projects\Magna Engine.sln

:: Set the build configuration (e.g., Debug or Release)
set CONFIGURATION=Release

:: Set the platform
set PLATFORM=x64

:: Define output paths for each project
set B-LEAGUEFOOTBALL_OUTPUT=C:\Users\%USERPROFILE%\Desktop\B-League Football

:: Build B-League Football
msbuild %SOLUTION_PATH% /t:"B-League Football" /p:Configuration=%CONFIGURATION%;Platform=%PLATFORM%;OutputPath=%PROJECT1_OUTPUT%
if %errorlevel% neq 0 (
    echo B-League Football build failed!
    exit /b %errorlevel%
)

echo Build succeeded!
endlocal
