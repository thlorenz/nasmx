%ifndef __NASMX_NTDSBCLI_INC__
%define __NASMX_NTDSBCLI_INC__

IMPORT DsBackupClose, 4
IMPORT DsBackupEnd, 4
IMPORT DsBackupFree, 4
IMPORT DsBackupGetBackupLogsA, 12
IMPORT DsBackupGetBackupLogsW, 12
IMPORT DsBackupGetDatabaseNamesA, 12
IMPORT DsBackupGetDatabaseNamesW, 12
IMPORT DsBackupOpenFileA, 16
IMPORT DsBackupOpenFileW, 16
IMPORT DsBackupPrepareA, 24
IMPORT DsBackupPrepareW, 24
IMPORT DsBackupRead, 16
IMPORT DsBackupTruncateLogs, 4
IMPORT DsIsNTDSOnlineA, 8
IMPORT DsIsNTDSOnlineW, 8
IMPORT DsRestoreCheckExpiryToken, 8
IMPORT DsRestoreEnd, 4
IMPORT DsRestoreGetDatabaseLocationsA, 12
IMPORT DsRestoreGetDatabaseLocationsW, 12
IMPORT DsRestorePrepareA, 20
IMPORT DsRestorePrepareW, 20
IMPORT DsRestoreRegisterA, 32
IMPORT DsRestoreRegisterComplete, 8
IMPORT DsRestoreRegisterW, 32
IMPORT DsSetAuthIdentityA, 12
IMPORT DsSetAuthIdentityW, 12
IMPORT DsSetCurrentBackupLogA, 8
IMPORT DsSetCurrentBackupLogW, 8

%ifdef UNICODE

%define DsBackupGetBackupLogs DsBackupGetBackupLogsW
%define DsBackupGetDatabaseNames DsBackupGetDatabaseNamesW
%define DsBackupOpenFile DsBackupOpenFileW
%define DsBackupPrepare DsBackupPrepareW
%define DsIsNTDSOnline DsIsNTDSOnlineW
%define DsRestoreGetDatabaseLocations DsRestoreGetDatabaseLocationsW
%define DsRestorePrepare DsRestorePrepareW
%define DsRestoreRegister DsRestoreRegisterW
%define DsSetAuthIdentity DsSetAuthIdentityW
%define DsSetCurrentBackupLog DsSetCurrentBackupLogW

%else  ;// ANSI

%define DsBackupGetBackupLogs DsBackupGetBackupLogsA
%define DsBackupGetDatabaseNames DsBackupGetDatabaseNamesA
%define DsBackupOpenFile DsBackupOpenFileA
%define DsBackupPrepare DsBackupPrepareA
%define DsIsNTDSOnline DsIsNTDSOnlineA
%define DsRestoreGetDatabaseLocations DsRestoreGetDatabaseLocationsA
%define DsRestorePrepare DsRestorePrepareA
%define DsRestoreRegister DsRestoreRegisterA
%define DsSetAuthIdentity DsSetAuthIdentityA
%define DsSetCurrentBackupLog DsSetCurrentBackupLogA

%endif  ;// UNICODE

%endif  ;// __NASMX_NTDSBCLI_INC__
