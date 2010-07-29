%ifndef __wsnmp32_INC__
%define __wsnmp32_INC__

IMPORT SnmpCancelMsg, 8
IMPORT SnmpCleanup, 0
IMPORT SnmpCleanupEx, 0
IMPORT SnmpClose, 4
IMPORT SnmpContextToStr, 8
IMPORT SnmpConveyAgentAddress, 4
IMPORT SnmpCountVbl, 4
IMPORT SnmpCreatePdu, 24
IMPORT SnmpCreateSession, 16
IMPORT SnmpCreateVbl, 12
IMPORT SnmpDecodeMsg, 24
IMPORT SnmpDeleteVb, 8
IMPORT SnmpDuplicatePdu, 8
IMPORT SnmpDuplicateVbl, 8
IMPORT SnmpEncodeMsg, 24
IMPORT SnmpEntityToStr, 12
IMPORT SnmpFreeContext, 4
IMPORT SnmpFreeDescriptor, 8
IMPORT SnmpFreeEntity, 4
IMPORT SnmpFreePdu, 4
IMPORT SnmpFreeVbl, 4
IMPORT SnmpGetLastError, 4
IMPORT SnmpGetPduData, 24
IMPORT SnmpGetRetransmitMode, 4
IMPORT SnmpGetRetry, 12
IMPORT SnmpGetTimeout, 12
IMPORT SnmpGetTranslateMode, 4
IMPORT SnmpGetVb, 16
IMPORT SnmpGetVendorInfo, 4
IMPORT SnmpListen, 8
IMPORT SnmpOidCompare, 16
IMPORT SnmpOidCopy, 8
IMPORT SnmpOidToStr, 12
IMPORT SnmpOpen, 8
IMPORT SnmpRecvMsg, 20
IMPORT SnmpRegister, 24
IMPORT SnmpSendMsg, 20
IMPORT SnmpSetAgentAddress, 4
IMPORT SnmpSetPduData, 24
IMPORT SnmpSetPort, 8
IMPORT SnmpSetRetransmitMode, 4
IMPORT SnmpSetRetry, 8
IMPORT SnmpSetTimeout, 8
IMPORT SnmpSetTranslateMode, 4
IMPORT SnmpSetVb, 16
IMPORT SnmpStartup, 20
IMPORT SnmpStartupEx, 20
IMPORT SnmpStrToContext, 8
IMPORT SnmpStrToEntity, 8
IMPORT SnmpStrToOid, 8

%endif