%ifndef __NASMX_TRAFFIC_INC__
%define __NASMX_TRAFFIC_INC__

IMPORT TcAddFilter, 12
IMPORT TcAddFlow, 20
IMPORT TcCloseInterface, 4
IMPORT TcDeleteFilter, 4
IMPORT TcDeleteFlow, 4
IMPORT TcDeregisterClient, 4
IMPORT TcEnumerateFlows, 20
IMPORT TcEnumerateInterfaces, 12
IMPORT TcGetFlowNameA, 12
IMPORT TcGetFlowNameW, 12
IMPORT TcModifyFlow, 8
IMPORT TcOpenInterfaceA, 16
IMPORT TcOpenInterfaceW, 16
IMPORT TcQueryFlowA, 16
IMPORT TcQueryFlowW, 16
IMPORT TcQueryInterface, 20
IMPORT TcRegisterClient, 16
IMPORT TcSetFlowA, 16
IMPORT TcSetFlowW, 16
IMPORT TcSetInterface, 16

%ifdef UNICODE

%define TcGetFlowName TcGetFlowNameW
%define TcOpenInterface TcOpenInterfaceW
%define TcQueryFlow TcQueryFlowW
%define TcSetFlow TcSetFlowW

%else  ;// ANSI

%define TcGetFlowName TcGetFlowNameA
%define TcOpenInterface TcOpenInterfaceA
%define TcQueryFlow TcQueryFlowA
%define TcSetFlow TcSetFlowA

%endif  ;// UNICODE

%endif  ;// __NASMX_TRAFFIC_INC__
