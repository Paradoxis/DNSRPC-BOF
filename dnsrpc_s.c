

/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for dnsrpc.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>
#include "dnsrpc.h"

#define TYPE_FORMAT_STRING_SIZE   677                               
#define PROC_FORMAT_STRING_SIZE   541                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _dnsrpc_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } dnsrpc_MIDL_TYPE_FORMAT_STRING;

typedef struct _dnsrpc_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } dnsrpc_MIDL_PROC_FORMAT_STRING;

typedef struct _dnsrpc_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } dnsrpc_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax_1_0 = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif


extern const dnsrpc_MIDL_TYPE_FORMAT_STRING dnsrpc__MIDL_TypeFormatString;
extern const dnsrpc_MIDL_PROC_FORMAT_STRING dnsrpc__MIDL_ProcFormatString;
extern const dnsrpc_MIDL_EXPR_FORMAT_STRING dnsrpc__MIDL_ExprFormatString;

/* Standard interface: __MIDL_itf_dnsrpc_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: DnsServer, ver. 5.0,
   GUID={0x50abc2a4,0x574d,0x40b3,{0x9d,0x66,0xee,0x4f,0xd5,0xfb,0xa0,0x76}} */


extern const MIDL_SERVER_INFO DnsServer_ServerInfo;

extern const RPC_DISPATCH_TABLE DnsServer_v5_0_DispatchTable;

static const RPC_SERVER_INTERFACE DnsServer___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x50abc2a4,0x574d,0x40b3,{0x9d,0x66,0xee,0x4f,0xd5,0xfb,0xa0,0x76}},{5,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&DnsServer_v5_0_DispatchTable,
    0,
    0,
    0,
    &DnsServer_ServerInfo,
    0x06000000
    };
RPC_IF_HANDLE DnsServer_v5_0_s_ifspec = (RPC_IF_HANDLE)& DnsServer___RpcServerInterface;
#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC DnsServer_StubDesc;
#ifdef __cplusplus
}
#endif


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const dnsrpc_MIDL_PROC_FORMAT_STRING dnsrpc__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure R_DnssrvOperation */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x10 ),	/* 16 */
/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 20 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszServerName */

/* 30 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszZone */

/* 36 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 38 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 40 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter dwContext */

/* 42 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 44 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszOperation */

/* 48 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 50 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 52 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter dwTypeId */

/* 54 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 56 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 60 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 62 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 64 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure R_DnssrvQuery */

/* 72 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x1 ),	/* 1 */
/* 80 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 82 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 84 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x24 ),	/* 36 */
/* 90 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 92 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 94 */	NdrFcShort( 0x1 ),	/* 1 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszServerName */

/* 102 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 106 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszZone */

/* 108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 110 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 112 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter pszOperation */

/* 114 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 116 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 118 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter pdwTypeId */

/* 120 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 122 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppData */

/* 126 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 128 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 130 */	NdrFcShort( 0x256 ),	/* Type Offset=598 */

	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 134 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure R_DnssrvComplexOperation */

/* 138 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x2 ),	/* 2 */
/* 146 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 148 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 150 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 154 */	NdrFcShort( 0x24 ),	/* 36 */
/* 156 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 158 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 160 */	NdrFcShort( 0x1 ),	/* 1 */
/* 162 */	NdrFcShort( 0x1 ),	/* 1 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszServerName */

/* 168 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 170 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 172 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszZone */

/* 174 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 176 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 178 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter pszOperation */

/* 180 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 182 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 184 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter dwTypeIn */

/* 186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 188 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDataIn */

/* 192 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 194 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 196 */	NdrFcShort( 0x260 ),	/* Type Offset=608 */

	/* Parameter pdwTypeOut */

/* 198 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 200 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppDataOut */

/* 204 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 206 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 208 */	NdrFcShort( 0x26e ),	/* Type Offset=622 */

	/* Return value */

/* 210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 212 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure R_DnssrvEnumRecords */

/* 216 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x3 ),	/* 3 */
/* 224 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 226 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 228 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 230 */	NdrFcShort( 0xe ),	/* 14 */
/* 232 */	NdrFcShort( 0x24 ),	/* 36 */
/* 234 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 236 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 238 */	NdrFcShort( 0x1 ),	/* 1 */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszServerName */

/* 246 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 248 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 250 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszZone */

/* 252 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 254 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 256 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter pszNodeName */

/* 258 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 260 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 262 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter pszStartChild */

/* 264 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 266 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 268 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter wRecordType */

/* 270 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 272 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 274 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter fSelectFlag */

/* 276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 278 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszFilterStart */

/* 282 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 284 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 286 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter pszFilterStop */

/* 288 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 290 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 292 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter pdwBufferLength */

/* 294 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 296 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppBuffer */

/* 300 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 302 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 304 */	NdrFcShort( 0x278 ),	/* Type Offset=632 */

	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 308 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure R_DnssrvUpdateRecord */

/* 312 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x4 ),	/* 4 */
/* 320 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 322 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 324 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 326 */	NdrFcShort( 0x32 ),	/* 50 */
/* 328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 330 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 332 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszServerName */

/* 342 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 344 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 346 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszZone */

/* 348 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 350 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 352 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter pszNodeName */

/* 354 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 356 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 358 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter pAddRecord */

/* 360 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 362 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 364 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pDeleteRecord */

/* 366 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 368 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 370 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 374 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure R_DnssrvOperation2 */

/* 378 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x5 ),	/* 5 */
/* 386 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 388 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 390 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 392 */	NdrFcShort( 0x20 ),	/* 32 */
/* 394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 396 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 398 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x1 ),	/* 1 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwClientVersion */

/* 408 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 410 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwSettingFlags */

/* 414 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 416 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszServerName */

/* 420 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 422 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 424 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszZone */

