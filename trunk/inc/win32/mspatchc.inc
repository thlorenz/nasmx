%ifndef __NASMX_MSPATCHC_INC__
%define __NASMX_MSPATCHC_INC__

IMPORT CreatePatchFileA, 20
IMPORT CreatePatchFileByHandles, 20
IMPORT CreatePatchFileByHandlesEx, 32
IMPORT CreatePatchFileExA, 32
IMPORT CreatePatchFileExW, 32
IMPORT CreatePatchFileW, 20
IMPORT ExtractPatchHeaderToFileA, 8
IMPORT ExtractPatchHeaderToFileByHandles, 8
IMPORT ExtractPatchHeaderToFileW, 8
IMPORT GetFilePatchSignatureA, 36
IMPORT GetFilePatchSignatureByHandle, 36
IMPORT GetFilePatchSignatureW, 36

%ifdef UNICODE

%define CreatePatchFile CreatePatchFileW
%define CreatePatchFileEx CreatePatchFileExW
%define ExtractPatchHeaderToFile ExtractPatchHeaderToFileW
%define GetFilePatchSignature GetFilePatchSignatureW

%else  ;// ANSI

%define CreatePatchFile CreatePatchFileA
%define CreatePatchFileEx CreatePatchFileExA
%define ExtractPatchHeaderToFile ExtractPatchHeaderToFileA
%define GetFilePatchSignature GetFilePatchSignatureA

%endif  ;// UNICODE

%endif  ;// __NASMX_MSPATCHC_INC__
