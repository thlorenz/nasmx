%ifndef __NASMX_WEBPOST_INC__
%define __NASMX_WEBPOST_INC__

IMPORT WpBindToSiteA, 24
IMPORT WpBindToSiteW, 24
IMPORT WpCreateSiteA, 20
IMPORT WpCreateSiteW, 20
IMPORT WpDeleteSiteA, 4
IMPORT WpDeleteSiteW, 4
IMPORT WpDoesSiteExistA, 8
IMPORT WpDoesSiteExistW, 8
IMPORT WpEnumProvidersA, 12
IMPORT WpEnumProvidersW, 12
IMPORT WpGetErrorStringA, 12
IMPORT WpGetErrorStringW, 12
IMPORT WpListSitesA, 12
IMPORT WpListSitesW, 12
IMPORT WpPostA, 32
IMPORT WpPostW, 32

%ifdef UNICODE

%define WpBindToSite WpBindToSiteW
%define WpCreateSite WpCreateSiteW
%define WpDeleteSite WpDeleteSiteW
%define WpDoesSiteExist WpDoesSiteExistW
%define WpEnumProviders WpEnumProvidersW
%define WpGetErrorString WpGetErrorStringW
%define WpListSites WpListSitesW
%define WpPost WpPostW

%else  ;// ANSI

%define WpBindToSite WpBindToSiteA
%define WpCreateSite WpCreateSiteA
%define WpDeleteSite WpDeleteSiteA
%define WpDoesSiteExist WpDoesSiteExistA
%define WpEnumProviders WpEnumProvidersA
%define WpGetErrorString WpGetErrorStringA
%define WpListSites WpListSitesA
%define WpPost WpPostA

%endif  ;// UNICODE

%endif  ;// __NASMX_WEBPOST_INC__
