%ifndef __NASMX_MSVFW32_INC__
%define __NASMX_MSVFW32_INC__

IMPORT AVIBuildFilterA, 12
IMPORT AVIBuildFilterW, 12
IMPORT AVIClearClipboard, 0
IMPORT AVIFileAddRef, 4
IMPORT AVIFileCreateStreamA, 12
IMPORT AVIFileCreateStreamW, 12
IMPORT AVIFileEndRecord, 4
IMPORT AVIFileExit, 0
IMPORT AVIFileGetStream, 16
IMPORT AVIFileInfoA, 12
IMPORT AVIFileInfoW, 12
IMPORT AVIFileInit, 0
IMPORT AVIFileOpenA, 16
IMPORT AVIFileOpenW, 16
IMPORT AVIFileReadData, 16
IMPORT AVIFileRelease, 4
IMPORT AVIFileWriteData, 16
IMPORT AVIGetFromClipboard, 4
IMPORT AVIMakeCompressedStream, 16
IMPORT AVIMakeFileFromStreams, 12
IMPORT AVIMakeStreamFromClipboard, 12
IMPORT AVIPutFileOnClipboard, 4
IMPORT AVISaveOptions, 20
IMPORT AVISaveOptionsFree, 8
IMPORT AVISaveVA, 24
IMPORT AVISaveVW, 24
IMPORT AVIStreamAddRef, 4
IMPORT AVIStreamBeginStreaming, 16
IMPORT AVIStreamCreate, 16
IMPORT AVIStreamEndStreaming, 4
IMPORT AVIStreamFindSample, 12
IMPORT AVIStreamGetFrame, 8
IMPORT AVIStreamGetFrameClose, 4
IMPORT AVIStreamGetFrameOpen, 8
IMPORT AVIStreamInfoA, 12
IMPORT AVIStreamInfoW, 12
IMPORT AVIStreamLength, 4
IMPORT AVIStreamOpenFromFileA, 24
IMPORT AVIStreamOpenFromFileW, 24
IMPORT AVIStreamRead, 28
IMPORT AVIStreamReadData, 16
IMPORT AVIStreamReadFormat, 16
IMPORT AVIStreamRelease, 4
IMPORT AVIStreamSampleToTime, 8
IMPORT AVIStreamSetFormat, 16
IMPORT AVIStreamStart, 4
IMPORT AVIStreamTimeToSample, 8
IMPORT AVIStreamWrite, 32
IMPORT AVIStreamWriteData, 16
IMPORT AppCleanup, 4
IMPORT CreateEditableStream, 8
IMPORT DrawDibBegin, 32
IMPORT DrawDibChangePalette, 16
IMPORT DrawDibClose, 4
IMPORT DrawDibDraw, 52
IMPORT DrawDibEnd, 4
IMPORT DrawDibGetBuffer, 16
IMPORT DrawDibGetPalette, 4
IMPORT DrawDibOpen, 0
IMPORT DrawDibProfileDisplay, 4
IMPORT DrawDibRealize, 12
IMPORT DrawDibSetPalette, 8
IMPORT DrawDibStart, 8
IMPORT DrawDibStop, 4
IMPORT DrawDibTime, 8
IMPORT EditStreamClone, 8
IMPORT EditStreamCopy, 16
IMPORT EditStreamCut, 16
IMPORT EditStreamPaste, 24
IMPORT EditStreamSetInfoA, 12
IMPORT EditStreamSetInfoW, 12
IMPORT EditStreamSetNameA, 8
IMPORT EditStreamSetNameW, 8
IMPORT GetOpenFileNamePreviewA, 4
IMPORT GetOpenFileNamePreviewW, 4
IMPORT GetSaveFileNamePreviewA, 4
IMPORT GetSaveFileNamePreviewW, 4
IMPORT ICClose, 4
IMPORT ICCompressorChoose, 24
IMPORT ICCompressorFree, 4
IMPORT ICGetDisplayFormat, 24
IMPORT ICGetInfo, 12
IMPORT ICImageCompress, 28
IMPORT ICImageDecompress, 20
IMPORT ICInfo, 12
IMPORT ICInstall, 20
IMPORT ICLocate, 20
IMPORT ICMThunk32, 20
IMPORT ICOpen, 12
IMPORT ICOpenFunction, 16
IMPORT ICRemove, 12
IMPORT ICSendMessage, 16
IMPORT ICSeqCompressFrame, 20
IMPORT ICSeqCompressFrameEnd, 4
IMPORT ICSeqCompressFrameStart, 8
IMPORT StretchDIB, 48
IMPORT VideoForWindowsVersion, 0
IMPORT _AVISaveA
IMPORT _AVISaveW
IMPORT _ICCompress
IMPORT _ICDecompress
IMPORT _ICDraw
IMPORT _ICDrawBegin
IMPORT _IID_IAVIEditStream
IMPORT _IID_IAVIFile
IMPORT _IID_IAVIStream
IMPORT _IID_IGetFrame
IMPORT _MCIWndCreateA
IMPORT _MCIWndCreateW
IMPORT _MCIWndRegisterClass
IMPORT capCreateCaptureWindowA, 32
IMPORT capCreateCaptureWindowW, 32
IMPORT capGetDriverDescriptionA, 20
IMPORT capGetDriverDescriptionW, 20
IMPORT videoThunk32, 20

%ifdef UNICODE

%define AVIBuildFilter AVIBuildFilterW
%define AVIFileCreateStream AVIFileCreateStreamW
%define AVIFileInfo AVIFileInfoW
%define AVIFileOpen AVIFileOpenW
%define AVISaveV AVISaveVW
%define AVIStreamInfo AVIStreamInfoW
%define AVIStreamOpenFromFile AVIStreamOpenFromFileW
%define EditStreamSetInfo EditStreamSetInfoW
%define EditStreamSetName EditStreamSetNameW
%define GetOpenFileNamePreview GetOpenFileNamePreviewW
%define GetSaveFileNamePreview GetSaveFileNamePreviewW
%define  _AVISave _AVISaveW
%define _MCIWndCreate _MCIWndCreateW
%define capCreateCaptureWindow capCreateCaptureWindowW
%define capGetDriverDescription capGetDriverDescriptionW

%else  ;// ANSI

%define AVIBuildFilter AVIBuildFilterA
%define AVIFileCreateStream AVIFileCreateStreamA
%define AVIFileInfo AVIFileInfoA
%define AVIFileOpen AVIFileOpenA
%define AVISaveV AVISaveVA
%define AVIStreamInfo AVIStreamInfoA
%define AVIStreamOpenFromFile AVIStreamOpenFromFileA
%define EditStreamSetInfo EditStreamSetInfoA
%define EditStreamSetName EditStreamSetNameA
%define GetOpenFileNamePreview GetOpenFileNamePreviewA
%define GetSaveFileNamePreview GetSaveFileNamePreviewA
%define  _AVISave _AVISaveA
%define _MCIWndCreate _MCIWndCreateA
%define capCreateCaptureWindow capCreateCaptureWindowA
%define capGetDriverDescription capGetDriverDescriptionA

%endif  ;// UNICODE

%endif  ;// __NASMX_MSVFW32_INC__
