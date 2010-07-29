%ifndef __version_INC__
%define __version_INC__

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

%endif