/* 426 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 428 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 430 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter dwContext */

/* 432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 434 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszOperation */

/* 438 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 440 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 442 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter dwTypeId */

/* 444 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 446 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 450 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 452 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 454 */	NdrFcShort( 0x28c ),	/* Type Offset=652 */

	/* Return value */

/* 456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 458 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure R_DnssrvQuery2 */

/* 462 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x6 ),	/* 6 */
/* 470 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 472 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 474 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 476 */	NdrFcShort( 0x10 ),	/* 16 */
/* 478 */	NdrFcShort( 0x24 ),	/* 36 */
/* 480 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 482 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 484 */	NdrFcShort( 0x1 ),	/* 1 */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwClientVersion */

/* 492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 494 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwSettingFlags */

/* 498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 500 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszServerName */

/* 504 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 506 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 508 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszZone */

/* 510 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 512 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 514 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter pszOperation */

/* 516 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 518 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 520 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter pdwTypeId */

/* 522 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 524 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppData */

/* 528 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 530 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 532 */	NdrFcShort( 0x29a ),	/* Type Offset=666 */

	/* Return value */

/* 534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 536 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const dnsrpc_MIDL_TYPE_FORMAT_STRING dnsrpc__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  8 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 12 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 14 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 16 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 18 */	NdrFcShort( 0x2 ),	/* Offset= 2 (20) */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	NdrFcShort( 0xa ),	/* 10 */
/* 24 */	NdrFcLong( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x3a ),	/* Offset= 58 (86) */
/* 30 */	NdrFcLong( 0x1 ),	/* 1 */
/* 34 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 36 */	NdrFcLong( 0x2 ),	/* 2 */
/* 40 */	NdrFcShort( 0xffde ),	/* Offset= -34 (6) */
/* 42 */	NdrFcLong( 0x3 ),	/* 3 */
/* 46 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (2) */
/* 48 */	NdrFcLong( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0x26 ),	/* Offset= 38 (90) */
/* 54 */	NdrFcLong( 0x7 ),	/* 7 */
/* 58 */	NdrFcShort( 0x38 ),	/* Offset= 56 (114) */
/* 60 */	NdrFcLong( 0x13 ),	/* 19 */
/* 64 */	NdrFcShort( 0xa4 ),	/* Offset= 164 (228) */
/* 66 */	NdrFcLong( 0x15 ),	/* 21 */
/* 70 */	NdrFcShort( 0xb2 ),	/* Offset= 178 (248) */
/* 72 */	NdrFcLong( 0x22 ),	/* 34 */
/* 76 */	NdrFcShort( 0x142 ),	/* Offset= 322 (398) */
/* 78 */	NdrFcLong( 0x23 ),	/* 35 */
/* 82 */	NdrFcShort( 0x17a ),	/* Offset= 378 (460) */
/* 84 */	NdrFcShort( 0xffff ),	/* Offset= -1 (83) */
/* 86 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 88 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 90 */	
			0x12, 0x0,	/* FC_UP */
/* 92 */	NdrFcShort( 0xe ),	/* Offset= 14 (106) */
/* 94 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 96 */	NdrFcShort( 0x4 ),	/* 4 */
/* 98 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 100 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 102 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 104 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 106 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 108 */	NdrFcShort( 0x4 ),	/* 4 */
/* 110 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (94) */
/* 112 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 114 */	
			0x12, 0x0,	/* FC_UP */
/* 116 */	NdrFcShort( 0xe ),	/* Offset= 14 (130) */
/* 118 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 120 */	NdrFcShort( 0x28 ),	/* 40 */
/* 122 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 124 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 126 */	NdrFcShort( 0xf ),	/* 15 */
/* 128 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 130 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 132 */	NdrFcShort( 0xd0 ),	/* 208 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x34 ),	/* Offset= 52 (188) */
/* 138 */	0x8,		/* FC_LONG */
			0x2,		/* FC_CHAR */
/* 140 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 142 */	0x2,		/* FC_CHAR */
			0x36,		/* FC_POINTER */
/* 144 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 146 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 148 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 150 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 152 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 154 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 156 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 158 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 160 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 162 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 164 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 166 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 168 */	NdrFcShort( 0xffce ),	/* Offset= -50 (118) */
/* 170 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 172 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 174 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 176 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 178 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 180 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 182 */	0x2,		/* FC_CHAR */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 184 */	0x0,		/* 0 */
			NdrFcShort( 0xffc3 ),	/* Offset= -61 (124) */
			0x5b,		/* FC_END */
/* 188 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 190 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 192 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 194 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 196 */	
			0x12, 0x0,	/* FC_UP */
/* 198 */	NdrFcShort( 0xffa4 ),	/* Offset= -92 (106) */
/* 200 */	
			0x12, 0x0,	/* FC_UP */
/* 202 */	NdrFcShort( 0xffa0 ),	/* Offset= -96 (106) */
/* 204 */	
			0x12, 0x0,	/* FC_UP */
/* 206 */	NdrFcShort( 0xff9c ),	/* Offset= -100 (106) */
/* 208 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 210 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 212 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 214 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 216 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 218 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 220 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 222 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 224 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 226 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 228 */	
			0x12, 0x0,	/* FC_UP */
/* 230 */	NdrFcShort( 0x2 ),	/* Offset= 2 (232) */
/* 232 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 234 */	NdrFcShort( 0x10 ),	/* 16 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x6 ),	/* Offset= 6 (244) */
/* 240 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 242 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 244 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 246 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 248 */	
			0x12, 0x0,	/* FC_UP */
/* 250 */	NdrFcShort( 0x1e ),	/* Offset= 30 (280) */
/* 252 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 254 */	NdrFcShort( 0x6 ),	/* 6 */
/* 256 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 260 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 262 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 266 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 268 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 270 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 272 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 274 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 276 */	NdrFcShort( 0x10 ),	/* 16 */
/* 278 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 280 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 282 */	NdrFcShort( 0x118 ),	/* 280 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x44 ),	/* Offset= 68 (354) */
/* 288 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 290 */	0x8,		/* FC_LONG */
			0x2,		/* FC_CHAR */
