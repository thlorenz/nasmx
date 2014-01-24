%ifndef __NASMX_PATCHWIZ_INC__
%define __NASMX_PATCHWIZ_INC__

IMPORT UiCreatePatchPackageA, 24
IMPORT UiCreatePatchPackageW, 24

%ifdef UNICODE
%define UiCreatePatchPackage UiCreatePatchPackageW
%else  ;// ANSI
%define UiCreatePatchPackage UiCreatePatchPackageA
%endif  ;// UNICODE

%endif  ;// __NASMX_PATCHWIZ_INC__
