%ifndef __NASMX_ICMUI_INC__
%define __NASMX_ICMUI_INC__

IMPORT SetupColorMatchingA, 4
IMPORT SetupColorMatchingW, 4

%ifdef UNICODE
%define SetupColorMatching SetupColorMatchingW
%else  ;// ANSI
%define SetupColorMatching SetupColorMatchingA
%endif  ;// UNICODE

%endif  ;// __NASMX_ICMUI_INC__
