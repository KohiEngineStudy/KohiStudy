@ECHO OFF
REM Build script for cleaning and/or building everything



ECHO "Building everything.... "

PUSHD engine
CALL build.bat
POPD
IF %ERRORLEVEL% NEQ 0 (echo Error: %ERRORLEVEL%&& exit)

PUSHD testbed
CALL build.bat
POPD
IF %ERRORLEVEL% NEQ 0 (echo Error: %ERRORLEVEL%&& exit)

ECHO "All assemble built successfully."