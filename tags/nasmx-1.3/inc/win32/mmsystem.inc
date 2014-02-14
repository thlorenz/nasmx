;//////////////////////////////////////////////////////////////
;//
;// NASMX Preprocessor
;// Copyright (c) 2005-2010, The NASMX Project
;//
;// mmsystem.inc
;// Created by Rob Neff
;//

%ifndef __NASMX_MMSYSTEM_INCLUDED__
%define __NASMX_MMSYSTEM_INCLUDED__

%define MAXPNAMELEN 32
%define MAXERRORLENGTH 256
%define MAX_JOYSTICKOEMVXDNAME 260

%define MM_MICROSOFT       1
%define MM_MIDI_MAPPER     1
%define MM_WAVE_MAPPER     2
%define MM_SNDBLST_MIDIOUT 3
%define MM_SNDBLST_MIDIIN  4
%define MM_SNDBLST_SYNTH   5
%define MM_SNDBLST_WAVEOUT 6
%define MM_SNDBLST_WAVEIN  7
%define MM_ADLIB           9
%define MM_MPU401_MIDIOUT 10
%define MM_MPU401_MIDIIN  11
%define MM_PC_JOYSTICK    12

;// general data types
typedef uint_t, MMVERSION
typedef uint_t, MMRESULT

NASMX_STRUC MMTIME
    NASMX_RESERVE wType, uint32_t, 1
    NASMX_UNION u
        NASMX_RESERVE ms,     uint32_t, 1
        NASMX_RESERVE sample, uint32_t, 1
        NASMX_RESERVE cb,     uint32_t, 1
        NASMX_RESERVE ticks,  uint32_t, 1
        NASMX_STRUC smpte
            NASMX_RESERVE hour,  uint8_t, 1
            NASMX_RESERVE min,   uint8_t, 1
            NASMX_RESERVE sec,   uint8_t, 1
            NASMX_RESERVE frame, uint8_t, 1
            NASMX_RESERVE fps,   uint8_t, 1
            NASMX_RESERVE dummy, uint8_t, 1
%ifidni __OUTPUT_FORMAT__,win32
            NASMX_RESERVE pad,   uint8_t, 2
%endif
        NASMX_ENDSTRUC
        NASMX_STRUC midi
            NASMX_RESERVE songptrpos, uint32_t, 1
        NASMX_ENDSTRUC
    NASMX_ENDUNION
NASMX_ENDSTRUC

;// types for wType field in MMTIME struct
%define TIME_MS      1h
%define TIME_SAMPLES 2h
%define TIME_BYTES   4h
%define TIME_SMPTE   8h
%define TIME_MIDI   10h
%define TIME_TICKS  20h

;// Multimedia Extensions Window Messages
%define MM_JOY1MOVE         3A0h
%define MM_JOY2MOVE         3A1h
%define MM_JOY1ZMOVE        3A2h
%define MM_JOY2ZMOVE        3A3h
%define MM_JOY1BUTTONDOWN   3B5h
%define MM_JOY2BUTTONDOWN   3B6h
%define MM_JOY1BUTTONUP     3B7h
%define MM_JOY2BUTTONUP     3B8h
%define MM_MCINOTIFY        3B9h
%define MM_MCISYSTEM_STRING 3CAh
%define MM_WOM_OPEN         3BBh
%define MM_WOM_CLOSE        3BCh
%define MM_WOM_DONE         3BDh
%define MM_WIM_OPEN         3BEh
%define MM_WIM_CLOSE        3BFh
%define MM_WIM_DATA         3C0h
%define MM_MIM_OPEN         3C1h
%define MM_MIM_CLOSE        3C2h
%define MM_MIM_DATA         3C3h
%define MM_MIM_LONGDATA     3C4h
%define MM_MIM_ERROR        3C5h
%define MM_MIM_LONGERROR    3C6h
%define MM_MOM_OPEN         3C7h
%define MM_MOM_CLOSE        3C8h
%define MM_MOM_DONE         3C9h
;// these are also in msvideo.h
%ifndef MM_DRVM_OPEN
 %define MM_DRVM_OPEN       3D0h
 %define MM_DRVM_CLOSE      3D1h
 %define MM_DRVM_DATA       3D2h
 %define MM_DRVM_ERROR      3D3h
%endif
;// these are used by msacm.h
%define MM_STREAM_OPEN      3D4h
%define MM_STREAM_CLOSE     3D5h
%define MM_STREAM_DONE      3D6h
%define MM_STREAM_ERROR     3D7h
%define MM_MOM_POSITIONCB   3CAh
%define MM_MCISIGNAL        3CBh
%define MM_MIM_MOREDATA     3CCh
%define MM_MIXM_LINE_CHANGE    3D0h
%define MM_MIXM_CONTROL_CHANGE 3D1h
;// String resource number bases (internal use)
%define MMSYSERR_BASE  0
%define WAVERR_BASE   32
%define MIDIERR_BASE  64
%define TIMERR_BASE   96
%define JOYERR_BASE  160
%define MCIERR_BASE  256
%define MIXERR_BASE 1024
%define MCI_STRING_OFFSET 512
%define MCI_VD_OFFSET    1024
%define MCI_CD_OFFSET    1088
%define MCI_WAVE_OFFSET  1152
%define MCI_SEQ_OFFSET   1216

;// General error return values
%define MMSYSERR_NOERROR      0
%define MMSYSERR_ERROR        (MMSYSERR_BASE+1)
%define MMSYSERR_BADDEVICEID  (MMSYSERR_BASE+2)
%define MMSYSERR_NOTENABLED   (MMSYSERR_BASE+3)
%define MMSYSERR_ALLOCATED    (MMSYSERR_BASE+4)
%define MMSYSERR_INVALHANDLE  (MMSYSERR_BASE+5)
%define MMSYSERR_NODRIVER     (MMSYSERR_BASE+6)
%define MMSYSERR_NOMEM        (MMSYSERR_BASE+7)
%define MMSYSERR_NOTSUPPORTED (MMSYSERR_BASE+8)
%define MMSYSERR_BADERRNUM    (MMSYSERR_BASE+9)
%define MMSYSERR_INVALFLAG    (MMSYSERR_BASE+10)
%define MMSYSERR_INVALPARAM   (MMSYSERR_BASE+11)
%define MMSYSERR_HANDLEBUSY   (MMSYSERR_BASE+12)
%define MMSYSERR_INVALIDALIAS (MMSYSERR_BASE+13)
%define MMSYSERR_BADDB        (MMSYSERR_BASE+14)
%define MMSYSERR_KEYNOTFOUND  (MMSYSERR_BASE+15)
%define MMSYSERR_READERROR    (MMSYSERR_BASE+16)
%define MMSYSERR_WRITEERROR   (MMSYSERR_BASE+17)
%define MMSYSERR_DELETEERROR  (MMSYSERR_BASE+18)
%define MMSYSERR_VALNOTFOUND  (MMSYSERR_BASE+19)
%define MMSYSERR_NODRIVERCB   (MMSYSERR_BASE+20)
%define MMSYSERR_MOREDATA     (MMSYSERR_BASE+21)
%define MMSYSERR_LASTERROR    (MMSYSERR_BASE+21)

%ifndef MMNODRV

;// Installable driver support
NASMX_STRUC DRVCONFIGINFOEX
    NASMX_RESERVE dwDCISize,          uint32_t, 1
    NASMX_RESERVE lpszDCISectionName, NASMX_PTR, 1
    NASMX_RESERVE lpszDCIAliasName,   NASMX_PTR, 1
    NASMX_RESERVE dnDevNode,          uint32_t, 1
NASMX_ENDSTRUC

%ifndef DRV_LOAD
%define DRV_LOAD           1h
%define DRV_ENABLE         2h
%define DRV_OPEN           3h
%define DRV_CLOSE          4h
%define DRV_DISABLE        5h
%define DRV_FREE           6h
%define DRV_CONFIGURE      7h
%define DRV_QUERYCONFIGURE 8h
%define DRV_INSTALL        9h
%define DRV_REMOVE        0Ah
%define DRV_EXITSESSION   0Bh
%define DRV_POWER         0Fh
%define DRV_RESERVED     800h
%define DRV_USER        4000h

NASMX_STRUC DRVCONFIGINFO
    NASMX_RESERVE dwDCISize,          int32_t, 1
    NASMX_RESERVE lpszDCISectionName, NASMX_PTR, 1
    NASMX_RESERVE lpszDCIAliasName,   NASMX_PTR, 1
NASMX_ENDSTRUC

%define DRVCNF_CANCEL  0h
%define DRVCNF_OK      1h
%define DRVCNF_RESTART 2h

%endif  ;// ifndef DRV_LOAD

%define DRV_CANCEL     DRVCNF_CANCEL
%define DRV_OK         DRVCNF_OK
%define DRV_RESTART    DRVCNF_RESTART
%define DRV_MCI_FIRST  DRV_RESERVED
%define DRV_MCI_LAST   (DRV_RESERVED+0FFFh)

%endif  ;// ifndef MMNODRV

%define CALLBACK_TYPEMASK 70000h
%define CALLBACK_NULL         0h
%define CALLBACK_WINDOW   10000h
%define CALLBACK_TASK     20000h
%define CALLBACK_FUNCTION 30000h
%define CALLBACK_THREAD   CALLBACK_TASK
%define CALLBACK_EVENT    50000h

%ifndef MMNOSOUND
;////////////////////////////////////////
;//
;// Sound support
;//
%define SND_SYNC             0h
%define SND_ASYNC            1h
%define SND_NODEFAULT        2h
%define SND_MEMORY           4h
%define SND_LOOP             8h
%define SND_NOSTOP          10h

%define SND_NOWAIT        2000h
%define SND_ALIAS        10000h
%define SND_ALIAS_ID    110000h
%define SND_FILENAME     20000h
%define SND_RESOURCE     40004h
%define SND_PURGE           40h
%define SND_APPLICATION     80h

%define SND_ALIAS_START       0
%endif  ;// ifndef MMNOSOUND

%ifndef MMNOWAVE
;//////////////////////////////
;// Waveform audio support
;//

;// waveform audio error return values
%define WAVERR_BADFORMAT    (WAVERR_BASE+0)
%define WAVERR_STILLPLAYING (WAVERR_BASE+1)
%define WAVERR_UNPREPARED   (WAVERR_BASE+2)
%define WAVERR_SYNC         (WAVERR_BASE+3)
%define WAVERR_LASTERROR    (WAVERR_BASE+3)

;// wave callback messages
%define WOM_OPEN  MM_WOM_OPEN
%define WOM_CLOSE MM_WOM_CLOSE
%define WOM_DONE  MM_WOM_DONE
%define WIM_OPEN  MM_WIM_OPEN
%define WIM_CLOSE MM_WIM_CLOSE
%define WIM_DATA  MM_WIM_DATA

%define WAVE_MAPPER -1

;// flags for dwFlags parameter in waveOutOpen() and waveInOpen()
%define WAVE_FORMAT_QUERY  1h
%define WAVE_ALLOWSYNC     2h
%define WAVE_MAPPED        4h
%define WAVE_FORMAT_DIRECT 8h
%define WAVE_FORMAT_DIRECT_QUERY WAVE_FORMAT_QUERY|WAVE_FORMAT_DIRECT

NASMX_STRUC WAVEHDR
    NASMX_RESERVE lpData,          NASMX_PTR, 1
    NASMX_RESERVE dwBufferiLength, uint32_t, 1
    NASMX_RESERVE dwBytesRecorded, uint32_t, 1
    NASMX_RESERVE dwUser,          size_t, 1
    NASMX_RESERVE dwFlags,         uint32_t, 1
    NASMX_RESERVE dwLoops,         uint32_t, 1
    NASMX_RESERVE lpNext,          NASMX_PTR, 1
    NASMX_RESERVE Reserved,        size_t, 1
NASMX_ENDSTRUC

;// flags for dwFlags field of WAVEHDR
%define WHDR_DONE      1h
%define WHDR_PREPARED  2h
%define WHDR_BEGINLOOP 4h
%define WHDR_ENDLOOP   8h
%define WHDR_INQUEUE  10h

;// waveform output device capabilities structure
NASMX_STRUC WAVEOUTCAPSA
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, uint32_t, 1
    NASMX_RESERVE szPname,        char_t, MAXPNAMELEN
    NASMX_RESERVE dwFormats,      uint32_t, 1
    NASMX_RESERVE wChannels,      uint16_t, 1
    NASMX_RESERVE wReserved1,     uint16_t, 1
    NASMX_RESERVE dwSupport,      uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC WAVEOUTCAPSW
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, uint32_t, 1
    NASMX_RESERVE szPname,        wchar_t, MAXPNAMELEN
    NASMX_RESERVE dwFormats,      uint32_t, 1
    NASMX_RESERVE wChannels,      uint16_t, 1
    NASMX_RESERVE wReserved1,     uint16_t, 1
    NASMX_RESERVE dwSupport,      uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC WAVEOUTCAPS2A
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, uint32_t, 1
    NASMX_RESERVE szPname,        char_t, MAXPNAMELEN
    NASMX_RESERVE dwFormats,      uint32_t, 1
    NASMX_RESERVE wChannels,      uint16_t, 1
    NASMX_RESERVE wReserved1,     uint16_t, 1
    NASMX_RESERVE dwSupport,      uint32_t, 1
    NASMX_STRUC ManufacturerGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC ProductGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC NameGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC WAVEOUTCAPS2W
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, uint32_t, 1
    NASMX_RESERVE szPname,        wchar_t, MAXPNAMELEN
    NASMX_RESERVE dwFormats,      uint32_t, 1
    NASMX_RESERVE wChannels,      uint16_t, 1
    NASMX_RESERVE wReserved1,     uint16_t, 1
    NASMX_RESERVE dwSupport,      uint32_t, 1
    NASMX_STRUC ManufacturerGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC ProductGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC NameGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

