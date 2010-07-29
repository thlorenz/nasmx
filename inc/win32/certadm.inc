%ifndef __certadm_INC__
%define __certadm_INC__

IMPORT CertSrvBackupClose, 4
IMPORT CertSrvBackupEnd, 4
IMPORT CertSrvBackupFree, 4
IMPORT CertSrvBackupGetBackupLogsW, 12
IMPORT CertSrvBackupGetDatabaseNamesW, 12
IMPORT CertSrvBackupGetDynamicFileListW, 12
IMPORT CertSrvBackupOpenFileW, 16
IMPORT CertSrvBackupPrepareW, 16
IMPORT CertSrvBackupRead, 16
IMPORT CertSrvBackupTruncateLogs, 4
IMPORT CertSrvIsServerOnlineW, 8
IMPORT CertSrvRestoreEnd, 4
IMPORT CertSrvRestoreGetDatabaseLocationsW, 12
IMPORT CertSrvRestorePrepareW, 12
IMPORT CertSrvRestoreRegisterComplete, 8
IMPORT CertSrvRestoreRegisterThroughFile, 32
IMPORT CertSrvRestoreRegisterW, 32
IMPORT CertSrvServerControlW, 16

%endif