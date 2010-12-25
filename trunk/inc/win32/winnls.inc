%ifndef __NASMX_WINNLS_INC__
%define __NASMX_WINNLS_INC__

; String Length Maximums.
%define MAX_LEADBYTES 12
%define MAX_DEFAULTCHAR 2
%define COMPARE_STRING 1h

%define HIGH_SURROGATE_START 0d800H
%define HIGH_SURROGATE_END 0dbffH
%define LOW_SURROGATE_START 0dc00H
%define LOW_SURROGATE_END 0dfffH

; MBCS and Unicode Translation Flags.
%define MB_PRECOMPOSED 1h
%define MB_COMPOSITE 2h
%define MB_USEGLYPHCHARS 4h
%define MB_ERR_INVALID_CHARS 8h
%define WC_COMPOSITECHECK 200h
%define WC_DISCARDNS 10h
%define WC_SEPCHARS 20h
%define WC_DEFAULTCHAR 40h
%define WC_ERR_INVALID_CHARS 80h
%define WC_NO_BEST_FIT_CHARS 400h

; Character Type Flags.
%define CT_CTYPE1 1h
%define CT_CTYPE2 2h
%define CT_CTYPE3 4h

; CType 1 Flag Bits.
%define C1_UPPER 1h
%define C1_LOWER 2h
%define C1_DIGIT 4h
%define C1_SPACE 8h
%define C1_PUNCT 10h
%define C1_CNTRL 20h
%define C1_BLANK 40h
%define C1_XDIGIT 80h
%define C1_ALPHA 100h
%define C1_DEFINED 200h

; CType 2 Flag Bits.
%define C2_LEFTTORIGHT 1h
%define C2_RIGHTTOLEFT 2h
%define C2_EUROPENUMBER 3h
%define C2_EUROPESEPARATOR 4h
%define C2_EUROPETERMINATOR 5h
%define C2_ARABICNUMBER 6h
%define C2_COMMONSEPARATOR 7h
%define C2_BLOCKSEPARATOR 8h
%define C2_SEGMENTSEPARATOR 9h
%define C2_WHITESPACE 0Ah
%define C2_OTHERNEUTRAL 0Bh
%define C2_NOTAPPLICABLE 0h

; CType 3 Flag Bits.
%define C3_NONSPACING 1h
%define C3_DIACRITIC 2h
%define C3_VOWELMARK 4h
%define C3_SYMBOL 8h
%define C3_KATAKANA 10h
%define C3_HIRAGANA 20h
%define C3_HALFWIDTH 40h
%define C3_FULLWIDTH 80h
%define C3_IDEOGRAPH 100h
%define C3_KASHIDA 200h
%define C3_LEXICAL 400h
%define C3_HIGHSURROGATE 800h
%define C3_LOWSURROGATE 1000h
%define C3_ALPHA 8000h
%define C3_NOTAPPLICABLE 0h

; String Flags.
%define NORM_IGNORECASE 1h
%define NORM_IGNORENONSPACE 2h
%define NORM_IGNORESYMBOLS 4h
%define LINGUISTIC_IGNORECASE  10h
%define LINGUISTIC_IGNOREDIACRITIC 20h

%define NORM_IGNOREKANATYPE 10000h
%define NORM_IGNOREWIDTH 20000h
%define NORM_LINGUISTIC_CASING 8000000h

; Locale Independent Mapping Flags.
%define MAP_FOLDCZONE 10h
%define MAP_PRECOMPOSED 20h
%define MAP_COMPOSITE 40h
%define MAP_FOLDDIGITS 80h
%define MAP_EXPAND_LIGATURES 2000h

; Locale Dependent Mapping Flags.
%define LCMAP_LOWERCASE 100h
%define LCMAP_UPPERCASE 200h
%define LCMAP_SORTKEY 400h
%define LCMAP_BYTEREV 800h
%define LCMAP_HIRAGANA 100000h
%define LCMAP_KATAKANA 200000h
%define LCMAP_HALFWIDTH 400000h
%define LCMAP_FULLWIDTH 800000h
%define LCMAP_LINGUISTIC_CASING 1000000h
%define LCMAP_SIMPLIFIED_CHINESE 2000000h
%define LCMAP_TRADITIONAL_CHINESE 4000000h

; Search Flags
%define FIND_STARTSWITH 100000h
%define FIND_ENDSWITH 200000h
%define FIND_FROMSTART 400000h
%define FIND_FROMEND 800000h

; Language Group Enumeration Flags.
%define LGRPID_INSTALLED 1
%define LGRPID_SUPPORTED 2

; Locale Enumeration Flags.
%define LCID_INSTALLED 1h
%define LCID_SUPPORTED 2h
%define LCID_ALTERNATE_SORTS 4h

; Named based enumeration flags.
%define LOCALE_ALL 0
%define LOCALE_WINDOWS 1h
%define LOCALE_SUPPLEMENTAL 2h
%define LOCALE_ALTERNATE_SORTS 4h
%define LOCALE_REPLACEMENT 8h

; Code Page Enumeration Flags.
%define CP_INSTALLED 1h
%define CP_SUPPORTED 2h
%define SORT_STRINGSORT 1000h

; Compare String Return Values.
%define CSTR_LESS_THAN 1
%define CSTR_EQUAL 2
%define CSTR_GREATER_THAN 3

; Code Page Default Values.
%define CP_ACP 0
%define CP_OEMCP 1
%define CP_MACCP 2
%define CP_THREAD_ACP 3
%define CP_SYMBOL 42
%define CP_UTF7 65000
%define CP_UTF8 65001