;// flags for dwSupport field of WAVEOUTCAPS
%define WAVECAPS_PITCH           1h
%define WAVECAPS_PLAYBACKRATE    2h
%define WAVECAPS_VOLUME          4h
%define WAVECAPS_LRVOLUME        8h
%define WAVECAPS_SYNC           10h
%define WAVECAPS_SAMPLEACCURATE 20h

;// waveform input device capabilities structure
NASMX_STRUC WAVEINCAPSA
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, int32_t, 1
    NASMX_RESERVE szPname,        char_t, MAXPNAMELEN
    NASMX_RESERVE dwFormats,      int32_t, 1
    NASMX_RESERVE wChannels,      uint16_t, 1
    NASMX_RESERVE wReserved1,     uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC WAVEINCAPSW
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, int32_t, 1
    NASMX_RESERVE szPname,        wchar_t, MAXPNAMELEN
    NASMX_RESERVE dwFormats,      int32_t, 1
    NASMX_RESERVE wChannels,      uint16_t, 1
    NASMX_RESERVE wReserved1,     uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC WAVEINCAPS2A
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, int32_t, 1
    NASMX_RESERVE szPname,        char_t, MAXPNAMELEN
    NASMX_RESERVE dwFormats,      int32_t, 1
    NASMX_RESERVE wChannels,      uint16_t, 1
    NASMX_RESERVE wReserved1,     uint16_t, 1
    NASMX_STRUC ManufacturerGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC ProductGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC NameGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC WAVEINCAPS2W
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, int32_t, 1
    NASMX_RESERVE szPname,        wchar_t, MAXPNAMELEN
    NASMX_RESERVE dwFormats,      int32_t, 1
    NASMX_RESERVE wChannels,      uint16_t, 1
    NASMX_RESERVE wReserved1,     uint16_t, 1
    NASMX_STRUC ManufacturerGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC ProductGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC NameGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

;// defines for dwFormat field of WAVEINCAPS and WAVEOUTCAPS
%define WAVE_INVALIDFORMAT 0h
%define WAVE_FORMAT_1M08   1h
%define WAVE_FORMAT_1S08   2h
%define WAVE_FORMAT_1M16   4h
%define WAVE_FORMAT_1S16   8h
%define WAVE_FORMAT_2M08  10h
%define WAVE_FORMAT_2S08  20h
%define WAVE_FORMAT_2M16  40h
%define WAVE_FORMAT_2S16  80h
%define WAVE_FORMAT_4M08 100h
%define WAVE_FORMAT_4S08 200h
%define WAVE_FORMAT_4M16 400h
%define WAVE_FORMAT_4S16 800h

%define WAVE_FORMAT_44M08 0x00000100
%define WAVE_FORMAT_44S08 0x00000200
%define WAVE_FORMAT_44M16 0x00000400
%define WAVE_FORMAT_44S16 0x00000800
%define WAVE_FORMAT_48M08 0x00001000
%define WAVE_FORMAT_48S08 0x00002000
%define WAVE_FORMAT_48M16 0x00004000
%define WAVE_FORMAT_48S16 0x00008000
%define WAVE_FORMAT_96M08 0x00010000
%define WAVE_FORMAT_96S08 0x00020000
%define WAVE_FORMAT_96M16 0x00040000
%define WAVE_FORMAT_96S16 0x00080000

%ifndef WAVE_FORMAT_PCM
%define WAVE_FORMAT_PCM 1

NASMX_STRUC WAVEFORMAT
    NASMX_RESERVE wFormatTag,      uint16_t, 1
    NASMX_RESERVE nChannels,       uint16_t, 1
    NASMX_RESERVE nSamplesPerSec,  uint32_t, 1
    NASMX_RESERVE nAvgBytesPerSec, uint32_t, 1
    NASMX_RESERVE nBlockAlign,     uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PCMWAVEFORMAT
    NASMX_STRUC wf, WAVEFORMAT
        NASMX_RESERVE wFormatTag,      uint16_t, 1
        NASMX_RESERVE nChannels,       uint16_t, 1
        NASMX_RESERVE nSamplesPerSec,  uint32_t, 1
        NASMX_RESERVE nAvgBytesPerSec, uint32_t, 1
        NASMX_RESERVE nBlockAlign,     uint16_t, 1
    NASMX_ENDSTRUC
    NASMX_RESERVE wBitsPerSample, uint16_t, 1
NASMX_ENDSTRUC

%endif  ;// ifndef WAVE_FORMAT_PCM

%ifndef _WAVEFORMATEX_
%define _WAVEFORMATEX_

NASMX_STRUC WAVEFORMATEX
    NASMX_RESERVE wFormatTag,      uint16_t, 1
    NASMX_RESERVE nChannels,       uint16_t, 1
    NASMX_RESERVE nSamplesPerSec,  uint32_t, 1
    NASMX_RESERVE nAvgBytesPerSec, uint32_t, 1
    NASMX_RESERVE nBlockAlign,     uint16_t, 1
    NASMX_RESERVE wBitsPerSample,  uint16_t, 1
    NASMX_RESERVE cbSize,          uint16_t, 1
NASMX_ENDSTRUC

%endif  ;// _WAVEFORMATEX_

%endif  ;// ifndef MMNOWAVE

%ifndef MMNOMIDI

%define MIDIERR_UNPREPARED    (MIDIERR_BASE+0)
%define MIDIERR_STILLPLAYING  (MIDIERR_BASE+1)
%define MIDIERR_NOMAP         (MIDIERR_BASE+2)
%define MIDIERR_NOTREADY      (MIDIERR_BASE+3)
%define MIDIERR_NODEVICE      (MIDIERR_BASE+4)
%define MIDIERR_INVALIDSETUP  (MIDIERR_BASE+5)
%define MIDIERR_BADOPENMODE   (MIDIERR_BASE+6)
%define MIDIERR_DONT_CONTINUE (MIDIERR_BASE+7)
%define MIDIERR_LASTERROR     (MIDIERR_BASE+7)

;// MIDI callback messages
%define MIM_OPEN       MM_MIM_OPEN
%define MIM_CLOSE      MM_MIM_CLOSE
%define MIM_DATA       MM_MIM_DATA
%define MIM_LONGDATA   MM_MIM_LONGDATA
%define MIM_ERROR      MM_MIM_ERROR
%define MIM_LONGERROR  MM_MIM_LONGERROR
%define MOM_OPEN       MM_MOM_OPEN
%define MOM_CLOSE      MM_MOM_CLOSE
%define MOM_DONE       MM_MOM_DONE
%define MIM_MOREDATA   MM_MIM_MOREDATA
%define MOM_POSITIONCB MM_MOM_POSITIONCB
;// device ID for MIDI mapper
%define MIDIMAPPER -1
%define MIDI_MAPPER -1
;// flags for dwFlags parm of midiInOpen()
%define MIDI_IO_STATUS 20h
;// flags for wFlags parm of midiOutCachePatches(), midiOutCacheDrumPatches()
%define MIDI_CACHE_ALL     1
%define MIDI_CACHE_BESTFIT 2
%define MIDI_CACHE_QUERY   3
%define MIDI_UNCACHE       4

NASMX_STRUC MIDIOUTCAPSA
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, int32_t, 1
    NASMX_RESERVE szPname,        char_t, MAXPNAMELEN
    NASMX_RESERVE wTechnology,    uint16_t, 1
    NASMX_RESERVE wVoices,        uint16_t, 1
    NASMX_RESERVE wNotes,         uint16_t, 1
    NASMX_RESERVE wChannelMask,   uint16_t, 1
    NASMX_RESERVE dwSupport,      uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MIDIOUTCAPSW
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, int32_t, 1
    NASMX_RESERVE szPname,        wchar_t, MAXPNAMELEN
    NASMX_RESERVE wTechnology,    uint16_t, 1
    NASMX_RESERVE wVoices,        uint16_t, 1
    NASMX_RESERVE wNotes,         uint16_t, 1
    NASMX_RESERVE wChannelMask,   uint16_t, 1
    NASMX_RESERVE dwSupport,      uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MIDIOUTCAPS2A
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, int32_t, 1
    NASMX_RESERVE szPname,        char_t, MAXPNAMELEN
    NASMX_RESERVE wTechnology,    uint16_t, 1
    NASMX_RESERVE wVoices,        uint16_t, 1
    NASMX_RESERVE wNotes,         uint16_t, 1
    NASMX_RESERVE wChannelMask,   uint16_t, 1
    NASMX_RESERVE dwSupport,      uint32_t, 1
    NASMX_STRUC ManufacturerGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC ProductGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC NameGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC MIDIOUTCAPS2W
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, int32_t, 1
    NASMX_RESERVE szPname,        wchar_t, MAXPNAMELEN
    NASMX_RESERVE wTechnology,    uint16_t, 1
    NASMX_RESERVE wVoices,        uint16_t, 1
    NASMX_RESERVE wNotes,         uint16_t, 1
    NASMX_RESERVE wChannelMask,   uint16_t, 1
    NASMX_RESERVE dwSupport,      uint32_t, 1
    NASMX_STRUC ManufacturerGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC ProductGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC NameGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

;// flags for wTechnology field of MIDIOUTCAPS structure
%define MOD_MIDIPORT  1
%define MOD_SYNTH     2
%define MOD_SQSYNTH   3
%define MOD_FMSYNTH   4
%define MOD_MAPPER    5
%define MOD_WAVETABLE 6
%define MOD_SWSYNTH   7

;// flags for dwSupport field of MIDIOUTCAPS structure
%define MIDICAPS_VOLUME   1h
%define MIDICAPS_LRVOLUME 2h
%define MIDICAPS_CACHE    4h
%define MIDICAPS_STREAM   8h

NASMX_STRUC MIDIINCAPSA
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, uint32_t, 1
    NASMX_RESERVE szPname,        char_t, MAXPNAMELEN
    NASMX_RESERVE dwSupport, uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MIDIINCAPSW
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, uint32_t, 1
    NASMX_RESERVE szPname,        wchar_t, MAXPNAMELEN
    NASMX_RESERVE dwSupport, uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MIDIINCAPS2A
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, uint32_t, 1
    NASMX_RESERVE szPname,        char_t, MAXPNAMELEN
    NASMX_RESERVE dwSupport, uint32_t, 1
    NASMX_STRUC ManufacturerGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC ProductGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC NameGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC MIDIINCAPS2W
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, uint32_t, 1
    NASMX_RESERVE szPname,        wchar_t, MAXPNAMELEN
    NASMX_RESERVE dwSupport, uint32_t, 1
    NASMX_STRUC ManufacturerGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC ProductGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC NameGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

;// MIDI data block header
NASMX_STRUC MIDIHDR
    NASMX_RESERVE lpData,          NASMX_PTR, 1
    NASMX_RESERVE dwBufferLength,  uint32_t, 1
    NASMX_RESERVE dwBytesRecorded, uint32_t, 1
    NASMX_RESERVE dwUser,          size_t, 1
    NASMX_RESERVE dwFlags,         uint32_t, 1
    NASMX_RESERVE lpNext,          NASMX_PTR, 1
    NASMX_RESERVE reserved,        size_t, 1
    NASMX_RESERVE dwOffset,        uint32_t, 1
    NASMX_RESERVE dwReserved,      size_t, 8
NASMX_ENDSTRUC

NASMX_STRUC MIDIEVENT
    NASMX_RESERVE dwDeltaTime, uint32_t, 1
    NASMX_RESERVE dwStreamID,  uint32_t, 1
    NASMX_RESERVE dwEvent,     uint32_t, 1
    NASMX_RESERVE dwParms,     uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MIDISTRMBUFFVER
    NASMX_RESERVE dwVersion,    uint32_t, 1
    NASMX_RESERVE dwMid,        uint32_t, 1
    NASMX_RESERVE dwOEMVersion, uint32_t, 1
NASMX_ENDSTRUC

;// flags for dwFlags field of MIDIHDR structure
%define MHDR_DONE     1h
%define MHDR_PREPARED 2h
%define MHDR_INQUEUE  4h
%define MHDR_VALID    7h
%define MHDR_ISSTRM   8h

%define MEVT_F_SHORT           0h
%define MEVT_F_LONG     80000000h
%define MEVT_F_CALLBACK 40000000h

%define MEVT_SHORTMSG  0h
%define MEVT_TEMPO     1h
%define MEVT_NOP       2h

%define MEVT_LONGMSG   80h
%define MEVT_COMMENT   82h
%define MEVT_VERSION   84h

%define MIDISTRM_ERROR -2
%define MIDIPROP_SET 80000000h
%define MIDIPROP_GET 40000000h
%define MIDIPROP_TIMEDIV 1h
%define MIDIPROP_TEMPO   2h

NASMX_STRUC MIDIPROPTIMEDIV
    NASMX_RESERVE cbStruct,  uint32_t, 1
    NASMX_RESERVE dwTimeDiv, uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MIDIPROPTEMPO
    NASMX_RESERVE cbStruct, uint32_t, 1
    NASMX_RESERVE dwTempo,  uint32_t, 1