/* 292 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 294 */	0x2,		/* FC_CHAR */
			0x36,		/* FC_POINTER */
/* 296 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 298 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 300 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 302 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 304 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 306 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 308 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (252) */
/* 310 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 312 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 314 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 316 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 318 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 320 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 322 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 324 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 326 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 328 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 330 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 332 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (274) */
/* 334 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 336 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 338 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 340 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 342 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 344 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 346 */	0x2,		/* FC_CHAR */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 348 */	0x0,		/* 0 */
			NdrFcShort( 0xff1f ),	/* Offset= -225 (124) */
			0x40,		/* FC_STRUCTPAD4 */
/* 352 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 354 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 356 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 358 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 360 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 362 */	
			0x12, 0x0,	/* FC_UP */
/* 364 */	NdrFcShort( 0xfefe ),	/* Offset= -258 (106) */
/* 366 */	
			0x12, 0x0,	/* FC_UP */
/* 368 */	NdrFcShort( 0xfefa ),	/* Offset= -262 (106) */
/* 370 */	
			0x12, 0x0,	/* FC_UP */
/* 372 */	NdrFcShort( 0xfef6 ),	/* Offset= -266 (106) */
/* 374 */	
			0x12, 0x0,	/* FC_UP */
/* 376 */	NdrFcShort( 0xfef2 ),	/* Offset= -270 (106) */
/* 378 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 380 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 382 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 384 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 386 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 388 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 390 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 392 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 394 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 396 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 398 */	
			0x12, 0x0,	/* FC_UP */
/* 400 */	NdrFcShort( 0x2c ),	/* Offset= 44 (444) */
/* 402 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 404 */	NdrFcShort( 0x20 ),	/* 32 */
/* 406 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 408 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 410 */	NdrFcShort( 0x20 ),	/* 32 */
/* 412 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 414 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 416 */	NdrFcShort( 0x40 ),	/* 64 */
/* 418 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 420 */	NdrFcShort( 0xffee ),	/* Offset= -18 (402) */
/* 422 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 424 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (408) */
/* 426 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 428 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 430 */	NdrFcShort( 0x40 ),	/* 64 */
/* 432 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 434 */	NdrFcShort( 0xffe4 ),	/* -28 */
/* 436 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 438 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 440 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (414) */
/* 442 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 444 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 446 */	NdrFcShort( 0x20 ),	/* 32 */
/* 448 */	NdrFcShort( 0xffec ),	/* Offset= -20 (428) */
/* 450 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 452 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 454 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 456 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 458 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 460 */	
			0x12, 0x0,	/* FC_UP */
/* 462 */	NdrFcShort( 0x8 ),	/* Offset= 8 (470) */
/* 464 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 466 */	NdrFcShort( 0xc ),	/* 12 */
/* 468 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 470 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 472 */	NdrFcShort( 0x118 ),	/* 280 */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x46 ),	/* Offset= 70 (546) */
/* 478 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 480 */	0x8,		/* FC_LONG */
			0x2,		/* FC_CHAR */
/* 482 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 484 */	0x2,		/* FC_CHAR */
			0x36,		/* FC_POINTER */
/* 486 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 488 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 490 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 492 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 494 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 496 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 498 */	NdrFcShort( 0xff0a ),	/* Offset= -246 (252) */
/* 500 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 502 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 504 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 506 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 508 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 510 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 512 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 514 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 516 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 518 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 520 */	0x2,		/* FC_CHAR */
			0x3f,		/* FC_STRUCTPAD3 */
/* 522 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 524 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (464) */
/* 526 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 528 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 530 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 532 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 534 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 536 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 538 */	0x2,		/* FC_CHAR */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 540 */	0x0,		/* 0 */
			NdrFcShort( 0xfe5f ),	/* Offset= -417 (124) */
			0x40,		/* FC_STRUCTPAD4 */
/* 544 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 546 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 548 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 550 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 552 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 554 */	
			0x12, 0x0,	/* FC_UP */
/* 556 */	NdrFcShort( 0xff90 ),	/* Offset= -112 (444) */
/* 558 */	
			0x12, 0x0,	/* FC_UP */
/* 560 */	NdrFcShort( 0xff8c ),	/* Offset= -116 (444) */
/* 562 */	
			0x12, 0x0,	/* FC_UP */
/* 564 */	NdrFcShort( 0xff88 ),	/* Offset= -120 (444) */
/* 566 */	
			0x12, 0x0,	/* FC_UP */
/* 568 */	NdrFcShort( 0xff84 ),	/* Offset= -124 (444) */
/* 570 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 572 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 574 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 576 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 578 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 580 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 582 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 584 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 586 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 588 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 590 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 592 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 594 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 596 */	NdrFcShort( 0x2 ),	/* Offset= 2 (598) */
/* 598 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 600 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 602 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 604 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 606 */	NdrFcShort( 0xfdb6 ),	/* Offset= -586 (20) */
/* 608 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 610 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 612 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 614 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 616 */	NdrFcShort( 0xfdac ),	/* Offset= -596 (20) */
/* 618 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 620 */	NdrFcShort( 0x2 ),	/* Offset= 2 (622) */
/* 622 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 624 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 626 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 628 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 630 */	NdrFcShort( 0xfd9e ),	/* Offset= -610 (20) */
/* 632 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 634 */	NdrFcShort( 0x2 ),	/* Offset= 2 (636) */
/* 636 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 638 */	NdrFcShort( 0x2 ),	/* Offset= 2 (640) */
/* 640 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 642 */	NdrFcShort( 0x1 ),	/* 1 */
/* 644 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 646 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 648 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 650 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 652 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 654 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 656 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 658 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 660 */	NdrFcShort( 0xfd80 ),	/* Offset= -640 (20) */
/* 662 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 664 */	NdrFcShort( 0x2 ),	/* Offset= 2 (666) */
/* 666 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 668 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 670 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 672 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 674 */	NdrFcShort( 0xfd72 ),	/* Offset= -654 (20) */

			0x0
        }
    };

