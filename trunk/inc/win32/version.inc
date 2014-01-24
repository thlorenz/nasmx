%ifndef __NASMX_VERSION_INC__
%define __NASMX_VERSION_INC__

IMPORT GetFileVersionInfoA, 16
IMPORT GetFileVersionInfoSizeA, 8
IMPORT GetFileVersionInfoSizeW, 8
IMPORT GetFileVersionInfoW, 16
IMPORT VerFindFileA, 32
IMPORT VerFindFileW, 32
IMPORT VerInstallFileA, 32
IMPORT VerInstallFileW, 32
IMPORT VerQueryValueA, 16
IMPORT VerQueryValueIndexA, 24
IMPORT VerQueryValueIndexW, 24
IMPORT VerQueryValueW, 16

%ifdef UNICODE

%define GetFileVersionInfo GetFileVersionInfoW
%define GetFileVersionInfoSize GetFileVersionInfoSizeW
%define VerFindFile VerFindFileW
%define VerInstallFile VerInstallFileW
%define VerQueryValue VerQueryValueW
%define VerQueryValueIndex VerQueryValueIndexW

%else  ;// ANSI

%define GetFileVersionInfo GetFileVersionInfoA
%define GetFileVersionInfoSize GetFileVersionInfoSizeA
%define VerFindFile VerFindFileA
%define VerInstallFile VerInstallFileA
%define VerQueryValue VerQueryValueA
%define VerQueryValueIndex VerQueryValueIndexA

%endif  ;// UNICODE

%endif  ;// __NASMX_VERSION_INC__
