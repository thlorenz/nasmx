%ifndef __wow32_INC__
%define __wow32_INC__

IMPORT CopyDropFilesFrom16, 4
IMPORT CopyDropFilesFrom32, 4
IMPORT GetCommHandle, 4
IMPORT GetCommShadowMSR, 4
IMPORT W32Dispatch, 0
IMPORT W32HungAppNotifyThread, 4
IMPORT W32Init, 0
IMPORT WOW32DriverCallback, 28
IMPORT WOW32ResolveHandle, 24
IMPORT WOW32ResolveMemory, 4
IMPORT WOWCallback16, 8
IMPORT WOWCallback16Ex, 20
IMPORT WOWDirectedYield16, 4
IMPORT WOWFreeMetafile, 4
IMPORT WOWGetVDMPointer, 12
IMPORT WOWGetVDMPointerFix, 12
IMPORT WOWGetVDMPointerUnfix, 4
IMPORT WOWGlobalAlloc16, 8
IMPORT WOWGlobalAllocLock16, 12
IMPORT WOWGlobalFree16, 4
IMPORT WOWGlobalLock16, 4
IMPORT WOWGlobalLockSize16, 8
IMPORT WOWGlobalUnlock16, 4
IMPORT WOWGlobalUnlockFree16, 4
IMPORT WOWHandle16, 8
IMPORT WOWHandle32, 8
IMPORT WOWUseMciavi16, 0
IMPORT WOWYield16, 0

%endif