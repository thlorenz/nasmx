%ifndef __NASMX_NTQUERY_INC__
%define __NASMX_NTQUERY_INC__

IMPORT BindIFilterFromStorage, 12
IMPORT BindIFilterFromStream, 12
IMPORT CIState, 12
IMPORT LoadIFilter, 12
IMPORT LocateCatalogsA, 24
IMPORT LocateCatalogsW, 24
IMPORT SetCatalogState, 16

%ifdef UNICODE
%define LocateCatalogs LocateCatalogsW
%else  ;// ANSI
%define LocateCatalogs LocateCatalogsA
%endif  ;// UNICODE

%endif  ;// __NASMX_NTQUERY_INC__
