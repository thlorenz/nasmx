; Standard Windows/Controls Library
; Created by Bryant Keller

%ifndef __STDWIN_INC__
%define __STDWIN_INC__

; StdWindow szAppClass, szTitle, xpos, ypos, wwd, wht, menu, hinst
%macro StdWindow 8
    invoke CreateWindowEx, WS_EX_OVERLAPPEDWINDOW, %1, %2, WS_OVERLAPPEDWINDOW + WS_VISIBLE, %3, %4, %5, %6, NULL, %7, %8, NULL
%endmacro

; ButtonCtl szText, dwID, xpos, ypos, wwd, wht, prnt, hinst
%macro ButtonCtl 8
    invoke CreateWindowEx, NULL, 'BUTTON', %1, WS_CHILD + WS_VISIBLE, %3, %4, %5, %6, %7, %2, %8, NULL
%endmacro

; EditCtl szText, dwID, xpos, ypos, wwd, wht, prnt, hinst
%macro EditCtl 8
    invoke CreateWindowEx, NULL, 'EDIT', %1, WS_CHILD + WS_VISIBLE + ES_LEFT, %3, %4, %5, %6, %7, %2, %8, NULL
%endmacro

; StaticCtl szText, dwID, xpos, ypos, wwd, wht, prnt, hinst
%macro StaticCtl 8
    invoke CreateWindowEx, NULL, 'STATIC', %1, WS_CHILD + WS_VISIBLE + SS_CENTER + SS_NOPREFIX, %3, %4, %5, %6, %7, %2, %8, NULL
%endmacro

; ComboCtl szText, dwID, xpos, ypos, wwd, wht, prnt, hinst
%macro ComboCtl 8
    invoke CreateWindowEx, NULL, 'COMBOBOX', %1, WS_CHILD + WS_VISIBLE + CBS_DROPDOWN + CBS_SORT, %3, %4, %5, %6, %7, %2, %8, NULL
%endmacro

; ListBoxCtl szText, dwID, xpos, ypos, wwd, wht, prnt, hinst
%macro ListBoxCtl 8
    invoke CreateWindowEx, NULL, 'LISTBOX', %1, WS_CHILD + WS_VISIBLE + LBS_HASSTRINGS + LBS_SORT, %3, %4, %5, %6, %7, %2, %8, NULL
%endmacro

%endif
