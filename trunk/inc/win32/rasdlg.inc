%ifndef __NASMX_RASDLG_INC__
%define __NASMX_RASDLG_INC__

IMPORT DwTerminalDlg, 20
IMPORT GetRasDialOutProtocols, 0
IMPORT RasAutodialDisableDlgA, 4
IMPORT RasAutodialDisableDlgW, 4
IMPORT RasAutodialQueryDlgA, 20
IMPORT RasAutodialQueryDlgW, 20
IMPORT RasDialDlgA, 16
IMPORT RasDialDlgW, 16
IMPORT RasEntryDlgA, 12
IMPORT RasEntryDlgW, 12
IMPORT RasMonitorDlgA, 8
IMPORT RasMonitorDlgW, 8
IMPORT RasPhonebookDlgA, 12
IMPORT RasPhonebookDlgW, 12
IMPORT RasSrvAddPropPages, 20
IMPORT RasSrvAddWizPages, 12
IMPORT RasSrvAllowConnectionsConfig, 4
IMPORT RasSrvCleanupService, 0
IMPORT RasSrvEnumConnections, 12
IMPORT RasSrvHangupConnection, 4
IMPORT RasSrvInitializeService, 0
IMPORT RasSrvIsConnectionConnected, 8
IMPORT RasSrvIsICConfigured, 4
IMPORT RasSrvIsServiceRunning, 4
IMPORT RasSrvQueryShowIcon, 4
IMPORT RasUserEnableManualDial, 12
IMPORT RasUserGetManualDial, 12
IMPORT RasUserPrefsDlg, 4
IMPORT RasWizCreateNewEntry, 20
IMPORT RasWizGetNCCFlags, 12
IMPORT RasWizGetSuggestedEntryName, 12
IMPORT RasWizGetUserInputConnectionName, 8
IMPORT RasWizIsEntryRenamable, 12
IMPORT RasWizQueryMaxPageCount, 4
IMPORT RasWizSetEntryName, 12
IMPORT RouterEntryDlgA, 16
IMPORT RouterEntryDlgW, 16

%ifdef UNICODE

%define RasAutodialDisableDlg RasAutodialDisableDlgW
%define RasAutodialQueryDlg RasAutodialQueryDlgW
%define RasDialDlg RasDialDlgW
%define RasEntryDlg RasEntryDlgW
%define RasMonitorDlg RasMonitorDlgW
%define RasPhonebookDlg RasPhonebookDlgW
%define RouterEntryDlg RouterEntryDlgW

%else  ;// ANSI

%define RasAutodialDisableDlg RasAutodialDisableDlgA
%define RasAutodialQueryDlg RasAutodialQueryDlgA
%define RasDialDlg RasDialDlgA
%define RasEntryDlg RasEntryDlgA
%define RasMonitorDlg RasMonitorDlgA
%define RasPhonebookDlg RasPhonebookDlgA
%define RouterEntryDlg RouterEntryDlgA

%endif  ;// UNICODE

%endif  ;// __NASMX_RASDLG_INC__
