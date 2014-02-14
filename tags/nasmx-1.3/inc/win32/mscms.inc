%ifndef __NASMX_MSCMS_INC__
%define __NASMX_MSCMS_INC__

IMPORT AssociateColorProfileWithDeviceA, 12
IMPORT AssociateColorProfileWithDeviceW, 12
IMPORT CheckBitmapBits, 36
IMPORT CheckColors, 20
IMPORT CloseColorProfile, 4
IMPORT ConvertColorNameToIndex, 16
IMPORT ConvertIndexToColorName, 16
IMPORT CreateColorTransformA, 16
IMPORT CreateColorTransformW, 16
IMPORT CreateDeviceLinkProfile, 28
IMPORT CreateMultiProfileTransform, 24
IMPORT CreateProfileFromLogColorSpaceA, 8
IMPORT CreateProfileFromLogColorSpaceW, 8
IMPORT DeleteColorTransform, 4
IMPORT DisassociateColorProfileFromDeviceA, 12
IMPORT DisassociateColorProfileFromDeviceW, 12
IMPORT EnumColorProfilesA, 20
IMPORT EnumColorProfilesW, 20
IMPORT GenerateCopyFilePaths, 36
IMPORT GetCMMInfo, 8
IMPORT GetColorDirectoryA, 12
IMPORT GetColorDirectoryW, 12
IMPORT GetColorProfileElement, 24
IMPORT GetColorProfileElementTag, 12
IMPORT GetColorProfileFromHandle, 12
IMPORT GetColorProfileHeader, 8
IMPORT GetCountColorProfileElements, 8
IMPORT GetNamedProfileInfo, 8
IMPORT GetPS2ColorRenderingDictionary, 20
IMPORT GetPS2ColorRenderingIntent, 16
IMPORT GetPS2ColorSpaceArray, 24
IMPORT GetStandardColorSpaceProfileA, 16
IMPORT GetStandardColorSpaceProfileW, 16
IMPORT InstallColorProfileA, 8
IMPORT InstallColorProfileW, 8
IMPORT InternalGetDeviceConfig, 20
IMPORT InternalGetPS2CSAFromLCS, 16
IMPORT InternalGetPS2ColorRenderingDictionary, 20
IMPORT InternalGetPS2ColorSpaceArray, 24
IMPORT InternalGetPS2PreviewCRD, 24
IMPORT InternalSetDeviceConfig, 20
IMPORT IsColorProfileTagPresent, 12
IMPORT IsColorProfileValid, 8
IMPORT OpenColorProfileA, 16
IMPORT OpenColorProfileW, 16
IMPORT RegisterCMMA, 12
IMPORT RegisterCMMW, 12
IMPORT SelectCMM, 4
IMPORT SetColorProfileElement, 20
IMPORT SetColorProfileElementReference, 12
IMPORT SetColorProfileElementSize, 12
IMPORT SetColorProfileHeader, 8
IMPORT SetStandardColorSpaceProfileA, 12
IMPORT SetStandardColorSpaceProfileW, 12
IMPORT SpoolerCopyFileEvent, 12
IMPORT TranslateBitmapBits, 44
IMPORT TranslateColors, 24
IMPORT UninstallColorProfileA, 12
IMPORT UninstallColorProfileW, 12
IMPORT UnregisterCMMA, 8
IMPORT UnregisterCMMW, 8

%ifdef UNICODE

%define AssociateColorProfileWithDevice AssociateColorProfileWithDeviceW
%define CreateColorTransform CreateColorTransformW
%define CreateProfileFromLogColorSpace CreateProfileFromLogColorSpaceW
%define DisassociateColorProfileFromDevice DisassociateColorProfileFromDeviceW
%define EnumColorProfiles EnumColorProfilesW
%define GetColorDirectory GetColorDirectoryW
%define GetStandardColorSpaceProfile GetStandardColorSpaceProfileW
%define InstallColorProfile InstallColorProfileW
%define OpenColorProfile OpenColorProfileW
%define RegisterCMM RegisterCMMW
%define SetStandardColorSpaceProfile SetStandardColorSpaceProfileW
%define UninstallColorProfile UninstallColorProfileW
%define UnregisterCMM UnregisterCMMW

%else  ;// ANSI

%define AssociateColorProfileWithDevice AssociateColorProfileWithDeviceA
%define CreateColorTransform CreateColorTransformA
%define CreateProfileFromLogColorSpace CreateProfileFromLogColorSpaceA
%define DisassociateColorProfileFromDevice DisassociateColorProfileFromDeviceA
%define EnumColorProfiles EnumColorProfilesA
%define GetColorDirectory GetColorDirectoryA
%define GetStandardColorSpaceProfile GetStandardColorSpaceProfileA
%define InstallColorProfile InstallColorProfileA
%define OpenColorProfile OpenColorProfileA
%define RegisterCMM RegisterCMMA
%define SetStandardColorSpaceProfile SetStandardColorSpaceProfileA
%define UninstallColorProfile UninstallColorProfileA
%define UnregisterCMM UnregisterCMMA

%endif  ;// UNICODE

%endif  ;// __NASMX_MSCMS_INC__