; Country/Region Codes.
%define CTRY_DEFAULT 0
%define CTRY_ALBANIA 355
%define CTRY_ALGERIA 213
%define CTRY_ARGENTINA 54
%define CTRY_ARMENIA 374
%define CTRY_AUSTRALIA 61
%define CTRY_AUSTRIA 43
%define CTRY_AZERBAIJAN 994
%define CTRY_BAHRAIN 973
%define CTRY_BELARUS 375
%define CTRY_BELGIUM 32
%define CTRY_BELIZE 501
%define CTRY_BOLIVIA 591
%define CTRY_BRAZIL 55
%define CTRY_BRUNEI_DARUSSALAM 673
%define CTRY_BULGARIA 359
%define CTRY_CANADA 2
%define CTRY_CARIBBEAN 1
%define CTRY_CHILE 56
%define CTRY_COLOMBIA 57
%define CTRY_COSTA_RICA 506
%define CTRY_CROATIA 385
%define CTRY_CZECH 420
%define CTRY_DENMARK 45
%define CTRY_DOMINICAN_REPUBLIC 1
%define CTRY_ECUADOR 593
%define CTRY_EGYPT 20
%define CTRY_EL_SALVADOR 503
%define CTRY_ESTONIA 372
%define CTRY_FAEROE_ISLANDS 298
%define CTRY_FINLAND 358
%define CTRY_FRANCE 33
%define CTRY_GEORGIA 995
%define CTRY_GERMANY 49
%define CTRY_GREECE 30
%define CTRY_GUATEMALA 502
%define CTRY_HONDURAS 504
%define CTRY_HONG_KONG 852
%define CTRY_HUNGARY 36
%define CTRY_ICELAND 354
%define CTRY_INDIA 91
%define CTRY_INDONESIA 62
%define CTRY_IRAN 981
%define CTRY_IRAQ 964
%define CTRY_IRELAND 353
%define CTRY_ISRAEL 972
%define CTRY_ITALY 39
%define CTRY_JAMAICA 1
%define CTRY_JAPAN 81
%define CTRY_JORDAN 962
%define CTRY_KAZAKSTAN 7
%define CTRY_KENYA 254
%define CTRY_KUWAIT 965
%define CTRY_KYRGYZSTAN 996
%define CTRY_LATVIA 371
%define CTRY_LEBANON 961
%define CTRY_LIBYA 218
%define CTRY_LIECHTENSTEIN 41
%define CTRY_LITHUANIA 370
%define CTRY_LUXEMBOURG 352
%define CTRY_MACAU 853
%define CTRY_MACEDONIA 389
%define CTRY_MALAYSIA 60
%define CTRY_MALDIVES 960
%define CTRY_MEXICO 52
%define CTRY_MONACO 33
%define CTRY_MONGOLIA 976
%define CTRY_MOROCCO 212
%define CTRY_NETHERLANDS 31
%define CTRY_NEW_ZEALAND 64
%define CTRY_NICARAGUA 505
%define CTRY_NORWAY 47
%define CTRY_OMAN 968
%define CTRY_PAKISTAN 92
%define CTRY_PANAMA 507
%define CTRY_PARAGUAY 595
%define CTRY_PERU 51
%define CTRY_PHILIPPINES 63
%define CTRY_POLAND 48
%define CTRY_PORTUGAL 351
%define CTRY_PRCHINA 86
%define CTRY_PUERTO_RICO 1
%define CTRY_QATAR 974
%define CTRY_ROMANIA 40
%define CTRY_RUSSIA 7
%define CTRY_SAUDI_ARABIA 966
%define CTRY_SERBIA 381
%define CTRY_SINGAPORE 65
%define CTRY_SLOVAK 421
%define CTRY_SLOVENIA 386
%define CTRY_SOUTH_AFRICA 27
%define CTRY_SOUTH_KOREA 82
%define CTRY_SPAIN 34
%define CTRY_SWEDEN 46
%define CTRY_SWITZERLAND 41
%define CTRY_SYRIA 963
%define CTRY_TAIWAN 886
%define CTRY_TATARSTAN 7
%define CTRY_THAILAND 66
%define CTRY_TRINIDAD_Y_TOBAGO 1
%define CTRY_TUNISIA 216
%define CTRY_TURKEY 90
%define CTRY_UAE 971
%define CTRY_UKRAINE 380
%define CTRY_UNITED_KINGDOM 44
%define CTRY_UNITED_STATES 1
%define CTRY_URUGUAY 598
%define CTRY_UZBEKISTAN 7
%define CTRY_VENEZUELA 58
%define CTRY_VIET_NAM 84
%define CTRY_YEMEN 967
%define CTRY_ZIMBABWE 263

