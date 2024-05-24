@echo off
setlocal

:: Set the path to the solution file
set SOLUTION_PATH=E:\Raki47-Post-Rest\_new engine\Magna Engine\Projects\Magna Engine.sln

:: Set the build configuration (e.g., Debug or Release)
set CONFIGURATION=Release

:: Set the platform
set PLATFORM=x64

:: Define output paths for each project
set R47_OUTPUT=C:\Users\%USERPROFILE%\Desktop\B-League Football\engine
set RRES_OUTPUT=C:\Users\%USERPROFILE%\Desktop\B-League Football\engine

:: Build R47
msbuild %SOLUTION_PATH% /t:R47 /p:Configuration=%CONFIGURATION%;Platform=%PLATFORM%;OutputPath=%PROJECT1_OUTPUT%
if %errorlevel% neq 0 (
    echo R47 build failed!
    exit /b %errorlevel%
)

:: Build RRES
msbuild %SOLUTION_PATH% /t:RRES /p:Configuration=%CONFIGURATION%;Platform=%PLATFORM%;OutputPath=%PROJECT2_OUTPUT%
if %errorlevel% neq 0 (
    echo RRES build failed!
    exit /b %errorlevel%
)

echo Build succeeded!
endlocal
