%ifndef __NASMX_HTMLHELP_INC__
%define __NASMX_HTMLHELP_INC__

IMPORT HtmlHelpA, 16
IMPORT HtmlHelpW, 16

%ifdef UNICODE
%define HtmlHelp HtmlHelpW
%else  ;// ANSI
%define HtmlHelp HtmlHelpA
%endif  ;// UNICODE

%endif  ;// __NASMX_HTMLHELP_INC__