; Locale Types.
%define LOCALE_NOUSEROVERRIDE 80000000h
%define LOCALE_USE_CP_ACP 40000000h
%define LOCALE_RETURN_NUMBER 20000000h
%define LOCALE_ILANGUAGE 1h
%define LOCALE_SLANGUAGE 2h
%define LOCALE_SENGLANGUAGE 1001h
%define LOCALE_SABBREVLANGNAME 3h
%define LOCALE_SNATIVELANGNAME 4h
%define LOCALE_ICOUNTRY 5h
%define LOCALE_SCOUNTRY 6h
%define LOCALE_SENGCOUNTRY 1002h
%define LOCALE_SABBREVCTRYNAME 7h
%define LOCALE_SNATIVECTRYNAME 8h
%define LOCALE_IDEFAULTLANGUAGE 9h
%define LOCALE_IDEFAULTCOUNTRY 0Ah
%define LOCALE_IDEFAULTCODEPAGE 0Bh
%define LOCALE_IGEOID 5Bh
%define LOCALE_IDEFAULTANSICODEPAGE 1004h
%define LOCALE_IDEFAULTMACCODEPAGE 1011h
%define LOCALE_SLIST 0Ch
%define LOCALE_IMEASURE 0Dh
%define LOCALE_SDECIMAL 0Eh
%define LOCALE_STHOUSAND 0Fh
%define LOCALE_SGROUPING 10h
%define LOCALE_IDIGITS 11h
%define LOCALE_ILZERO 12h
%define LOCALE_INEGNUMBER 1010h
%define LOCALE_SNATIVEDIGITS 13h
%define LOCALE_SCURRENCY 14h
%define LOCALE_SINTLSYMBOL 15h
%define LOCALE_SMONDECIMALSEP 16h
%define LOCALE_SMONTHOUSANDSEP 17h
%define LOCALE_SMONGROUPING 18h
%define LOCALE_ICURRDIGITS 19h
%define LOCALE_IINTLCURRDIGITS 1Ah
%define LOCALE_ICURRENCY 1Bh
%define LOCALE_INEGCURR 1Ch
%define LOCALE_SDATE 1Dh
%define LOCALE_STIME 1Eh
%define LOCALE_SSHORTDATE 1Fh
%define LOCALE_SLONGDATE 20h
%define LOCALE_STIMEFORMAT 1003h
%define LOCALE_IDATE 21h
%define LOCALE_ILDATE 22h
%define LOCALE_ITIME 23h
%define LOCALE_ICENTURY 24h
%define LOCALE_ITLZERO 25h
%define LOCALE_IDAYLZERO 26h
%define LOCALE_IMONLZERO 27h
%define LOCALE_S1159 28h
%define LOCALE_S2359 29h
%define LOCALE_SDAYNAME1 2Ah
%define LOCALE_SDAYNAME2 2Bh
%define LOCALE_SDAYNAME3 2Ch
%define LOCALE_SDAYNAME4 2Dh
%define LOCALE_SDAYNAME5 2Eh
%define LOCALE_SDAYNAME6 2Fh
%define LOCALE_SDAYNAME7 30h
%define LOCALE_SABBREVDAYNAME1 31h
%define LOCALE_SABBREVDAYNAME2 32h
%define LOCALE_SABBREVDAYNAME3 33h
%define LOCALE_SABBREVDAYNAME4 34h
%define LOCALE_SABBREVDAYNAME5 35h
%define LOCALE_SABBREVDAYNAME6 36h
%define LOCALE_SABBREVDAYNAME7 37h
%define LOCALE_SMONTHNAME1 38h
%define LOCALE_SMONTHNAME2 39h
%define LOCALE_SMONTHNAME3 3Ah
%define LOCALE_SMONTHNAME4 3Bh
%define LOCALE_SMONTHNAME5 3Ch
%define LOCALE_SMONTHNAME6 3Dh
%define LOCALE_SMONTHNAME7 3Eh
%define LOCALE_SMONTHNAME8 3Fh
%define LOCALE_SMONTHNAME9 40h
%define LOCALE_SMONTHNAME10 41h
%define LOCALE_SMONTHNAME11 42h
%define LOCALE_SMONTHNAME12 43h
%define LOCALE_SABBREVMONTHNAME1 44h
%define LOCALE_SABBREVMONTHNAME2 45h
%define LOCALE_SABBREVMONTHNAME3 46h
%define LOCALE_SABBREVMONTHNAME4 47h
%define LOCALE_SABBREVMONTHNAME5 48h
%define LOCALE_SABBREVMONTHNAME6 49h
%define LOCALE_SABBREVMONTHNAME7 4Ah
%define LOCALE_SABBREVMONTHNAME8 4Bh
%define LOCALE_SABBREVMONTHNAME9 4Ch
%define LOCALE_SABBREVMONTHNAME10 4Dh
%define LOCALE_SABBREVMONTHNAME11 4Eh
%define LOCALE_SABBREVMONTHNAME12 4Fh
%define LOCALE_SABBREVMONTHNAME13 100Fh
%define LOCALE_ITIMEMARKPOSN 1005h
%define LOCALE_ICALENDARTYPE 1009h
%define LOCALE_IOPTIONALCALENDAR 100Bh
%define LOCALE_IFIRSTDAYOFWEEK 100Ch
%define LOCALE_IFIRSTWEEKOFYEAR 100Dh
%define LOCALE_SMONTHNAME13 100Eh
%define LOCALE_SPOSITIVESIGN 50h
%define LOCALE_SNEGATIVESIGN 51h
%define LOCALE_IPOSSIGNPOSN 52h
%define LOCALE_INEGSIGNPOSN 53h
%define LOCALE_IPOSSYMPRECEDES 54h
%define LOCALE_IPOSSEPBYSPACE 55h
%define LOCALE_INEGSYMPRECEDES 56h
%define LOCALE_INEGSEPBYSPACE 57h
%define LOCALE_FONTSIGNATURE 58h
%define LOCALE_SISO639LANGNAME 59h
%define LOCALE_SISO3166CTRYNAME 5Ah
%define LOCALE_IDEFAULTEBCDICCODEPAGE 1012h
%define LOCALE_IPAPERSIZE 100Ah
%define LOCALE_SENGCURRNAME 1007h
%define LOCALE_SNATIVECURRNAME 1008h
%define LOCALE_SYEARMONTH 1006h
%define LOCALE_SSORTNAME 1013h
%define LOCALE_IDIGITSUBSTITUTION 1014h
%define LOCALE_SNAME 5ch
%define LOCALE_SDURATION 5dh
%define LOCALE_SKEYBOARDSTOINSTALL 5eh
%define LOCALE_SSHORTESTDAYNAME1 60h
%define LOCALE_SSHORTESTDAYNAME2 61h
%define LOCALE_SSHORTESTDAYNAME3 62h
%define LOCALE_SSHORTESTDAYNAME4 63h
%define LOCALE_SSHORTESTDAYNAME5 64h
%define LOCALE_SSHORTESTDAYNAME6 65h
%define LOCALE_SSHORTESTDAYNAME7 66h
%define LOCALE_SISO639LANGNAME2 67h
%define LOCALE_SISO3166CTRYNAME2 68h
%define LOCALE_SNAN 69h
%define LOCALE_SPOSINFINITY 6ah
%define LOCALE_SNEGINFINITY 6bh
%define LOCALE_SSCRIPTS 6ch
%define LOCALE_SPARENT 6dh
%define LOCALE_SCONSOLEFALLBACKNAME 6eh
%define LOCALE_SLANGDISPLAYNAME 6fh

; Time Flags for GetTimeFormat.
%define TIME_NOMINUTESORSECONDS 1h
%define TIME_NOSECONDS 2h
%define TIME_NOTIMEMARKER 4h
%define TIME_FORCE24HOURFORMAT 8h

; Date Flags for GetDateFormat.
%define DATE_SHORTDATE 1h
%define DATE_LONGDATE 2h
%define DATE_USE_ALT_CALENDAR 4h
%define DATE_YEARMONTH 8h
%define DATE_LTRREADING 10h
%define DATE_RTLREADING 20h

