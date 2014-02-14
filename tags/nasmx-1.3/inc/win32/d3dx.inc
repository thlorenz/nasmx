%ifndef __d3dx_INC__
%define __d3dx_INC__

IMPORT CLSID_DirectDraw
IMPORT CLSID_DirectDraw7
IMPORT CLSID_DirectDrawClipper
IMPORT D3DXBuildSpriteTransform, 16
IMPORT D3DXCheckTextureRequirements, 20
IMPORT D3DXColorAdjustContrast, 12
IMPORT D3DXColorAdjustSaturation, 12
IMPORT D3DXCreateBox, 24
IMPORT D3DXCreateContext, 24
IMPORT D3DXCreateContextEx, 52
IMPORT D3DXCreateCubeMapTexture, 40
IMPORT D3DXCreateCylinder, 32
IMPORT D3DXCreateMatrixStack, 8
IMPORT D3DXCreatePolygon, 20
IMPORT D3DXCreateSphere, 24
IMPORT D3DXCreateTeapot, 12
IMPORT D3DXCreateTexture, 32
IMPORT D3DXCreateTextureFromFile, 40
IMPORT D3DXCreateTorus, 28
IMPORT D3DXDrawSprite3D, 20
IMPORT D3DXDrawSpriteSimple, 32
IMPORT D3DXDrawSpriteTransform, 20
IMPORT D3DXGetCurrentVideoMode, 8
IMPORT D3DXGetDeviceCaps, 20
IMPORT D3DXGetDeviceCount, 0
IMPORT D3DXGetDeviceDescription, 8
IMPORT D3DXGetErrorString, 12
IMPORT D3DXGetMaxNumVideoModes, 8
IMPORT D3DXGetMaxSurfaceFormats, 12
IMPORT D3DXGetSurfaceFormat, 20
IMPORT D3DXGetVideoMode, 16
IMPORT D3DXInitialize, 0
IMPORT D3DXLoadTextureFromFile, 28
IMPORT D3DXLoadTextureFromMemory, 36
IMPORT D3DXLoadTextureFromSurface, 28
IMPORT D3DXMakeDDPixelFormat, 8
IMPORT D3DXMakeSurfaceFormat, 4
IMPORT D3DXMatrixAffineTransformation, 20
IMPORT D3DXMatrixInverse, 12
IMPORT D3DXMatrixLookAt, 16
IMPORT D3DXMatrixLookAtLH, 16
IMPORT D3DXMatrixMultiply, 12
IMPORT D3DXMatrixOrtho, 20
IMPORT D3DXMatrixOrthoLH, 20
IMPORT D3DXMatrixOrthoOffCenter, 28
IMPORT D3DXMatrixOrthoOffCenterLH, 28
IMPORT D3DXMatrixPerspective, 20
IMPORT D3DXMatrixPerspectiveFov, 20
IMPORT D3DXMatrixPerspectiveFovLH, 20
IMPORT D3DXMatrixPerspectiveLH, 20
IMPORT D3DXMatrixPerspectiveOffCenter, 28
IMPORT D3DXMatrixPerspectiveOffCenterLH, 28
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
IMPORT D3DXPrepareDeviceForSprite, 8
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
IMPORT D3DXQuaternionToAxisAngle, 12
IMPORT D3DXUninitialize, 0
IMPORT D3DXVec2BaryCentric, 24
IMPORT D3DXVec2Hermite, 24
IMPORT D3DXVec2Normalize, 8
IMPORT D3DXVec2Transform, 12
IMPORT D3DXVec2TransformCoord, 12
IMPORT D3DXVec2TransformNormal, 12
IMPORT D3DXVec3BaryCentric, 24
IMPORT D3DXVec3Hermite, 24
IMPORT D3DXVec3Normalize, 8
IMPORT D3DXVec3Transform, 12
IMPORT D3DXVec3TransformCoord, 12
IMPORT D3DXVec3TransformNormal, 12
IMPORT D3DXVec4BaryCentric, 24
IMPORT D3DXVec4Cross, 16
IMPORT D3DXVec4Hermite, 24
IMPORT D3DXVec4Normalize, 8
IMPORT D3DXVec4Transform, 12
IMPORT IID_ID3DXContext
IMPORT IID_ID3DXMatrixStack
IMPORT IID_ID3DXSimpleShape
IMPORT IID_IDirect3D
IMPORT IID_IDirect3D2
IMPORT IID_IDirect3D3
IMPORT IID_IDirect3D7
IMPORT IID_IDirect3DDevice
IMPORT IID_IDirect3DDevice2
IMPORT IID_IDirect3DDevice3
IMPORT IID_IDirect3DDevice7
IMPORT IID_IDirect3DExecuteBuffer
IMPORT IID_IDirect3DHALDevice
IMPORT IID_IDirect3DLight
IMPORT IID_IDirect3DMMXDevice
IMPORT IID_IDirect3DMaterial
IMPORT IID_IDirect3DMaterial2
IMPORT IID_IDirect3DMaterial3
IMPORT IID_IDirect3DNullDevice
IMPORT IID_IDirect3DRGBDevice
IMPORT IID_IDirect3DRampDevice
IMPORT IID_IDirect3DRefDevice
IMPORT IID_IDirect3DTexture
IMPORT IID_IDirect3DTexture2
IMPORT IID_IDirect3DTnLHalDevice
IMPORT IID_IDirect3DVertexBuffer
IMPORT IID_IDirect3DVertexBuffer7
IMPORT IID_IDirect3DViewport
IMPORT IID_IDirect3DViewport2
IMPORT IID_IDirect3DViewport3
IMPORT IID_IDirectDraw
IMPORT IID_IDirectDraw2
IMPORT IID_IDirectDraw4
IMPORT IID_IDirectDraw7
IMPORT IID_IDirectDrawClipper
IMPORT IID_IDirectDrawColorControl
IMPORT IID_IDirectDrawGammaControl
IMPORT IID_IDirectDrawPalette
IMPORT IID_IDirectDrawSurface
IMPORT IID_IDirectDrawSurface2
IMPORT IID_IDirectDrawSurface3
IMPORT IID_IDirectDrawSurface4
IMPORT IID_IDirectDrawSurface7

%endif