static const unsigned short DnsServer_FormatStringOffsetTable[] =
    {
    0,
    72,
    138,
    216,
    312,
    378,
    462
    };


static const RPC_DISPATCH_FUNCTION DnsServer_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE DnsServer_v5_0_DispatchTable = 
    {
    7,
    (RPC_DISPATCH_FUNCTION*)DnsServer_table
    };


#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for dnsrpc.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"
#ifdef __cplusplus
namespace {
#endif


typedef 
NDR64_FORMAT_CHAR
__midl_frag224_t;
extern const __midl_frag224_t __midl_frag224;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag223_t;
extern const __midl_frag223_t __midl_frag223;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag222_t;
extern const __midl_frag222_t __midl_frag222;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag221_t;
extern const __midl_frag221_t __midl_frag221;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag220_t;
extern const __midl_frag220_t __midl_frag220;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag219_t;
extern const __midl_frag219_t __midl_frag219;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag218_t;
extern const __midl_frag218_t __midl_frag218;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag217_t;
extern const __midl_frag217_t __midl_frag217;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag216_t;
extern const __midl_frag216_t __midl_frag216;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag215_t;
extern const __midl_frag215_t __midl_frag215;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag214_t;
extern const __midl_frag214_t __midl_frag214;

typedef 
NDR64_FORMAT_CHAR
__midl_frag212_t;
extern const __midl_frag212_t __midl_frag212;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag211_t;
extern const __midl_frag211_t __midl_frag211;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag210_t;
extern const __midl_frag210_t __midl_frag210;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    NDR64_UINT32 frag13;
}
__midl_frag209_t;
extern const __midl_frag209_t __midl_frag209;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag208_t;
extern const __midl_frag208_t __midl_frag208;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag206_t;
extern const __midl_frag206_t __midl_frag206;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
}
__midl_frag197_t;
extern const __midl_frag197_t __midl_frag197;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag182_t;
extern const __midl_frag182_t __midl_frag182;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    NDR64_UINT32 frag13;
}
__midl_frag181_t;
extern const __midl_frag181_t __midl_frag181;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
}
__midl_frag170_t;
extern const __midl_frag170_t __midl_frag170;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag158_t;
extern const __midl_frag158_t __midl_frag158;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag155_t;
extern const __midl_frag155_t __midl_frag155;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag154_t;
extern const __midl_frag154_t __midl_frag154;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag153_t;
extern const __midl_frag153_t __midl_frag153;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag152_t;
extern const __midl_frag152_t __midl_frag152;

typedef 
NDR64_FORMAT_CHAR
__midl_frag144_t;
extern const __midl_frag144_t __midl_frag144;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
    struct _NDR64_PARAM_FORMAT frag12;
    struct _NDR64_PARAM_FORMAT frag13;
}
__midl_frag135_t;
extern const __midl_frag135_t __midl_frag135;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag102_t;
extern const __midl_frag102_t __midl_frag102;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    NDR64_UINT32 frag13;
}
__midl_frag101_t;
extern const __midl_frag101_t __midl_frag101;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
}
__midl_frag93_t;
extern const __midl_frag93_t __midl_frag93;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag78_t;
extern const __midl_frag78_t __midl_frag78;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    NDR64_UINT32 frag13;
}
__midl_frag77_t;
extern const __midl_frag77_t __midl_frag77;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag76_t;
extern const __midl_frag76_t __midl_frag76;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag67_t;
extern const __midl_frag67_t __midl_frag67;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag65_t;
extern const __midl_frag65_t __midl_frag65;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag64_t;
extern const __midl_frag64_t __midl_frag64;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_FIXED_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
}
__midl_frag62_t;
extern const __midl_frag62_t __midl_frag62;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
    struct _NDR64_POINTER_FORMAT frag7;
    struct _NDR64_POINTER_FORMAT frag8;
    struct _NDR64_POINTER_FORMAT frag9;
    struct _NDR64_POINTER_FORMAT frag10;
    struct _NDR64_POINTER_FORMAT frag11;
}
__midl_frag61_t;
extern const __midl_frag61_t __midl_frag61;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag22;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag23;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag24;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag25;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag26;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag27;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag28;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag29;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag30;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag31;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag32;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag33;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag34;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag35;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag36;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag37;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag38;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag39;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag40;
        struct _NDR64_MEMPAD_FORMAT frag41;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag42;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag43;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag44;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag45;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag46;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag47;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag48;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag49;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag50;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag51;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag52;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag53;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag54;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag55;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag56;
        struct _NDR64_MEMPAD_FORMAT frag57;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag58;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag59;
    } frag2;
}
__midl_frag53_t;
extern const __midl_frag53_t __midl_frag53;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag51_t;
extern const __midl_frag51_t __midl_frag51;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag50_t;
extern const __midl_frag50_t __midl_frag50;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag49_t;
extern const __midl_frag49_t __midl_frag49;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag48_t;
extern const __midl_frag48_t __midl_frag48;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        struct _NDR64_NO_REPEAT_FORMAT frag13;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag14;
        struct _NDR64_POINTER_FORMAT frag15;
        struct _NDR64_NO_REPEAT_FORMAT frag16;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag17;
        struct _NDR64_POINTER_FORMAT frag18;
        struct _NDR64_NO_REPEAT_FORMAT frag19;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag20;
        struct _NDR64_POINTER_FORMAT frag21;
        struct _NDR64_NO_REPEAT_FORMAT frag22;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag23;
        struct _NDR64_POINTER_FORMAT frag24;
        struct _NDR64_NO_REPEAT_FORMAT frag25;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag26;
        struct _NDR64_POINTER_FORMAT frag27;
        struct _NDR64_NO_REPEAT_FORMAT frag28;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag29;
        struct _NDR64_POINTER_FORMAT frag30;
        struct _NDR64_NO_REPEAT_FORMAT frag31;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag32;
        struct _NDR64_POINTER_FORMAT frag33;
        struct 
        {
            struct _NDR64_FIXED_REPEAT_FORMAT frag1;
            struct 
            {
                struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
                struct _NDR64_POINTER_FORMAT frag2;
            } frag2;
        } frag34;
        NDR64_FORMAT_CHAR frag35;
    } frag2;
}
__midl_frag38_t;
extern const __midl_frag38_t __midl_frag38;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag35_t;
extern const __midl_frag35_t __midl_frag35;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        struct _NDR64_NO_REPEAT_FORMAT frag13;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag14;
        struct _NDR64_POINTER_FORMAT frag15;
        struct _NDR64_NO_REPEAT_FORMAT frag16;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag17;
        struct _NDR64_POINTER_FORMAT frag18;
        struct _NDR64_NO_REPEAT_FORMAT frag19;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag20;
        struct _NDR64_POINTER_FORMAT frag21;
        struct _NDR64_NO_REPEAT_FORMAT frag22;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag23;
        struct _NDR64_POINTER_FORMAT frag24;
        struct _NDR64_NO_REPEAT_FORMAT frag25;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag26;
        struct _NDR64_POINTER_FORMAT frag27;
        struct _NDR64_NO_REPEAT_FORMAT frag28;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag29;
        struct _NDR64_POINTER_FORMAT frag30;
        NDR64_FORMAT_CHAR frag31;
    } frag2;
}
__midl_frag26_t;
extern const __midl_frag26_t __midl_frag26;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag23_t;
extern const __midl_frag23_t __midl_frag23;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag22_t;
extern const __midl_frag22_t __midl_frag22;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag21_t;
extern const __midl_frag21_t __midl_frag21;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag12_t;
extern const __midl_frag12_t __midl_frag12;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    NDR64_UINT32 frag13;
}
__midl_frag11_t;
extern const __midl_frag11_t __midl_frag11;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag224_t __midl_frag224 =
0x5    /* FC64_INT32 */;

