%ifndef __NASMX_URL_INC__
%define __NASMX_URL_INC__

IMPORT AddMIMEFileTypesPS, 8
IMPORT InetIsOffline, 4
IMPORT MIMEAssociationDialogA, 24
IMPORT MIMEAssociationDialogW, 24
IMPORT SetInetOffline, 4
IMPORT TranslateURLA, 12
IMPORT TranslateURLW, 12
IMPORT URLAssociationDialogA, 24
IMPORT URLAssociationDialogW, 24

%ifdef UNICODE

%define MIMEAssociationDialog MIMEAssociationDialogW
%define TranslateURL TranslateURLW
%define URLAssociationDialog URLAssociationDialogW

%else  ;// ANSI

%define MIMEAssociationDialog MIMEAssociationDialogA
%define TranslateURL TranslateURLA
%define URLAssociationDialog URLAssociationDialogA

%endif  ;// UNICODE

%endif  ;// __NASMX_URL_INC__
