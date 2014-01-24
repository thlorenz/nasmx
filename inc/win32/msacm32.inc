%ifndef __NASMX_MSACM32_INC__
%define __NASMX_MSACM32_INC__

IMPORT XRegThunkEntry, 36
IMPORT acmDriverAddA, 20
IMPORT acmDriverAddW, 20
IMPORT acmDriverClose, 8
IMPORT acmDriverDetailsA, 12
IMPORT acmDriverDetailsW, 12
IMPORT acmDriverEnum, 12
IMPORT acmDriverID, 12
IMPORT acmDriverMessage, 16
IMPORT acmDriverOpen, 12
IMPORT acmDriverPriority, 12
IMPORT acmDriverRemove, 8
IMPORT acmFilterChooseA, 4
IMPORT acmFilterChooseW, 4
IMPORT acmFilterDetailsA, 12
IMPORT acmFilterDetailsW, 12
IMPORT acmFilterEnumA, 20
IMPORT acmFilterEnumW, 20
IMPORT acmFilterTagDetailsA, 12
IMPORT acmFilterTagDetailsW, 12
IMPORT acmFilterTagEnumA, 20
IMPORT acmFilterTagEnumW, 20
IMPORT acmFormatChooseA, 4
IMPORT acmFormatChooseW, 4
IMPORT acmFormatDetailsA, 12
IMPORT acmFormatDetailsW, 12
IMPORT acmFormatEnumA, 20
IMPORT acmFormatEnumW, 20
IMPORT acmFormatSuggest, 20
IMPORT acmFormatTagDetailsA, 12
IMPORT acmFormatTagDetailsW, 12
IMPORT acmFormatTagEnumA, 20
IMPORT acmFormatTagEnumW, 20
IMPORT acmGetVersion, 0
IMPORT acmMessage32, 24
IMPORT acmMetrics, 12
IMPORT acmStreamClose, 8
IMPORT acmStreamConvert, 12
IMPORT acmStreamMessage, 16
IMPORT acmStreamOpen, 32
IMPORT acmStreamPrepareHeader, 12
IMPORT acmStreamReset, 8
IMPORT acmStreamSize, 16
IMPORT acmStreamUnprepareHeader, 12

%ifdef UNICODE

%define acmDriverAdd acmDriverAddW
%define acmDriverDetails acmDriverDetailsW
%define acmFilterChoose acmFilterChooseW
%define acmFilterDetails acmFilterDetailsW
%define acmFilterEnum acmFilterEnumW
%define acmFilterTagDetails acmFilterTagDetailsW
%define acmFilterTagEnum acmFilterTagEnumW
%define acmFormatChoose acmFormatChooseW
%define acmFormatDetails acmFormatDetailsW
%define acmFormatEnum acmFormatEnumW
%define acmFormatTagDetails acmFormatTagDetailsW
%define acmFormatTagEnum acmFormatTagEnumW

%else  ;// ANSI

%define acmDriverAdd acmDriverAddA
%define acmDriverDetails acmDriverDetailsA
%define acmFilterChoose acmFilterChooseA
%define acmFilterDetails acmFilterDetailsA
%define acmFilterEnum acmFilterEnumA
%define acmFilterTagDetails acmFilterTagDetailsA
%define acmFilterTagEnum acmFilterTagEnumA
%define acmFormatChoose acmFormatChooseA
%define acmFormatDetails acmFormatDetailsA
%define acmFormatEnum acmFormatEnumA
%define acmFormatTagDetails acmFormatTagDetailsA
%define acmFormatTagEnum acmFormatTagEnumA

%endif  ;// UNICODE

%endif  ;// __NASMX_MSACM32_INC__