NASMX_ENDSTRUC

%endif  ;// ifndef MMNOMIDI

%ifndef MMNOAUX
;///////////////////////////////////////
;//
;// Auxiliary audio support
;//
%define AUX_MAPPER -1

NASMX_STRUC AUXCAPSA
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, uint32_t, 1
    NASMX_RESERVE szPname,        char_t, MAXPNAMELEN
    NASMX_RESERVE wTechnology,    uint16_t, 1
    NASMX_RESERVE wReserved1,     uint16_t, 1
    NASMX_RESERVE dwSupport,      uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AUXCAPSW
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, uint32_t, 1
    NASMX_RESERVE szPname,        wchar_t, MAXPNAMELEN
    NASMX_RESERVE wTechnology,    uint16_t, 1
    NASMX_RESERVE wReserved1,     uint16_t, 1
    NASMX_RESERVE dwSupport,      uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AUXCAPS2A
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, uint32_t, 1
    NASMX_RESERVE szPname,        char_t, MAXPNAMELEN
    NASMX_RESERVE wTechnology,    uint16_t, 1
    NASMX_RESERVE wReserved1,     uint16_t, 1
    NASMX_RESERVE dwSupport,      uint32_t, 1
    NASMX_STRUC ManufacturerGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC ProductGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC NameGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC AUXCAPS2W
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, uint32_t, 1
    NASMX_RESERVE szPname,        wchar_t, MAXPNAMELEN
    NASMX_RESERVE wTechnology,    uint16_t, 1
    NASMX_RESERVE wReserved1,     uint16_t, 1
    NASMX_RESERVE dwSupport,      uint32_t, 1
    NASMX_STRUC ManufacturerGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC ProductGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC NameGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

;// flags for wTechnology field in AUXCAPS structure
%define AUXCAPS_CDAUDIO   1
%define AUXCAPS_AUXIN     2

;// flags for dwSupport field in AUXCAPS structure
%define AUXCAPS_VOLUME   1h
%define AUXCAPS_LRVOLUME 2h

%endif  ;// ifndef MMNOAUX

%ifndef MMNOMIXER
;/////////////////////////////////////////////
;//
;// Mixer Support
;//

%define MIXER_SHORT_NAME_CHARS 16
%define MIXER_LONG_NAME_CHARS  64

%define MIXERR_INVALLINE    (MIXERR_BASE+0)
%define MIXERR_INVALCONTROL (MIXERR_BASE+1)
%define MIXERR_INVALVALUE   (MIXERR_BASE+2)
%define MIXERR_LASTERROR    (MIXERR_BASE+2)

%define MIXER_OBJECTF_HANDLE   80000000h
%define MIXER_OBJECTF_MIXER    0h
%define MIXER_OBJECTF_HMIXER   (MIXER_OBJECTF_HANDLE|MIXER_OBJECTF_MIXER)
%define MIXER_OBJECTF_WAVEOUT  10000000h
%define MIXER_OBJECTF_HWAVEOUT (MIXER_OBJECTF_HANDLE|MIXER_OBJECTF_WAVEOUT)
%define MIXER_OBJECTF_WAVEIN   20000000h
%define MIXER_OBJECTF_HWAVEIN  (MIXER_OBJECTF_HANDLE|MIXER_OBJECTF_WAVEIN)
%define MIXER_OBJECTF_MIDIOUT  30000000h
%define MIXER_OBJECTF_HMIDIOUT (MIXER_OBJECTF_HANDLE|MIXER_OBJECTF_MIDIOUT)
%define MIXER_OBJECTF_MIDIIN   40000000h
%define MIXER_OBJECTF_HMIDIIN  (MIXER_OBJECTF_HANDLE|MIXER_OBJECTF_MIDIIN)
%define MIXER_OBJECTF_AUX      50000000h

NASMX_STRUC MIXERCAPSA
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, uint32_t, 1
    NASMX_RESERVE szPname,        char_t, MAXPNAMELEN
    NASMX_RESERVE fdwSupport,     uint32_t, 1
    NASMX_RESERVE cDestinations,  uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MIXERCAPSW
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, uint32_t, 1
    NASMX_RESERVE szPname,        wchar_t, MAXPNAMELEN
    NASMX_RESERVE fdwSupport,     uint32_t, 1
    NASMX_RESERVE cDestinations,  uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MIXERCAPS2A
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, uint32_t, 1
    NASMX_RESERVE szPname,        char_t, MAXPNAMELEN
    NASMX_RESERVE fdwSupport,     uint32_t, 1
    NASMX_RESERVE cDestinations,  uint32_t, 1
    NASMX_STRUC ManufacturerGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC ProductGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC NameGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC MIXERCAPS2W
    NASMX_RESERVE wMid,           uint16_t, 1
    NASMX_RESERVE wPid,           uint16_t, 1
    NASMX_RESERVE vDriverVersion, uint32_t, 1
    NASMX_RESERVE szPname,        wchar_t, MAXPNAMELEN
    NASMX_RESERVE fdwSupport,     uint32_t, 1
    NASMX_RESERVE cDestinations,  uint32_t, 1
    NASMX_STRUC ManufacturerGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC ProductGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC NameGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC MIXERLINEA
    NASMX_RESERVE cbStruct,        uint32_t, 1
    NASMX_RESERVE dwDestination,   uint32_t, 1
    NASMX_RESERVE dwSource,        uint32_t, 1
    NASMX_RESERVE dwLineID,        uint32_t, 1
    NASMX_RESERVE fdwLine,         uint32_t, 1
    NASMX_RESERVE dwUser,          size_t, 1
    NASMX_RESERVE dwComponentType, uint32_t, 1
    NASMX_RESERVE cChannels,       uint32_t, 1
    NASMX_RESERVE cConnections,    uint32_t, 1
    NASMX_RESERVE cControls,       uint32_t, 1
    NASMX_RESERVE szShortName,     char_t, MIXER_SHORT_NAME_CHARS
    NASMX_RESERVE szName,          char_t, MIXER_LONG_NAME_CHARS
    NASMX_STRUC Target
        NASMX_RESERVE dwType,         uint32_t, 1
        NASMX_RESERVE dwDeviceID,     uint16_t, 1
        NASMX_RESERVE wMid,           uint16_t, 1
        NASMX_RESERVE wPid,           uint16_t, 1
        NASMX_RESERVE vDriverVersion, uint32_t, 1
        NASMX_RESERVE szPname,        char_t, MAXPNAMELEN
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC MIXERLINEW
    NASMX_RESERVE cbStruct,        uint32_t, 1
    NASMX_RESERVE dwDestination,   uint32_t, 1
    NASMX_RESERVE dwSource,        uint32_t, 1
    NASMX_RESERVE dwLineID,        uint32_t, 1
    NASMX_RESERVE fdwLine,         uint32_t, 1
    NASMX_RESERVE dwUser,          size_t, 1
    NASMX_RESERVE dwComponentType, uint32_t, 1
    NASMX_RESERVE cChannels,       uint32_t, 1
    NASMX_RESERVE cConnections,    uint32_t, 1
    NASMX_RESERVE cControls,       uint32_t, 1
    NASMX_RESERVE szShortName,     wchar_t, MIXER_SHORT_NAME_CHARS
    NASMX_RESERVE szName,          wchar_t, MIXER_LONG_NAME_CHARS
    NASMX_STRUC Target
        NASMX_RESERVE dwType,         uint32_t, 1
        NASMX_RESERVE dwDeviceID,     uint16_t, 1
        NASMX_RESERVE wMid,           uint16_t, 1
        NASMX_RESERVE wPid,           uint16_t, 1
        NASMX_RESERVE vDriverVersion, uint32_t, 1
        NASMX_RESERVE szPname,        wchar_t, MAXPNAMELEN
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

%define MIXERLINE_LINEF_ACTIVE          1h
%define MIXERLINE_LINEF_DISCONNECTED 8000h
%define MIXERLINE_LINEF_SOURCE   80000000h

;// component types for destinations and sources
%define MIXERLINE_COMPONENTTYPE_DST_FIRST 0h
%define MIXERLINE_COMPONENTTYPE_DST_UNDEFINED   (MIXERLINE_COMPONENTTYPE_DST_FIRST+0)
%define MIXERLINE_COMPONENTTYPE_DST_DIGITAL     (MIXERLINE_COMPONENTTYPE_DST_FIRST+1)
%define MIXERLINE_COMPONENTTYPE_DST_LINE        (MIXERLINE_COMPONENTTYPE_DST_FIRST+2)
%define MIXERLINE_COMPONENTTYPE_DST_MONITOR     (MIXERLINE_COMPONENTTYPE_DST_FIRST+3)
%define MIXERLINE_COMPONENTTYPE_DST_SPEAKERS    (MIXERLINE_COMPONENTTYPE_DST_FIRST+4)
%define MIXERLINE_COMPONENTTYPE_DST_HEADPHONES  (MIXERLINE_COMPONENTTYPE_DST_FIRST+5)
%define MIXERLINE_COMPONENTTYPE_DST_TELEPHONE   (MIXERLINE_COMPONENTTYPE_DST_FIRST+6)
%define MIXERLINE_COMPONENTTYPE_DST_WAVEIN      (MIXERLINE_COMPONENTTYPE_DST_FIRST+7)
%define MIXERLINE_COMPONENTTYPE_DST_VOICEIN     (MIXERLINE_COMPONENTTYPE_DST_FIRST+8)
%define MIXERLINE_COMPONENTTYPE_DST_LAST        (MIXERLINE_COMPONENTTYPE_DST_FIRST+8)
%define MIXERLINE_COMPONENTTYPE_SRC_FIRST 1000h
%define MIXERLINE_COMPONENTTYPE_SRC_UNDEFINED   (MIXERLINE_COMPONENTTYPE_SRC_FIRST+0)
%define MIXERLINE_COMPONENTTYPE_SRC_DIGITAL     (MIXERLINE_COMPONENTTYPE_SRC_FIRST+1)
%define MIXERLINE_COMPONENTTYPE_SRC_LINE        (MIXERLINE_COMPONENTTYPE_SRC_FIRST+2)
%define MIXERLINE_COMPONENTTYPE_SRC_MICROPHONE  (MIXERLINE_COMPONENTTYPE_SRC_FIRST+3)
%define MIXERLINE_COMPONENTTYPE_SRC_SYNTHESIZER (MIXERLINE_COMPONENTTYPE_SRC_FIRST+4)
%define MIXERLINE_COMPONENTTYPE_SRC_COMPACTDISC (MIXERLINE_COMPONENTTYPE_SRC_FIRST+5)
%define MIXERLINE_COMPONENTTYPE_SRC_TELEPHONE   (MIXERLINE_COMPONENTTYPE_SRC_FIRST+6)
%define MIXERLINE_COMPONENTTYPE_SRC_PCSPEAKER   (MIXERLINE_COMPONENTTYPE_SRC_FIRST+7)
%define MIXERLINE_COMPONENTTYPE_SRC_WAVEOUT     (MIXERLINE_COMPONENTTYPE_SRC_FIRST+8)
%define MIXERLINE_COMPONENTTYPE_SRC_AUXILIARY   (MIXERLINE_COMPONENTTYPE_SRC_FIRST+9)
%define MIXERLINE_COMPONENTTYPE_SRC_ANALOG      (MIXERLINE_COMPONENTTYPE_SRC_FIRST+10)
%define MIXERLINE_COMPONENTTYPE_SRC_LAST        (MIXERLINE_COMPONENTTYPE_SRC_FIRST+10)

;// MIXERLINE.Target.dwType
%define MIXERLINE_TARGETTYPE_UNDEFINED 0
%define MIXERLINE_TARGETTYPE_WAVEOUT   1
%define MIXERLINE_TARGETTYPE_WAVEIN    2
%define MIXERLINE_TARGETTYPE_MIDIOUT   3
%define MIXERLINE_TARGETTYPE_MIDIIN    4
%define MIXERLINE_TARGETTYPE_AUX       5

%define MIXER_GETLINEINFOF_DESTINATION   0h
%define MIXER_GETLINEINFOF_SOURCE        1h
%define MIXER_GETLINEINFOF_LINEID        2h
%define MIXER_GETLINEINFOF_COMPONENTTYPE 3h
%define MIXER_GETLINEINFOF_TARGETTYPE    4h
%define MIXER_GETLINEINFOF_QUERYMASK    0Fh

NASMX_STRUC MIXERCONTROLA
    NASMX_RESERVE cbStruct,        uint32_t, 1
    NASMX_RESERVE dwControlID,     uint32_t, 1
    NASMX_RESERVE dwControlType,   uint32_t, 1
    NASMX_RESERVE fdwControl,      uint32_t, 1
    NASMX_RESERVE cMultipleItems,  uint32_t, 1
    NASMX_RESERVE szShortName,     char_t, MIXER_SHORT_NAME_CHARS
    NASMX_RESERVE szName,          char_t, MIXER_LONG_NAME_CHARS
	NASMX_UNION Bounds
	    NASMX_STRUC
            NASMX_RESERVE lMinimum,  uint32_t, 1
            NASMX_RESERVE lMaximum,  uint32_t, 1
        NASMX_ENDSTRUC
	    NASMX_STRUC
            NASMX_RESERVE dwMinimum,  uint32_t, 1
            NASMX_RESERVE dwMaximum,  uint32_t, 1
        NASMX_ENDSTRUC
        NASMX_RESERVE dwReserved,  uint32_t, 6
    NASMX_ENDUNION
	NASMX_UNION Metrics
        NASMX_RESERVE cSteps,       uint32_t, 1
        NASMX_RESERVE cbCustomData, uint32_t, 1
        NASMX_RESERVE dwReserved,   uint32_t, 6
    NASMX_ENDUNION
