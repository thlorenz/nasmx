%ifndef __sfc_INC__
%define __sfc_INC__

IMPORT SRSetRestorePointA, 8
IMPORT SRSetRestorePointW, 8
IMPORT SfcClose, 4
IMPORT SfcConnectToServer, 4
IMPORT SfcFileException, 12
IMPORT SfcGetNextProtectedFile, 8
IMPORT SfcInitProt, 28
IMPORT SfcInitiateScan, 8
IMPORT SfcInstallProtectedFiles, 28
IMPORT SfcIsFileProtected, 8
IMPORT SfcTerminateWatcherThread, 0
IMPORT SfcWLEventLogoff, 4
IMPORT SfcWLEventLogon, 4
IMPORT SfpDeleteCatalog, 8
IMPORT SfpInstallCatalog, 12
IMPORT SfpVerifyFile, 12

%endif