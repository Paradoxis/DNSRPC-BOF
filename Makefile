MODULES = dnsrpc_probe dnsrpc_info dnsrpc_coerce_write dnsrpc_set_plugin_dll dnsrpc_restart_server dnsrpc_cleanup

all: bof64

bof64:
	mkdir -p dist
	sed -i 's/static //g' dnsrpc_c.c dnsrpc_s.c
	sed -i 's/#define __REQUIRED_RPCNDR_H_VERSION__ 500/#define __REQUIRED_RPCNDR_H_VERSION__ 475/g' dnsrpc.h

	mkdir -p dist/dnssrv_plugin
	x86_64-w64-mingw32-gcc -shared dnssrv_plugin.c -o dist/dnssrv_plugin/dnssrv_plugin.dll
	strip --strip-unneeded dist/dnssrv_plugin/dnssrv_plugin.dll

	$(foreach module,$(MODULES), \
		mkdir -p dist/$(module); \
		cp config/$(module)/extension.json dist/$(module)/; \
		x86_64-w64-mingw32-gcc $(module).c -o dist/$(module)/$(module).exe -D_DEBUG=1 -ladvapi32 -luser32 -lrpcrt4 -mconsole -municode; \
		x86_64-w64-mingw32-gcc -c $(module).c -o dist/$(module)/$(module).o -Wno-int-conversion -Wno-discarded-qualifiers -Wno-incompatible-pointer-types; \
		strip --strip-unneeded dist/$(module)/$(module).o;)

clean:
	rm -rf dist/