NASMX_ENDSTRUC

NASMX_STRUC MIXERCONTROLW
    NASMX_RESERVE cbStruct,        uint32_t, 1
    NASMX_RESERVE dwControlID,     uint32_t, 1
    NASMX_RESERVE dwControlType,   uint32_t, 1
    NASMX_RESERVE fdwControl,      uint32_t, 1
    NASMX_RESERVE cMultipleItems,  uint32_t, 1
    NASMX_RESERVE szShortName,     wchar_t, MIXER_SHORT_NAME_CHARS
    NASMX_RESERVE szName,          wchar_t, MIXER_LONG_NAME_CHARS
	NASMX_UNION Bounds
	    NASMX_STRUC
            NASMX_RESERVE lMinimum,  uint32_t, 1
            NASMX_RESERVE lMaximum,  uint32_t, 1
        NASMX_ENDSTRUC
	    NASMX_STRUC
            NASMX_RESERVE dwMinimum,  uint32_t, 1
            NASMX_RESERVE dwMaximum,  uint32_t, 1
        NASMX_ENDSTRUC
        NASMX_RESERVE dwReserved,  uint32_t, 6
    NASMX_ENDUNION
	NASMX_UNION Metrics
        NASMX_RESERVE cSteps,       uint32_t, 1
        NASMX_RESERVE cbCustomData, uint32_t, 1
        NASMX_RESERVE dwReserved,   uint32_t, 6
    NASMX_ENDUNION
NASMX_ENDSTRUC

;// MIXERCONTROL.fdwControl
%define MIXERCONTROL_CONTROLF_UNIFORM  1h
%define MIXERCONTROL_CONTROLF_MULTIPLE 2h
%define MIXERCONTROL_CONTROLF_DISABLED 80000000h

;// MIXERCONTROL_CONTROLTYPE_xxx building block defines
%define MIXERCONTROL_CT_CLASS_MASK      0F0000000h
%define MIXERCONTROL_CT_CLASS_CUSTOM            0h
%define MIXERCONTROL_CT_CLASS_METER      10000000h
%define MIXERCONTROL_CT_CLASS_SWITCH     20000000h
%define MIXERCONTROL_CT_CLASS_NUMBER     30000000h
%define MIXERCONTROL_CT_CLASS_SLIDER     40000000h
%define MIXERCONTROL_CT_CLASS_FADER      50000000h
%define MIXERCONTROL_CT_CLASS_TIME       60000000h
%define MIXERCONTROL_CT_CLASS_LIST       70000000h
%define MIXERCONTROL_CT_SUBCLASS_MASK    0F000000h
%define MIXERCONTROL_CT_SC_SWITCH_BOOLEAN       0h
%define MIXERCONTROL_CT_SC_SWITCH_BUTTON  1000000h
%define MIXERCONTROL_CT_SC_METER_POLLED         0h
%define MIXERCONTROL_CT_SC_TIME_MICROSECS       0h
%define MIXERCONTROL_CT_SC_TIME_MILLISECS 1000000h
%define MIXERCONTROL_CT_SC_LIST_SINGLE          0h
%define MIXERCONTROL_CT_SC_LIST_MULTIPLE  1000000h
%define MIXERCONTROL_CT_UNITS_MASK        0FF0000h
%define MIXERCONTROL_CT_UNITS_CUSTOM            0h
%define MIXERCONTROL_CT_UNITS_BOOLEAN       10000h
%define MIXERCONTROL_CT_UNITS_SIGNED        20000h
%define MIXERCONTROL_CT_UNITS_UNSIGNED      30000h
%define MIXERCONTROL_CT_UNITS_DECIBELS      40000h
%define MIXERCONTROL_CT_UNITS_PERCENT       50000h

;// Commonly used control types for specifying MIXERCONTROL.dwControlType
%define MIXERCONTROL_CONTROLTYPE_CUSTOM         (MIXERCONTROL_CT_CLASS_CUSTOM|MIXERCONTROL_CT_UNITS_CUSTOM)
%define MIXERCONTROL_CONTROLTYPE_BOOLEANMETER   (MIXERCONTROL_CT_CLASS_METER|MIXERCONTROL_CT_SC_METER_POLLED|MIXERCONTROL_CT_UNITS_BOOLEAN)
%define MIXERCONTROL_CONTROLTYPE_SIGNEDMETER    (MIXERCONTROL_CT_CLASS_METER|MIXERCONTROL_CT_SC_METER_POLLED|MIXERCONTROL_CT_UNITS_SIGNED)
%define MIXERCONTROL_CONTROLTYPE_PEAKMETER      (MIXERCONTROL_CONTROLTYPE_SIGNEDMETER+1)
%define MIXERCONTROL_CONTROLTYPE_UNSIGNEDMETER  (MIXERCONTROL_CT_CLASS_METER|MIXERCONTROL_CT_SC_METER_POLLED|MIXERCONTROL_CT_UNITS_UNSIGNED)
%define MIXERCONTROL_CONTROLTYPE_BOOLEAN        (MIXERCONTROL_CT_CLASS_SWITCH|MIXERCONTROL_CT_SC_SWITCH_BOOLEAN|MIXERCONTROL_CT_UNITS_BOOLEAN)
%define MIXERCONTROL_CONTROLTYPE_ONOFF          (MIXERCONTROL_CONTROLTYPE_BOOLEAN+1)
%define MIXERCONTROL_CONTROLTYPE_MUTE           (MIXERCONTROL_CONTROLTYPE_BOOLEAN+2)
%define MIXERCONTROL_CONTROLTYPE_MONO           (MIXERCONTROL_CONTROLTYPE_BOOLEAN+3)
%define MIXERCONTROL_CONTROLTYPE_LOUDNESS       (MIXERCONTROL_CONTROLTYPE_BOOLEAN+4)
%define MIXERCONTROL_CONTROLTYPE_STEREOENH      (MIXERCONTROL_CONTROLTYPE_BOOLEAN+5)
%define MIXERCONTROL_CONTROLTYPE_BUTTON         (MIXERCONTROL_CT_CLASS_SWITCH|MIXERCONTROL_CT_SC_SWITCH_BUTTON|MIXERCONTROL_CT_UNITS_BOOLEAN)
%define MIXERCONTROL_CONTROLTYPE_DECIBELS       (MIXERCONTROL_CT_CLASS_NUMBER|MIXERCONTROL_CT_UNITS_DECIBELS)
%define MIXERCONTROL_CONTROLTYPE_SIGNED         (MIXERCONTROL_CT_CLASS_NUMBER|MIXERCONTROL_CT_UNITS_SIGNED)
%define MIXERCONTROL_CONTROLTYPE_UNSIGNED       (MIXERCONTROL_CT_CLASS_NUMBER|MIXERCONTROL_CT_UNITS_UNSIGNED)
%define MIXERCONTROL_CONTROLTYPE_PERCENT        (MIXERCONTROL_CT_CLASS_NUMBER|MIXERCONTROL_CT_UNITS_PERCENT)
%define MIXERCONTROL_CONTROLTYPE_SLIDER         (MIXERCONTROL_CT_CLASS_SLIDER|MIXERCONTROL_CT_UNITS_SIGNED)
%define MIXERCONTROL_CONTROLTYPE_PAN            (MIXERCONTROL_CONTROLTYPE_SLIDER+1)
%define MIXERCONTROL_CONTROLTYPE_QSOUNDPAN      (MIXERCONTROL_CONTROLTYPE_SLIDER+2)
%define MIXERCONTROL_CONTROLTYPE_FADER          (MIXERCONTROL_CT_CLASS_FADER|MIXERCONTROL_CT_UNITS_UNSIGNED)
%define MIXERCONTROL_CONTROLTYPE_VOLUME         (MIXERCONTROL_CONTROLTYPE_FADER+1)
%define MIXERCONTROL_CONTROLTYPE_BASS           (MIXERCONTROL_CONTROLTYPE_FADER+2)
%define MIXERCONTROL_CONTROLTYPE_TREBLE         (MIXERCONTROL_CONTROLTYPE_FADER+3)
%define MIXERCONTROL_CONTROLTYPE_EQUALIZER      (MIXERCONTROL_CONTROLTYPE_FADER+4)
%define MIXERCONTROL_CONTROLTYPE_SINGLESELECT   (MIXERCONTROL_CT_CLASS_LIST|MIXERCONTROL_CT_SC_LIST_SINGLE|MIXERCONTROL_CT_UNITS_BOOLEAN)
%define MIXERCONTROL_CONTROLTYPE_MUX            (MIXERCONTROL_CONTROLTYPE_SINGLESELECT+1)
%define MIXERCONTROL_CONTROLTYPE_MULTIPLESELECT (MIXERCONTROL_CT_CLASS_LIST|MIXERCONTROL_CT_SC_LIST_MULTIPLE|MIXERCONTROL_CT_UNITS_BOOLEAN)
%define MIXERCONTROL_CONTROLTYPE_MIXER          (MIXERCONTROL_CONTROLTYPE_MULTIPLESELECT+1)
%define MIXERCONTROL_CONTROLTYPE_MICROTIME      (MIXERCONTROL_CT_CLASS_TIME|MIXERCONTROL_CT_SC_TIME_MICROSECS|MIXERCONTROL_CT_UNITS_UNSIGNED)
%define MIXERCONTROL_CONTROLTYPE_MILLITIME      (MIXERCONTROL_CT_CLASS_TIME|MIXERCONTROL_CT_SC_TIME_MILLISECS|MIXERCONTROL_CT_UNITS_UNSIGNED)

;// MIXERLINECONTROLS
NASMX_STRUC MIXERLINECONTROLS
    NASMX_RESERVE cbStruct,  uint32_t, 1
    NASMX_RESERVE dwLineID,  uint32_t, 1
	NASMX_UNION
        NASMX_RESERVE dwControlID,   uint32_t, 1
        NASMX_RESERVE dwControlType, uint32_t, 1
    NASMX_ENDUNION
    NASMX_RESERVE cControls, uint32_t, 1
    NASMX_RESERVE cbmxctrl,  uint32_t, 1
    NASMX_RESERVE pamxctrl,  NASMX_PTR, 1
NASMX_ENDSTRUC

%define MIXER_GETLINECONTROLSF_ALL       0h
%define MIXER_GETLINECONTROLSF_ONEBYID   1h
%define MIXER_GETLINECONTROLSF_ONEBYTYPE 2h
%define MIXER_GETLINECONTROLSF_QUERYMASK 0Fh

NASMX_STRUC MIXERCONTROLDETAILS
    NASMX_RESERVE cbStruct,    uint32_t, 1
    NASMX_RESERVE dwControlID, uint32_t, 1
    NASMX_RESERVE cChannels,   uint32_t, 1
    NASMX_UNION
        NASMX_RESERVE hwndOwner,      NASMX_PTR, 1
        NASMX_RESERVE cMultipleItems, uint32_t, 1
    NASMX_ENDUNION
    NASMX_RESERVE cbDetails,   uint32_t, 1
    NASMX_RESERVE paDetails,   NASMX_PTR, 1
NASMX_ENDSTRUC

NASMX_STRUC MIXERCONTROLDETAILS_LISTTEXTA
    NASMX_RESERVE dwParam1, uint32_t, 1
    NASMX_RESERVE dwParam2, uint32_t, 1
    NASMX_RESERVE szName,   char_t, MIXER_LONG_NAME_CHARS
NASMX_ENDSTRUC

NASMX_STRUC MIXERCONTROLDETAILS_LISTTEXTW
    NASMX_RESERVE dwParam1, uint32_t, 1
    NASMX_RESERVE dwParam2, uint32_t, 1
    NASMX_RESERVE szName,   wchar_t, MIXER_LONG_NAME_CHARS
NASMX_ENDSTRUC

NASMX_STRUC MIXERCONTROLDETAILS_BOOLEAN
    NASMX_RESERVE fValue, int32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MIXERCONTROLDETAILS_SIGNED
    NASMX_RESERVE lValue, int32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MIXERCONTROLDETAILS_UNSIGNED
    NASMX_RESERVE dwValue, int32_t, 1
NASMX_ENDSTRUC

%define MIXER_GETCONTROLDETAILSF_VALUE     0h
%define MIXER_GETCONTROLDETAILSF_LISTTEXT  1h
%define MIXER_GETCONTROLDETAILSF_QUERYMASK 0Fh
%define MIXER_SETCONTROLDETAILSF_VALUE     0h
%define MIXER_SETCONTROLDETAILSF_CUSTOM    1h
%define MIXER_SETCONTROLDETAILSF_QUERYMASK 0Fh

%endif  ;// ifndef MMNOMIXER

%ifndef MMNOTIMER
;////////////////////////////////////////////
;//
;// Timer support
;//
%define TIMERR_NOERROR 0
%define TIMERR_NOCANDO (TIMERR_BASE+1)
%define TIMERR_STRUCT  (TIMERR_BASE+33)
%define TIME_ONESHOT  0
%define TIME_PERIODIC 1
%define TIME_CALLBACK_FUNCTION       0h
%define TIME_CALLBACK_EVENT_SET     10h
%define TIME_CALLBACK_EVENT_PULSE   20h
%define TIME_KILL_SYNCHRONOUS      100h

