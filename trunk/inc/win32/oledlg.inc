%ifndef __NASMX_OLEDLG_INC__
%define __NASMX_OLEDLG_INC__

IMPORT OleUIAddVerbMenuA, 36
IMPORT OleUIAddVerbMenuW, 36
IMPORT OleUIBusyA, 4
IMPORT OleUIBusyW, 4
IMPORT OleUICanConvertOrActivateAs, 12
IMPORT OleUIChangeIconA, 4
IMPORT OleUIChangeIconW, 4
IMPORT OleUIChangeSourceA, 4
IMPORT OleUIChangeSourceW, 4
IMPORT OleUIConvertA, 4
IMPORT OleUIConvertW, 4
IMPORT OleUIEditLinksA, 4
IMPORT OleUIEditLinksW, 4
IMPORT OleUIInsertObjectA, 4
IMPORT OleUIInsertObjectW, 4
IMPORT OleUIObjectPropertiesA, 4
IMPORT OleUIObjectPropertiesW, 4
IMPORT OleUIPasteSpecialA, 4
IMPORT OleUIPasteSpecialW, 4
IMPORT OleUIPromptUserA
IMPORT OleUIPromptUserW
IMPORT OleUIUpdateLinksA, 16
IMPORT OleUIUpdateLinksW, 16

%ifdef UNICODE

%define OleUIAddVerbMenu OleUIAddVerbMenuW
%define OleUIBusy OleUIBusyW
%define OleUIChangeIcon OleUIChangeIconW
%define OleUIChangeSource OleUIChangeSourceW
%define OleUIConvert OleUIConvertW
%define OleUIEditLinks OleUIEditLinksW
%define OleUIInsertObject OleUIInsertObjectW
%define OleUIObjectProperties OleUIObjectPropertiesW
%define OleUIPasteSpecial OleUIPasteSpecialW
%define OleUIPromptUser OleUIPromptUserW
%define OleUIUpdateLinks OleUIUpdateLinksW

%else  ;// ANSI

%define OleUIAddVerbMenu OleUIAddVerbMenuA
%define OleUIBusy OleUIBusyA
%define OleUIChangeIcon OleUIChangeIconA
%define OleUIChangeSource OleUIChangeSourceA
%define OleUIConvert OleUIConvertA
%define OleUIEditLinks OleUIEditLinksA
%define OleUIInsertObject OleUIInsertObjectA
%define OleUIObjectProperties OleUIObjectPropertiesA
%define OleUIPasteSpecial OleUIPasteSpecialA
%define OleUIPromptUser OleUIPromptUserA
%define OleUIUpdateLinks OleUIUpdateLinksA

%endif  ;// UNICODE

%endif  ;// __NASMX_OLEDLG_INC__