%define CAL_NOUSEROVERRIDE LOCALE_NOUSEROVERRIDE
%define CAL_USE_CP_ACP LOCALE_USE_CP_ACP
%define CAL_RETURN_NUMBER LOCALE_RETURN_NUMBER
%define CAL_ICALINTVALUE 1h
%define CAL_SCALNAME 2h
%define CAL_IYEAROFFSETRANGE 3h
%define CAL_SERASTRING 4h
%define CAL_SSHORTDATE 5h
%define CAL_SLONGDATE 6h
%define CAL_SDAYNAME1 7h
%define CAL_SDAYNAME2 8h
%define CAL_SDAYNAME3 9h
%define CAL_SDAYNAME4 0Ah
%define CAL_SDAYNAME5 0Bh
%define CAL_SDAYNAME6 0Ch
%define CAL_SDAYNAME7 0Dh
%define CAL_SABBREVDAYNAME1 0Eh
%define CAL_SABBREVDAYNAME2 0Fh
%define CAL_SABBREVDAYNAME3 10h
%define CAL_SABBREVDAYNAME4 11h
%define CAL_SABBREVDAYNAME5 12h
%define CAL_SABBREVDAYNAME6 13h
%define CAL_SABBREVDAYNAME7 14h
%define CAL_SMONTHNAME1 15h
%define CAL_SMONTHNAME2 16h
%define CAL_SMONTHNAME3 17h
%define CAL_SMONTHNAME4 18h
%define CAL_SMONTHNAME5 19h
%define CAL_SMONTHNAME6 1Ah
%define CAL_SMONTHNAME7 1Bh
%define CAL_SMONTHNAME8 1Ch
%define CAL_SMONTHNAME9 1Dh
%define CAL_SMONTHNAME10 1Eh
%define CAL_SMONTHNAME11 1Fh
%define CAL_SMONTHNAME12 20h
%define CAL_SMONTHNAME13 21h
%define CAL_SABBREVMONTHNAME1 22h
%define CAL_SABBREVMONTHNAME2 23h
%define CAL_SABBREVMONTHNAME3 24h
%define CAL_SABBREVMONTHNAME4 25h
%define CAL_SABBREVMONTHNAME5 26h
%define CAL_SABBREVMONTHNAME6 27h
%define CAL_SABBREVMONTHNAME7 28h
%define CAL_SABBREVMONTHNAME8 29h
%define CAL_SABBREVMONTHNAME9 2Ah
%define CAL_SABBREVMONTHNAME10 2Bh
%define CAL_SABBREVMONTHNAME11 2Ch
%define CAL_SABBREVMONTHNAME12 2Dh
%define CAL_SABBREVMONTHNAME13 2Eh
%define CAL_SYEARMONTH 2fh
%define CAL_ITWODIGITYEARMAX 30h
%define CAL_SSHORTESTDAYNAME1 31h
%define CAL_SSHORTESTDAYNAME2 32h
%define CAL_SSHORTESTDAYNAME3 33h
%define CAL_SSHORTESTDAYNAME4 34h
%define CAL_SSHORTESTDAYNAME5 35h
%define CAL_SSHORTESTDAYNAME6 36h
%define CAL_SSHORTESTDAYNAME7 37h

; Calendar Enumeration Value.
%define ENUM_ALL_CALENDARS 0FFFFh

; Calendar ID Values.
%define CAL_GREGORIAN 1
%define CAL_GREGORIAN_US 2
%define CAL_JAPAN 3
%define CAL_TAIWAN 4
%define CAL_KOREA 5
%define CAL_HIJRI 6
%define CAL_THAI 7
%define CAL_HEBREW 8
%define CAL_GREGORIAN_ME_FRENCH 9
%define CAL_GREGORIAN_ARABIC 10
%define CAL_GREGORIAN_XLIT_ENGLISH 11
%define CAL_GREGORIAN_XLIT_FRENCH 12
%define CAL_UMALQURA 23

; Language Group ID Values.
%define LGRPID_WESTERN_EUROPE 1h
%define LGRPID_CENTRAL_EUROPE 2h
%define LGRPID_BALTIC 3h
%define LGRPID_GREEK 4h
%define LGRPID_CYRILLIC 5h
%define LGRPID_TURKIC 6h
%define LGRPID_TURKISH 6h
%define LGRPID_JAPANESE 7h
%define LGRPID_KOREAN 8h
%define LGRPID_TRADITIONAL_CHINESE 9h
%define LGRPID_SIMPLIFIED_CHINESE 0ah
%define LGRPID_THAI 0bh
%define LGRPID_HEBREW 0ch
%define LGRPID_ARABIC 0dh
%define LGRPID_VIETNAMESE 0eh
%define LGRPID_INDIC 0fh
%define LGRPID_GEORGIAN 10h
%define LGRPID_ARMENIAN 11h

; MUI function flag values
%define MUI_LANGUAGE_ID 4h
%define MUI_LANGUAGE_NAME 8h
%define MUI_MERGE_SYSTEM_FALLBACK 10h
%define MUI_MERGE_USER_FALLBACK 20h
%define MUI_THREAD_LANGUAGES 40h
%define MUI_CONSOLE_FILTER 100h
%define MUI_COMPLEX_SCRIPT_FILTER 200h
%define MUI_RESET_FILTERS 1h
%define MUI_USER_PREFERRED_UI_LANGUAGES 10h
%define MUI_USE_INSTALLED_LANGUAGES 20h
%define MUI_USE_SEARCH_ALL_LANGUAGES 40h
%define MUI_LANG_NEUTRAL_PE_FILE 100h
%define MUI_NON_LANG_NEUTRAL_FILE 200h
%define MUI_MACHINE_LANGUAGE_SETTINGS 400h
%define MUI_BYPASS_SESSION_BEHAVIOR 80h
%define MUI_FILETYPE_NOT_LANGUAGE_NEUTRAL 1h
%define MUI_FILETYPE_LANGUAGE_NEUTRAL_MAIN 2h
%define MUI_FILETYPE_LANGUAGE_NEUTRAL_MUI 4h
%define MUI_QUERY_TYPE 1h
%define MUI_QUERY_CHECKSUM 2h
%define MUI_QUERY_LANGUAGE_NAME 4h
%define MUI_QUERY_RESOURCE_TYPES 8h
%define MUI_FILEINFO_VERSION 1h
%define MUI_SXS_FALLBACK 10000h
%define MUI_FULL_LANGUAGE 1h
%define MUI_PARTIAL_LANGUAGE 2h
%define MUI_LIP_LANGUAGE 4h
%define MUI_LANGUAGE_INSTALLED 20h
%define MUI_LANGUAGE_LICENSED 40h
%define MUI_PUBLIC_LANGUAGE_TYPE_FLAGS_MASK 67h

NASMX_STRUC CPINFO
    NASMX_RESERVE MaxCharSize, uint32_t, 1
    NASMX_RESERVE DefaultChar, int8_t, MAX_DEFAULTCHAR
    NASMX_RESERVE LeadByte,    int8_t, MAX_LEADBYTES
NASMX_ENDSTRUC

