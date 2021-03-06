%ifndef __NASMX_ODBC32_INC__
%define __NASMX_ODBC32_INC__

; SQLConfigDataSource request flags
%define  ODBC_ADD_DSN 1
%define  ODBC_CONFIG_DSN 2
%define  ODBC_REMOVE_DSN 3
%define  ODBC_ADD_SYS_DSN 4
%define  ODBC_CONFIG_SYS_DSN 5
%define  ODBC_REMOVE_SYS_DSN 6
%define  ODBC_REMOVE_DEFAULT_DSN 7

; install request flags
%define  ODBC_INSTALL_INQUIRY 1
%define  ODBC_INSTALL_COMPLETE 2

; config driver flags
%define  ODBC_INSTALL_DRIVER 1
%define  ODBC_REMOVE_DRIVER 2
%define  ODBC_CONFIG_DRIVER 3
%define  ODBC_CONFIG_DRIVER_MAX 100

; SQLGetConfigMode and SQLSetConfigMode flags
%define ODBC_BOTH_DSN 0
%define ODBC_USER_DSN 1
%define ODBC_SYSTEM_DSN 2

; SQLInstallerError code
%define ODBC_ERROR_GENERAL_ERR 1
%define ODBC_ERROR_INVALID_BUFF_LEN 2
%define ODBC_ERROR_INVALID_HWND 3
%define ODBC_ERROR_INVALID_STR 4
%define ODBC_ERROR_INVALID_REQUEST_TYPE 5
%define ODBC_ERROR_COMPONENT_NOT_FOUND 6
%define ODBC_ERROR_INVALID_NAME 7
%define ODBC_ERROR_INVALID_KEYWORD_VALUE 8
%define ODBC_ERROR_INVALID_DSN 9
%define ODBC_ERROR_INVALID_INF 10
%define ODBC_ERROR_REQUEST_FAILED 11
%define ODBC_ERROR_INVALID_PATH 12
%define ODBC_ERROR_LOAD_LIB_FAILED 13
%define ODBC_ERROR_INVALID_PARAM_SEQUENCE 14
%define ODBC_ERROR_INVALID_LOG_FILE 15
%define ODBC_ERROR_USER_CANCELED 16
%define ODBC_ERROR_USAGE_UPDATE_FAILED 17
%define ODBC_ERROR_CREATE_DSN_FAILED 18
%define ODBC_ERROR_WRITING_SYSINFO_FAILED 19
%define ODBC_ERROR_REMOVE_DSN_FAILED 20
%define ODBC_ERROR_OUT_OF_MEM 21
%define ODBC_ERROR_OUTPUT_STRING_TRUNCATED 22

