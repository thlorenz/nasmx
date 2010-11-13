%ifndef __ole32_INC__
%define __ole32_INC__

IMPORT BindMoniker, 16
IMPORT CLIPFORMAT_UserFree, 8
IMPORT CLIPFORMAT_UserMarshal, 12
IMPORT CLIPFORMAT_UserSize, 12
IMPORT CLIPFORMAT_UserUnmarshal, 12
IMPORT CLSIDFromProgID, 8
IMPORT CLSIDFromProgIDEx, 8
IMPORT CLSIDFromString, 8
IMPORT CoAddRefServerProcess, 0
IMPORT CoAllowSetForegroundWindow, 8
IMPORT CoBuildVersion, 0
IMPORT CoCancelCall, 8
IMPORT CoCopyProxy, 8
IMPORT CoCreateFreeThreadedMarshaler, 8
IMPORT CoCreateGuid, 4
IMPORT CoCreateInstance, 20
IMPORT CoCreateInstanceEx, 24
IMPORT CoCreateObjectInContext, 16
IMPORT CoDeactivateObject, 8
IMPORT CoDisableCallCancellation, 4
IMPORT CoDisconnectObject, 8
IMPORT CoDosDateTimeToFileTime, 12
IMPORT CoEnableCallCancellation, 4
IMPORT CoFileTimeNow, 4
IMPORT CoFileTimeToDosDateTime, 12
IMPORT CoFreeAllLibraries, 0
IMPORT CoFreeLibrary, 4
IMPORT CoFreeUnusedLibraries, 0
IMPORT CoFreeUnusedLibrariesEx, 8
IMPORT CoGetApartmentID, 8
IMPORT CoGetCallContext, 8
IMPORT CoGetCallerTID, 4
IMPORT CoGetCancelObject, 12
IMPORT CoGetClassObject, 20
IMPORT CoGetClassVersion, 12
IMPORT CoGetContextToken, 4
IMPORT CoGetCurrentLogicalThreadId, 4
IMPORT CoGetCurrentProcess, 0
IMPORT CoGetDefaultContext, 12
IMPORT CoGetInstanceFromFile, 32
IMPORT CoGetInstanceFromIStorage, 28
IMPORT CoGetInterceptor, 16
IMPORT CoGetInterceptorFromTypeInfo, 20
IMPORT CoGetInterfaceAndReleaseStream, 12
IMPORT CoGetMalloc, 8
IMPORT CoGetMarshalSizeMax, 24
IMPORT CoGetObject, 16
IMPORT CoGetObjectContext, 8
IMPORT CoGetPSClsid, 8
IMPORT CoGetProcessIdentifier, 4
IMPORT CoGetStandardMarshal, 24
IMPORT CoGetState, 4
IMPORT CoGetStdMarshalEx, 12
IMPORT CoGetSystemSecurityPermissions, 8
IMPORT CoGetTreatAsClass, 8
IMPORT CoImpersonateClient, 0
IMPORT CoInitialize, 4
IMPORT CoInitializeEx, 8
IMPORT CoInitializeSecurity, 36
IMPORT CoInitializeWOW, 8
IMPORT CoInstall, 20
IMPORT CoInvalidateRemoteMachineBindings, 4
IMPORT CoIsHandlerConnected, 4
IMPORT CoIsOle1Class, 4
IMPORT CoLoadLibrary, 8
IMPORT CoLockObjectExternal, 12
IMPORT CoMarshalHresult, 8
IMPORT CoMarshalInterThreadInterfaceInStream, 12
IMPORT CoMarshalInterface, 24
IMPORT CoQueryAuthenticationServices, 8
IMPORT CoQueryClientBlanket, 28
IMPORT CoQueryProxyBlanket, 32
IMPORT CoQueryReleaseObject, 4
IMPORT CoReactivateObject, 8
IMPORT CoRegisterChannelHook, 8
IMPORT CoRegisterClassObject, 20
IMPORT CoRegisterInitializeSpy, 8
IMPORT CoRegisterMallocSpy, 4
IMPORT CoRegisterMessageFilter, 8
IMPORT CoRegisterPSClsid, 8
IMPORT CoRegisterSurrogate, 4
IMPORT CoRegisterSurrogateEx, 8
IMPORT CoReleaseMarshalData, 4
IMPORT CoReleaseServerProcess, 0
IMPORT CoResumeClassObjects, 0
IMPORT CoRetireServer, 4
IMPORT CoRevertToSelf, 0
IMPORT CoRevokeClassObject, 4
IMPORT CoRevokeInitializeSpy, 8
IMPORT CoRevokeMallocSpy, 0
IMPORT CoSetCancelObject, 4
IMPORT CoSetProxyBlanket, 32
IMPORT CoSetState, 4
IMPORT CoSuspendClassObjects, 0
IMPORT CoSwitchCallContext, 8
IMPORT CoTaskMemAlloc, 4
IMPORT CoTaskMemFree, 4
IMPORT CoTaskMemRealloc, 8
IMPORT CoTestCancel, 0
IMPORT CoTreatAsClass, 8
IMPORT CoUninitialize, 0
IMPORT CoUnloadingWOW, 4
IMPORT CoUnmarshalHresult, 8
IMPORT CoUnmarshalInterface, 12
IMPORT CoWaitForMultipleHandles, 20
IMPORT ComPs_NdrDllCanUnloadNow, 4
IMPORT ComPs_NdrDllGetClassObject, 24
IMPORT ComPs_NdrDllRegisterProxy, 20
IMPORT ComPs_NdrDllUnregisterProxy, 20
IMPORT CreateAntiMoniker, 4
IMPORT CreateBindCtx, 8
IMPORT CreateClassMoniker, 8
IMPORT CreateDataAdviseHolder, 4
IMPORT CreateDataCache, 16
IMPORT CreateFileMoniker, 8
IMPORT CreateGenericComposite, 12
IMPORT CreateILockBytesOnHGlobal, 12
IMPORT CreateItemMoniker, 12
IMPORT CreateObjrefMoniker, 8
IMPORT CreateOleAdviseHolder, 4
IMPORT CreatePointerMoniker, 8
IMPORT CreateStdProgressIndicator, 16
IMPORT CreateStreamOnHGlobal, 12
IMPORT DcomChannelSetHResult, 12
IMPORT DllDebugObjectRPCHook, 8
IMPORT DllGetClassObjectWOW, 12
IMPORT DoDragDrop, 16
IMPORT EnableHookObject, 8
IMPORT FmtIdToPropStgName, 8
IMPORT FreePropVariantArray, 8
IMPORT GetClassFile, 8
IMPORT GetConvertStg, 4
IMPORT GetDocumentBitStg, 4
IMPORT GetHGlobalFromILockBytes, 8
IMPORT GetHGlobalFromStream, 8
IMPORT GetHookInterface, 4
IMPORT GetRunningObjectTable, 8
IMPORT HACCEL_UserFree, 8
IMPORT HACCEL_UserMarshal, 12
IMPORT HACCEL_UserSize, 12
IMPORT HACCEL_UserUnmarshal, 12
IMPORT HBITMAP_UserFree, 8
IMPORT HBITMAP_UserMarshal, 12
IMPORT HBITMAP_UserSize, 12
IMPORT HBITMAP_UserUnmarshal, 12
IMPORT HBRUSH_UserFree, 8
IMPORT HBRUSH_UserMarshal, 12
IMPORT HBRUSH_UserSize, 12
IMPORT HBRUSH_UserUnmarshal, 12
IMPORT HDC_UserFree, 8
IMPORT HDC_UserMarshal, 12
IMPORT HDC_UserSize, 12
IMPORT HDC_UserUnmarshal, 12
IMPORT HENHMETAFILE_UserFree, 8
IMPORT HENHMETAFILE_UserMarshal, 12
IMPORT HENHMETAFILE_UserSize, 12
IMPORT HENHMETAFILE_UserUnmarshal, 12
IMPORT HGLOBAL_UserFree, 8
IMPORT HGLOBAL_UserMarshal, 12
IMPORT HGLOBAL_UserSize, 12
IMPORT HGLOBAL_UserUnmarshal, 12
IMPORT HICON_UserFree, 8
IMPORT HICON_UserMarshal, 12
IMPORT HICON_UserSize, 12
IMPORT HICON_UserUnmarshal, 12
IMPORT HMENU_UserFree, 8
IMPORT HMENU_UserMarshal, 12
IMPORT HMENU_UserSize, 12
IMPORT HMENU_UserUnmarshal, 12
IMPORT HMETAFILEPICT_UserFree, 8
IMPORT HMETAFILEPICT_UserMarshal, 12
IMPORT HMETAFILEPICT_UserSize, 12
IMPORT HMETAFILEPICT_UserUnmarshal, 12
IMPORT HMETAFILE_UserFree, 8
IMPORT HMETAFILE_UserMarshal, 12
IMPORT HMETAFILE_UserSize, 12
IMPORT HMETAFILE_UserUnmarshal, 12
IMPORT HPALETTE_UserFree, 8
IMPORT HPALETTE_UserMarshal, 12
IMPORT HPALETTE_UserSize, 12
IMPORT HPALETTE_UserUnmarshal, 12
IMPORT HWND_UserFree, 8
IMPORT HWND_UserMarshal, 12
IMPORT HWND_UserSize, 12
IMPORT HWND_UserUnmarshal, 12
IMPORT HkOleRegisterObject, 16
IMPORT IIDFromString, 8
IMPORT IsAccelerator, 16
IMPORT IsEqualGUID, 8
IMPORT IsValidIid, 4
IMPORT IsValidInterface, 4
IMPORT IsValidPtrIn, 8
IMPORT IsValidPtrOut, 8
IMPORT MkParseDisplayName, 16
IMPORT MonikerCommonPrefixWith, 12
IMPORT MonikerRelativePathTo, 16
IMPORT OleBuildVersion, 0
IMPORT OleConvertIStorageToOLESTREAM, 8
IMPORT OleConvertIStorageToOLESTREAMEx, 28
IMPORT OleConvertOLESTREAMToIStorage, 12
IMPORT OleConvertOLESTREAMToIStorageEx, 28
IMPORT OleCreate, 28
IMPORT OleCreateDefaultHandler, 16
IMPORT OleCreateEmbeddingHelper, 24
IMPORT OleCreateEx, 48
IMPORT OleCreateFromData, 28
IMPORT OleCreateFromDataEx, 48
IMPORT OleCreateFromFile, 32
IMPORT OleCreateFromFileEx, 52
IMPORT OleCreateLink, 28
IMPORT OleCreateLinkEx, 48
IMPORT OleCreateLinkFromData, 28
IMPORT OleCreateLinkFromDataEx, 48
IMPORT OleCreateLinkToFile, 28
IMPORT OleCreateLinkToFileEx, 48
IMPORT OleCreateMenuDescriptor, 8
IMPORT OleCreateStaticFromData, 28
IMPORT OleDestroyMenuDescriptor, 4
IMPORT OleDoAutoConvert, 8
IMPORT OleDraw, 16
IMPORT OleDuplicateData, 12
IMPORT OleFlushClipboard, 0
IMPORT OleGetAutoConvert, 8
IMPORT OleGetClipboard, 4
IMPORT OleGetIconOfClass, 12
IMPORT OleGetIconOfFile, 8
IMPORT OleInitialize, 4
IMPORT OleInitializeWOW, 8
IMPORT OleIsCurrentClipboard, 4
IMPORT OleIsRunning, 4
IMPORT OleLoad, 16
IMPORT OleLoadFromStream, 12
IMPORT OleLockRunning, 12
IMPORT OleMetafilePictFromIconAndLabel, 16
IMPORT OleNoteObjectVisible, 8
IMPORT OleQueryCreateFromData, 4
IMPORT OleQueryLinkFromData, 4
IMPORT OleRegEnumFormatEtc, 12
IMPORT OleRegEnumVerbs, 8
IMPORT OleRegGetMiscStatus, 12
IMPORT OleRegGetUserType, 12
IMPORT OleRun, 4
IMPORT OleSave, 12
IMPORT OleSaveToStream, 8
IMPORT OleSetAutoConvert, 8
IMPORT OleSetClipboard, 4
IMPORT OleSetContainedObject, 8
IMPORT OleSetMenuDescriptor, 20
IMPORT OleTranslateAccelerator, 12
IMPORT OleUninitialize, 0
IMPORT OpenOrCreateStream, 12
IMPORT ProgIDFromCLSID, 8
IMPORT PropStgNameToFmtId, 8
IMPORT PropSysAllocString, 4
IMPORT PropSysFreeString, 4
IMPORT PropVariantClear, 4
IMPORT PropVariantCopy, 8
IMPORT ReadClassStg, 8
IMPORT ReadClassStm, 8
IMPORT ReadFmtUserTypeStg, 12
IMPORT ReadOleStg, 24
IMPORT ReadStringStream, 8
IMPORT RegisterDragDrop, 8
IMPORT ReleaseStgMedium, 4
IMPORT RevokeDragDrop, 4
IMPORT SNB_UserFree, 8
IMPORT SNB_UserMarshal, 12
IMPORT SNB_UserSize, 12
IMPORT SNB_UserUnmarshal, 12
IMPORT STGMEDIUM_UserFree, 8
IMPORT STGMEDIUM_UserMarshal, 12
IMPORT STGMEDIUM_UserSize, 12
IMPORT STGMEDIUM_UserUnmarshal, 12
IMPORT SetConvertStg, 8
IMPORT SetDocumentBitStg, 8
IMPORT StgConvertPropertyToVariant, 16
IMPORT StgConvertVariantToProperty, 28
IMPORT StgCreateDocfile, 16
IMPORT StgCreateDocfileOnILockBytes, 16
IMPORT StgCreatePropSetStg, 12
IMPORT StgCreatePropStg, 24
IMPORT StgCreateStorageEx, 32
IMPORT StgGetIFillLockBytesOnFile, 8
IMPORT StgGetIFillLockBytesOnILockBytes, 8
IMPORT StgIsStorageFile, 4
IMPORT StgIsStorageILockBytes, 4
IMPORT StgOpenAsyncDocfileOnIFillLockBytes, 16
IMPORT StgOpenPropStg, 20
IMPORT StgOpenStorage, 24
IMPORT StgOpenStorageEx, 32
IMPORT StgOpenStorageOnILockBytes, 24
IMPORT StgPropertyLengthAsVariant, 16
IMPORT StgSetTimes, 16
IMPORT StringFromCLSID, 8
IMPORT StringFromGUID2, 12
IMPORT StringFromIID, 8
IMPORT UpdateDCOMSettings, 0
IMPORT UtConvertDvtd16toDvtd32, 12
IMPORT UtConvertDvtd32toDvtd16, 12
IMPORT UtGetDvtd16Info, 8
IMPORT UtGetDvtd32Info, 8
IMPORT WdtpInterfacePointer_UserFree, 4
IMPORT WdtpInterfacePointer_UserMarshal, 20
IMPORT WdtpInterfacePointer_UserSize, 20
IMPORT WdtpInterfacePointer_UserUnmarshal, 16
IMPORT WriteClassStg, 8
IMPORT WriteClassStm, 8
IMPORT WriteFmtUserTypeStg, 12
IMPORT WriteOleStg, 16
IMPORT WriteStringStream, 8

%endif