NASMX_STRUC TIMECAPS
    NASMX_RESERVE wPeriodMin, uint32_t, 1
    NASMX_RESERVE wPeriodMax, uint32_t, 1
NASMX_ENDSTRUC
%endif  ;// ifndef MMNOTIMER

%ifndef MMNOJOY
;/////////////////////////////////////////////////////
;//
;// Joystick support
;//

;// joystick error return values
%define JOYERR_NOERROR   0
%define JOYERR_PARMS     (JOYERR_BASE+5)
%define JOYERR_NOCANDO   (JOYERR_BASE+6)
%define JOYERR_UNPLUGGED (JOYERR_BASE+7)
;// constants used with JOYINFO and JOYINFOEX structures and MM_JOY* messages
%define JOY_BUTTON1 1h
%define JOY_BUTTON2 2h
%define JOY_BUTTON3 4h
%define JOY_BUTTON4 8h
%define JOY_BUTTON1CHG 100h
%define JOY_BUTTON2CHG 200h
%define JOY_BUTTON3CHG 400h
%define JOY_BUTTON4CHG 800h

;// constants used with JOYINFOEX
%define JOY_BUTTON5        10h
%define JOY_BUTTON6        20h
%define JOY_BUTTON7        40h
%define JOY_BUTTON8        80h
%define JOY_BUTTON9       100h
%define JOY_BUTTON10      200h
%define JOY_BUTTON11      400h
%define JOY_BUTTON12      800h
%define JOY_BUTTON13     1000h
%define JOY_BUTTON14     2000h
%define JOY_BUTTON15     4000h
%define JOY_BUTTON16     8000h
%define JOY_BUTTON17    10000h
%define JOY_BUTTON18    20000h
%define JOY_BUTTON19    40000h
%define JOY_BUTTON20    80000h
%define JOY_BUTTON21   100000h
%define JOY_BUTTON22   200000h
%define JOY_BUTTON23   400000h
%define JOY_BUTTON24   800000h
%define JOY_BUTTON25  1000000h
%define JOY_BUTTON26  2000000h
%define JOY_BUTTON27  4000000h
%define JOY_BUTTON28  8000000h
%define JOY_BUTTON29 10000000h
%define JOY_BUTTON30 20000000h
%define JOY_BUTTON31 40000000h
%define JOY_BUTTON32 80000000h

;// constants used with JOYINFOEX structure
%define JOY_POVCENTERED -1
%define JOY_POVFORWARD   0
%define JOY_POVRIGHT     9000
%define JOY_POVBACKWARD 18000
%define JOY_POVLEFT     27000
%define JOY_RETURNX          1h
%define JOY_RETURNY          2h
%define JOY_RETURNZ          4h
%define JOY_RETURNR          8h
%define JOY_RETURNU         10h
%define JOY_RETURNV         20h
%define JOY_RETURNPOV       40h
%define JOY_RETURNBUTTONS   80h
%define JOY_RETURNRAWDATA  100h
%define JOY_RETURNPOVCTS   200h
%define JOY_RETURNCENTERED 400h
%define JOY_USEDEADZONE 800h
%define JOY_RETURNALL (JOY_RETURNX|JOY_RETURNY|JOY_RETURNZ|JOY_RETURNR|JOY_RETURNU|JOY_RETURNV|JOY_RETURNPOV|JOY_RETURNBUTTONS)
%define JOY_CAL_READALWAYS  10000h
%define JOY_CAL_READXYONLY  20000h
%define JOY_CAL_READ3       40000h
%define JOY_CAL_READ4       80000h
%define JOY_CAL_READXONLY  100000h
%define JOY_CAL_READYONLY  200000h
%define JOY_CAL_READ5      400000h
%define JOY_CAL_READ6      800000h
%define JOY_CAL_READZONLY 1000000h
%define JOY_CAL_READRONLY 2000000h
%define JOY_CAL_READUONLY 4000000h
%define JOY_CAL_READVONLY 8000000h
;// joystick ID constants
%define JOYSTICKID1 0
%define JOYSTICKID2 1
;// joystick driver capabilites
%define JOYCAPS_HASZ    0x0001
%define JOYCAPS_HASR    0x0002
%define JOYCAPS_HASU    0x0004
%define JOYCAPS_HASV    0x0008
%define JOYCAPS_HASPOV  0x0010
%define JOYCAPS_POV4DIR 0x0020
%define JOYCAPS_POVCTS  0x0040

NASMX_STRUC JOYCAPSA
    NASMX_RESERVE wMid,        uint16_t, 1
    NASMX_RESERVE wPid,        uint16_t, 1
    NASMX_RESERVE szPname,     char_t, MAXPNAMELEN
    NASMX_RESERVE wXmin,       uint32_t, 1
    NASMX_RESERVE wXmax,       uint32_t, 1
    NASMX_RESERVE wYmin,       uint32_t, 1
    NASMX_RESERVE wYmax,       uint32_t, 1
    NASMX_RESERVE wZmin,       uint32_t, 1
    NASMX_RESERVE wZmax,       uint32_t, 1
    NASMX_RESERVE wNumButtons, uint32_t, 1
    NASMX_RESERVE wPeriodMin,  uint32_t, 1
    NASMX_RESERVE wPeriodMax,  uint32_t, 1
    NASMX_RESERVE wRmin,       uint32_t, 1
    NASMX_RESERVE wRmax,       uint32_t, 1
    NASMX_RESERVE wUmin,       uint32_t, 1
    NASMX_RESERVE wUmax,       uint32_t, 1
    NASMX_RESERVE wVmin,       uint32_t, 1
    NASMX_RESERVE wVmax,       uint32_t, 1
    NASMX_RESERVE wCaps,       uint32_t, 1
    NASMX_RESERVE wMaxAxes,    uint32_t, 1
    NASMX_RESERVE wNumAxes,    uint32_t, 1
    NASMX_RESERVE wMaxButtons, uint32_t, 1
    NASMX_RESERVE szRegKey,    char_t, MAXPNAMELEN
    NASMX_RESERVE szOEMVxD,    char_t, MAX_JOYSTICKOEMVXDNAME
NASMX_ENDSTRUC

NASMX_STRUC JOYCAPSW
    NASMX_RESERVE wMid,        uint16_t, 1
    NASMX_RESERVE wPid,        uint16_t, 1
    NASMX_RESERVE szPname,     wchar_t, MAXPNAMELEN
    NASMX_RESERVE wXmin,       uint32_t, 1
    NASMX_RESERVE wXmax,       uint32_t, 1
    NASMX_RESERVE wYmin,       uint32_t, 1
    NASMX_RESERVE wYmax,       uint32_t, 1
    NASMX_RESERVE wZmin,       uint32_t, 1
    NASMX_RESERVE wZmax,       uint32_t, 1
    NASMX_RESERVE wNumButtons, uint32_t, 1
    NASMX_RESERVE wPeriodMin,  uint32_t, 1
    NASMX_RESERVE wPeriodMax,  uint32_t, 1
    NASMX_RESERVE wRmin,       uint32_t, 1
    NASMX_RESERVE wRmax,       uint32_t, 1
    NASMX_RESERVE wUmin,       uint32_t, 1
    NASMX_RESERVE wUmax,       uint32_t, 1
    NASMX_RESERVE wVmin,       uint32_t, 1
    NASMX_RESERVE wVmax,       uint32_t, 1
    NASMX_RESERVE wCaps,       uint32_t, 1
    NASMX_RESERVE wMaxAxes,    uint32_t, 1
    NASMX_RESERVE wNumAxes,    uint32_t, 1
    NASMX_RESERVE wMaxButtons, uint32_t, 1
    NASMX_RESERVE szRegKey,    wchar_t, MAXPNAMELEN
    NASMX_RESERVE szOEMVxD,    wchar_t, MAX_JOYSTICKOEMVXDNAME
NASMX_ENDSTRUC

NASMX_STRUC JOYCAPS2A
    NASMX_RESERVE wMid,        uint16_t, 1
    NASMX_RESERVE wPid,        uint16_t, 1
    NASMX_RESERVE szPname,     char_t, MAXPNAMELEN
    NASMX_RESERVE wXmin,       uint32_t, 1
    NASMX_RESERVE wXmax,       uint32_t, 1
    NASMX_RESERVE wYmin,       uint32_t, 1
    NASMX_RESERVE wYmax,       uint32_t, 1
    NASMX_RESERVE wZmin,       uint32_t, 1
    NASMX_RESERVE wZmax,       uint32_t, 1
    NASMX_RESERVE wNumButtons, uint32_t, 1
    NASMX_RESERVE wPeriodMin,  uint32_t, 1
    NASMX_RESERVE wPeriodMax,  uint32_t, 1
    NASMX_RESERVE wRmin,       uint32_t, 1
    NASMX_RESERVE wRmax,       uint32_t, 1
    NASMX_RESERVE wUmin,       uint32_t, 1
    NASMX_RESERVE wUmax,       uint32_t, 1
    NASMX_RESERVE wVmin,       uint32_t, 1
    NASMX_RESERVE wVmax,       uint32_t, 1
    NASMX_RESERVE wCaps,       uint32_t, 1
    NASMX_RESERVE wMaxAxes,    uint32_t, 1
    NASMX_RESERVE wNumAxes,    uint32_t, 1
    NASMX_RESERVE wMaxButtons, uint32_t, 1
    NASMX_RESERVE szRegKey,    char_t, MAXPNAMELEN
    NASMX_RESERVE szOEMVxD,    char_t, MAX_JOYSTICKOEMVXDNAME
    NASMX_STRUC ManufacturerGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC ProductGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC NameGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC JOYCAPS2W
    NASMX_RESERVE wMid,        uint16_t, 1
    NASMX_RESERVE wPid,        uint16_t, 1
    NASMX_RESERVE szPname,     wchar_t, MAXPNAMELEN
    NASMX_RESERVE wXmin,       uint32_t, 1
    NASMX_RESERVE wXmax,       uint32_t, 1
    NASMX_RESERVE wYmin,       uint32_t, 1
    NASMX_RESERVE wYmax,       uint32_t, 1
    NASMX_RESERVE wZmin,       uint32_t, 1
    NASMX_RESERVE wZmax,       uint32_t, 1
    NASMX_RESERVE wNumButtons, uint32_t, 1
    NASMX_RESERVE wPeriodMin,  uint32_t, 1
    NASMX_RESERVE wPeriodMax,  uint32_t, 1
    NASMX_RESERVE wRmin,       uint32_t, 1
    NASMX_RESERVE wRmax,       uint32_t, 1
    NASMX_RESERVE wUmin,       uint32_t, 1
    NASMX_RESERVE wUmax,       uint32_t, 1
    NASMX_RESERVE wVmin,       uint32_t, 1
    NASMX_RESERVE wVmax,       uint32_t, 1
    NASMX_RESERVE wCaps,       uint32_t, 1
    NASMX_RESERVE wMaxAxes,    uint32_t, 1
    NASMX_RESERVE wNumAxes,    uint32_t, 1
    NASMX_RESERVE wMaxButtons, uint32_t, 1
    NASMX_RESERVE szRegKey,    wchar_t, MAXPNAMELEN
    NASMX_RESERVE szOEMVxD,    wchar_t, MAX_JOYSTICKOEMVXDNAME
    NASMX_STRUC ManufacturerGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC ProductGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
    NASMX_STRUC NameGuid, GUID
        NASMX_RESERVE Data1, uint32_t, 1
        NASMX_RESERVE Data2, uint16_t, 1
        NASMX_RESERVE Data3, uint16_t, 1
        NASMX_RESERVE Data4, uint8_t, 8
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC JOYINFO
    NASMX_RESERVE wXpos,    uint32_t, 1
    NASMX_RESERVE wYpos,    uint32_t, 1
    NASMX_RESERVE wZpos,    uint32_t, 1
    NASMX_RESERVE wButtons, uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC JOYINFOEX
    NASMX_RESERVE dwSize,         uint32_t, 1
    NASMX_RESERVE dwFlags,        uint32_t, 1
    NASMX_RESERVE dwXpos,         uint32_t, 1
    NASMX_RESERVE dwYpos,         uint32_t, 1
    NASMX_RESERVE dwZpos,         uint32_t, 1
    NASMX_RESERVE dwRpos,         uint32_t, 1
    NASMX_RESERVE dwUpos,         uint32_t, 1
    NASMX_RESERVE dwVpos,         uint32_t, 1
    NASMX_RESERVE dwButtons,      uint32_t, 1
    NASMX_RESERVE dwButtonNumber, uint32_t, 1
    NASMX_RESERVE dwPOV,          uint32_t, 1
    NASMX_RESERVE dwReserved1,    uint32_t, 1
    NASMX_RESERVE dwReserved2,    uint32_t, 1
NASMX_ENDSTRUC

%endif  ;// ifndef MMNOJOY

%ifndef MMNOMMIO
;//////////////////////////////////////////////////
;//
;// Multimedia File I/O support
;//

