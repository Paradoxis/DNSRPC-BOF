

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __dnsrpc_h__
#define __dnsrpc_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "wtypes.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_dnsrpc_0000_0000 */
/* [local] */ 

typedef unsigned long *PDWORD;

typedef byte *PBYTE;

typedef wchar_t *LPWSTR;

typedef unsigned char UCHAR;

typedef unsigned char BOOLEAN;

typedef unsigned char BYTE;

typedef struct _IP4_ARRAY
    {
    unsigned long AddrCount;
    /* [size_is] */ unsigned long AddrArray[ 1 ];
    } 	IP4_ARRAY;

typedef struct _IP4_ARRAY *PIP4_ARRAY;

typedef struct _DnsAddr
    {
    unsigned char MaxSa[ 32 ];
    unsigned long DnsAddrUserDword[ 8 ];
    } 	DNS_ADDR;

typedef struct _DnsAddr *PDNS_ADDR;

typedef struct _DnsAddrArray
    {
    unsigned long MaxCount;
    unsigned long AddrCount;
    unsigned long Tag;
    unsigned short Family;
    unsigned short WordReserved;
    unsigned long Flags;
    unsigned long MatchFlag;
    unsigned long Reserved1;
    unsigned long Reserved2;
    /* [size_is] */ DNS_ADDR AddrArray[ 1 ];
    } 	DNS_ADDR_ARRAY;

typedef struct _DnsAddrArray *PDNS_ADDR_ARRAY;

typedef struct _DnsRpcServerInfoW2K
    {
    unsigned long dwVersion;
    UCHAR fBootMethod;
    BOOLEAN fAdminConfigured;
    BOOLEAN fAllowUpdate;
    BOOLEAN fDsAvailable;
    /* [string] */ unsigned char *pszServerName;
    /* [string] */ wchar_t *pszDsContainer;
    PIP4_ARRAY aipServerAddrs;
    PIP4_ARRAY aipListenAddrs;
    PIP4_ARRAY aipForwarders;
    unsigned long *pExtension1;
    unsigned long *pExtension2;
    unsigned long *pExtension3;
    unsigned long *pExtension4;
    unsigned long *pExtension5;
    unsigned long dwLogLevel;
    unsigned long dwDebugLevel;
    unsigned long dwForwardTimeout;
    unsigned long dwRpcProtocol;
    unsigned long dwNameCheckFlag;
    unsigned long cAddressAnswerLimit;
    unsigned long dwRecursionRetry;
    unsigned long dwRecursionTimeout;
    unsigned long dwMaxCacheTtl;
    unsigned long dwDsPollingInterval;
    unsigned long dwScavengingInterval;
    unsigned long dwDefaultRefreshInterval;
    unsigned long dwDefaultNoRefreshInterval;
    unsigned long dwReserveArray[ 10 ];
    BOOLEAN fAutoReverseZones;
    BOOLEAN fAutoCacheUpdate;
    BOOLEAN fRecurseAfterForwarding;
    BOOLEAN fForwardDelegations;
    BOOLEAN fNoRecursion;
    BOOLEAN fSecureResponses;
    BOOLEAN fRoundRobin;
    BOOLEAN fLocalNetPriority;
    BOOLEAN fBindSecondaries;
    BOOLEAN fWriteAuthorityNs;
    BOOLEAN fStrictFileParsing;
    BOOLEAN fLooseWildcarding;
    BOOLEAN fDefaultAgingState;
    BOOLEAN fReserveArray[ 15 ];
    } 	DNS_RPC_SERVER_INFO_W2K;

typedef struct _DnsRpcServerInfoW2K *PDNS_RPC_SERVER_INFO_W2K;

typedef struct _DnsRpcServerInfoDotNet
    {
    unsigned long dwRpcStructureVersion;
    unsigned long dwReserved0;
    unsigned long dwVersion;
    UCHAR fBootMethod;
    BOOLEAN fAdminConfigured;
    BOOLEAN fAllowUpdate;
    BOOLEAN fDsAvailable;
    /* [string] */ unsigned char *pszServerName;
    /* [string] */ wchar_t *pszDsContainer;
    PIP4_ARRAY aipServerAddrs;
    PIP4_ARRAY aipListenAddrs;
    PIP4_ARRAY aipForwarders;
    PIP4_ARRAY aipLogFilter;
    /* [string] */ wchar_t *pwszLogFilePath;
    /* [string] */ unsigned char *pszDomainName;
    /* [string] */ unsigned char *pszForestName;
    /* [string] */ unsigned char *pszDomainDirectoryPartition;
    /* [string] */ unsigned char *pszForestDirectoryPartition;
    /* [string] */ unsigned char *pExtensions[ 6 ];
    unsigned long dwLogLevel;
    unsigned long dwDebugLevel;
    unsigned long dwForwardTimeout;
    unsigned long dwRpcProtocol;
    unsigned long dwNameCheckFlag;
    unsigned long cAddressAnswerLimit;
    unsigned long dwRecursionRetry;
    unsigned long dwRecursionTimeout;
    unsigned long dwMaxCacheTtl;
    unsigned long dwDsPollingInterval;
    unsigned long dwLocalNetPriorityNetMask;
    unsigned long dwScavengingInterval;
    unsigned long dwDefaultRefreshInterval;
    unsigned long dwDefaultNoRefreshInterval;
    unsigned long dwLastScavengeTime;
    unsigned long dwEventLogLevel;
    unsigned long dwLogFileMaxSize;
    unsigned long dwDsForestVersion;
    unsigned long dwDsDomainVersion;
    unsigned long dwDsDsaVersion;
    unsigned long dwReserveArray[ 4 ];
    BOOLEAN fAutoReverseZones;
    BOOLEAN fAutoCacheUpdate;
    BOOLEAN fRecurseAfterForwarding;
    BOOLEAN fForwardDelegations;
    BOOLEAN fNoRecursion;
    BOOLEAN fSecureResponses;
    BOOLEAN fRoundRobin;
    BOOLEAN fLocalNetPriority;
    BOOLEAN fBindSecondaries;
    BOOLEAN fWriteAuthorityNs;
    BOOLEAN fStrictFileParsing;
    BOOLEAN fLooseWildcarding;
    BOOLEAN fDefaultAgingState;
    BOOLEAN fReserveArray[ 15 ];
    } 	DNS_RPC_SERVER_INFO_DOTNET;