static const __midl_frag223_t __midl_frag223 =
{ 
/* *_DnsRpcServerInfoLonghorn */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag53
};

static const __midl_frag222_t __midl_frag222 =
{ 
/* *_DnsAddrArray */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag48
};

static const __midl_frag221_t __midl_frag221 =
{ 
/* *_DnsRpcServerInfoDotNet */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag38
};

static const __midl_frag220_t __midl_frag220 =
{ 
/* *_DnsRpcZoneExport */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag35
};

static const __midl_frag219_t __midl_frag219 =
{ 
/* *_DnsRpcServerInfoW2K */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag26
};

static const __midl_frag218_t __midl_frag218 =
{ 
/* *_IP4_ARRAY */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag21
};

static const __midl_frag217_t __midl_frag217 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag216_t __midl_frag216 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag217
};

static const __midl_frag215_t __midl_frag215 =
{ 
/* *char */
    { 
    /* *char */
        0x63,    /* FC64_CONF_CHAR_STRING */
        { 
        /* *char */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 1 /* 0x1 */
    }
};

static const __midl_frag214_t __midl_frag214 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag215
};

static const __midl_frag212_t __midl_frag212 =
0x2    /* FC64_INT8 */;

static const __midl_frag211_t __midl_frag211 =
{ 
/* *byte */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag212
};

static const __midl_frag210_t __midl_frag210 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x5,    /* OP_UNARY_INDIRECTION */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x8,    /* FC64_UINT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */  /* Offset */
    }
};

