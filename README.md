# DNSRPC-BOF

Beacon Object File (BOF) implementation of the [dnscmd.exe](https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/dnscmd) functionality used to obtain remote code execution on an ADIDNS server by exploiting the `ServerLevelPluginDll` edge[^1] [^2] [^3] by using MS-DNSP. [^4] Exploitation requires access to a user account that is a member of the `DnsAdmins` group.

> [!NOTE]
> Due to the fact BOFs, don't support C exceptions natively, this extension hooks into the `RtlRaiseException` method and returns control flow back to the BOF during RPC calls. While this method is hacky, it's nessecary due to the fact that Microsoft's RPC implementation makes heavy use of [RpcTryExcept](https://learn.microsoft.com/en-us/windows/win32/rpc/rpctryexcept) for control flow. This worked fine in a test environment, but just be aware that this technique could result in beacon instability.

## Compilation

To compile the project, you can either use `make` on a system with MinGW installed:

```
make
```

Alternatively, use `.\build.bat` if you're using the x64 Native Tools Command Prompt for Visual Studio on Windows:

```
.\build.bat
```

Both compilation steps will produce both the `.o` files, as well as `.exe` files to mess around with the BOF functionality in a lab environment. 

## Usage

The following BOFs have been created to interact with the ADIDNS server:

- `dnsrpc_probe` - Check if the ADIDNS server is alive
- `dnsrpc_info` - Get the current ADIDNS server settings
- `dnsrpc_coerce_write` - Utility to force the ADIDNS server to write a file to a network share to test if your DC can reach the given network share before you brick it via the `dnsrpc_set_plugin_dll` plugin.
- `dnsrpc_set_plugin_dll` - Configures the DLL to load when the server is restarted
- `dnsrpc_restart_server` - Issues the ADIDNS server to restart
- `dnsrpc_cleanup` - Cleans up the registry artifacts left behind by the `dnsrpc_coerce_write` and `dnsrpc_set_plugin_dll` commands. Must be executed on the domain controller itself.

In addition to this, an example playload has been providedin `dnssrv_plugin.c`.

> [!WARNING]
> If the DC for whatever reason can't touch the DLL payload you specified with `dnsrpc_set_pugin_dll` it will refuse to start back up and you'll likely cripple the entire domain. Consider using `dnsrpc_coerce_write` to test if the DC can actually connect to your share before you accidentally nuke the target. People tend to get angry when their DNS goes down. 
> 
> In addition,  the `dnsrpc_restart_server` will result in two minutes of DNS downtime. Calling the BOF multiple times will cause the timeout to grow each time so use it sparingly.

## Development

To test the BOFs in a development environment, you can use a tool like [TrustedSec's COFFLoader](https://github.com/trustedsec/COFFLoader/), which can be compiled on Windows like so:

```
cl.exe /W4 /DCOFF_STANDALONE /DDEBUG beacon_compatibility.c COFFLoader.c /Fe:COFFLoader.exe /link advapi32.lib
```

Then to execute a BOF (i.e.: the `dnsrpc_info` BOF), generate the arguments and pass them to the COFFLoader:

```
> python beacon_generate.py
Beacon Argument Generator
Beacon>addWString DC01
Beacon>generate
b'0e0000000a00000044004300300031000000'
Beacon> exit

> cl.exe /c /GS- dnsrpc_info.c /Fo:dist\dnsrpc_info.o
> COFFLoader.exe go dist\dnsrpc_info.o 0e0000000a00000044004300300031000000
...
        $SG77912
: Section: 3, Value: 0xA08
        $SG77914H
: Section: 3, Value: 0xA48
        $SG77915X
: Section: 3, Value: 0xA58
        .chks64: Section: 11, Value: 0x0
        X: Section: 0, Value: 0x0
Back
Returning
Ran/parsed the coff
Outdata Below:

server name: DC01.research.lan
server version: 4F7C000A (10.0 build 20348)
rpc structure version: 2 (longhorn)
directory services available: yes
admin configured: yes
allow update: yes
is read-only domain controller: no
boot method: 3 (registry)
no recursion: no
round robin: yes
secure responses: yes
forward timeout: 3
recursion retry: 3
recursion timeout: 8
max cache ttl: 86400
directory services polling interval: 180
scavenging interval: 0
log level: 0x00000000
directory services container: cn=MicrosoftDNS,cn=System,DC=research,DC=lan
domain name: research.lan
forest name: research.lan
log file path: (none)
server addresses: fe80:0000:0000:0000:4cbe:0281:82dd:76ed, 172.16.50.107
listen addresses: (none)
forwarders: 8.8.8.8, 1.1.1.1
```

To recompile the IDL definitions, you can use the following command:

```
midl /W1 /char signed /env x64 /target NT100 /Oicf dnsrpc.idl
```

During development `_DEBUG` flag will result in a `wmain` being added to the final binary, and `_VERBOSE` flags is used to include extra debug logging. For more information, refer to the [build.bat](build.bat) and [Makefile](Makefile).

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE.md) file for details. I take no responsibility for any misuse or damages caused by the use of this tool. Only use it in environments where you have explicit permission to do so.

[^1]: <https://medium.com/@esnesenon/feature-not-bug-dnsadmin-to-dc-compromise-in-one-line-a0f779b8dc83>
[^2]: <https://www.semperis.com/blog/dnsadmins-revisited/>
[^3]: <https://www.ired.team/offensive-security-experiments/active-directory-kerberos-abuse/from-dnsadmins-to-system-to-domain-compromise>
[^4]: <https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-dnsp/9500a7e8-165d-4b13-be86-0ddc43100eef>