typedef struct _DnsRpcServerInfoDotNet *PDNS_RPC_SERVER_INFO_DOTNET;

typedef struct _DnsRpcServerInfoLonghorn
    {
    unsigned long dwRpcStructureVersion;
    unsigned long dwReserved0;
    unsigned long dwVersion;
    UCHAR fBootMethod;
    BOOLEAN fAdminConfigured;
    BOOLEAN fAllowUpdate;
    BOOLEAN fDsAvailable;
    /* [string] */ unsigned char *pszServerName;
    /* [string] */ wchar_t *pszDsContainer;
    PDNS_ADDR_ARRAY aipServerAddrs;
    PDNS_ADDR_ARRAY aipListenAddrs;
    PDNS_ADDR_ARRAY aipForwarders;
    PDNS_ADDR_ARRAY aipLogFilter;
    /* [string] */ wchar_t *pwszLogFilePath;
    /* [string] */ unsigned char *pszDomainName;
    /* [string] */ unsigned char *pszForestName;
    /* [string] */ unsigned char *pszDomainDirectoryPartition;
    /* [string] */ unsigned char *pszForestDirectoryPartition;
    /* [string] */ unsigned char *pExtensions[ 6 ];
    unsigned long dwLogLevel;
    unsigned long dwDebugLevel;
    unsigned long dwForwardTimeout;
    unsigned long dwRpcProtocol;
    unsigned long dwNameCheckFlag;
    unsigned long cAddressAnswerLimit;
    unsigned long dwRecursionRetry;
    unsigned long dwRecursionTimeout;
    unsigned long dwMaxCacheTtl;
    unsigned long dwDsPollingInterval;
    unsigned long dwLocalNetPriorityNetMask;
    unsigned long dwScavengingInterval;
    unsigned long dwDefaultRefreshInterval;
    unsigned long dwDefaultNoRefreshInterval;
    unsigned long dwLastScavengeTime;
    unsigned long dwEventLogLevel;
    unsigned long dwLogFileMaxSize;
    unsigned long dwDsForestVersion;
    unsigned long dwDsDomainVersion;
    unsigned long dwDsDsaVersion;
    BOOLEAN fReadOnlyDC;
    unsigned long dwReserveArray[ 3 ];
    BOOLEAN fAutoReverseZones;
    BOOLEAN fAutoCacheUpdate;
    BOOLEAN fRecurseAfterForwarding;
    BOOLEAN fForwardDelegations;
    BOOLEAN fNoRecursion;
    BOOLEAN fSecureResponses;
    BOOLEAN fRoundRobin;
    BOOLEAN fLocalNetPriority;
    BOOLEAN fBindSecondaries;
    BOOLEAN fWriteAuthorityNs;
    BOOLEAN fStrictFileParsing;
    BOOLEAN fLooseWildcarding;
    BOOLEAN fDefaultAgingState;
    BOOLEAN fReserveArray[ 15 ];
    } 	DNS_RPC_SERVER_INFO_LONGHORN;

typedef struct _DnsRpcServerInfoLonghorn *PDNS_RPC_SERVER_INFO_LONGHORN;

typedef struct _DnsRpcServerInfoLonghorn DNS_RPC_SERVER_INFO;

typedef struct _DnsRpcServerInfoLonghorn *PDNS_RPC_SERVER_INFO;

typedef struct _DnsRpcZoneExport
    {
    unsigned long dwRpcStructureVersion;
    unsigned long dwReserved0;
    /* [string] */ unsigned char *pszZoneExportFile;
    } 	DNS_RPC_ZONE_EXPORT_INFO;

typedef struct _DnsRpcZoneExport *PDNS_RPC_ZONE_EXPORT_INFO;

