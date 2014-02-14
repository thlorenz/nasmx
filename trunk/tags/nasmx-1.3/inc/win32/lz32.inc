%ifndef __NASMX_LZ32_INC__
%define __NASMX_LZ32_INC__

IMPORT CopyLZFile, 8
IMPORT GetExpandedNameA, 8
IMPORT GetExpandedNameW, 8
IMPORT LZClose, 4
IMPORT LZCloseFile, 4
IMPORT LZCopy, 8
IMPORT LZCreateFileW, 20
IMPORT LZDone, 0
IMPORT LZInit, 4
IMPORT LZOpenFileA, 12
IMPORT LZOpenFileW, 12
IMPORT LZRead, 12
IMPORT LZSeek, 12
IMPORT LZStart, 0

%ifdef UNICODE
%define GetExpandedName GetExpandedNameW
%define LZOpenFile LZOpenFileW
%else  ;// ANSI
%define GetExpandedName GetExpandedNameA
%define LZOpenFile LZOpenFileA
%endif  ;// UNICODE

%endif  ;// __NASMX_LZ32_INC__