NASMX_STRUC CPINFOEX
    NASMX_RESERVE MaxCharSize,        uint32_t, 1
    NASMX_RESERVE DefaultChar,        int8_t, MAX_DEFAULTCHAR
    NASMX_RESERVE LeadByte,           int8_t, MAX_LEADBYTES
    NASMX_RESERVE UnicodeDefaultChar, uint16_t, MAX_LEADBYTES
    NASMX_RESERVE CodePage,           int8_t, MAX_LEADBYTES
    NASMX_RESERVE CodePageName,       NASMX_TCHAR, MAX_PATH
NASMX_ENDSTRUC

NASMX_STRUC NUMBERFMT
    NASMX_RESERVE NumDigits,     uint32_t, 1
    NASMX_RESERVE LeadingZero,   uint32_t, 1
    NASMX_RESERVE Grouping,      uint32_t, 1
    NASMX_RESERVE lpDecimalSep,  ptrdiff_t, 1
    NASMX_RESERVE lpThousandSep, ptrdiff_t, 1
    NASMX_RESERVE NegativeOrder, uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC CURRENCYFMT
    NASMX_RESERVE NumDigits,        uint32_t, 1
    NASMX_RESERVE LeadingZero,      uint32_t, 1
    NASMX_RESERVE Grouping,         uint32_t, 1
    NASMX_RESERVE lpDecimalSep,     ptrdiff_t, 1
    NASMX_RESERVE lpThousandSep,    ptrdiff_t, 1
    NASMX_RESERVE NegativeOrder,    uint32_t, 1
    NASMX_RESERVE PositiveOrder,    uint32_t, 1
    NASMX_RESERVE lpCurrencySymbol, ptrdiff_t, 1
NASMX_ENDSTRUC

NASMX_STRUC NLSVERSIONINFO
    NASMX_RESERVE dwNLSVersionInfoSize, uint32_t, 1
    NASMX_RESERVE dwNLSVersion,         uint32_t, 1
    NASMX_RESERVE dwDefinedVersion,     uint32_t, 1
NASMX_ENDSTRUC

%define GEOID_NOT_AVAILABLE -1

%define GEO_NATION 1h
%define GEO_LATITUDE 2h
%define GEO_LONGITUDE 3h
%define GEO_ISO2 4h
%define GEO_ISO3 5h
%define GEO_RFC1766 6h
%define GEO_LCID 7h
%define GEO_FRIENDLYNAME 8h
%define GEO_OFFICIALNAME 9h
%define GEO_TIMEZONES 0Ah
%define GEO_OFFICIALLANGUAGES 0Bh
%define GEOCLASS_NATION 16
%define GEOCLASS_REGION 14

; IDN (International Domain Name) Flags
%define IDN_ALLOW_UNASSIGNED 1h
%define IDN_USE_STD3_ASCII_RULES 2h
%define VS_ALLOW_LATIN 1h
%define GSS_ALLOW_INHERITED_COMMON 1h

NASMX_STRUC FILEMUIINFO
    NASMX_RESERVE dwSize,               uint32_t, 1
    NASMX_RESERVE dwVersion,            uint32_t, 1
    NASMX_RESERVE dwFileType,           uint32_t, 1
    NASMX_RESERVE pChecksum,            uint8_t, 16
    NASMX_RESERVE pServiceChecksum,     uint8_t, 16
    NASMX_RESERVE dwLanguageNameOffset, uint32_t, 1
    NASMX_RESERVE dwTypeIDMainSize,     uint32_t, 1
    NASMX_RESERVE dwTypeIDMainOffset,   uint32_t, 1
    NASMX_RESERVE dwTypeNameMainOffset, uint32_t, 1
    NASMX_RESERVE dwTypeIDMUISize,      uint32_t, 1
    NASMX_RESERVE dwTypeIDMUIOffset,    uint32_t, 1
    NASMX_RESERVE dwTypeNameMUIOffset,  uint32_t, 1
    NASMX_RESERVE abBuffer,             uint8_t, 8
NASMX_ENDSTRUC

