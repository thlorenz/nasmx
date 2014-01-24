%ifndef __NASMX_SCHANNEL_INC__
%define __NASMX_SCHANNEL_INC__

IMPORT AcceptSecurityContext, 36
IMPORT AcquireCredentialsHandleA, 36
IMPORT AcquireCredentialsHandleW, 36
IMPORT ApplyControlToken, 8
IMPORT CompleteAuthToken, 8
IMPORT DeleteSecurityContext, 4
IMPORT EnumerateSecurityPackagesA, 8
IMPORT EnumerateSecurityPackagesW, 8
IMPORT FreeContextBuffer, 4
IMPORT FreeCredentialsHandle, 4
IMPORT ImpersonateSecurityContext, 4
IMPORT InitSecurityInterfaceA, 0
IMPORT InitSecurityInterfaceW, 0
IMPORT InitializeSecurityContextA, 48
IMPORT InitializeSecurityContextW, 48
IMPORT MakeSignature, 16
IMPORT QueryContextAttributesA, 12
IMPORT QueryContextAttributesW, 12
IMPORT QuerySecurityPackageInfoA, 8
IMPORT QuerySecurityPackageInfoW, 8
IMPORT RevertSecurityContext, 4
IMPORT VerifySignature, 16

%ifdef UNICODE

%define AcquireCredentialsHandle AcquireCredentialsHandleW
%define EnumerateSecurityPackages EnumerateSecurityPackagesW
%define InitSecurityInterface InitSecurityInterfaceW
%define InitializeSecurityContext InitializeSecurityContextW
%define QueryContextAttributes QueryContextAttributesW
%define QuerySecurityPackageInfo QuerySecurityPackageInfoW

%else  ;// ANSI

%define AcquireCredentialsHandle AcquireCredentialsHandleA
%define EnumerateSecurityPackages EnumerateSecurityPackagesA
%define InitSecurityInterface InitSecurityInterfaceA
%define InitializeSecurityContext InitializeSecurityContextA
%define QueryContextAttributes QueryContextAttributesA
%define QuerySecurityPackageInfo QuerySecurityPackageInfoA

%endif  ;// UNICODE

%endif  ;// __NASMX_SCHANNEL_INC__