static const __midl_frag209_t __midl_frag209 =
{ 
/* DNSSRV_RPC_UNION */
    { 
    /* DNSSRV_RPC_UNION */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag210,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 10 /* 0xa */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag211,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag224,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag214,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag216,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag218,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag219,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 19 /* 0x13 */,
        &__midl_frag220,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 21 /* 0x15 */,
        &__midl_frag221,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 34 /* 0x22 */,
        &__midl_frag222,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 35 /* 0x23 */,
        &__midl_frag223,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag208_t __midl_frag208 =
{ 
/* *DNSSRV_RPC_UNION */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag209
};

static const __midl_frag206_t __midl_frag206 =
{ 
/* *long */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag224
};

static const __midl_frag197_t __midl_frag197 =
{ 
/* R_DnssrvQuery2 */
    { 
    /* R_DnssrvQuery2 */      /* procedure R_DnssrvQuery2 */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* dwClientVersion */      /* parameter dwClientVersion */
        &__midl_frag224,
        { 
        /* dwClientVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* dwSettingFlags */      /* parameter dwSettingFlags */
        &__midl_frag224,
        { 
        /* dwSettingFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pwszServerName */      /* parameter pwszServerName */
        &__midl_frag216,
        { 
        /* pwszServerName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pszZone */      /* parameter pszZone */
        &__midl_frag214,
        { 
        /* pszZone */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* pszOperation */      /* parameter pszOperation */
        &__midl_frag214,
        { 
        /* pszOperation */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pdwTypeId */      /* parameter pdwTypeId */
        &__midl_frag224,
        { 
        /* pdwTypeId */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* ppData */      /* parameter ppData */
        &__midl_frag209,
        { 
        /* ppData */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag224,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag182_t __midl_frag182 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 56 /* 0x38 */  /* Offset */
    }
};

static const __midl_frag181_t __midl_frag181 =
{ 
/* DNSSRV_RPC_UNION */
    { 
    /* DNSSRV_RPC_UNION */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag182,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 10 /* 0xa */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag211,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag224,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag214,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag216,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag218,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag219,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 19 /* 0x13 */,
        &__midl_frag220,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 21 /* 0x15 */,
        &__midl_frag221,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 34 /* 0x22 */,
        &__midl_frag222,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 35 /* 0x23 */,
        &__midl_frag223,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag170_t __midl_frag170 =
{ 
/* R_DnssrvOperation2 */
    { 
    /* R_DnssrvOperation2 */      /* procedure R_DnssrvOperation2 */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 80 /* 0x50 */ ,  /* Stack size */
        (NDR64_UINT32) 32 /* 0x20 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 9 /* 0x9 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* dwClientVersion */      /* parameter dwClientVersion */
        &__midl_frag224,
        { 
        /* dwClientVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* dwSettingFlags */      /* parameter dwSettingFlags */
        &__midl_frag224,
        { 
        /* dwSettingFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pwszServerName */      /* parameter pwszServerName */
        &__midl_frag216,
        { 
        /* pwszServerName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pszZone */      /* parameter pszZone */
        &__midl_frag214,
        { 
        /* pszZone */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* dwContext */      /* parameter dwContext */
        &__midl_frag224,
        { 
        /* dwContext */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pszOperation */      /* parameter pszOperation */
        &__midl_frag214,
        { 
        /* pszOperation */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* dwTypeId */      /* parameter dwTypeId */
        &__midl_frag224,
        { 
        /* dwTypeId */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* pData */      /* parameter pData */
        &__midl_frag181,
        { 
        /* pData */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag224,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    }
};

static const __midl_frag158_t __midl_frag158 =
{ 
/* R_DnssrvUpdateRecord */
    { 
    /* R_DnssrvUpdateRecord */      /* procedure R_DnssrvUpdateRecord */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 58 /* 0x3a */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pwszServerName */      /* parameter pwszServerName */
        &__midl_frag216,
        { 
        /* pwszServerName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pszZone */      /* parameter pszZone */
        &__midl_frag214,
        { 
        /* pszZone */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pszNodeName */      /* parameter pszNodeName */
        &__midl_frag214,
        { 
        /* pszNodeName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pAddRecord */      /* parameter pAddRecord */
        &__midl_frag211,
        { 
        /* pAddRecord */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* pDeleteRecord */      /* parameter pDeleteRecord */
        &__midl_frag211,
        { 
        /* pDeleteRecord */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag224,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag155_t __midl_frag155 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x5,    /* OP_UNARY_INDIRECTION */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x8,    /* FC64_UINT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 72 /* 0x48 */  /* Offset */
    }
};

static const __midl_frag154_t __midl_frag154 =
{ 
/* *byte */
    { 
    /* *byte */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *byte */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag155
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag212
    }
};

static const __midl_frag153_t __midl_frag153 =
{ 
/* *byte */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag154
};

static const __midl_frag152_t __midl_frag152 =
{ 
/* **byte */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag153
};

static const __midl_frag144_t __midl_frag144 =
0x4    /* FC64_INT16 */;

static const __midl_frag135_t __midl_frag135 =
{ 
/* R_DnssrvEnumRecords */
    { 
    /* R_DnssrvEnumRecords */      /* procedure R_DnssrvEnumRecords */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 96 /* 0x60 */ ,  /* Stack size */
        (NDR64_UINT32) 14 /* 0xe */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 11 /* 0xb */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pwszServerName */      /* parameter pwszServerName */
        &__midl_frag216,
        { 
        /* pwszServerName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pszZone */      /* parameter pszZone */
        &__midl_frag214,
        { 
        /* pszZone */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pszNodeName */      /* parameter pszNodeName */
        &__midl_frag214,
        { 
        /* pszNodeName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pszStartChild */      /* parameter pszStartChild */
        &__midl_frag214,
        { 
        /* pszStartChild */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* wRecordType */      /* parameter wRecordType */
        &__midl_frag144,
        { 
        /* wRecordType */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* fSelectFlag */      /* parameter fSelectFlag */
        &__midl_frag224,
        { 
        /* fSelectFlag */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* pszFilterStart */      /* parameter pszFilterStart */
        &__midl_frag214,
        { 
        /* pszFilterStart */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* pszFilterStop */      /* parameter pszFilterStop */
        &__midl_frag214,
        { 
        /* pszFilterStop */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* pdwBufferLength */      /* parameter pdwBufferLength */
        &__midl_frag224,
        { 
        /* pdwBufferLength */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* ppBuffer */      /* parameter ppBuffer */
        &__midl_frag152,
        { 
        /* ppBuffer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag224,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        88 /* 0x58 */,   /* Stack offset */
    }
};

static const __midl_frag102_t __midl_frag102 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */  /* Offset */
    }
};

static const __midl_frag101_t __midl_frag101 =
{ 
/* DNSSRV_RPC_UNION */
    { 
    /* DNSSRV_RPC_UNION */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag102,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 10 /* 0xa */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag211,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag224,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag214,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag216,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag218,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag219,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 19 /* 0x13 */,
        &__midl_frag220,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 21 /* 0x15 */,
        &__midl_frag221,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 34 /* 0x22 */,
        &__midl_frag222,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 35 /* 0x23 */,
        &__midl_frag223,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag93_t __midl_frag93 =
{ 
/* R_DnssrvComplexOperation */
    { 
    /* R_DnssrvComplexOperation */      /* procedure R_DnssrvComplexOperation */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pwszServerName */      /* parameter pwszServerName */
        &__midl_frag216,
        { 
        /* pwszServerName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pszZone */      /* parameter pszZone */
        &__midl_frag214,
        { 
        /* pszZone */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pszOperation */      /* parameter pszOperation */
        &__midl_frag214,
        { 
        /* pszOperation */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* dwTypeIn */      /* parameter dwTypeIn */
        &__midl_frag224,
        { 
        /* dwTypeIn */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* pDataIn */      /* parameter pDataIn */
        &__midl_frag101,
        { 
        /* pDataIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pdwTypeOut */      /* parameter pdwTypeOut */
        &__midl_frag224,
        { 
        /* pdwTypeOut */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* ppDataOut */      /* parameter ppDataOut */
        &__midl_frag209,
        { 
        /* ppDataOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag224,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag78_t __midl_frag78 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x5,    /* OP_UNARY_INDIRECTION */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x8,    /* FC64_UINT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */  /* Offset */
    }
};

static const __midl_frag77_t __midl_frag77 =
{ 
/* DNSSRV_RPC_UNION */
    { 
    /* DNSSRV_RPC_UNION */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag78,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 10 /* 0xa */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag211,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag224,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag214,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag216,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag218,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag219,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 19 /* 0x13 */,
        &__midl_frag220,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 21 /* 0x15 */,
        &__midl_frag221,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 34 /* 0x22 */,
        &__midl_frag222,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 35 /* 0x23 */,
        &__midl_frag223,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag76_t __midl_frag76 =
{ 
/* *DNSSRV_RPC_UNION */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag77
};

static const __midl_frag67_t __midl_frag67 =
{ 
/* R_DnssrvQuery */
    { 
    /* R_DnssrvQuery */      /* procedure R_DnssrvQuery */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pwszServerName */      /* parameter pwszServerName */
        &__midl_frag216,
        { 
        /* pwszServerName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pszZone */      /* parameter pszZone */
        &__midl_frag214,
        { 
        /* pszZone */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pszOperation */      /* parameter pszOperation */
        &__midl_frag214,
        { 
        /* pszOperation */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pdwTypeId */      /* parameter pdwTypeId */
        &__midl_frag224,
        { 
        /* pdwTypeId */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ppData */      /* parameter ppData */
        &__midl_frag77,
        { 
        /* ppData */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag224,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag65_t __midl_frag65 =
{ 
/*  */
    { 
    /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
        0x40,    /* FC64_FIX_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 15 /* 0xf */
    }
};

static const __midl_frag64_t __midl_frag64 =
{ 
/*  */
    { 
    /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
        0x40,    /* FC64_FIX_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 12 /* 0xc */
    }
};

static const __midl_frag62_t __midl_frag62 =
{ 
/*  */
    { 
    /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
        0x40,    /* FC64_FIX_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_FIXED_REPEAT_FORMAT */
            { 
            /* struct _NDR64_FIXED_REPEAT_FORMAT */
                0x81,    /* FC64_FIXED_REPEAT */
                { 
                /* struct _NDR64_FIXED_REPEAT_FORMAT */
                    (NDR64_UINT8) 0 /* 0x0 */,
                    (NDR64_UINT8) 0 /* 0x0 */
                },
                (NDR64_UINT16) 0 /* 0x0 */,
                (NDR64_UINT32) 8 /* 0x8 */,
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 1 /* 0x1 */
            },
            (NDR64_UINT32) 6 /* 0x6 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *char */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag215
            }
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag61_t __midl_frag61 =
{ 
/*  */
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag215
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag217
    },
    { 
    /* *_DnsAddrArray */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag48
    },
    { 
    /* *_DnsAddrArray */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag48
    },
    { 
    /* *_DnsAddrArray */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag48
    },
    { 
    /* *_DnsAddrArray */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag48
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag217
    },
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag215
    },
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag215
    },
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag215
    },
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag215
    }
};

static const __midl_frag53_t __midl_frag53 =
{ 
/* _DnsRpcServerInfoLonghorn */
    { 
    /* _DnsRpcServerInfoLonghorn */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _DnsRpcServerInfoLonghorn */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 280 /* 0x118 */,
        0,
        0,
        &__midl_frag61,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag62
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 3 /* 0x3 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag64
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag65
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* _DnsRpcServerInfoLonghorn */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag51_t __midl_frag51 =
{ 
/* DNS_ADDR */
    { 
    /* DNS_ADDR */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* DNS_ADDR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */
    }
};

static const __midl_frag50_t __midl_frag50 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag49_t __midl_frag49 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */,
        &__midl_frag50
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 64 /* 0x40 */,
        &__midl_frag51
    }
};

static const __midl_frag48_t __midl_frag48 =
{ 
/* _DnsAddrArray */
    { 
    /* _DnsAddrArray */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* _DnsAddrArray */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag49
    }
};

static const __midl_frag38_t __midl_frag38 =
{ 
/* _DnsRpcServerInfoDotNet */
    { 
    /* _DnsRpcServerInfoDotNet */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _DnsRpcServerInfoDotNet */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 280 /* 0x118 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *char */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag215
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag217
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *_IP4_ARRAY */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag21
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 40 /* 0x28 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *_IP4_ARRAY */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag21
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 48 /* 0x30 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *_IP4_ARRAY */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag21
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 56 /* 0x38 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *_IP4_ARRAY */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag21
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 64 /* 0x40 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag217
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 72 /* 0x48 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *char */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag215
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 80 /* 0x50 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *char */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag215
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 88 /* 0x58 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *char */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag215
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 96 /* 0x60 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *char */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag215
        },
        { 
        /*  */
            { 
            /* struct _NDR64_FIXED_REPEAT_FORMAT */
                { 
                /* struct _NDR64_FIXED_REPEAT_FORMAT */
                    0x81,    /* FC64_FIXED_REPEAT */
                    { 
                    /* struct _NDR64_FIXED_REPEAT_FORMAT */
                        (NDR64_UINT8) 0 /* 0x0 */,
                        (NDR64_UINT8) 0 /* 0x0 */
                    },
                    (NDR64_UINT16) 0 /* 0x0 */,
                    (NDR64_UINT32) 8 /* 0x8 */,
                    (NDR64_UINT32) 104 /* 0x68 */,
                    (NDR64_UINT32) 1 /* 0x1 */
                },
                (NDR64_UINT32) 6 /* 0x6 */
            },
            { 
            /*  */
                { 
                /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                    (NDR64_UINT32) 0 /* 0x0 */,
                    (NDR64_UINT32) 0 /* 0x0 */
                },
                { 
                /* *char */
                    0x21,    /* FC64_UP */
                    (NDR64_UINT8) 0 /* 0x0 */,
                    (NDR64_UINT16) 0 /* 0x0 */,
                    &__midl_frag215
                }
            }
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag35_t __midl_frag35 =
{ 
/* _DnsRpcZoneExport */
    { 
    /* _DnsRpcZoneExport */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _DnsRpcZoneExport */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *char */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag215
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag26_t __midl_frag26 =
{ 
/* _DnsRpcServerInfoW2K */
    { 
    /* _DnsRpcServerInfoW2K */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _DnsRpcServerInfoW2K */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 208 /* 0xd0 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *char */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag215
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag217
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *_IP4_ARRAY */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag21
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *_IP4_ARRAY */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag21
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 40 /* 0x28 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *_IP4_ARRAY */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag21
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 48 /* 0x30 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *long */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 8 /* 0x8 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag224
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 56 /* 0x38 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *long */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 8 /* 0x8 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag224
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 64 /* 0x40 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *long */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 8 /* 0x8 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag224
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 72 /* 0x48 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *long */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 8 /* 0x8 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag224
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 80 /* 0x50 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *long */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 8 /* 0x8 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag224
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag23_t __midl_frag23 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag22_t __midl_frag22 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag23
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag224
    }
};

static const __midl_frag21_t __midl_frag21 =
{ 
/* _IP4_ARRAY */
    { 
    /* _IP4_ARRAY */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* _IP4_ARRAY */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag22
    }
};

static const __midl_frag12_t __midl_frag12 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */  /* Offset */
    }
};

static const __midl_frag11_t __midl_frag11 =
{ 
/* DNSSRV_RPC_UNION */
    { 
    /* DNSSRV_RPC_UNION */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag12,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 10 /* 0xa */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag211,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag224,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag214,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag216,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag218,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag219,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 19 /* 0x13 */,
        &__midl_frag220,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 21 /* 0x15 */,
        &__midl_frag221,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 34 /* 0x22 */,
        &__midl_frag222,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 35 /* 0x23 */,
        &__midl_frag223,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* R_DnssrvOperation */
    { 
    /* R_DnssrvOperation */      /* procedure R_DnssrvOperation */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pwszServerName */      /* parameter pwszServerName */
        &__midl_frag216,
        { 
        /* pwszServerName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pszZone */      /* parameter pszZone */
        &__midl_frag214,
        { 
        /* pszZone */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* dwContext */      /* parameter dwContext */
        &__midl_frag224,
        { 
        /* dwContext */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pszOperation */      /* parameter pszOperation */
        &__midl_frag214,
        { 
        /* pszOperation */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* dwTypeId */      /* parameter dwTypeId */
        &__midl_frag224,
        { 
        /* dwTypeId */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pData */      /* parameter pData */
        &__midl_frag11,
        { 
        /* pData */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag224,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;
#ifdef __cplusplus
}
#endif


#include "poppack.h"


static const FormatInfoRef DnsServer_Ndr64ProcTable[] =
    {
    &__midl_frag2,
    &__midl_frag67,
    &__midl_frag93,
    &__midl_frag135,
    &__midl_frag158,
    &__midl_frag170,
    &__midl_frag197
    };


#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC DnsServer_StubDesc = 
    {
    (void *)& DnsServer___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
    0,
    0,
    dnsrpc__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0xa0000, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& DnsServer_ServerInfo,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

static const RPC_DISPATCH_FUNCTION DnsServer_NDR64__table[] =
    {
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    0
    };
static const RPC_DISPATCH_TABLE DnsServer_NDR64__v5_0_DispatchTable = 
    {
    7,
    (RPC_DISPATCH_FUNCTION*)DnsServer_NDR64__table
    };

static const MIDL_SYNTAX_INFO DnsServer_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&DnsServer_v5_0_DispatchTable,
    dnsrpc__MIDL_ProcFormatString.Format,
    DnsServer_FormatStringOffsetTable,
    dnsrpc__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    (RPC_DISPATCH_TABLE*)&DnsServer_NDR64__v5_0_DispatchTable,
    0 ,
    (unsigned short *) DnsServer_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };


static const SERVER_ROUTINE DnsServer_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)R_DnssrvOperation,
    (SERVER_ROUTINE)R_DnssrvQuery,
    (SERVER_ROUTINE)R_DnssrvComplexOperation,
    (SERVER_ROUTINE)R_DnssrvEnumRecords,
    (SERVER_ROUTINE)R_DnssrvUpdateRecord,
    (SERVER_ROUTINE)R_DnssrvOperation2,
    (SERVER_ROUTINE)R_DnssrvQuery2
    };

static const MIDL_SERVER_INFO DnsServer_ServerInfo = 
    {
    &DnsServer_StubDesc,
    DnsServer_ServerRoutineTable,
    dnsrpc__MIDL_ProcFormatString.Format,
    (unsigned short *) DnsServer_FormatStringOffsetTable,
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)DnsServer_SyntaxInfo
    };
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

