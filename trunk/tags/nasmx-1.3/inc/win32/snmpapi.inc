%ifndef __snmpapi_INC__
%define __snmpapi_INC__

IMPORT SnmpSvcAddrIsIpx, 12
IMPORT SnmpSvcAddrToSocket, 8
IMPORT SnmpSvcGetEnterpriseOID, 0
IMPORT SnmpSvcGetUptime, 0
IMPORT SnmpSvcGetUptimeFromTime, 4
IMPORT SnmpSvcInitUptime, 0
IMPORT SnmpSvcSetLogLevel, 4
IMPORT SnmpSvcSetLogType, 4
IMPORT SnmpTfxClose, 4
IMPORT SnmpTfxOpen, 8
IMPORT SnmpTfxQuery, 20
IMPORT SnmpUtilAnsiToUnicode, 12
IMPORT SnmpUtilAsnAnyCpy, 8
IMPORT SnmpUtilAsnAnyFree, 4
IMPORT SnmpUtilDbgPrint
IMPORT SnmpUtilIdsToA, 8
IMPORT SnmpUtilMemAlloc, 4
IMPORT SnmpUtilMemFree, 4
IMPORT SnmpUtilMemReAlloc, 8
IMPORT SnmpUtilOctetsCmp, 8
IMPORT SnmpUtilOctetsCpy, 8
IMPORT SnmpUtilOctetsFree, 4
IMPORT SnmpUtilOctetsNCmp, 12
IMPORT SnmpUtilOidAppend, 8
IMPORT SnmpUtilOidCmp, 8
IMPORT SnmpUtilOidCpy, 8
IMPORT SnmpUtilOidFree, 4
IMPORT SnmpUtilOidNCmp, 12
IMPORT SnmpUtilOidToA, 4
IMPORT SnmpUtilPrintAsnAny, 4
IMPORT SnmpUtilPrintOid, 4
IMPORT SnmpUtilUTF8ToUnicode, 12
IMPORT SnmpUtilUnicodeToAnsi, 12
IMPORT SnmpUtilUnicodeToUTF8, 12
IMPORT SnmpUtilVarBindCpy, 8
IMPORT SnmpUtilVarBindFree, 4
IMPORT SnmpUtilVarBindListCpy, 8
IMPORT SnmpUtilVarBindListFree, 4

%endif