%define MMIOERR_BASE 256
%define MMIOERR_FILENOTFOUND     (MMIOERR_BASE+1)
%define MMIOERR_OUTOFMEMORY      (MMIOERR_BASE+2)
%define MMIOERR_CANNOTOPEN       (MMIOERR_BASE+3)
%define MMIOERR_CANNOTCLOSE      (MMIOERR_BASE+4)
%define MMIOERR_CANNOTREAD       (MMIOERR_BASE+5)
%define MMIOERR_CANNOTWRITE      (MMIOERR_BASE+6)
%define MMIOERR_CANNOTSEEK       (MMIOERR_BASE+7)
%define MMIOERR_CANNOTEXPAND     (MMIOERR_BASE+8)
%define MMIOERR_CHUNKNOTFOUND    (MMIOERR_BASE+9)
%define MMIOERR_UNBUFFERED       (MMIOERR_BASE+10)
%define MMIOERR_PATHNOTFOUND     (MMIOERR_BASE+11)
%define MMIOERR_ACCESSDENIED     (MMIOERR_BASE+12)
%define MMIOERR_SHARINGVIOLATION (MMIOERR_BASE+13)
%define MMIOERR_NETWORKERROR     (MMIOERR_BASE+14)
%define MMIOERR_TOOMANYOPENFILES (MMIOERR_BASE+15)
%define MMIOERR_INVALIDFILE      (MMIOERR_BASE+16)

;// MMIO constants
%define CFSEPCHAR '+'

NASMX_STRUC MMIOINFO
    NASMX_RESERVE dwFlags,     uint32_t, 1
    NASMX_RESERVE fccIOProc,   uint32_t, 1
    NASMX_RESERVE pIOProc,     NASMX_PTR, 1
    NASMX_RESERVE wErrorRet,   uint32_t, 1
    NASMX_RESERVE htask,       NASMX_PTR, 1
    NASMX_RESERVE cchBuffer,   int32_t, 1
    NASMX_RESERVE pchBuffer,   NASMX_PTR, 1
    NASMX_RESERVE pchNext,     NASMX_PTR, 1
    NASMX_RESERVE pchEndRead,  NASMX_PTR, 1
    NASMX_RESERVE pchEndWrite, NASMX_PTR, 1
    NASMX_RESERVE lBufOffset,  int32_t, 1
    NASMX_RESERVE lDiskOffset, int32_t, 1
    NASMX_RESERVE adwInfo,     uint32_t, 3
    NASMX_RESERVE dwReserved1, uint32_t, 1
    NASMX_RESERVE dwReserved2, uint32_t, 1
    NASMX_RESERVE hmmio,       NASMX_PTR, 1
NASMX_ENDSTRUC

NASMX_STRUC MMCKINFO
    NASMX_RESERVE ckid,         uint32_t, 1
    NASMX_RESERVE ckSize,       uint32_t, 1
    NASMX_RESERVE fccType,      uint32_t, 1
    NASMX_RESERVE dwDataOffset, uint32_t, 1
    NASMX_RESERVE dwFlags,      uint32_t, 1
NASMX_ENDSTRUC

;// bit field masks
%define MMIO_RWMODE     3h
%define MMIO_SHAREMODE 70h

;// constants for dwFlags field of MMIOINFO
%define MMIO_CREATE    1000h
%define MMIO_PARSE      100h
%define MMIO_DELETE     200h
%define MMIO_EXIST     4000h
%define MMIO_ALLOCBUF 10000h
%define MMIO_GETTEMP  20000h
%define MMIO_DIRTY 10000000h

;// read/write mode numbers (bit field MMIO_RWMODE)
%define MMIO_READ      0h
%define MMIO_WRITE     1h
%define MMIO_READWRITE 2h

;// share mode numbers (bit field MMIO_SHAREMODE)
%define MMIO_COMPAT     0h
%define MMIO_EXCLUSIVE 10h
%define MMIO_DENYWRITE 20h
%define MMIO_DENYREAD  30h
%define MMIO_DENYNONE  40h

;// various MMIO flags
%define MMIO_FHOPEN           10h
%define MMIO_EMPTYBUF         10h
%define MMIO_TOUPPER          10h
%define MMIO_INSTALLPROC   10000h
%define MMIO_GLOBALPROC 10000000h
%define MMIO_REMOVEPROC    20000h
%define MMIO_UNICODEPROC 1000000h
%define MMIO_FINDPROC      40000h
%define MMIO_FINDCHUNK        10h
%define MMIO_FINDRIFF         20h
%define MMIO_FINDLIST         40h
%define MMIO_CREATERIFF       20h
%define MMIO_CREATELIST       40h

;// message numbers for MMIOPROC I/O procedure functions
%define MMIOM_READ  MMIO_READ
%define MMIOM_WRITE MMIO_WRITE
%define MMIOM_SEEK       2
%define MMIOM_OPEN       3
%define MMIOM_CLOSE      4
%define MMIOM_WRITEFLUSH 5
%define MMIOM_RENAME     6
%define MMIOM_USER    8000h
%define MMIO_DEFAULTBUFFER 8192

%endif  ;// ifndef MMNOMMIO

%ifndef MMNOMCI
;//////////////////////////////////////////////////
;//
;// MCI support
;//

;// MCI error return values
%define MCIERR_INVALID_DEVICE_ID        (MCIERR_BASE+1)
%define MCIERR_UNRECOGNIZED_KEYWORD     (MCIERR_BASE+3)
%define MCIERR_UNRECOGNIZED_COMMAND     (MCIERR_BASE+5)
%define MCIERR_HARDWARE                 (MCIERR_BASE+6)
%define MCIERR_INVALID_DEVICE_NAME      (MCIERR_BASE+7)
%define MCIERR_OUT_OF_MEMORY            (MCIERR_BASE+8)
%define MCIERR_DEVICE_OPEN              (MCIERR_BASE+9)
%define MCIERR_CANNOT_LOAD_DRIVER       (MCIERR_BASE+10)
%define MCIERR_MISSING_COMMAND_STRING   (MCIERR_BASE+11)
%define MCIERR_PARAM_OVERFLOW           (MCIERR_BASE+12)
%define MCIERR_MISSING_STRING_ARGUMENT  (MCIERR_BASE+13)
%define MCIERR_BAD_INTEGER              (MCIERR_BASE+14)
%define MCIERR_PARSER_INTERNAL          (MCIERR_BASE+15)
%define MCIERR_DRIVER_INTERNAL          (MCIERR_BASE+16)
%define MCIERR_MISSING_PARAMETER        (MCIERR_BASE+17)
%define MCIERR_UNSUPPORTED_FUNCTION     (MCIERR_BASE+18)
%define MCIERR_FILE_NOT_FOUND           (MCIERR_BASE+19)
%define MCIERR_DEVICE_NOT_READY         (MCIERR_BASE+20)
%define MCIERR_INTERNAL                 (MCIERR_BASE+21)
%define MCIERR_DRIVER                   (MCIERR_BASE+22)
%define MCIERR_CANNOT_USE_ALL           (MCIERR_BASE+23)
%define MCIERR_MULTIPLE                 (MCIERR_BASE+24)
%define MCIERR_EXTENSION_NOT_FOUND      (MCIERR_BASE+25)
%define MCIERR_OUTOFRANGE               (MCIERR_BASE+26)
%define MCIERR_FLAGS_NOT_COMPATIBLE     (MCIERR_BASE+28)
%define MCIERR_FILE_NOT_SAVED           (MCIERR_BASE+30)
%define MCIERR_DEVICE_TYPE_REQUIRED     (MCIERR_BASE+31)
%define MCIERR_DEVICE_LOCKED            (MCIERR_BASE+32)
%define MCIERR_DUPLICATE_ALIAS          (MCIERR_BASE+33)
%define MCIERR_BAD_CONSTANT             (MCIERR_BASE+34)
%define MCIERR_MUST_USE_SHAREABLE       (MCIERR_BASE+35)
%define MCIERR_MISSING_DEVICE_NAME      (MCIERR_BASE+36)
%define MCIERR_BAD_TIME_FORMAT          (MCIERR_BASE+37)
%define MCIERR_NO_CLOSING_QUOTE         (MCIERR_BASE+38)
%define MCIERR_DUPLICATE_FLAGS          (MCIERR_BASE+39)
%define MCIERR_INVALID_FILE             (MCIERR_BASE+40)
%define MCIERR_NULL_PARAMETER_BLOCK     (MCIERR_BASE+41)
%define MCIERR_UNNAMED_RESOURCE         (MCIERR_BASE+42)
%define MCIERR_NEW_REQUIRES_ALIAS       (MCIERR_BASE+43)
%define MCIERR_NOTIFY_ON_AUTO_OPEN      (MCIERR_BASE+44)
%define MCIERR_NO_ELEMENT_ALLOWED       (MCIERR_BASE+45)
%define MCIERR_NONAPPLICABLE_FUNCTION   (MCIERR_BASE+46)
%define MCIERR_ILLEGAL_FOR_AUTO_OPEN    (MCIERR_BASE+47)
%define MCIERR_FILENAME_REQUIRED        (MCIERR_BASE+48)
%define MCIERR_EXTRA_CHARACTERS         (MCIERR_BASE+49)
%define MCIERR_DEVICE_NOT_INSTALLED     (MCIERR_BASE+50)
%define MCIERR_GET_CD                   (MCIERR_BASE+51)
%define MCIERR_SET_CD                   (MCIERR_BASE+52)
%define MCIERR_SET_DRIVE                (MCIERR_BASE+53)
%define MCIERR_DEVICE_LENGTH            (MCIERR_BASE+54)
%define MCIERR_DEVICE_ORD_LENGTH        (MCIERR_BASE+55)
%define MCIERR_NO_INTEGER               (MCIERR_BASE+56)
%define MCIERR_WAVE_OUTPUTSINUSE        (MCIERR_BASE+64)
%define MCIERR_WAVE_SETOUTPUTINUSE      (MCIERR_BASE+65)
%define MCIERR_WAVE_INPUTSINUSE         (MCIERR_BASE+66)
%define MCIERR_WAVE_SETINPUTINUSE       (MCIERR_BASE+67)
%define MCIERR_WAVE_OUTPUTUNSPECIFIED   (MCIERR_BASE+68)
%define MCIERR_WAVE_INPUTUNSPECIFIED    (MCIERR_BASE+69)
%define MCIERR_WAVE_OUTPUTSUNSUITABLE   (MCIERR_BASE+70)
%define MCIERR_WAVE_SETOUTPUTUNSUITABLE (MCIERR_BASE+71)
%define MCIERR_WAVE_INPUTSUNSUITABLE    (MCIERR_BASE+72)
%define MCIERR_WAVE_SETINPUTUNSUITABLE  (MCIERR_BASE+73)
%define MCIERR_SEQ_DIV_INCOMPATIBLE     (MCIERR_BASE+80)
%define MCIERR_SEQ_PORT_INUSE           (MCIERR_BASE+81)
%define MCIERR_SEQ_PORT_NONEXISTENT     (MCIERR_BASE+82)
%define MCIERR_SEQ_PORT_MAPNODEVICE     (MCIERR_BASE+83)
%define MCIERR_SEQ_PORT_MISCERROR       (MCIERR_BASE+84)
%define MCIERR_SEQ_TIMER                (MCIERR_BASE+85)
%define MCIERR_SEQ_PORTUNSPECIFIED      (MCIERR_BASE+86)
%define MCIERR_SEQ_NOMIDIPRESENT        (MCIERR_BASE+87)
%define MCIERR_NO_WINDOW                (MCIERR_BASE+90)
%define MCIERR_CREATEWINDOW             (MCIERR_BASE+91)
%define MCIERR_FILE_READ                (MCIERR_BASE+92)
%define MCIERR_FILE_WRITE               (MCIERR_BASE+93)
%define MCIERR_NO_IDENTITY              (MCIERR_BASE+94)
%define MCIERR_CUSTOM_DRIVER_BASE       (MCIERR_BASE+256)

%define MCI_FIRST      800h
%define MCI_OPEN       803h
%define MCI_CLOSE      804h
%define MCI_ESCAPE     805h
%define MCI_PLAY       806h
%define MCI_SEEK       807h
%define MCI_STOP       808h
%define MCI_PAUSE      809h
%define MCI_INFO       80Ah
%define MCI_GETDEVCAPS 80Bh
%define MCI_SPIN       80Ch
%define MCI_SET        80Dh
%define MCI_STEP       80Eh
%define MCI_RECORD     80Fh
%define MCI_SYSINFO    810h
%define MCI_BREAK      811h
%define MCI_SOUND      812h
%define MCI_SAVE       813h
%define MCI_STATUS     814h
%define MCI_CUE        830h
%define MCI_REALIZE    840h
%define MCI_WINDOW     841h
%define MCI_PUT        842h
%define MCI_WHERE      843h
%define MCI_FREEZE     844h
%define MCI_UNFREEZE   845h
%define MCI_LOAD       850h
%define MCI_CUT        851h
%define MCI_COPY       852h
%define MCI_PASTE      853h
%define MCI_UPDATE     854h
%define MCI_RESUME     855h
%define MCI_DELETE     856h
%define MCI_USER_MESSAGES (400h+MCI_FIRST)
%define MCI_LAST      0FFFh
;// device ID for "all devices"
%define MCI_ALL_DEVICE_ID -1
;// constants for predefined MCI device types
%define MCI_DEVTYPE_VCR            513
%define MCI_DEVTYPE_VIDEODISC      514
%define MCI_DEVTYPE_OVERLAY        515
%define MCI_DEVTYPE_CD_AUDIO       516
%define MCI_DEVTYPE_DAT            517
%define MCI_DEVTYPE_SCANNER        518
%define MCI_DEVTYPE_ANIMATION      519
%define MCI_DEVTYPE_DIGITAL_VIDEO  520
%define MCI_DEVTYPE_OTHER          521
%define MCI_DEVTYPE_WAVEFORM_AUDIO 522
%define MCI_DEVTYPE_SEQUENCER      523
%define MCI_DEVTYPE_FIRST          MCI_DEVTYPE_VCR
%define MCI_DEVTYPE_LAST           MCI_DEVTYPE_SEQUENCER
%define MCI_DEVTYPE_FIRST_USER     1000h
;// return values for 'status mode' command
%define MCI_MODE_NOT_READY (MCI_STRING_OFFSET+12)
%define MCI_MODE_STOP      (MCI_STRING_OFFSET+13)
%define MCI_MODE_PLAY      (MCI_STRING_OFFSET+14)
%define MCI_MODE_RECORD    (MCI_STRING_OFFSET+15)
%define MCI_MODE_SEEK      (MCI_STRING_OFFSET+16)
%define MCI_MODE_PAUSE     (MCI_STRING_OFFSET+17)
%define MCI_MODE_OPEN      (MCI_STRING_OFFSET+18)