IMPORT CloseODBCPerfData, 0
IMPORT CollectODBCPerfData, 16
IMPORT CursorLibLockDbc, 8
IMPORT CursorLibLockDesc, 8
IMPORT CursorLibLockStmt, 8
IMPORT CursorLibTransact, 12
IMPORT DllBidEntryPoint, 36
IMPORT GetODBCSharedData, 0
IMPORT LockHandle, 12
IMPORT MpHeapAlloc
IMPORT MpHeapCompact
IMPORT MpHeapCreate
IMPORT MpHeapDestroy
IMPORT MpHeapFree
IMPORT MpHeapReAlloc
IMPORT MpHeapSize
IMPORT MpHeapValidate
IMPORT ODBCGetTryWaitValue, 0
IMPORT ODBCInternalConnectW, 36
IMPORT ODBCQualifyFileDSNW, 4
IMPORT ODBCSetTryWaitValue, 4
IMPORT OpenODBCPerfData, 4
IMPORT PostComponentError, 4
IMPORT PostODBCComponentError, 4
IMPORT PostODBCError, 16
IMPORT SQLAllocConnect, 8
IMPORT SQLAllocEnv, 4
IMPORT SQLAllocHandle, 12
IMPORT SQLAllocHandleStd, 12
IMPORT SQLAllocStmt, 8
IMPORT SQLBindCol, 24
IMPORT SQLBindParam, 32
IMPORT SQLBindParameter, 40
IMPORT SQLBrowseConnectA, 24
IMPORT SQLBrowseConnectW, 24
IMPORT SQLBulkOperations, 8
IMPORT SQLCancel, 4
IMPORT SQLCloseCursor, 4
IMPORT SQLColAttributeA, 28
IMPORT SQLColAttributeW, 28
IMPORT SQLColAttributesA, 28
IMPORT SQLColAttributesW, 28
IMPORT SQLColumnPrivilegesA, 36
IMPORT SQLColumnPrivilegesW, 36
IMPORT SQLColumnsA, 36
IMPORT SQLColumnsW, 36
IMPORT SQLConnectA, 28
IMPORT SQLConnectW, 28
IMPORT SQLCopyDesc, 8
IMPORT SQLDataSourcesA, 32
IMPORT SQLDataSourcesW, 32
IMPORT SQLDescribeColA, 36
IMPORT SQLDescribeColW, 36
IMPORT SQLDescribeParam, 24
IMPORT SQLDisconnect, 4
IMPORT SQLDriverConnectA, 32
IMPORT SQLDriverConnectW, 32
IMPORT SQLDriversA, 32
IMPORT SQLDriversW, 32
IMPORT SQLEndTran, 12
IMPORT SQLErrorA, 32
IMPORT SQLErrorW, 32
IMPORT SQLExecDirectA, 12
IMPORT SQLExecDirectW, 12
IMPORT SQLExecute, 4
IMPORT SQLExtendedFetch, 20
IMPORT SQLFetch, 4
IMPORT SQLFetchScroll, 12
IMPORT SQLForeignKeysA, 52
IMPORT SQLForeignKeysW, 52
IMPORT SQLFreeConnect, 4
IMPORT SQLFreeEnv, 4
IMPORT SQLFreeHandle, 8
IMPORT SQLFreeStmt, 8
IMPORT SQLGetConnectAttrA, 20
IMPORT SQLGetConnectAttrW, 20
IMPORT SQLGetConnectOptionA, 12
IMPORT SQLGetConnectOptionW, 12
IMPORT SQLGetCursorNameA, 16
IMPORT SQLGetCursorNameW, 16
IMPORT SQLGetData, 24
IMPORT SQLGetDescFieldA, 24
IMPORT SQLGetDescFieldW, 24
IMPORT SQLGetDescRecA, 44
IMPORT SQLGetDescRecW, 44
IMPORT SQLGetDiagFieldA, 28
IMPORT SQLGetDiagFieldW, 28
IMPORT SQLGetDiagRecA, 32
IMPORT SQLGetDiagRecW, 32
IMPORT SQLGetEnvAttr, 20
IMPORT SQLGetFunctions, 12
IMPORT SQLGetInfoA, 20
IMPORT SQLGetInfoW, 20
IMPORT SQLGetStmtAttrA, 20
IMPORT SQLGetStmtAttrW, 20
IMPORT SQLGetStmtOption, 12
IMPORT SQLGetTypeInfoA, 8
IMPORT SQLGetTypeInfoW, 8
IMPORT SQLMoreResults, 4
IMPORT SQLNativeSqlA, 24
IMPORT SQLNativeSqlW, 24
IMPORT SQLNumParams, 8
IMPORT SQLNumResultCols, 8
IMPORT SQLParamData, 8
IMPORT SQLParamOptions, 12
IMPORT SQLPrepareA, 12
IMPORT SQLPrepareW, 12
IMPORT SQLPrimaryKeysA, 28
IMPORT SQLPrimaryKeysW, 28
IMPORT SQLProcedureColumnsA, 36
IMPORT SQLProcedureColumnsW, 36
IMPORT SQLProceduresA, 28
IMPORT SQLProceduresW, 28
IMPORT SQLPutData, 12
IMPORT SQLRowCount, 8
IMPORT SQLSetConnectAttrA, 16
IMPORT SQLSetConnectAttrW, 16
IMPORT SQLSetConnectOptionA, 12
IMPORT SQLSetConnectOptionW, 12
IMPORT SQLSetCursorNameA, 12
IMPORT SQLSetCursorNameW, 12
IMPORT SQLSetDescFieldA, 20
IMPORT SQLSetDescFieldW, 20
IMPORT SQLSetDescRec, 40
IMPORT SQLSetEnvAttr, 16
IMPORT SQLSetParam, 32
IMPORT SQLSetPos, 16
IMPORT SQLSetScrollOptions, 16
IMPORT SQLSetStmtAttrA, 16
IMPORT SQLSetStmtAttrW, 16
IMPORT SQLSetStmtOption, 12
IMPORT SQLSpecialColumnsA, 40
IMPORT SQLSpecialColumnsW, 40
IMPORT SQLStatisticsA, 36
IMPORT SQLStatisticsW, 36
IMPORT SQLTablePrivilegesA, 28
IMPORT SQLTablePrivilegesW, 28
IMPORT SQLTablesA, 36
IMPORT SQLTablesW, 36
IMPORT SQLTransact, 12
IMPORT SearchStatusCode, 8
IMPORT VFreeErrors, 4
IMPORT VRetrieveDriverErrorsRowCol, 24
IMPORT ValidateErrorQueue, 8
IMPORT g_hHeapMalloc

