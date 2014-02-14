%ifndef __d3dx8_INC__
%define __d3dx8_INC__

IMPORT CLSID_CDirectXFile
IMPORT D3DXAssembleShader, 24
IMPORT D3DXAssembleShaderFromFileA, 20
IMPORT D3DXAssembleShaderFromFileW, 20
IMPORT D3DXAssembleShaderFromResourceA, 24
IMPORT D3DXAssembleShaderFromResourceW, 24
IMPORT D3DXBoxBoundProbe, 16
IMPORT D3DXCheckCubeTextureRequirements, 24
IMPORT D3DXCheckTextureRequirements, 28
IMPORT D3DXCheckVolumeTextureRequirements, 32
IMPORT D3DXCleanMesh, 20
IMPORT D3DXColorAdjustContrast, 12
IMPORT D3DXColorAdjustSaturation, 12
IMPORT D3DXComputeBoundingBox, 20
IMPORT D3DXComputeBoundingSphere, 20
IMPORT D3DXComputeNormalMap, 24
IMPORT D3DXComputeNormals, 8
IMPORT D3DXComputeTangent, 28
IMPORT D3DXConvertMeshSubsetToSingleStrip, 20
IMPORT D3DXConvertMeshSubsetToStrips, 28
IMPORT D3DXCpuOptimizations, 4
IMPORT D3DXCreateBox, 24
IMPORT D3DXCreateBuffer, 8
IMPORT D3DXCreateCubeTexture, 28
IMPORT D3DXCreateCubeTextureFromFileA, 12
IMPORT D3DXCreateCubeTextureFromFileExA, 52
IMPORT D3DXCreateCubeTextureFromFileExW, 52
IMPORT D3DXCreateCubeTextureFromFileInMemory, 16
IMPORT D3DXCreateCubeTextureFromFileInMemoryEx, 56
IMPORT D3DXCreateCubeTextureFromFileW, 12
IMPORT D3DXCreateCubeTextureFromResourceA, 16
IMPORT D3DXCreateCubeTextureFromResourceExA, 56
IMPORT D3DXCreateCubeTextureFromResourceExW, 56
IMPORT D3DXCreateCubeTextureFromResourceW, 16
IMPORT D3DXCreateCylinder, 32
IMPORT D3DXCreateEffect, 20
IMPORT D3DXCreateEffectFromFileA, 16
IMPORT D3DXCreateEffectFromFileW, 16
IMPORT D3DXCreateEffectFromResourceA, 20
IMPORT D3DXCreateEffectFromResourceW, 20
IMPORT D3DXCreateFont, 12
IMPORT D3DXCreateFontIndirect, 12
IMPORT D3DXCreateMatrixStack, 8
IMPORT D3DXCreateMesh, 24
IMPORT D3DXCreateMeshFVF, 24
IMPORT D3DXCreatePMeshFromStream, 24
IMPORT D3DXCreatePolygon, 20
IMPORT D3DXCreateRenderToEnvMap, 24
IMPORT D3DXCreateRenderToSurface, 28
IMPORT D3DXCreateSPMesh, 20
IMPORT D3DXCreateSkinMesh, 28
IMPORT D3DXCreateSkinMeshFVF, 28
IMPORT D3DXCreateSkinMeshFromMesh, 12
IMPORT D3DXCreateSphere, 24
IMPORT D3DXCreateSprite, 8
IMPORT D3DXCreateTeapot, 12
IMPORT D3DXCreateTextA, 32
IMPORT D3DXCreateTextW, 32
IMPORT D3DXCreateTexture, 32
IMPORT D3DXCreateTextureFromFileA, 12
IMPORT D3DXCreateTextureFromFileExA, 56
IMPORT D3DXCreateTextureFromFileExW, 56
IMPORT D3DXCreateTextureFromFileInMemory, 16
IMPORT D3DXCreateTextureFromFileInMemoryEx, 60
IMPORT D3DXCreateTextureFromFileW, 12
IMPORT D3DXCreateTextureFromResourceA, 16
IMPORT D3DXCreateTextureFromResourceExA, 60
IMPORT D3DXCreateTextureFromResourceExW, 60
IMPORT D3DXCreateTextureFromResourceW, 16
IMPORT D3DXCreateTorus, 28
IMPORT D3DXCreateVolumeTexture, 36
IMPORT D3DXCreateVolumeTextureFromFileA, 12
IMPORT D3DXCreateVolumeTextureFromFileExA, 60
IMPORT D3DXCreateVolumeTextureFromFileExW, 60
IMPORT D3DXCreateVolumeTextureFromFileInMemory, 16
IMPORT D3DXCreateVolumeTextureFromFileInMemoryEx, 64
IMPORT D3DXCreateVolumeTextureFromFileW, 12
IMPORT D3DXCreateVolumeTextureFromResourceA, 16
IMPORT D3DXCreateVolumeTextureFromResourceExA, 64
IMPORT D3DXCreateVolumeTextureFromResourceExW, 64
IMPORT D3DXCreateVolumeTextureFromResourceW, 16
IMPORT D3DXDeclaratorFromFVF, 8
IMPORT D3DXFVFFromDeclarator, 8
IMPORT D3DXFillCubeTexture, 12
IMPORT D3DXFillTexture, 12
IMPORT D3DXFillVolumeTexture, 12
IMPORT D3DXFilterTexture, 16
IMPORT D3DXFresnelTerm, 8
IMPORT D3DXGeneratePMesh, 28
IMPORT D3DXGetErrorStringA, 12
IMPORT D3DXGetErrorStringW, 12
IMPORT D3DXGetFVFVertexSize, 4
IMPORT D3DXGetImageInfoFromFileA, 8
IMPORT D3DXGetImageInfoFromFileInMemory, 12
IMPORT D3DXGetImageInfoFromFileW, 8
IMPORT D3DXGetImageInfoFromResourceA, 12
IMPORT D3DXGetImageInfoFromResourceW, 12
IMPORT D3DXIntersect, 40
IMPORT D3DXIntersectSubset, 44
IMPORT D3DXLoadMeshFromX, 28
IMPORT D3DXLoadMeshFromXInMemory, 32
IMPORT D3DXLoadMeshFromXResource, 36
IMPORT D3DXLoadMeshFromXof, 28
IMPORT D3DXLoadSkinMeshFromXof, 36
IMPORT D3DXLoadSurfaceFromFileA, 32
IMPORT D3DXLoadSurfaceFromFileInMemory, 36
IMPORT D3DXLoadSurfaceFromFileW, 32
IMPORT D3DXLoadSurfaceFromMemory, 40
IMPORT D3DXLoadSurfaceFromResourceA, 36
IMPORT D3DXLoadSurfaceFromResourceW, 36
IMPORT D3DXLoadSurfaceFromSurface, 32
IMPORT D3DXLoadVolumeFromFileA, 32
IMPORT D3DXLoadVolumeFromFileInMemory, 36
IMPORT D3DXLoadVolumeFromFileW, 32
IMPORT D3DXLoadVolumeFromMemory, 44
IMPORT D3DXLoadVolumeFromResourceA, 36
IMPORT D3DXLoadVolumeFromResourceW, 36
IMPORT D3DXLoadVolumeFromVolume, 32
IMPORT D3DXMatrixAffineTransformation, 20
IMPORT D3DXMatrixInverse, 12
IMPORT D3DXMatrixLookAtLH, 16
IMPORT D3DXMatrixLookAtRH, 16
IMPORT D3DXMatrixMultiply, 12
IMPORT D3DXMatrixMultiplyTranspose, 12
IMPORT D3DXMatrixOrthoLH, 20
IMPORT D3DXMatrixOrthoOffCenterLH, 28
IMPORT D3DXMatrixOrthoOffCenterRH, 28
IMPORT D3DXMatrixOrthoRH, 20
IMPORT D3DXMatrixPerspectiveFovLH, 20
IMPORT D3DXMatrixPerspectiveFovRH, 20
IMPORT D3DXMatrixPerspectiveLH, 20
IMPORT D3DXMatrixPerspectiveOffCenterLH, 28
IMPORT D3DXMatrixPerspectiveOffCenterRH, 28
IMPORT D3DXMatrixPerspectiveRH, 20
IMPORT D3DXMatrixReflect, 8
IMPORT D3DXMatrixRotationAxis, 12
IMPORT D3DXMatrixRotationQuaternion, 8
IMPORT D3DXMatrixRotationX, 8
IMPORT D3DXMatrixRotationY, 8
IMPORT D3DXMatrixRotationYawPitchRoll, 16
IMPORT D3DXMatrixRotationZ, 8
IMPORT D3DXMatrixScaling, 16
IMPORT D3DXMatrixShadow, 12
IMPORT D3DXMatrixTransformation, 28
IMPORT D3DXMatrixTranslation, 16
IMPORT D3DXMatrixTranspose, 8
IMPORT D3DXMatrixfDeterminant, 4
IMPORT D3DXPlaneFromPointNormal, 12
IMPORT D3DXPlaneFromPoints, 16
IMPORT D3DXPlaneIntersectLine, 16
IMPORT D3DXPlaneNormalize, 8
IMPORT D3DXPlaneTransform, 12
IMPORT D3DXQuaternionBaryCentric, 24
IMPORT D3DXQuaternionExp, 8
IMPORT D3DXQuaternionInverse, 8
IMPORT D3DXQuaternionLn, 8
IMPORT D3DXQuaternionMultiply, 12
IMPORT D3DXQuaternionNormalize, 8
IMPORT D3DXQuaternionRotationAxis, 12
IMPORT D3DXQuaternionRotationMatrix, 8
IMPORT D3DXQuaternionRotationYawPitchRoll, 16
IMPORT D3DXQuaternionSlerp, 16
IMPORT D3DXQuaternionSquad, 24
IMPORT D3DXQuaternionSquadSetup, 28
IMPORT D3DXQuaternionToAxisAngle, 12
IMPORT D3DXSaveMeshToX, 24
IMPORT D3DXSaveSurfaceToFileA, 20
IMPORT D3DXSaveSurfaceToFileW, 20
IMPORT D3DXSaveTextureToFileA, 16
IMPORT D3DXSaveTextureToFileW, 16
IMPORT D3DXSaveVolumeToFileA, 20
IMPORT D3DXSaveVolumeToFileW, 20
IMPORT D3DXSimplifyMesh, 28
IMPORT D3DXSphereBoundProbe, 16
IMPORT D3DXSplitMesh, 36
IMPORT D3DXTessellateNPatches, 24
IMPORT D3DXValidMesh, 12
IMPORT D3DXVec2BaryCentric, 24
IMPORT D3DXVec2CatmullRom, 24
IMPORT D3DXVec2Hermite, 24
IMPORT D3DXVec2Normalize, 8
IMPORT D3DXVec2Transform, 12
IMPORT D3DXVec2TransformCoord, 12
IMPORT D3DXVec2TransformNormal, 12
IMPORT D3DXVec3BaryCentric, 24
IMPORT D3DXVec3CatmullRom, 24
IMPORT D3DXVec3Hermite, 24
IMPORT D3DXVec3Normalize, 8
IMPORT D3DXVec3Project, 24
IMPORT D3DXVec3Transform, 12
IMPORT D3DXVec3TransformCoord, 12
IMPORT D3DXVec3TransformNormal, 12
IMPORT D3DXVec3Unproject, 24
IMPORT D3DXVec4BaryCentric, 24
IMPORT D3DXVec4CatmullRom, 24
IMPORT D3DXVec4Cross, 16
IMPORT D3DXVec4Hermite, 24
IMPORT D3DXVec4Normalize, 8
IMPORT D3DXVec4Transform, 12
IMPORT D3DXWeldVertices, 24
IMPORT IID_ID3DXBaseMesh
IMPORT IID_ID3DXBuffer
IMPORT IID_ID3DXEffect
IMPORT IID_ID3DXFont
IMPORT IID_ID3DXMatrixStack
IMPORT IID_ID3DXMesh
IMPORT IID_ID3DXPMesh
IMPORT IID_ID3DXRenderToEnvMap
IMPORT IID_ID3DXRenderToSurface
IMPORT IID_ID3DXSPMesh
IMPORT IID_ID3DXSkinMesh
IMPORT IID_ID3DXSprite
IMPORT IID_IDirect3D8
IMPORT IID_IDirect3DBaseTexture8
IMPORT IID_IDirect3DCubeTexture8
IMPORT IID_IDirect3DDevice8
IMPORT IID_IDirect3DIndexBuffer8
IMPORT IID_IDirect3DResource8
IMPORT IID_IDirect3DSurface8
IMPORT IID_IDirect3DSwapChain8
IMPORT IID_IDirect3DTexture8
IMPORT IID_IDirect3DVertexBuffer8
IMPORT IID_IDirect3DVolume8
IMPORT IID_IDirect3DVolumeTexture8
IMPORT IID_IDirectXFile
IMPORT IID_IDirectXFileBinary
IMPORT IID_IDirectXFileData
IMPORT IID_IDirectXFileDataReference
IMPORT IID_IDirectXFileEnumObject
IMPORT IID_IDirectXFileObject
IMPORT IID_IDirectXFileSaveObject
IMPORT TID_DXFILEHeader

%endif