;// constants used in 'set time format' and 'status time format' commands
%define MCI_FORMAT_MILLISECONDS 0
%define MCI_FORMAT_HMS          1
%define MCI_FORMAT_MSF          2
%define MCI_FORMAT_FRAMES       3
%define MCI_FORMAT_SMPTE_24     4
%define MCI_FORMAT_SMPTE_25     5
%define MCI_FORMAT_SMPTE_30     6
%define MCI_FORMAT_SMPTE_30DROP 7
%define MCI_FORMAT_BYTES        8
%define MCI_FORMAT_SAMPLES      9
%define MCI_FORMAT_TMSF        10

;// flags for wParam of MM_MCINOTIFY message
%define MCI_NOTIFY_SUCCESSFUL 1h
%define MCI_NOTIFY_SUPERSEDED 2h
%define MCI_NOTIFY_ABORTED    4h
%define MCI_NOTIFY_FAILURE    8h

;// common flags for dwFlags parameter of MCI command messages
%define MCI_NOTIFY 1h
%define MCI_WAIT   2h
%define MCI_FROM   4h
%define MCI_TO     8h
%define MCI_TRACK 10h

;// flags for dwFlags parameter of MCI_OPEN command message
%define MCI_OPEN_SHAREABLE  100h
%define MCI_OPEN_ELEMENT    200h
%define MCI_OPEN_ALIAS      400h
%define MCI_OPEN_ELEMENT_ID 800h
%define MCI_OPEN_TYPE_ID   1000h
%define MCI_OPEN_TYPE      2000h

;// flags for dwFlags parameter of MCI_SEEK command message
%define MCI_SEEK_TO_START 100h
%define MCI_SEEK_TO_END   200h

;// flags for dwFlags parameter of MCI_STATUS command message
%define MCI_STATUS_ITEM  100h
%define MCI_STATUS_START 200h

;// flags for dwItem field of the MCI_STATUS_PARMS parameter block
%define MCI_STATUS_LENGTH           1h
%define MCI_STATUS_POSITION         2h
%define MCI_STATUS_NUMBER_OF_TRACKS 3h
%define MCI_STATUS_MODE             4h
%define MCI_STATUS_MEDIA_PRESENT    5h
%define MCI_STATUS_TIME_FORMAT      6h
%define MCI_STATUS_READY            7h
%define MCI_STATUS_CURRENT_TRACK    8h

;// flags for dwFlags parameter of MCI_INFO command message
%define MCI_INFO_PRODUCT        100h
%define MCI_INFO_FILE           200h
%define MCI_INFO_MEDIA_UPC      400h
%define MCI_INFO_MEDIA_IDENTITY 800h
%define MCI_INFO_NAME          1000h
%define MCI_INFO_COPYRIGHT     2000h

;// flags for dwFlags parameter of MCI_GETDEVCAPS command message
%define MCI_GETDEVCAPS_ITEM 100h

;// flags for dwItem field of the MCI_GETDEVCAPS_PARMS parameter block
%define MCI_GETDEVCAPS_CAN_RECORD      1h
%define MCI_GETDEVCAPS_HAS_AUDIO       2h
%define MCI_GETDEVCAPS_HAS_VIDEO       3h
%define MCI_GETDEVCAPS_DEVICE_TYPE     4h
%define MCI_GETDEVCAPS_USES_FILES      5h
%define MCI_GETDEVCAPS_COMPOUND_DEVICE 6h
%define MCI_GETDEVCAPS_CAN_EJECT       7h
%define MCI_GETDEVCAPS_CAN_PLAY        8h
%define MCI_GETDEVCAPS_CAN_SAVE        9h

;// flags for dwFlags parameter of MCI_SYSINFO command message
%define MCI_SYSINFO_QUANTITY    100h
%define MCI_SYSINFO_OPEN        200h
%define MCI_SYSINFO_NAME        400h
%define MCI_SYSINFO_INSTALLNAME 800h

;// flags for dwFlags parameter of MCI_SET command message
%define MCI_SET_DOOR_OPEN   100h
%define MCI_SET_DOOR_CLOSED 200h
%define MCI_SET_TIME_FORMAT 400h
%define MCI_SET_AUDIO       800h
%define MCI_SET_VIDEO      1000h
%define MCI_SET_ON         2000h
%define MCI_SET_OFF        4000h

;// flags for dwAudio field of MCI_SET_PARMS or MCI_SEQ_SET_PARMS
%define MCI_SET_AUDIO_ALL   4001h
%define MCI_SET_AUDIO_LEFT  4002h
%define MCI_SET_AUDIO_RIGHT 4003h

;// flags for dwFlags parameter of MCI_BREAK command message
%define MCI_BREAK_KEY  100h
%define MCI_BREAK_HWND 200h
%define MCI_BREAK_OFF  400h

;// flags for dwFlags parameter of MCI_RECORD command message
%define MCI_RECORD_INSERT 100h
%define MCI_RECORD_OVERWRITE 200h

;// flags for dwFlags parameter of MCI_SAVE command message
%define MCI_SAVE_FILE 100h

;// flags for dwFlags parameter of MCI_LOAD command message
%define MCI_LOAD_FILE 100h

NASMX_STRUC MCI_GENERIC_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_OPEN_PARMS
    NASMX_RESERVE dwCallback,       size_t, 1
    NASMX_RESERVE wDeviceID,        uint32_t, 1
    NASMX_RESERVE lpstrDeviceType,  NASMX_PTR, 1
    NASMX_RESERVE lpstrElementName, NASMX_PTR, 1
    NASMX_RESERVE lpstrAlias,       NASMX_PTR, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_PLAY_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE dwFrom,     uint32_t, 1
    NASMX_RESERVE dwTo,       uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_SEEK_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE dwTo,       uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_STATUS_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE dwReturn,   size_t, 1
    NASMX_RESERVE dwItem,     uint32_t, 1
    NASMX_RESERVE dwTrack,    uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_INFO_PARMS
    NASMX_RESERVE dwCallback,  size_t, 1
    NASMX_RESERVE lpstrReturn, size_t, 1
    NASMX_RESERVE dwRetSize,   int32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_GETDEVCAPS_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE dwReturn,   uint32_t, 1
    NASMX_RESERVE dwItem,     uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_SYSINFO_PARMS
    NASMX_RESERVE dwCallback,  size_t, 1
    NASMX_RESERVE lpstrReturn, size_t, 1
    NASMX_RESERVE dwRetSize,   uint32_t, 1
    NASMX_RESERVE dwNumber,    uint32_t, 1
    NASMX_RESERVE wDeviceType, uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_SET_PARMS
    NASMX_RESERVE dwCallback,   size_t, 1
    NASMX_RESERVE dwTimeFormat, uint32_t, 1
    NASMX_RESERVE dwAudio,      uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_BREAK_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE nVirtKey,   int32_t, 1
    NASMX_RESERVE hwndBreak,  size_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_SAVE_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE lpFileName, size_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_LOAD_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE lpFileName, size_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_RECORD_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE dwFrom,     uint32_t, 1
    NASMX_RESERVE dwTo,       uint32_t, 1
NASMX_ENDSTRUC

%define MCI_VD_MODE_PARK    (MCI_VD_OFFSET+1)
%define MCI_VD_MEDIA_CLV    (MCI_VD_OFFSET+2)
%define MCI_VD_MEDIA_CAV    (MCI_VD_OFFSET+3)
%define MCI_VD_MEDIA_OTHER  (MCI_VD_OFFSET+4)
%define MCI_VD_FORMAT_TRACK  4001h
%define MCI_VD_PLAY_REVERSE 10000h
%define MCI_VD_PLAY_FAST    20000h
%define MCI_VD_PLAY_SPEED   40000h
%define MCI_VD_PLAY_SCAN    80000h
%define MCI_VD_PLAY_SLOW   100000h
;// flag for dwFlags parameter of MCI_SEEK command message
%define MCI_VD_SEEK_REVERSE 10000h
;// flags for dwItem field of MCI_STATUS_PARMS parameter block
%define MCI_VD_STATUS_SPEED      4002h
%define MCI_VD_STATUS_FORWARD    4003h
%define MCI_VD_STATUS_MEDIA_TYPE 4004h
%define MCI_VD_STATUS_SIDE       4005h
%define MCI_VD_STATUS_DISC_SIZE  4006h
;// flags for dwFlags parameter of MCI_GETDEVCAPS command message
%define MCI_VD_GETDEVCAPS_CLV 10000h
%define MCI_VD_GETDEVCAPS_CAV 20000h
%define MCI_VD_SPIN_UP   10000h
%define MCI_VD_SPIN_DOWN 20000h
;// flags for dwItem field of MCI_GETDEVCAPS_PARMS parameter block
%define MCI_VD_GETDEVCAPS_CAN_REVERSE 4002h
%define MCI_VD_GETDEVCAPS_FAST_RATE   4003h
%define MCI_VD_GETDEVCAPS_SLOW_RATE   4004h
%define MCI_VD_GETDEVCAPS_NORMAL_RATE 4005h
;// flags for the dwFlags parameter of MCI_STEP command message
%define MCI_VD_STEP_FRAMES  10000h
%define MCI_VD_STEP_REVERSE 20000h
;// flag for the MCI_ESCAPE command message
%define MCI_VD_ESCAPE_STRING 100h

NASMX_STRUC MCI_VD_PLAY_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE dwFrom,     uint32_t, 1
    NASMX_RESERVE dwTo,       uint32_t, 1
    NASMX_RESERVE dwSpeed,    uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_VD_STEP_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE dwFrames,   int32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_VD_ESCAPE_PARMS
    NASMX_RESERVE dwCallback,   size_t, 1
    NASMX_RESERVE lpstrCommand, size_t, 1
NASMX_ENDSTRUC

;// flags for the dwItem field of the MCI_STATUS_PARMS parameter block
%define MCI_CDA_STATUS_TYPE_TRACK 4001h
;// flags for the dwReturn field of MCI_STATUS_PARMS parameter block
%define MCI_CDA_TRACK_AUDIO    (MCI_CD_OFFSET+0)
%define MCI_CDA_TRACK_OTHER    (MCI_CD_OFFSET+1)
;// MCI extensions for waveform audio devices
%define MCI_WAVE_PCM    (MCI_WAVE_OFFSET+0)
%define MCI_WAVE_MAPPER (MCI_WAVE_OFFSET+1)
;// flags for the dwFlags parameter of MCI_OPEN command message
%define MCI_WAVE_OPEN_BUFFER 10000h
;// flags for the dwFlags parameter of MCI_SET command message
%define MCI_WAVE_SET_FORMATTAG      10000h
%define MCI_WAVE_SET_CHANNELS       20000h
%define MCI_WAVE_SET_SAMPLESPERSEC  40000h
%define MCI_WAVE_SET_AVGBYTESPERSEC 80000h
%define MCI_WAVE_SET_BLOCKALIGN    100000h
%define MCI_WAVE_SET_BITSPERSAMPLE 200000h
;// flags for the dwFlags parameter of MCI_STATUS, MCI_SET command messages
%define MCI_WAVE_INPUT  400000h
%define MCI_WAVE_OUTPUT 800000h
;// flags for the dwItem field of MCI_STATUS_PARMS parameter block
%define MCI_WAVE_STATUS_FORMATTAG      4001h
%define MCI_WAVE_STATUS_CHANNELS       4002h
%define MCI_WAVE_STATUS_SAMPLESPERSEC  4003h
%define MCI_WAVE_STATUS_AVGBYTESPERSEC 4004h
%define MCI_WAVE_STATUS_BLOCKALIGN     4005h
%define MCI_WAVE_STATUS_BITSPERSAMPLE  4006h
%define MCI_WAVE_STATUS_LEVEL          4007h
;// flags for the dwFlags parameter of MCI_SET command message
%define MCI_WAVE_SET_ANYINPUT  4000000h
%define MCI_WAVE_SET_ANYOUTPUT 8000000h
;// flags for the dwFlags parameter of MCI_GETDEVCAPS command message
%define MCI_WAVE_GETDEVCAPS_INPUTS  4001h
%define MCI_WAVE_GETDEVCAPS_OUTPUTS 4002h