typedef /* [switch_type] */ union _DnssrvRpcUnion
    {
    /* [case()] */ byte *Null;
    /* [case()] */ unsigned long Dword;
    /* [case()][string] */ unsigned char *String;
    /* [case()][string] */ wchar_t *WideString;
    /* [case()] */ PIP4_ARRAY IpArray;
    /* [case()] */ PDNS_RPC_SERVER_INFO_W2K ServerInfoW2K;
    /* [case()] */ PDNS_RPC_ZONE_EXPORT_INFO ZoneExport;
    /* [case()] */ PDNS_RPC_SERVER_INFO_DOTNET ServerInfoDotNet;
    /* [case()] */ PDNS_ADDR_ARRAY AddrArray;
    /* [case()] */ PDNS_RPC_SERVER_INFO ServerInfo;
    } 	DNSSRV_RPC_UNION;



extern RPC_IF_HANDLE __MIDL_itf_dnsrpc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dnsrpc_0000_0000_v0_0_s_ifspec;

#ifndef __DnsServer_INTERFACE_DEFINED__
#define __DnsServer_INTERFACE_DEFINED__

/* interface DnsServer */
/* [unique][version][uuid] */ 

long R_DnssrvOperation( 
    /* [in] */ handle_t hBindingHandle,
    /* [string][unique][in] */ wchar_t *pwszServerName,
    /* [string][unique][in] */ unsigned char *pszZone,
    /* [in] */ unsigned long dwContext,
    /* [string][unique][in] */ unsigned char *pszOperation,
    /* [in] */ unsigned long dwTypeId,
    /* [switch_is][in] */ DNSSRV_RPC_UNION pData);

long R_DnssrvQuery( 
    /* [in] */ handle_t hBindingHandle,
    /* [string][unique][in] */ wchar_t *pwszServerName,
    /* [string][unique][in] */ unsigned char *pszZone,
    /* [string][unique][in] */ unsigned char *pszOperation,
    /* [out] */ unsigned long *pdwTypeId,
    /* [switch_is][out] */ DNSSRV_RPC_UNION *ppData);

long R_DnssrvComplexOperation( 
    /* [in] */ handle_t hBindingHandle,
    /* [string][unique][in] */ wchar_t *pwszServerName,
    /* [string][unique][in] */ unsigned char *pszZone,
    /* [string][unique][in] */ unsigned char *pszOperation,
    /* [in] */ unsigned long dwTypeIn,
    /* [switch_is][in] */ DNSSRV_RPC_UNION pDataIn,
    /* [out] */ unsigned long *pdwTypeOut,
    /* [switch_is][out] */ DNSSRV_RPC_UNION *ppDataOut);

long R_DnssrvEnumRecords( 
    /* [in] */ handle_t hBindingHandle,
    /* [string][unique][in] */ wchar_t *pwszServerName,
    /* [string][unique][in] */ unsigned char *pszZone,
    /* [string][unique][in] */ unsigned char *pszNodeName,
    /* [string][unique][in] */ unsigned char *pszStartChild,
    /* [in] */ unsigned short wRecordType,
    /* [in] */ unsigned long fSelectFlag,
    /* [string][unique][in] */ unsigned char *pszFilterStart,
    /* [string][unique][in] */ unsigned char *pszFilterStop,
    /* [out] */ unsigned long *pdwBufferLength,
    /* [size_is][size_is][out] */ byte **ppBuffer);

long R_DnssrvUpdateRecord( 
    /* [in] */ handle_t hBindingHandle,
    /* [string][unique][in] */ wchar_t *pwszServerName,
    /* [string][unique][in] */ unsigned char *pszZone,
    /* [string][unique][in] */ unsigned char *pszNodeName,
    /* [unique][in] */ byte *pAddRecord,
    /* [unique][in] */ byte *pDeleteRecord);

long R_DnssrvOperation2( 
    /* [in] */ handle_t hBindingHandle,
    /* [in] */ unsigned long dwClientVersion,
    /* [in] */ unsigned long dwSettingFlags,
    /* [string][unique][in] */ wchar_t *pwszServerName,
    /* [string][unique][in] */ unsigned char *pszZone,
    /* [in] */ unsigned long dwContext,
    /* [string][unique][in] */ unsigned char *pszOperation,
    /* [in] */ unsigned long dwTypeId,
    /* [switch_is][in] */ DNSSRV_RPC_UNION pData);

long R_DnssrvQuery2( 
    /* [in] */ handle_t hBindingHandle,
    /* [in] */ unsigned long dwClientVersion,
    /* [in] */ unsigned long dwSettingFlags,
    /* [string][unique][in] */ wchar_t *pwszServerName,
    /* [string][unique][in] */ unsigned char *pszZone,
    /* [string][unique][in] */ unsigned char *pszOperation,
    /* [out] */ unsigned long *pdwTypeId,
    /* [switch_is][out] */ DNSSRV_RPC_UNION *ppData);



extern RPC_IF_HANDLE DnsServer_v5_0_c_ifspec;
extern RPC_IF_HANDLE DnsServer_v5_0_s_ifspec;
#endif /* __DnsServer_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