IMPORT IsValidCodePage, uint32_t CodePage
IMPORT GetACP, 0
IMPORT GetOEMCP, 0
IMPORT GetCPInfo, uint32_t, ptrdiff_t lpCPInfo
IMPORT GetCPInfoExA, uint32_t CodePage, uint32_t dwFlags, ptrdiff_t lpCPInfoEx
IMPORT GetCPInfoExW, uint32_t CodePage, uint32_t dwFlags, ptrdiff_t lpCPInfoEx
IMPORT IsDBCSLeadByte, uint8_t TestChar
IMPORT IsDBCSLeadByteEx, uint8_t CodePage, uint8_t TestChar
IMPORT MultiByteToWideChar, uint32_t CodePage, uint32_t dwFlags, ptrdiff_t lpMultiByteStr, int32_t cbMultiByte, ptrdiff_t lpWideCharStr, int32_t cchWideChar
IMPORT WideCharToMultiByte, uint32_t CodePage, uint32_t dwFlags, ptrdiff_t lpWideCharStr, int32_t cchWideChar, ptrdiff_t lpMultiByteStr, int32_t cbMultiByte, ptrdiff_t lpDefaultChar, ptrdiff_t lpUsedDefaultChar
IMPORT CompareStringA, uint32_t Locale, uint32_t dwCmpFlags, ptrdiff_t lpString1, int32_t cchCount1, ptrdiff_t lpString2, int32_t cchCount2
IMPORT CompareStringW, uint32_t Locale, uint32_t dwCmpFlags, ptrdiff_t lpString1, int32_t cchCount1, ptrdiff_t lpString2, int32_t cchCount2
IMPORT FindNLSString, uint32_t Locale, uint32_t dwFindNLSStringFlags, ptrdiff_t lpStringSource, int32_t cchSource, ptrdiff_t lpStringValue, int32_t cchValue, ptrdiff_t pcchFound
IMPORT LCMapStringA, uint32_t Locale, uint32_t dwMapFlags, ptrdiff_t lpSrcStr, int32_t cchSrc, ptrdiff_t lpDestStr, int32_t cchDest
IMPORT LCMapStringW, uint32_t Locale, uint32_t dwMapFlags, ptrdiff_t lpSrcStr, int32_t cchSrc, ptrdiff_t lpDestStr, int32_t cchDest
IMPORT GetLocaleInfoA, uint32_t Locale, uint32_t LCType, ptrdiff_t lpLCData, int32_t cchData
IMPORT GetLocaleInfoW, uint32_t Locale, uint32_t LCType, ptrdiff_t lpLCData, int32_t cchData
IMPORT SetLocaleInfoA, uint32_t Locale, uint32_t LCType, ptrdiff_t lpLCData
IMPORT SetLocaleInfoW, uint32_t Locale, uint32_t LCType, ptrdiff_t lpLCData
IMPORT GetCalendarInfoA, uint32_t Locale, uint32_t Calendar, uint32_t CalType, ptrdiff_t lpCalData, int32_t cchData, ptrdiff_t lpValue
IMPORT GetCalendarInfoW, uint32_t Locale, uint32_t Calendar, uint32_t CalType, ptrdiff_t lpCalData, int32_t cchData, ptrdiff_t lpValue
IMPORT SetCalendarInfoA, uint32_t Locale, uint32_t Calendar, uint32_t CalType, ptrdiff_t lpCalData
IMPORT SetCalendarInfoW, uint32_t Locale, uint32_t Calendar, uint32_t CalType, ptrdiff_t lpCalData
IMPORT LCIDToLocaleName, uint32_t Locale, ptrdiff_t lpName, int32_t cchName, uint32_t dwFlags
IMPORT LocaleNameToLCID, ptrdiff_t lpName, uint32_t dwFlags
IMPORT GetTimeFormatA, uint32_t Locale, uint32_t dwFlags, ptrdiff_t lpTime, ptrdiff_t lpFormat, ptrdiff_t lpTimeStr, int32_t cchTime
IMPORT GetTimeFormatW, uint32_t Locale, uint32_t dwFlags, ptrdiff_t lpTime, ptrdiff_t lpFormat, ptrdiff_t lpTimeStr, int32_t cchTime
IMPORT GetDurationFormat, uint32_t Locale, uint32_t dwFlags, ptrdiff_t lpDuration, size_t ullDuration, ptrdiff_t lpFormat, ptrdiff_t lpDurationStr, int32_t cchDuration
IMPORT GetDateFormatA, uint32_t Locale, uint32_t dwFlags, ptrdiff_t lpDate, ptrdiff_t lpFormat, ptrdiff_t lpDateStr, int32_t cchDate
IMPORT GetDateFormatW, uint32_t Locale, uint32_t dwFlags, ptrdiff_t lpDate, ptrdiff_t lpFormat, ptrdiff_t lpDateStr, int32_t cchDate
IMPORT GetNumberFormatA, uint32_t Locale, uint32_t dwFlags, ptrdiff_t lpValue, ptrdiff_t lpFormat, ptrdiff_t lpNumberStr, int32_t cchNumber
IMPORT GetNumberFormatW, uint32_t Locale, uint32_t dwFlags, ptrdiff_t lpValue, ptrdiff_t lpFormat, ptrdiff_t lpNumberStr, int32_t cchNumber
IMPORT GetCurrencyFormatA, uint32_t Locale, uint32_t dwFlags, ptrdiff_t lpValue, ptrdiff_t lpFormat, ptrdiff_t lpCurrencyStr, int32_t cchCurrency
IMPORT GetCurrencyFormatW, uint32_t Locale, uint32_t dwFlags, ptrdiff_t lpValue, ptrdiff_t lpFormat, ptrdiff_t lpCurrencyStr, int32_t cchCurrency
IMPORT EnumCalendarInfoA, ptrdiff_t lpCalInfoEnumProc, uint32_t Locale, uint32_t Calendar, uint32_t CalType
IMPORT EnumCalendarInfoW, ptrdiff_t lpCalInfoEnumProc, uint32_t Locale, uint32_t Calendar, uint32_t CalType
IMPORT EnumCalendarInfoExA, ptrdiff_t lpCalInfoEnumProcEx, uint32_t Locale, uint32_t Calendar, uint32_t CalType
IMPORT EnumCalendarInfoExW, ptrdiff_t lpCalInfoEnumProcEx, uint32_t Locale, uint32_t Calendar, uint32_t CalType
IMPORT EnumTimeFormatsA, ptrdiff_t lpTimeFmtEnumProc, uint32_t Locale, uint32_t dwFlags
IMPORT EnumTimeFormatsW, ptrdiff_t lpTimeFmtEnumProc, uint32_t Locale, uint32_t dwFlags
IMPORT EnumDateFormatsA, ptrdiff_t lpDateFmtEnumProc, uint32_t Locale, uint32_t dwFlags
IMPORT EnumDateFormatsW, ptrdiff_t lpDateFmtEnumProc, uint32_t Locale, uint32_t dwFlags
IMPORT EnumDateFormatsExA, ptrdiff_t lpDateFmtEnumProcEx, uint32_t Locale, uint32_t dwFlags
IMPORT EnumDateFormatsExW, ptrdiff_t lpDateFmtEnumProcEx, uint32_t Locale, uint32_t dwFlags
IMPORT IsValidLanguageGroup, uint32_t LanguageGroup, uint32_t dwFlags
IMPORT GetNLSVersion, uint32_t Function, uint32_t Locale, ptrdiff_t lpVersionInformation
IMPORT IsNLSDefinedString, uint32_t Function, uint32_t dwFlags, ptrdiff_t lpVersionInformation, ptrdiff_t lpString, int32_t cchStr
IMPORT IsValidLocale, uint32_t Locale, uint32_t dwFlags
IMPORT GetGeoInfoA, uint32_t Location, uint32_t GeoType, ptrdiff_t lpGeoData, int32_t cchData, uint16_t LangId
IMPORT GetGeoInfoW, uint32_t Location, uint32_t GeoType, ptrdiff_t lpGeoData, int32_t cchData, uint16_t LangId
IMPORT EnumSystemGeoID, uint32_t GeoClass, uint32_t ParentGeoId, ptrdiff_t lpGeoEnumProc
IMPORT GetUserGeoID, uint32_t GeoClass
IMPORT SetUserGeoID, uint32_t GeoId
IMPORT ConvertDefaultLocale, uint32_t Locale
IMPORT GetThreadLocale, 0
IMPORT SetThreadLocale, uint32_t Locale
IMPORT GetSystemDefaultUILanguage, 0
IMPORT GetUserDefaultUILanguage, 0
IMPORT GetSystemDefaultLangID, 0
IMPORT GetUserDefaultLangID, 0
IMPORT GetSystemDefaultLCID, 0
IMPORT GetUserDefaultLCID, 0
IMPORT SetThreadUILanguage, uint32_t LangId
IMPORT GetThreadUILanguage, 0
IMPORT GetUserPreferredUILanguages, uint32_t dwFlags, ptrdiff_t pulNumLanguages, ptrdiff_t pwszLanguagesBuffer, ptrdiff_t pcchLanguagesBuffer
IMPORT GetSystemPreferredUILanguages, uint32_t dwFlags, ptrdiff_t pulNumLanguages, ptrdiff_t pwszLanguagesBuffer, ptrdiff_t pcchLanguagesBuffer
IMPORT GetThreadPreferredUILanguages, uint32_t dwFlags, ptrdiff_t pulNumLanguages, ptrdiff_t pwszLanguagesBuffer, ptrdiff_t pcchLanguagesBuffer
IMPORT SetThreadPreferredUILanguages,  uint32_t dwFlags, ptrdiff_t pwszLanguagesBuffer, ptrdiff_t pulNumLanguages
IMPORT GetFileMUIInfo, uint32_t dwFlags, ptrdiff_t pcwszFilePath, ptrdiff_t pcbFileMUIInfo, ptrdiff_t pFileMUIInfo, ptrdiff_t pcbFileMUIInfo
IMPORT GetFileMUIPath, uint32_t dwFlags, ptrdiff_t pcwszFilePath, ptrdiff_t pwszLanguage, ptrdiff_t pcchLanguage, ptrdiff_t pwszFileMUIPath, ptrdiff_t pcchFileMUIPath, ptrdiff_t pululEnumerator
IMPORT GetUILanguageInfo, uint32_t dwFlags, ptrdiff_t pwmszLanguage, ptrdiff_t pwszFallbackLanguages, ptrdiff_t pcchFallbackLanguages, ptrdiff_t pAttributes
IMPORT NotifyUILanguageChange, uint32_t dwFlags, ptrdiff_t pcwstrNewLanguage, ptrdiff_t pcwstrPreviousLanguage, uint32_t dwReserved, ptrdiff_t pdwStatusRtrn
IMPORT GetStringTypeExA, uint32_t Locale, uint32_t dwInfoType, ptrdiff_t lpSrcStr, int32_t cchSrc, ptrdiff_t lpCharType
IMPORT GetStringTypeExW, uint32_t Locale, uint32_t dwInfoType, ptrdiff_t lpSrcStr, int32_t cchSrc, ptrdiff_t lpCharType
IMPORT GetStringTypeA, uint32_t Locale, uint32_t dwInfoType, ptrdiff_t lpSrcStr, int32_t cchSrc, ptrdiff_t lpCharType
IMPORT GetStringTypeW, uint32_t dwInfoType, ptrdiff_t lpSrcStr, int32_t cchSrc, ptrdiff_t lpCharType
IMPORT FoldStringA, uint32_t dwMapFlags, ptrdiff_t lpSrcStr, int32_t cchSrc, ptrdiff_t lpDestStr, int32_t cchDest
IMPORT FoldStringW, uint32_t dwMapFlags, ptrdiff_t lpSrcStr, int32_t cchSrc, ptrdiff_t lpDestStr, int32_t cchDest
IMPORT EnumSystemLanguageGroupsA, ptrdiff_t lpLanguageGroupEnumProc, uint32_t dwFlags, ptrdiff_t lParam
IMPORT EnumSystemLanguageGroupsW, ptrdiff_t lpLanguageGroupEnumProc, uint32_t dwFlags, ptrdiff_t lParam
IMPORT EnumLanguageGroupLocalesA, ptrdiff_t lpLangGroupLocaleEnumProc, uint32_t LanguageGroup, uint32_t dwFlags, ptrdiff_t lParam
IMPORT EnumLanguageGroupLocalesW, ptrdiff_t lpLangGroupLocaleEnumProc, uint32_t LanguageGroup, uint32_t dwFlags, ptrdiff_t lParam
IMPORT EnumUILanguagesA, ptrdiff_t lpUILanguageEnumProc, uint32_t dwFlags, ptrdiff_t lParam
IMPORT EnumUILanguagesW, ptrdiff_t lpUILanguageEnumProc, uint32_t dwFlags, ptrdiff_t lParam
IMPORT EnumSystemLocalesA, ptrdiff_t lpLocaleEnumProc, uint32_t dwFlags
IMPORT EnumSystemLocalesW, ptrdiff_t lpLocaleEnumProc, uint32_t dwFlags
IMPORT EnumSystemCodePagesA, ptrdiff_t lpCodePageEnumProc, uint32_t dwFlags
IMPORT EnumSystemCodePagesW, ptrdiff_t lpCodePageEnumProc, uint32_t dwFlags
IMPORT NormalizeString, uint32_t NormForm, ptrdiff_t lpSrcString, int32_t cwSrcLength, ptrdiff_t lpDstString, uint32_t cwDstLength
IMPORT IsNormalizedString, uint32_t NormForm, ptrdiff_t lpString, int32_t cwLength
IMPORT IdnToAscii, uint32_t dwFlags, ptrdiff_t lpUnicodeCharStr, int32_t cchUnicodeChar, ptrdiff_t lpASCIICharStr, int32_t cchASCIIChar
IMPORT IdnToNameprepUnicode, uint32_t dwFlags, ptrdiff_t lpUnicodeCharStr, int32_t cchUnicodeChar, ptrdiff_t lpNameprepCharStr, int32_t cchNameprepChar
IMPORT IdnToUnicode, uint32_t dwFlags, ptrdiff_t lpASCIICharStr, int32_t cchASCIIChar, ptrdiff_t lpUnicodeCharStr, int32_t cchUnicodeChar
IMPORT VerifyScripts, uint32_t dwFlags, ptrdiff_t lpLocaleScripts, int32_t cchLocaleScripts, ptrdiff_t lpTestScripts, int32_t cchTestScripts
IMPORT GetStringScripts, uint32_t dwFlags, ptrdiff_t lpString, int32_t cchString, ptrdiff_t lpScripts, int32_t cchScripts
IMPORT GetLocaleInfoEx, ptrdiff_t lpLocaleName, uint32_t LCType, ptrdiff_t lpLCData, int32_t cchData
IMPORT GetCalendarInfoEx, ptrdiff_t lpLocaleName, uint32_t Calendar, ptrdiff_t lpReserved, uint32_t CalType, ptrdiff_t lpCalData, uint32_t cchData, ptrdiff_t lpValue
IMPORT GetTimeFormatEx, ptrdiff_t lpLocaleName, uint32_t dwFlags, ptrdiff_t lpTime, ptrdiff_t lpFormat, ptrdiff_t lpTimeStr, int32_t cchTime
IMPORT GetDateFormatEx, ptrdiff_t lpLocaleName, uint32_t dwFlags, ptrdiff_t lpDate, ptrdiff_t lpFormat, ptrdiff_t lpDateStr, int32_t cchDate, ptrdiff_t lpCalendar
IMPORT GetDurationFormatEx, ptrdiff_t lpLocaleName, uint32_t dwFlags, ptrdiff_t lpDuration, uint32_t ullDuration, ptrdiff_t lpFormat, ptrdiff_t lpDurationStr, int32_t cchDuration
IMPORT GetNumberFormatEx, ptrdiff_t lpLocaleName, uint32_t dwFlags, ptrdiff_t lpValue, ptrdiff_t lpFormat, ptrdiff_t lpNumberStr, int32_t cchNumber
IMPORT GetCurrencyFormatEx, ptrdiff_t lpLocaleName, uint32_t dwFlags, ptrdiff_t lpValue, ptrdiff_t lpFormat, ptrdiff_t lpCurrencyStr, int32_t cchCurrency
IMPORT GetUserDefaultLocaleName, ptrdiff_t lpLocaleName, int32_t cchLocaleName
IMPORT GetSystemDefaultLocaleName, ptrdiff_t lpLocaleName, int32_t cchLocaleName
IMPORT GetNLSVersionEx, uint32_t function, ptrdiff_t lpLocaleName, ptrdiff_t lpVersionInformation
IMPORT CompareStringEx, ptrdiff_t lpLocaleName, uint32_t dwCmpFlags, ptrdiff_t lpString1, int32_t cchCount1, ptrdiff_t lpString2, int32_t cchCount2, ptrdiff_t lpVersionInformation, ptrdiff_t lpReserved, size_t lParam
IMPORT FindNLSStringEx, ptrdiff_t lpLocaleName, uint32_t dwFindNLSStringFlags, ptrdiff_t lpStringSource, int32_t cchSource, ptrdiff_t lpStringValue, int32_t cchValue, ptrdiff_t pcchFound, ptrdiff_t lpVersionInformation, ptrdiff_t lpReserved, size_t lParam
IMPORT LCMapStringEx, ptrdiff_t lpLocaleName, uint32_t dwMapFlags, ptrdiff_t lpSrcStr, int32_t cchSrc, ptrdiff_t lpDestStr, int32_t cchDest, ptrdiff_t lpVersionInformation, ptrdiff_t lpReserved, size_t lParam
IMPORT CompareStringOrdinal, ptrdiff_t lpString1, int32_t cchCount1, ptrdiff_t lpString2, int32_t cchCount2, int32_t bIgnoreCase
IMPORT IsValidLocaleName, ptrdiff_t lpLocaleName
IMPORT EnumCalendarInfoExEx, ptrdiff_t pCalInfoEnumProcExEx, ptrdiff_t lpLocaleName, uint32_t Calendar, ptrdiff_t lpReserved, uint32_t CalType, size_t lParam
IMPORT EnumDateFormatsExEx, ptrdiff_t lpDateFmtEnumProcExEx, ptrdiff_t lpLocaleName, uint32_t dwFlags, size_t lParam
IMPORT EnumTimeFormatsEx, ptrdiff_t lpTimeFmtEnumProcEx, ptrdiff_t lpLocaleName, uint32_t dwFlags, size_t lParam
IMPORT EnumSystemLocalesEx, ptrdiff_t lpLocaleEnumProcEx, uint32_t dwFlags, size_t lParam, ptrdiff_t lpReserved

