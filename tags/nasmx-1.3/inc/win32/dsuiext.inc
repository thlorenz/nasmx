%ifndef __NASMX_DSUIEXT_INC__
%define __NASMX_DSUIEXT_INC__

IMPORT CheckDsPolicy, 8
IMPORT DsBrowseForContainerA, 4
IMPORT DsBrowseForContainerW, 4
IMPORT DsGetFriendlyClassName, 12
IMPORT DsGetIcon, 16
IMPORT FormatDirectoryName, 12
IMPORT FormatMsgBox
IMPORT FormatMsgResource
IMPORT GetArrayContents, 12
IMPORT GetDisplayNameFromADsPath, 20
IMPORT GetStringElementA, 16
IMPORT GetStringElementW, 16
IMPORT LocalAllocStringA2W, 8
IMPORT LocalAllocStringA, 8
IMPORT LocalAllocStringLenA, 8
IMPORT LocalAllocStringLenW, 8
IMPORT LocalAllocStringW2A, 8
IMPORT LocalAllocStringW, 8
IMPORT LocalFreeStringA, 4
IMPORT LocalFreeStringW, 4
IMPORT LocalQueryStringA, 12
IMPORT LocalQueryStringW, 12
IMPORT ObjectClassFromSearchColumn, 8
IMPORT PutStringElementA, 12
IMPORT PutStringElementW, 12
IMPORT ShowDirectoryUI, 0
IMPORT StringDPA_AppendStringA, 12
IMPORT StringDPA_AppendStringW, 12
IMPORT StringDPA_DeleteString, 8
IMPORT StringDPA_Destroy, 4
IMPORT StringDPA_InsertStringA, 12
IMPORT StringDPA_InsertStringW, 12
IMPORT StringFromSearchColumn, 8

%ifdef UNICODE

%define DsBrowseForContainer DsBrowseForContainerW
%define GetStringElement GetStringElementW
%define LocalAllocString LocalAllocStringW
%define LocalAllocStringLen LocalAllocStringLenW
%define LocalFreeString LocalFreeStringW
%define LocalQueryString LocalQueryStringW
%define PutStringElement PutStringElementW
%define StringDPA_AppendString StringDPA_AppendStringW
%define StringDPA_InsertString StringDPA_InsertStringW

%else  ;// ANSI

%define DsBrowseForContainer DsBrowseForContainerA
%define GetStringElement GetStringElementA
%define LocalAllocString LocalAllocStringA
%define LocalAllocStringLen LocalAllocStringLenA
%define LocalFreeString LocalFreeStringA
%define LocalQueryString LocalQueryStringA
%define PutStringElement PutStringElementA
%define StringDPA_AppendString StringDPA_AppendStringA
%define StringDPA_InsertString StringDPA_InsertStringA

%endif  ;// UNICODE

%endif  ;// __NASMX_DSUIEXT_INC__
