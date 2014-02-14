%ifndef __NASMX_RTUTILS_INC__
%define __NASMX_RTUTILS_INC__

IMPORT LogErrorA, 16
IMPORT LogErrorW, 16
IMPORT LogEventA, 16
IMPORT LogEventW, 16
IMPORT MprSetupProtocolEnum, 12
IMPORT MprSetupProtocolFree, 4
IMPORT QueueWorkItem, 12
IMPORT RouterAssert, 16
IMPORT RouterGetErrorStringA, 8
IMPORT RouterGetErrorStringW, 8
IMPORT RouterLogDeregisterA, 4
IMPORT RouterLogDeregisterW, 4
IMPORT RouterLogEventA, 24
IMPORT RouterLogEventDataA, 28
IMPORT RouterLogEventDataW, 28
IMPORT RouterLogEventExA
IMPORT RouterLogEventExW
IMPORT RouterLogEventStringA, 28
IMPORT RouterLogEventStringW, 28
IMPORT RouterLogEventValistExA, 24
IMPORT RouterLogEventValistExW, 24
IMPORT RouterLogEventW, 24
IMPORT RouterLogRegisterA, 4
IMPORT RouterLogRegisterW, 4
IMPORT SetIoCompletionProc, 8
IMPORT TraceDeregisterA, 4
IMPORT TraceDeregisterExA, 8
IMPORT TraceDeregisterExW, 8
IMPORT TraceDeregisterW, 4
IMPORT TraceDumpExA, 28
IMPORT TraceDumpExW, 28
IMPORT TraceGetConsoleA, 8
IMPORT TraceGetConsoleW, 8
IMPORT TracePrintfA
IMPORT TracePrintfExA
IMPORT TracePrintfExW
IMPORT TracePrintfW
IMPORT TracePutsExA, 12
IMPORT TracePutsExW, 12
IMPORT TraceRegisterExA, 8
IMPORT TraceRegisterExW, 8
IMPORT TraceVprintfExA, 16
IMPORT TraceVprintfExW, 16

%ifdef UNICODE

%define LogError LogErrorW
%define LogEvent LogEventW
%define RouterGetErrorString RouterGetErrorStringW
%define RouterLogDeregister RouterLogDeregisterW
%define RouterLogEvent RouterLogEventW
%define RouterLogEventData RouterLogEventDataW
%define RouterLogEventEx RouterLogEventExW
%define RouterLogEventString RouterLogEventStringW
%define RouterLogEventValistEx RouterLogEventValistExW
%define RouterLogRegister RouterLogRegisterW
%define TraceDeregister TraceDeregisterW
%define TraceDeregisterEx TraceDeregisterExW
%define TraceDumpEx TraceDumpExW
%define TraceGetConsole TraceGetConsoleW
%define TracePrintfEx TracePrintfExW
%define TracePrintf TracePrintfW
%define TracePutsEx TracePutsExW
%define TraceRegisterEx TraceRegisterExW
%define TraceVprintfEx TraceVprintfExW

%else  ;// ANSI

%define LogError LogError
%define LogEvent LogEventA
%define RouterGetErrorString RouterGetErrorStringA
%define RouterLogDeregister RouterLogDeregisterA
%define RouterLogEvent RouterLogEventA
%define RouterLogEventData RouterLogEventDataA
%define RouterLogEventEx RouterLogEventExA
%define RouterLogEventString RouterLogEventStringA
%define RouterLogEventValistEx RouterLogEventValistExA
%define RouterLogRegister RouterLogRegisterA
%define TraceDeregister TraceDeregisterA
%define TraceDeregisterEx TraceDeregisterExA
%define TraceDumpEx TraceDumpExA
%define TraceGetConsole TraceGetConsoleA
%define TracePrintfEx TracePrintfExA
%define TracePrintf TracePrintfA
%define TracePutsEx TracePutsExA
%define TraceRegisterEx TraceRegisterExA
%define TraceVprintfEx TraceVprintfExA

%endif  ;// UNICODE

%endif  ;// __NASMX_RTUTILS_INC__
