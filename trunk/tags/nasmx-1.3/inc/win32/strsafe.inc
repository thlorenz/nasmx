%ifndef __NASMX_STRSAFE_INC__
%define __NASMX_STRSAFE_INC__

IMPORT StringCatExWorkerA, 28
IMPORT StringCatExWorkerW, 28
IMPORT StringCatNExWorkerA, 32
IMPORT StringCatNExWorkerW, 32
IMPORT StringCatNWorkerA, 16
IMPORT StringCatNWorkerW, 16
IMPORT StringCatWorkerA, 12
IMPORT StringCatWorkerW, 12
IMPORT StringCbCatA, 12
IMPORT StringCbCatExA, 24
IMPORT StringCbCatExW, 24
IMPORT StringCbCatNA, 16
IMPORT StringCbCatNExA, 28
IMPORT StringCbCatNExW, 28
IMPORT StringCbCatNW, 16
IMPORT StringCbCatW, 12
IMPORT StringCbCopyA, 12
IMPORT StringCbCopyExA, 24
IMPORT StringCbCopyExW, 24
IMPORT StringCbCopyNA, 16
IMPORT StringCbCopyNExA, 28
IMPORT StringCbCopyNExW, 28
IMPORT StringCbCopyNW, 16
IMPORT StringCbCopyW, 12
IMPORT StringCbLengthA, 12
IMPORT StringCbLengthW, 12
IMPORT StringCbPrintfA
IMPORT StringCbPrintfExA
IMPORT StringCbPrintfExW
IMPORT StringCbPrintfW
IMPORT StringCbVPrintfA, 16
IMPORT StringCbVPrintfExA, 28
IMPORT StringCbVPrintfExW, 28
IMPORT StringCbVPrintfW, 16
IMPORT StringCchCatA, 12
IMPORT StringCchCatExA, 24
IMPORT StringCchCatExW, 24
IMPORT StringCchCatNA, 16
IMPORT StringCchCatNExA, 28
IMPORT StringCchCatNExW, 28
IMPORT StringCchCatNW, 16
IMPORT StringCchCatW, 12
IMPORT StringCchCopyA, 12
IMPORT StringCchCopyExA, 24
IMPORT StringCchCopyExW, 24
IMPORT StringCchCopyNA, 16
IMPORT StringCchCopyNExA, 28
IMPORT StringCchCopyNExW, 28
IMPORT StringCchCopyNW, 16
IMPORT StringCchCopyW, 12
IMPORT StringCchLengthA, 12
IMPORT StringCchLengthW, 12
IMPORT StringCchPrintfA
IMPORT StringCchPrintfExA
IMPORT StringCchPrintfExW
IMPORT StringCchPrintfW
IMPORT StringCchVPrintfA, 16
IMPORT StringCchVPrintfExA, 28
IMPORT StringCchVPrintfExW, 28
IMPORT StringCchVPrintfW, 16
IMPORT StringCopyExWorkerA, 28
IMPORT StringCopyExWorkerW, 28
IMPORT StringCopyNExWorkerA, 32
IMPORT StringCopyNExWorkerW, 32
IMPORT StringCopyNWorkerA, 16
IMPORT StringCopyNWorkerW, 16
IMPORT StringCopyWorkerA, 12
IMPORT StringCopyWorkerW, 12
IMPORT StringLengthWorkerA, 12
IMPORT StringLengthWorkerW, 12
IMPORT StringVPrintfExWorkerA, 32
IMPORT StringVPrintfExWorkerW, 32
IMPORT StringVPrintfWorkerA, 16
IMPORT StringVPrintfWorkerW, 16

%ifdef UNICODE

%define StringCatExWorker StringCatExWorkerW
%define StringCatNExWorker StringCatNExWorkerW
%define StringCatNWorker StringCatNWorkerW
%define StringCatWorker StringCatWorkerW
%define StringCbCatEx StringCbCatExW
%define StringCbCatN StringCbCatNW
%define StringCbCat StringCbCatW
%define StringCbCatNEx StringCbCatNExW
%define StringCbCopy StringCbCopyW
%define StringCbCopyEx StringCbCopyExW
%define StringCbCopyN StringCbCopyNW
%define StringCbCopyNEx StringCbCopyNExW
%define StringCbLength StringCbLengthW
%define StringCbPrintf StringCbPrintfW
%define StringCbPrintfEx StringCbPrintfExW
%define StringCbVPrintfEx StringCbVPrintfExW
%define StringCbVPrintf StringCbVPrintfW
%define StringCchCat StringCchCatW
%define StringCchCatEx StringCchCatExW
%define StringCchCatN StringCchCatNW
%define StringCchCatNEx StringCchCatNExW
%define StringCchCopy StringCchCopyW
%define StringCchCopyEx StringCchCopyExW
%define StringCchCopyN StringCchCopyNW
%define StringCchCopyNEx StringCchCopyNExW
%define StringCchLength StringCchLengthW
%define StringCchPrintf StringCchPrintfW
%define StringCchPrintfEx StringCchPrintfExW
%define StringCchVPrintf StringCchVPrintfW
%define StringCchVPrintfEx StringCchVPrintfExW
%define StringCopyExWorker StringCopyExWorkerW
%define StringCopyNExWorker StringCopyNExWorkerW
%define StringCopyNWorker StringCopyNWorkerW
%define StringCopyWorker StringCopyWorkerW
%define StringLengthWorker StringLengthWorkerW
%define StringVPrintfExWorker StringVPrintfExWorkerW
%define StringVPrintfWorker StringVPrintfWorkerW

%else  ;// ANSI

%define StringCatExWorker StringCatExWorkerA
%define StringCatNExWorker StringCatNExWorkerA
%define StringCatNWorker StringCatNWorkerA
%define StringCatWorker StringCatWorkerA
%define StringCbCatEx StringCbCatExA
%define StringCbCatN StringCbCatNA
%define StringCbCat StringCbCatA
%define StringCbCatNEx StringCbCatNExA
%define StringCbCopy StringCbCopyA
%define StringCbCopyEx StringCbCopyExA
%define StringCbCopyN StringCbCopyNA
%define StringCbCopyNEx StringCbCopyNExA
%define StringCbLength StringCbLengthA
%define StringCbPrintf StringCbPrintfA
%define StringCbPrintfEx StringCbPrintfExA
%define StringCbVPrintfEx StringCbVPrintfExA
%define StringCbVPrintf StringCbVPrintfA
%define StringCchCat StringCchCatA
%define StringCchCatEx StringCchCatExA
%define StringCchCatN StringCchCatNA
%define StringCchCatNEx StringCchCatNExA
%define StringCchCopy StringCchCopyA
%define StringCchCopyEx StringCchCopyExA
%define StringCchCopyN StringCchCopyNA
%define StringCchCopyNEx StringCchCopyNExA
%define StringCchLength StringCchLengthA
%define StringCchPrintf StringCchPrintfA
%define StringCchPrintfEx StringCchPrintfExA
%define StringCchVPrintf StringCchVPrintfA
%define StringCchVPrintfEx StringCchVPrintfExA
%define StringCopyExWorker StringCopyExWorkerA
%define StringCopyNExWorker StringCopyNExWorkerA
%define StringCopyNWorker StringCopyNWorkerA
%define StringCopyWorker StringCopyWorkerA
%define StringLengthWorker StringLengthWorkerA
%define StringVPrintfExWorker StringVPrintfExWorkerA
%define StringVPrintfWorker StringVPrintfWorkerA

%endif  ;// UNICODE

%endif  ;// __NASMX_STRSAFE_INC__
