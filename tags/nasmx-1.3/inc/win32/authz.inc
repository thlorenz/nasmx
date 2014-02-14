%ifndef __authz_INC__
%define __authz_INC__

IMPORT AuthzAccessCheck, 36
IMPORT AuthzAddSidsToContext, 24
IMPORT AuthzCachedAccessCheck, 20
IMPORT AuthzEnumerateSecurityEventSources, 16
IMPORT AuthzFreeAuditEvent, 4
IMPORT AuthzFreeContext, 4
IMPORT AuthzFreeHandle, 4
IMPORT AuthzFreeResourceManager, 4
IMPORT AuthzGetInformationFromContext, 20
IMPORT AuthzInitializeContextFromAuthzContext, 28
IMPORT AuthzInitializeContextFromSid, 32
IMPORT AuthzInitializeContextFromToken, 32
IMPORT AuthzInitializeObjectAccessAuditEvent
IMPORT AuthzInitializeObjectAccessAuditEvent2
IMPORT AuthzInitializeResourceManager, 24
IMPORT AuthzInstallSecurityEventSource, 8
IMPORT AuthzOpenObjectAudit, 32
IMPORT AuthzRegisterSecurityEventSource, 12
IMPORT AuthzReportSecurityEvent
IMPORT AuthzReportSecurityEventFromParams, 20
IMPORT AuthzUninstallSecurityEventSource, 8
IMPORT AuthzUnregisterSecurityEventSource, 8
IMPORT AuthziLogAuditEvent, 12

%endif