%ifdef UNICODE
%define GetCPInfoEx GetCPInfoExW
%define CompareString CompareStringW
%define LCMapString LCMapStringW
%define GetLocaleInfo GetLocaleInfoW
%define SetLocaleInfo SetLocaleInfoW
%define GetCalendarInfo GetCalendarInfoW
%define SetCalendarInfo SetCalendarInfoW
%define GetTimeFormat GetTimeFormatW
%define GetDateFormat GetDateFormatW
%define GetNumberFormat GetNumberFormatW
%define GetCurrencyFormat GetCurrencyFormatW
%define EnumCalendarInfo EnumCalendarInfoW
%define EnumCalendarInfoEx EnumCalendarInfoExW
%define EnumTimeFormats EnumTimeFormatsW
%define EnumDateFormats EnumDateFormatsW
%define EnumDateFormatsEx EnumDateFormatsExW
%define GetGeoInfo GetGeoInfoW
%define GetStringTypeEx GetStringTypeExW
%define FoldString FoldStringW
%define EnumSystemLanguageGroups EnumSystemLanguageGroupsW
%define EnumLanguageGroupLocales EnumLanguageGroupLocalesW
%define EnumUILanguages EnumUILanguagesW
%define EnumSystemLocales EnumSystemLocalesW
%define EnumSystemCodePages EnumSystemCodePagesW

