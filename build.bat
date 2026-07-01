@echo off

where cl.exe >nul 2>&1
if %ERRORLEVEL% neq 0 (
    echo cl.exe not found. Open the "x64 Native Tools Command Prompt for VS 2022" and run this script from there.
    exit /b 1
)

mkdir dist 2>nul

::
:: dnssrv_plugin.dll
::
cl.exe dnssrv_plugin.c /DEBUG:NONE /LD /Fe:dist\dnssrv_plugin.dll 

::
:: dnsrpc_probe
::

cl.exe /c /GS- dnsrpc_probe.c /Fo:dist\dnsrpc_probe.o
cl.exe dnsrpc_probe.c /Fe:dist\dnsrpc_probe.exe /D_DEBUG=1

::
:: dnsrpc_info
::

cl.exe /c /GS- dnsrpc_info.c /Fo:dist\dnsrpc_info.o
cl.exe dnsrpc_info.c /Fe:dist\dnsrpc_info.exe /D_DEBUG=1

::
:: dnsrpc_coerce_write
::

cl.exe /c /GS- dnsrpc_coerce_write.c /Fo:dist\dnsrpc_coerce_write.o
cl.exe dnsrpc_coerce_write.c /Fe:dist\dnsrpc_coerce_write.exe /D_DEBUG=1

::
:: dnsrpc_set_plugin_dll
::

cl.exe /c /GS- dnsrpc_set_plugin_dll.c /Fo:dist\dnsrpc_set_plugin_dll.o
cl.exe dnsrpc_set_plugin_dll.c /Fe:dist\dnsrpc_set_plugin_dll.exe /D_DEBUG=1

::
:: dnsrpc_restart_server
::

cl.exe /c /GS- dnsrpc_restart_server.c /Fo:dist\dnsrpc_restart_server.o
cl.exe dnsrpc_restart_server.c /Fe:dist\dnsrpc_restart_server.exe /D_DEBUG=1

::
:: dnsrpc_cleanup
::

cl.exe /c /GS- dnsrpc_cleanup.c /Fo:dist\dnsrpc_cleanup.o
cl.exe dnsrpc_cleanup.c /Fe:dist\dnsrpc_cleanup.exe /D_DEBUG=1
