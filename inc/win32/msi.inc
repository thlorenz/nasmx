%ifndef __msi_INC__
%define __msi_INC__

IMPORT DllGetVersion, 4
IMPORT Migrate10CachedPackagesA, 16
IMPORT Migrate10CachedPackagesW, 16
IMPORT MsiAdvertiseProductA, 16
IMPORT MsiAdvertiseProductExA, 24
IMPORT MsiAdvertiseProductExW, 24
IMPORT MsiAdvertiseProductW, 16
IMPORT MsiAdvertiseScriptA, 16
IMPORT MsiAdvertiseScriptW, 16
IMPORT MsiApplyMultiplePatchesA, 12
IMPORT MsiApplyMultiplePatchesW, 12
IMPORT MsiApplyPatchA, 16
IMPORT MsiApplyPatchW, 16
IMPORT MsiCloseAllHandles, 0
IMPORT MsiCloseHandle, 4
IMPORT MsiCollectUserInfoA, 4
IMPORT MsiCollectUserInfoW, 4
IMPORT MsiConfigureFeatureA, 12
IMPORT MsiConfigureFeatureFromDescriptorA, 8
IMPORT MsiConfigureFeatureFromDescriptorW, 8
IMPORT MsiConfigureFeatureW, 12
IMPORT MsiConfigureProductA, 12
IMPORT MsiConfigureProductExA, 16
IMPORT MsiConfigureProductExW, 16
IMPORT MsiConfigureProductW, 12
IMPORT MsiCreateAndVerifyInstallerDirectory, 4
IMPORT MsiCreateRecord, 4
IMPORT MsiCreateTransformSummaryInfoA, 20
IMPORT MsiCreateTransformSummaryInfoW, 20
IMPORT MsiDatabaseApplyTransformA, 12
IMPORT MsiDatabaseApplyTransformW, 12
IMPORT MsiDatabaseCommit, 4
IMPORT MsiDatabaseExportA, 16
IMPORT MsiDatabaseExportW, 16
IMPORT MsiDatabaseGenerateTransformA, 20
IMPORT MsiDatabaseGenerateTransformW, 20
IMPORT MsiDatabaseGetPrimaryKeysA, 12
IMPORT MsiDatabaseGetPrimaryKeysW, 12
IMPORT MsiDatabaseImportA, 12
IMPORT MsiDatabaseImportW, 12
IMPORT MsiDatabaseIsTablePersistentA, 8
IMPORT MsiDatabaseIsTablePersistentW, 8
IMPORT MsiDatabaseMergeA, 12
IMPORT MsiDatabaseMergeW, 12
IMPORT MsiDatabaseOpenViewA, 12
IMPORT MsiDatabaseOpenViewW, 12
IMPORT MsiDecomposeDescriptorA, 20
IMPORT MsiDecomposeDescriptorW, 20
IMPORT MsiDeleteUserDataA, 12
IMPORT MsiDeleteUserDataW, 12
IMPORT MsiDetermineApplicablePatchesA, 12
IMPORT MsiDetermineApplicablePatchesW, 12
IMPORT MsiDeterminePatchSequenceA, 20
IMPORT MsiDeterminePatchSequenceW, 20
IMPORT MsiDoActionA, 8
IMPORT MsiDoActionW, 8
IMPORT MsiEnableLogA, 12
IMPORT MsiEnableLogW, 12
IMPORT MsiEnableUIPreview, 8
IMPORT MsiEnumClientsA, 12
IMPORT MsiEnumClientsW, 12
IMPORT MsiEnumComponentCostsA, 32
IMPORT MsiEnumComponentCostsW, 32
IMPORT MsiEnumComponentQualifiersA, 24
IMPORT MsiEnumComponentQualifiersW, 24
IMPORT MsiEnumComponentsA, 8
IMPORT MsiEnumComponentsW, 8
IMPORT MsiEnumFeaturesA, 16
IMPORT MsiEnumFeaturesW, 16
IMPORT MsiEnumPatchesA, 20
IMPORT MsiEnumPatchesExA, 40
IMPORT MsiEnumPatchesExW, 40
IMPORT MsiEnumPatchesW, 20
IMPORT MsiEnumProductsA, 8
IMPORT MsiEnumProductsExA, 32
IMPORT MsiEnumProductsExW, 32
IMPORT MsiEnumProductsW, 8
IMPORT MsiEnumRelatedProductsA, 16
IMPORT MsiEnumRelatedProductsW, 16
IMPORT MsiEvaluateConditionA, 8
IMPORT MsiEvaluateConditionW, 8
IMPORT MsiExtractPatchXMLDataA, 16
IMPORT MsiExtractPatchXMLDataW, 16
IMPORT MsiFormatRecordA, 16
IMPORT MsiFormatRecordW, 16
IMPORT MsiGetActiveDatabase, 4
IMPORT MsiGetComponentPathA, 16
IMPORT MsiGetComponentPathW, 16
IMPORT MsiGetComponentStateA, 16
IMPORT MsiGetComponentStateW, 16
IMPORT MsiGetDatabaseState, 4
IMPORT MsiGetFeatureCostA, 20
IMPORT MsiGetFeatureCostW, 20
IMPORT MsiGetFeatureInfoA, 28
IMPORT MsiGetFeatureInfoW, 28
IMPORT MsiGetFeatureStateA, 16
IMPORT MsiGetFeatureStateW, 16
IMPORT MsiGetFeatureUsageA, 16
IMPORT MsiGetFeatureUsageW, 16
IMPORT MsiGetFeatureValidStatesA, 12
IMPORT MsiGetFeatureValidStatesW, 12
IMPORT MsiGetFileHashA, 12
IMPORT MsiGetFileHashW, 12
IMPORT MsiGetFileSignatureInformationA, 20
IMPORT MsiGetFileSignatureInformationW, 20
IMPORT MsiGetFileVersionA, 20
IMPORT MsiGetFileVersionW, 20
IMPORT MsiGetLanguage, 4
IMPORT MsiGetLastErrorRecord, 0
IMPORT MsiGetMode, 8
IMPORT MsiGetPatchInfoA, 16
IMPORT MsiGetPatchInfoExA, 28
IMPORT MsiGetPatchInfoExW, 28
IMPORT MsiGetPatchInfoW, 16
IMPORT MsiGetProductCodeA, 8
IMPORT MsiGetProductCodeFromPackageCodeA, 8
IMPORT MsiGetProductCodeFromPackageCodeW, 8
IMPORT MsiGetProductCodeW, 8
IMPORT MsiGetProductInfoA, 16
IMPORT MsiGetProductInfoExA, 24
IMPORT MsiGetProductInfoExW, 24
IMPORT MsiGetProductInfoFromScriptA, 32
IMPORT MsiGetProductInfoFromScriptW, 32
IMPORT MsiGetProductInfoW, 16
IMPORT MsiGetProductPropertyA, 16
IMPORT MsiGetProductPropertyW, 16
IMPORT MsiGetPropertyA, 16
IMPORT MsiGetPropertyW, 16
IMPORT MsiGetShortcutTargetA, 16
IMPORT MsiGetShortcutTargetW, 16
IMPORT MsiGetSourcePathA, 16
IMPORT MsiGetSourcePathW, 16
IMPORT MsiGetSummaryInformationA, 16
IMPORT MsiGetSummaryInformationW, 16
IMPORT MsiGetTargetPathA, 16
IMPORT MsiGetTargetPathW, 16
IMPORT MsiGetUserInfoA, 28
IMPORT MsiGetUserInfoW, 28
IMPORT MsiInstallMissingComponentA, 12
IMPORT MsiInstallMissingComponentW, 12
IMPORT MsiInstallMissingFileA, 8
IMPORT MsiInstallMissingFileW, 8
IMPORT MsiInstallProductA, 8
IMPORT MsiInstallProductW, 8
IMPORT MsiInvalidateFeatureCache
IMPORT MsiIsProductElevatedA, 8
IMPORT MsiIsProductElevatedW, 8
IMPORT MsiLoadStringA, 20
IMPORT MsiLoadStringW, 20
IMPORT MsiLocateComponentA, 12
IMPORT MsiLocateComponentW, 12
IMPORT MsiMessageBoxA, 24
IMPORT MsiMessageBoxExA, 28
IMPORT MsiMessageBoxExW, 28
IMPORT MsiMessageBoxW, 24
IMPORT MsiNotifySidChangeA, 8
IMPORT MsiNotifySidChangeW, 8
IMPORT MsiOpenDatabaseA, 12
IMPORT MsiOpenDatabaseW, 12
IMPORT MsiOpenPackageA, 8
IMPORT MsiOpenPackageExA, 12
IMPORT MsiOpenPackageExW, 12
IMPORT MsiOpenPackageW, 8
IMPORT MsiOpenProductA, 8
IMPORT MsiOpenProductW, 8
IMPORT MsiPreviewBillboardA, 12
IMPORT MsiPreviewBillboardW, 12
IMPORT MsiPreviewDialogA, 8
IMPORT MsiPreviewDialogW, 8
IMPORT MsiProcessAdvertiseScriptA, 20
IMPORT MsiProcessAdvertiseScriptW, 20
IMPORT MsiProcessMessage, 12
IMPORT MsiProvideAssemblyA, 24
IMPORT MsiProvideAssemblyW, 24
IMPORT MsiProvideComponentA, 24
IMPORT MsiProvideComponentFromDescriptorA, 16
IMPORT MsiProvideComponentFromDescriptorW, 16
IMPORT MsiProvideComponentW, 24
IMPORT MsiProvideQualifiedComponentA, 20
IMPORT MsiProvideQualifiedComponentExA, 32
IMPORT MsiProvideQualifiedComponentExW, 32
IMPORT MsiProvideQualifiedComponentW, 20
IMPORT MsiQueryComponentStateA, 20
IMPORT MsiQueryComponentStateW, 20
IMPORT MsiQueryFeatureStateA, 8
IMPORT MsiQueryFeatureStateExA, 20
IMPORT MsiQueryFeatureStateExW, 20
IMPORT MsiQueryFeatureStateFromDescriptorA, 4
IMPORT MsiQueryFeatureStateFromDescriptorW, 4
IMPORT MsiQueryFeatureStateW, 8
IMPORT MsiQueryProductStateA, 4
IMPORT MsiQueryProductStateW, 4
IMPORT MsiRecordClearData, 4
IMPORT MsiRecordDataSize, 8
IMPORT MsiRecordGetFieldCount, 4
IMPORT MsiRecordGetInteger, 8
IMPORT MsiRecordGetStringA, 16
IMPORT MsiRecordGetStringW, 16
IMPORT MsiRecordIsNull, 8
IMPORT MsiRecordReadStream, 16
IMPORT MsiRecordSetInteger, 12
IMPORT MsiRecordSetStreamA, 12
IMPORT MsiRecordSetStreamW, 12
IMPORT MsiRecordSetStringA, 12
IMPORT MsiRecordSetStringW, 12
IMPORT MsiReinstallFeatureA, 12
IMPORT MsiReinstallFeatureFromDescriptorA, 8
IMPORT MsiReinstallFeatureFromDescriptorW, 8
IMPORT MsiReinstallFeatureW, 12
IMPORT MsiReinstallProductA, 8
IMPORT MsiReinstallProductW, 8
IMPORT MsiRemovePatchesA, 16
IMPORT MsiRemovePatchesW, 16
IMPORT MsiSequenceA, 12
IMPORT MsiSequenceW, 12
IMPORT MsiSetComponentStateA, 12
IMPORT MsiSetComponentStateW, 12
IMPORT MsiSetExternalUIA, 12
IMPORT MsiSetExternalUIRecord, 16
IMPORT MsiSetExternalUIW, 12
IMPORT MsiSetFeatureAttributesA, 12
IMPORT MsiSetFeatureAttributesW, 12
IMPORT MsiSetFeatureStateA, 12
IMPORT MsiSetFeatureStateW, 12
IMPORT MsiSetInstallLevel, 8
IMPORT MsiSetInternalUI, 8
IMPORT MsiSetMode, 12
IMPORT MsiSetPropertyA, 12
IMPORT MsiSetPropertyW, 12
IMPORT MsiSetTargetPathA, 12
IMPORT MsiSetTargetPathW, 12
IMPORT MsiSourceListAddMediaDiskA, 28
IMPORT MsiSourceListAddMediaDiskW, 28
IMPORT MsiSourceListAddSourceA, 16
IMPORT MsiSourceListAddSourceExA, 24
IMPORT MsiSourceListAddSourceExW, 24
IMPORT MsiSourceListAddSourceW, 16
IMPORT MsiSourceListClearAllA, 12
IMPORT MsiSourceListClearAllExA, 16
IMPORT MsiSourceListClearAllExW, 16
IMPORT MsiSourceListClearAllW, 12
IMPORT MsiSourceListClearMediaDiskA, 20
IMPORT MsiSourceListClearMediaDiskW, 20
IMPORT MsiSourceListClearSourceA, 20
IMPORT MsiSourceListClearSourceW, 20
IMPORT MsiSourceListEnumMediaDisksA, 40
IMPORT MsiSourceListEnumMediaDisksW, 40
IMPORT MsiSourceListEnumSourcesA, 28
IMPORT MsiSourceListEnumSourcesW, 28
IMPORT MsiSourceListForceResolutionA, 12
IMPORT MsiSourceListForceResolutionExA, 16
IMPORT MsiSourceListForceResolutionExW, 16
IMPORT MsiSourceListForceResolutionW, 12
IMPORT MsiSourceListGetInfoA, 28
IMPORT MsiSourceListGetInfoW, 28
IMPORT MsiSourceListSetInfoA, 24
IMPORT MsiSourceListSetInfoW, 24
IMPORT MsiSummaryInfoGetPropertyA, 28
IMPORT MsiSummaryInfoGetPropertyCount, 8
IMPORT MsiSummaryInfoGetPropertyW, 28
IMPORT MsiSummaryInfoPersist, 4
IMPORT MsiSummaryInfoSetPropertyA, 24
IMPORT MsiSummaryInfoSetPropertyW, 24
IMPORT MsiUseFeatureA, 8
IMPORT MsiUseFeatureExA, 16
IMPORT MsiUseFeatureExW, 16
IMPORT MsiUseFeatureW, 8
IMPORT MsiVerifyDiskSpace, 4
IMPORT MsiVerifyPackageA, 4
IMPORT MsiVerifyPackageW, 4
IMPORT MsiViewClose, 4
IMPORT MsiViewExecute, 8
IMPORT MsiViewFetch, 8
IMPORT MsiViewGetColumnInfo, 12
IMPORT MsiViewGetErrorA, 12
IMPORT MsiViewGetErrorW, 12
IMPORT MsiViewModify, 12

%endif