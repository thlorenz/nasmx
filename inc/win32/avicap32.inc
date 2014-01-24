%ifndef __NASMX_AVICAP32_INC__
%define __NASMX_AVICAP32_INC__

IMPORT capCreateCaptureWindowA, 32
IMPORT capCreateCaptureWindowW, 32
IMPORT capGetDriverDescriptionA, 20
IMPORT capGetDriverDescriptionW, 20

%ifdef UNICODE

%define capCreateCaptureWindow capCreateCaptureWindowW
%define capGetDriverDescription capGetDriverDescriptionW

%else  ;// ANSI

%define capCreateCaptureWindow capCreateCaptureWindowA
%define capGetDriverDescription capGetDriverDescriptionA

%endif  ;// UNICODE

%endif  ;// __NASMX_AVICAP32_INC__
