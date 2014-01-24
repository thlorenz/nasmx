%ifndef __NASMX_COMDLG32_INC__
%define __NASMX_COMDLG32_INC__

IMPORT ChooseColorA, 4
IMPORT ChooseColorW, 4
IMPORT ChooseFontA, 4
IMPORT ChooseFontW, 4
IMPORT CommDlgExtendedError, 0
IMPORT FindTextA, 4
IMPORT FindTextW, 4
IMPORT FormatCharDlgProc, 16
IMPORT GetFileTitleA, 12
IMPORT GetFileTitleW, 12
IMPORT GetOpenFileNameA, 4
IMPORT GetOpenFileNameW, 4
IMPORT GetSaveFileNameA, 4
IMPORT GetSaveFileNameW, 4
IMPORT LoadAlterBitmap, 12
IMPORT PageSetupDlgA, 4
IMPORT PageSetupDlgW, 4
IMPORT PrintDlgA, 4
IMPORT PrintDlgExA, 4
IMPORT PrintDlgExW, 4
IMPORT PrintDlgW, 4
IMPORT ReplaceTextA, 4
IMPORT ReplaceTextW, 4
IMPORT Ssync_ANSI_UNICODE_Struct_For_WOW, 12
IMPORT WantArrows, 16
IMPORT dwLBSubclass, 16
IMPORT dwOKSubclass, 16

%ifdef UNICODE

%define ChooseColor ChooseColorW
%define ChooseFont ChooseFontW
%define FindText FindTextW
%define GetFileTitle GetFileTitleW
%define GetOpenFileName GetOpenFileNameW
%define GetSaveFileName GetSaveFileNameW
%define PageSetupDlg PageSetupDlgW
%define PrintDlg PrintDlgW
%define PrintDlgEx PrintDlgExW
%define ReplaceText ReplaceTextW

%else  ;// ANSI

%define ChooseColor ChooseColorA
%define ChooseFont ChooseFontA
%define FindText FindTextA
%define GetFileTitle GetFileTitleA
%define GetOpenFileName GetOpenFileNameA
%define GetSaveFileName GetSaveFileNameA
%define PageSetupDlg PageSetupDlgA
%define PrintDlg PrintDlgA
%define PrintDlgEx PrintDlgExA
%define ReplaceText ReplaceTextA

%endif  ;// UNICODE

%endif  ;// __NASMX_COMDLG32_INC__
