%ifndef __NASMX_CREDUI_INC__
%define __NASMX_CREDUI_INC__

IMPORT CredUICmdLinePromptForCredentialsA, 36
IMPORT CredUICmdLinePromptForCredentialsW, 36
IMPORT CredUIConfirmCredentialsA, 8
IMPORT CredUIConfirmCredentialsW, 8
IMPORT CredUIParseUserNameA, 20
IMPORT CredUIParseUserNameW, 20
IMPORT CredUIPromptForCredentialsA, 40
IMPORT CredUIPromptForCredentialsW, 40
IMPORT CredUIReadSSOCredW, 8
IMPORT CredUIStoreSSOCredW, 16

%ifdef UNICODE
%define CredUICmdLinePromptForCredentials CredUICmdLinePromptForCredentialsW
%define CredUIConfirmCredentials CredUIConfirmCredentialsW
%define CredUIParseUserName CredUIParseUserNameW
%define CredUIPromptForCredentials CredUIPromptForCredentialsW
%else  ;// ANSI
%define CredUICmdLinePromptForCredentials CredUICmdLinePromptForCredentialsA
%define CredUIConfirmCredentials CredUIConfirmCredentialsA
%define CredUIParseUserName CredUIParseUserNameA
%define CredUIPromptForCredentials CredUIPromptForCredentialsA
%endif  ;// UNICODE

%endif  ;// __NASMX_CREDUI_INC__
