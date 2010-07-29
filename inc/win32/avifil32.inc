%ifndef __avifil32_INC__
%define __avifil32_INC__

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
IMPORT CreateEditableStream, 8
IMPORT EditStreamClone, 8
IMPORT EditStreamCopy, 16
IMPORT EditStreamCut, 16
IMPORT EditStreamPaste, 24
IMPORT EditStreamSetInfoA, 12
IMPORT EditStreamSetInfoW, 12
IMPORT EditStreamSetNameA, 8
IMPORT EditStreamSetNameW, 8
IMPORT _AVISaveA
IMPORT _AVISaveW

%endif