%ifdef UNICODE
%define SQLBrowseConnect SQLBrowseConnectW
%define SQLColAttribute SQLColAttributeW
%define SQLColAttributes SQLColAttributesW
%define SQLColumnPrivileges SQLColumnPrivilegesW
%define SQLColumns SQLColumnsW
%define SQLConnect SQLConnectW
%define SQLDataSources SQLDataSourcesW
%define SQLDescribeCol SQLDescribeColW
%define SQLDriverConnect SQLDriverConnectW
%define SQLDrivers SQLDriversW
%define SQLError SQLErrorW
%define SQLExecDirect SQLExecDirectW
%define SQLForeignKeys SQLForeignKeysW
%define SQLGetConnectAttr SQLGetConnectAttrW
%define SQLGetConnectOption SQLGetConnectOptionW
%define SQLGetCursorName SQLGetCursorNameW
%define SQLGetDescField SQLGetDescFieldW
%define SQLGetDescRec SQLGetDescRecW
%define SQLGetDiagField SQLGetDiagFieldW
%define SQLGetDiagRec SQLGetDiagRecW
%define SQLGetInfo SQLGetInfoW
%define SQLGetStmtAttr SQLGetStmtAttrW
%define SQLGetTypeInfo SQLGetTypeInfoW
%define SQLNativeSql SQLNativeSqlW
%define SQLPrepare SQLPrepareW
%define SQLPrimaryKeys SQLPrimaryKeysW
%define SQLProcedureColumns SQLProcedureColumnsW
%define SQLProcedures SQLProceduresW
%define SQLSetConnectAttr SQLSetConnectAttrW
%define SQLSetConnectOption SQLSetConnectOptionW
%define SQLSetCursorName SQLSetCursorNameW
%define SQLSetDescField SQLSetDescFieldW
%define SQLSetStmtAttr SQLSetStmtAttrW
%define SQLSpecialColumns SQLSpecialColumnsW
%define SQLStatistics SQLStatisticsW
%define SQLTablePrivileges SQLTablePrivilegesW
%define SQLTables SQLTablesW
%else
%define SQLBrowseConnect SQLBrowseConnectA
%define SQLColAttribute SQLColAttributeA
%define SQLColAttributes SQLColAttributesA
%define SQLColumnPrivileges SQLColumnPrivilegesA
%define SQLColumns SQLColumnsA
%define SQLConnect SQLConnectA
%define SQLDataSources SQLDataSourcesA
%define SQLDescribeCol SQLDescribeColA
%define SQLDriverConnect SQLDriverConnectA
%define SQLDrivers SQLDriversA
%define SQLError SQLErrorA
%define SQLExecDirect SQLExecDirectA
%define SQLForeignKeys SQLForeignKeysA
%define SQLGetConnectAttr SQLGetConnectAttrA
%define SQLGetConnectOption SQLGetConnectOptionA
%define SQLGetCursorName SQLGetCursorNameA
%define SQLGetDescField SQLGetDescFieldA
%define SQLGetDescRec SQLGetDescRecA
%define SQLGetDiagField SQLGetDiagFieldA
%define SQLGetDiagRec SQLGetDiagRecA
%define SQLGetInfo SQLGetInfoA
%define SQLGetStmtAttr SQLGetStmtAttrA
%define SQLGetTypeInfo SQLGetTypeInfoA
%define SQLNativeSql SQLNativeSqlA
%define SQLPrepare SQLPrepareA
%define SQLPrimaryKeys SQLPrimaryKeysA
%define SQLProcedureColumns SQLProcedureColumnsA
%define SQLProcedures SQLProceduresA
%define SQLSetConnectAttr SQLSetConnectAttrA
%define SQLSetConnectOption SQLSetConnectOptionA
%define SQLSetCursorName SQLSetCursorNameA
%define SQLSetDescField SQLSetDescFieldA
%define SQLSetStmtAttr SQLSetStmtAttrA
%define SQLSpecialColumns SQLSpecialColumnsA
%define SQLStatistics SQLStatisticsA
%define SQLTablePrivileges SQLTablePrivilegesA
%define SQLTables SQLTablesA

%endif

%endif
