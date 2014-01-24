%ifndef __NASMX_MSPATCHA_INC__
%define __NASMX_MSPATCHA_INC__

IMPORT ApplyPatchToFileA, 16
IMPORT ApplyPatchToFileByHandles, 16
IMPORT ApplyPatchToFileByHandlesEx, 24
IMPORT ApplyPatchToFileExA, 24
IMPORT ApplyPatchToFileExW, 24
IMPORT ApplyPatchToFileW, 16
IMPORT GetFilePatchSignatureA, 36
IMPORT GetFilePatchSignatureByHandle, 36
IMPORT GetFilePatchSignatureW, 36
IMPORT TestApplyPatchToFileA, 12
IMPORT TestApplyPatchToFileByHandles, 12
IMPORT TestApplyPatchToFileW, 12

%ifdef UNICODE

%define ApplyPatchToFile ApplyPatchToFileW
%define ApplyPatchToFileEx ApplyPatchToFileExW
%define GetFilePatchSignature GetFilePatchSignatureW
%define TestApplyPatchToFile TestApplyPatchToFileW

%else  ;// ANSI

%define ApplyPatchToFile ApplyPatchToFileA
%define ApplyPatchToFileEx ApplyPatchToFileExA
%define GetFilePatchSignature GetFilePatchSignatureA
%define TestApplyPatchToFile TestApplyPatchToFileA

%endif  ;// UNICODE

%endif  ;// __NASMX_MSPATCHA_INC__
