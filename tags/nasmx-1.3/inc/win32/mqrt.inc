%ifndef __mqrt_INC__
%define __mqrt_INC__

IMPORT MQADsPathToFormatName, 12
IMPORT MQAllocateMemory, 4
IMPORT MQBeginTransaction, 4
IMPORT MQCloseCursor, 4
IMPORT MQCloseQueue, 4
IMPORT MQCreateCursor, 8
IMPORT MQCreateQueue, 16
IMPORT MQDeleteQueue, 4
IMPORT MQFreeMemory, 4
IMPORT MQFreeSecurityContext, 4
IMPORT MQGetMachineProperties, 12
IMPORT MQGetOverlappedResult, 4
IMPORT MQGetPrivateComputerInformation, 8
IMPORT MQGetQueueProperties, 8
IMPORT MQGetQueueSecurity, 20
IMPORT MQGetSecurityContext, 12
IMPORT MQGetSecurityContextEx, 12
IMPORT MQHandleToFormatName, 12
IMPORT MQInstanceToFormatName, 12
IMPORT MQLocateBegin, 20
IMPORT MQLocateEnd, 4
IMPORT MQLocateNext, 12
IMPORT MQMgmtAction, 12
IMPORT MQMgmtGetInfo, 12
IMPORT MQOpenQueue, 16
IMPORT MQPathNameToFormatName, 12
IMPORT MQPurgeQueue, 4
IMPORT MQReceiveMessage, 32
IMPORT MQReceiveMessageByLookupId, 32
IMPORT MQRegisterCertificate, 12
IMPORT MQSendMessage, 12
IMPORT MQSetQueueProperties, 8
IMPORT MQSetQueueSecurity, 12
IMPORT RTCreateInternalCertificate, 4
IMPORT RTDeleteInternalCert, 4
IMPORT RTGetInternalCert, 20
IMPORT RTGetUserCerts, 12
IMPORT RTIsDependentClient, 0
IMPORT RTLogOnRegisterCert, 4
IMPORT RTOpenInternalCertStore, 20
IMPORT RTRegisterUserCert, 8
IMPORT RTRemoveUserCert, 4
IMPORT RTRemoveUserCertSid, 8
IMPORT RTXactGetDTC, 4

%endif