NASMX_STRUC MCI_WAVE_OPEN_PARMS
    NASMX_RESERVE dwCallback,       size_t, 1
    NASMX_RESERVE wDeviceID,        uint32_t, 1
    NASMX_RESERVE lpstrDeviceType,  size_t, 1
    NASMX_RESERVE lpstrElementName, size_t, 1
    NASMX_RESERVE lpstrAlias,       size_t, 1
    NASMX_RESERVE dwBufferSeconds,  uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_WAVE_DELETE_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE dwFrom,     uint32_t, 1
    NASMX_RESERVE dwTo,       uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_WAVE_SET_PARMS
    NASMX_RESERVE dwCallback,      size_t, 1
    NASMX_RESERVE dwTimeFormat,    uint32_t, 1
    NASMX_RESERVE dwAudio,         uint32_t, 1
    NASMX_RESERVE wInput,          uint32_t, 1
    NASMX_RESERVE wOutput,         uint32_t, 1
    NASMX_RESERVE wFormatTag,      uint16_t, 1
    NASMX_RESERVE wReserved2,      uint16_t, 1
    NASMX_RESERVE nChannels,       uint16_t, 1
    NASMX_RESERVE wReserved3,      uint16_t, 1
    NASMX_RESERVE nSamplesPerSec,  uint32_t, 1
    NASMX_RESERVE nAvgBytesPerSec, uint32_t, 1
    NASMX_RESERVE nBlockAlign,     uint16_t, 1
    NASMX_RESERVE wReserved4,      uint16_t, 1
    NASMX_RESERVE wBitsPerSample,  uint16_t, 1
    NASMX_RESERVE wReserved5,      uint16_t, 1
NASMX_ENDSTRUC

;// flags for the dwReturn field of MCI_STATUS_PARMS parameter block
;// MCI_STATUS command, (dwItem == MCI_SEQ_STATUS_DIVTYPE)
%define MCI_SEQ_DIV_PPQN         (0+MCI_SEQ_OFFSET)
%define MCI_SEQ_DIV_SMPTE_24     (1+MCI_SEQ_OFFSET)
%define MCI_SEQ_DIV_SMPTE_25     (2+MCI_SEQ_OFFSET)
%define MCI_SEQ_DIV_SMPTE_30DROP (3+MCI_SEQ_OFFSET)
%define MCI_SEQ_DIV_SMPTE_30     (4+MCI_SEQ_OFFSET)

;// flags for the dwMaster field of MCI_SEQ_SET_PARMS parameter block
;// MCI_SET command, (dwFlags == MCI_SEQ_SET_MASTER)
%define MCI_SEQ_FORMAT_SONGPTR 4001h
%define MCI_SEQ_FILE           4002h
%define MCI_SEQ_MIDI           4003h
%define MCI_SEQ_SMPTE          4004h
%define MCI_SEQ_NONE   65533
%define MCI_SEQ_MAPPER 65535

;// flags for the dwItem field of MCI_STATUS_PARMS parameter block
%define MCI_SEQ_STATUS_TEMPO     4002h
%define MCI_SEQ_STATUS_PORT      4003h
%define MCI_SEQ_STATUS_SLAVE     4007h
%define MCI_SEQ_STATUS_MASTER    4008h
%define MCI_SEQ_STATUS_OFFSET    4009h
%define MCI_SEQ_STATUS_DIVTYPE   400Ah
%define MCI_SEQ_STATUS_NAME      400Bh
%define MCI_SEQ_STATUS_COPYRIGHT 400Ch

;// flags for the dwFlags parameter of MCI_SET command message
%define MCI_SEQ_SET_TEMPO    10000h
%define MCI_SEQ_SET_PORT     20000h
%define MCI_SEQ_SET_SLAVE    40000h
%define MCI_SEQ_SET_MASTER   80000h
%define MCI_SEQ_SET_OFFSET 1000000h

NASMX_STRUC MCI_SEQ_SET_PARMS
    NASMX_RESERVE dwCallback,   size_t, 1
    NASMX_RESERVE dwTimeFormat, uint32_t, 1
    NASMX_RESERVE dwAudio,      uint32_t, 1
    NASMX_RESERVE dwTempo,      uint32_t, 1
    NASMX_RESERVE dwPort,       uint32_t, 1
    NASMX_RESERVE dwSlave,      uint32_t, 1
    NASMX_RESERVE dwMaster,     uint32_t, 1
    NASMX_RESERVE dwOffset,     uint32_t, 1
NASMX_ENDSTRUC

;// flags for dwFlags parameter of MCI_OPEN command message
%define MCI_ANIM_OPEN_WS       10000h
%define MCI_ANIM_OPEN_PARENT   20000h
%define MCI_ANIM_OPEN_NOSTATIC 40000h

;// flags for dwFlags parameter of MCI_PLAY command message
%define MCI_ANIM_PLAY_SPEED   10000h
%define MCI_ANIM_PLAY_REVERSE 20000h
%define MCI_ANIM_PLAY_FAST    40000h
%define MCI_ANIM_PLAY_SLOW    80000h
%define MCI_ANIM_PLAY_SCAN   100000h

;// flags for dwFlags parameter of MCI_STEP command message
%define MCI_ANIM_STEP_REVERSE 10000h
%define MCI_ANIM_STEP_FRAMES  20000h

;// flags for dwItem field of MCI_STATUS_PARMS parameter block
%define MCI_ANIM_STATUS_SPEED   4001h
%define MCI_ANIM_STATUS_FORWARD 4002h
%define MCI_ANIM_STATUS_HWND    4003h
%define MCI_ANIM_STATUS_HPAL    4004h
%define MCI_ANIM_STATUS_STRETCH 4005h

;// flags for the dwFlags parameter of MCI_INFO command message
%define MCI_ANIM_INFO_TEXT 10000h

;// flags for dwItem field of MCI_GETDEVCAPS_PARMS parameter block
%define MCI_ANIM_GETDEVCAPS_CAN_REVERSE 4001h
%define MCI_ANIM_GETDEVCAPS_FAST_RATE   4002h
%define MCI_ANIM_GETDEVCAPS_SLOW_RATE   4003h
%define MCI_ANIM_GETDEVCAPS_NORMAL_RATE 4004h
%define MCI_ANIM_GETDEVCAPS_PALETTES    4006h
%define MCI_ANIM_GETDEVCAPS_CAN_STRETCH 4007h
%define MCI_ANIM_GETDEVCAPS_MAX_WINDOWS 4008h

;// flags for the MCI_REALIZE command message
%define MCI_ANIM_REALIZE_NORM 10000h
%define MCI_ANIM_REALIZE_BKGD 20000h

;// flags for dwFlags parameter of MCI_WINDOW command message
%define MCI_ANIM_WINDOW_HWND             10000h
%define MCI_ANIM_WINDOW_STATE            40000h
%define MCI_ANIM_WINDOW_TEXT             80000h
%define MCI_ANIM_WINDOW_ENABLE_STRETCH  100000h
%define MCI_ANIM_WINDOW_DISABLE_STRETCH 200000h

;// flags for hWnd field of MCI_ANIM_WINDOW_PARMS parameter block
;// MCI_WINDOW command message, (dwFlags == MCI_ANIM_WINDOW_HWND)
%define MCI_ANIM_WINDOW_DEFAULT 0h

;// flags for dwFlags parameter of MCI_PUT command message
%define MCI_ANIM_RECT            10000h
%define MCI_ANIM_PUT_SOURCE      20000h
%define MCI_ANIM_PUT_DESTINATION 40000h

;// flags for dwFlags parameter of MCI_WHERE command message
%define MCI_ANIM_WHERE_SOURCE      20000h
%define MCI_ANIM_WHERE_DESTINATION 40000h

;// flags for dwFlags parameter of MCI_UPDATE command message
%define MCI_ANIM_UPDATE_HDC 20000h

NASMX_STRUC MCI_ANIM_OPEN_PARMS
    NASMX_RESERVE dwCallback,       size_t, 1
    NASMX_RESERVE wDeviceID,        uint32_t, 1
    NASMX_RESERVE lpstrDeviceType,  size_t, 1
    NASMX_RESERVE lpstrElementName, size_t, 1
    NASMX_RESERVE lpstrAlias,       size_t, 1
    NASMX_RESERVE dwStyle,          uint32_t, 1
    NASMX_RESERVE hWndParent,       size_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_ANIM_PLAY_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE dwFrom,     uint32_t, 1
    NASMX_RESERVE dwTo,       uint32_t, 1
    NASMX_RESERVE dwSpeed,    uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_ANIM_STEP_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE dwFrames,   uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_ANIM_WINDOW_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE hwnd,       size_t, 1
    NASMX_RESERVE nCmdShow,   uint32_t, 1
    NASMX_RESERVE lpstrText,  size_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_ANIM_RECT_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
	NASMX_STRUC rc, RECT
		NASMX_RESERVE left,   int32_t, 1
		NASMX_RESERVE top,    int32_t, 1
		NASMX_RESERVE right,  int32_t, 1
		NASMX_RESERVE bottom, int32_t, 1
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC MCI_ANIM_UPDATE_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
	NASMX_STRUC rc, RECT
		NASMX_RESERVE left,   int32_t, 1
		NASMX_RESERVE top,    int32_t, 1
		NASMX_RESERVE right,  int32_t, 1
		NASMX_RESERVE bottom, int32_t, 1
	NASMX_ENDSTRUC
    NASMX_RESERVE hDC, size_t, 1
NASMX_ENDSTRUC

;// MCI extensions for video overlay devices
;// flags for dwFlags parameter of MCI_OPEN command message
%define MCI_OVLY_OPEN_WS     10000h
%define MCI_OVLY_OPEN_PARENT 20000h

;// flags for dwFlags parameter of MCI_STATUS command message
%define MCI_OVLY_STATUS_HWND    4001h
%define MCI_OVLY_STATUS_STRETCH 4002h

;// flags for dwFlags parameter of MCI_INFO command message
%define MCI_OVLY_INFO_TEXT 10000h

;// flags for dwItem field of MCI_GETDEVCAPS_PARMS parameter block
%define MCI_OVLY_GETDEVCAPS_CAN_STRETCH 4001h
%define MCI_OVLY_GETDEVCAPS_CAN_FREEZE  4002h
%define MCI_OVLY_GETDEVCAPS_MAX_WINDOWS 4003h

;// flags for dwFlags parameter of MCI_WINDOW command message
%define MCI_OVLY_WINDOW_HWND             10000h
%define MCI_OVLY_WINDOW_STATE            40000h
%define MCI_OVLY_WINDOW_TEXT             80000h
%define MCI_OVLY_WINDOW_ENABLE_STRETCH  100000h
%define MCI_OVLY_WINDOW_DISABLE_STRETCH 200000h

;// flags for hWnd parameter of MCI_OVLY_WINDOW_PARMS parameter block
%define MCI_OVLY_WINDOW_DEFAULT 0h

;// flags for dwFlags parameter of MCI_PUT command message
%define MCI_OVLY_RECT            10000h
%define MCI_OVLY_PUT_SOURCE      20000h
%define MCI_OVLY_PUT_DESTINATION 40000h
%define MCI_OVLY_PUT_FRAME       80000h
%define MCI_OVLY_PUT_VIDEO      100000h

;// flags for dwFlags parameter of MCI_WHERE command message
%define MCI_OVLY_WHERE_SOURCE      20000h
%define MCI_OVLY_WHERE_DESTINATION 40000h
%define MCI_OVLY_WHERE_FRAME       80000h
%define MCI_OVLY_WHERE_VIDEO      100000h

NASMX_STRUC MCI_OVLY_OPEN_PARMS
    NASMX_RESERVE dwCallback,       size_t, 1
    NASMX_RESERVE wDeviceID,        uint32_t, 1
    NASMX_RESERVE lpstrDeviceType,  size_t, 1
    NASMX_RESERVE lpstrElementName, size_t, 1
    NASMX_RESERVE lpstrAlias,       size_t, 1
    NASMX_RESERVE dwStyle,          uint32_t, 1
    NASMX_RESERVE hWndParent,       size_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_OVLY_WINDOW_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE hwnd,       size_t, 1
    NASMX_RESERVE nCmdShow,   uint32_t, 1
    NASMX_RESERVE lpstrText,  size_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MCI_OVLY_RECT_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
	NASMX_STRUC rc, RECT
		NASMX_RESERVE left,   int32_t, 1
		NASMX_RESERVE top,    int32_t, 1
		NASMX_RESERVE right,  int32_t, 1
		NASMX_RESERVE bottom, int32_t, 1
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC MCI_OVLY_SAVE_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE lpFileName, size_t, 1
	NASMX_STRUC rc, RECT
		NASMX_RESERVE left,   int32_t, 1
		NASMX_RESERVE top,    int32_t, 1
		NASMX_RESERVE right,  int32_t, 1
		NASMX_RESERVE bottom, int32_t, 1
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC MCI_OVLY_LOAD_PARMS
    NASMX_RESERVE dwCallback, size_t, 1
    NASMX_RESERVE lpFileName, size_t, 1
	NASMX_STRUC rc, RECT
		NASMX_RESERVE left,   int32_t, 1
		NASMX_RESERVE top,    int32_t, 1
		NASMX_RESERVE right,  int32_t, 1
		NASMX_RESERVE bottom, int32_t, 1
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

%endif  ;// ifndef MMNOMCI

;/////////////////////////////////////////////
;//
;// DISPLAY Driver extensions
;//

%ifndef NEWTRANSPARENT
%define NEWTRANSPARENT   3
%define QUERYROPSUPPORT 40
%endif
%define SELECTDIB       41
%ifndef SC_SCREENSAVE
%define SC_SCREENSAVE 0F140h
%endif

%endif  ;// ifndef __NASMX_MMSYSTEM_INCLUDED__