%else

%define GetCPInfoEx GetCPInfoExA
%define CompareString CompareStringA
%define LCMapString LCMapStringA
%define GetLocaleInfo GetLocaleInfoA
%define SetLocaleInfo SetLocaleInfoA
%define GetCalendarInfo GetCalendarInfoA
%define GetTimeFormat GetTimeFormatA
%define SetCalendarInfo SetCalendarInfoA
%define GetDateFormat GetDateFormatA
%define GetNumberFormat GetNumberFormatA
%define GetCurrencyFormat GetCurrencyFormatA
%define EnumCalendarInfo EnumCalendarInfoA
%define EnumCalendarInfoEx EnumCalendarInfoExA
%define EnumTimeFormats EnumTimeFormatsA
%define EnumDateFormats EnumDateFormatsA
%define EnumDateFormatsEx EnumDateFormatsExA
%define GetGeoInfo GetGeoInfoA
%define GetStringTypeEx GetStringTypeExA
%define FoldString FoldStringA
%define EnumSystemLanguageGroups EnumSystemLanguageGroupsA
%define EnumLanguageGroupLocales EnumLanguageGroupLocalesA
%define EnumUILanguages EnumUILanguagesA
%define EnumSystemLocales EnumSystemLocalesA
%define EnumSystemCodePages EnumSystemCodePagesA

%endif  ;// UNICODE

%endif ;// __NASMX_WINNLS_INC__
