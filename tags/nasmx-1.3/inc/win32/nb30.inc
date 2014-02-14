;//////////////////////////////////////////////////////////////
;//
;// NASMX Preprocessor
;// Copyright (c) 2005-2010, The NASMX Project
;//
;// nb30.inc
;// Created by Rob Neff
;//

%ifndef __NASMX_NB30_INCLUDED__
%define __NASMX_NB30_INCLUDED__

%define NCBNAMSZ 16
%define MAX_LANA 254

;// Network Control Block
NASMX_STRUC NCB
    NASMX_RESERVE ncb_command,  uint8_t, 1
    NASMX_RESERVE ncb_retcode,  uint8_t, 1
    NASMX_RESERVE ncb_lsn,      uint8_t, 1
    NASMX_RESERVE ncb_num,      uint8_t, 1
    NASMX_RESERVE ncb_buffer,   NASMX_PTR, 1
    NASMX_RESERVE ncb_length,   uint16_t, 1
    NASMX_RESERVE ncb_callname, uint8_t, NCBNAMSZ
    NASMX_RESERVE ncb_name,     uint8_t, NCBNAMSZ
    NASMX_RESERVE ncb_rto,      uint8_t, 1
    NASMX_RESERVE ncb_sto,      uint8_t, 1
    NASMX_RESERVE ncb_post,     NASMX_PTR, 1
    NASMX_RESERVE ncb_lana_num, uint8_t, 1
    NASMX_RESERVE ncb_cmd_cplt, uint8_t, 1
%ifidni __OUTPUT_FORMAT__,win64
    NASMX_RESERVE ncb_reserve,  uint8_t, 18
%else
    NASMX_RESERVE ncb_reserve,  uint8_t, 10
%endif
    NASMX_RESERVE ncb_event,    NASMX_PTR, 1
NASMX_ENDSTRUC

NASMX_STRUC ADAPTER_STATUS
    NASMX_RESERVE adapter_address,    uint8_t, 6
    NASMX_RESERVE rev_major,          uint8_t, 1
    NASMX_RESERVE reserved0,          uint8_t, 1
    NASMX_RESERVE adapter_type,       uint8_t, 1
    NASMX_RESERVE rev_minor,          uint8_t, 1
    NASMX_RESERVE duration,           uint16_t, 1
    NASMX_RESERVE frmr_recv,          uint16_t, 1
    NASMX_RESERVE frmr_xmit,          uint16_t, 1
    NASMX_RESERVE iframe_recv_err,    uint16_t, 1
    NASMX_RESERVE xmit_aborts,        uint16_t, 1
    NASMX_RESERVE xmit_success,       uint32_t, 1
    NASMX_RESERVE recv_success,       uint32_t, 1
    NASMX_RESERVE iframe_xmit_err,    uint16_t, 1
    NASMX_RESERVE recv_buff_unavail,  uint16_t, 1
    NASMX_RESERVE t1_timeouts,        uint16_t, 1
    NASMX_RESERVE ti_timeouts,        uint16_t, 1
    NASMX_RESERVE Reserved1,          uint32_t, 1
    NASMX_RESERVE free_ncbs,          uint16_t, 1
    NASMX_RESERVE max_cfg_ncbs,       uint16_t, 1
    NASMX_RESERVE max_ncbs,           uint16_t, 1
    NASMX_RESERVE xmit_buf_unavail,   uint16_t, 1
    NASMX_RESERVE max_dgram_isize,    uint16_t, 1
    NASMX_RESERVE pending_sess,       uint16_t, 1
    NASMX_RESERVE max_cfg_sess,       uint16_t, 1
    NASMX_RESERVE max_sess,           uint16_t, 1
    NASMX_RESERVE max_sess_pkt_isize, uint16_t, 1
    NASMX_RESERVE name_count,         uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC NAME_BUFFER
    NASMX_RESERVE name,       uint8_t, NCBNAMSZ
    NASMX_RESERVE name_num,   uint8_t, 1
    NASMX_RESERVE name_flags, uint8_t, 1
NASMX_ENDSTRUC

%define NAME_FLAGS_MASK 87h
%define GROUP_NAME      80h
%define UNIQUE_NAME      0h
%define REGISTERING      0h
%define REGISTERED       4h
%define DEREGISTERED     5h
%define DUPLICATE        6h
%define DUPLICATE_DEREG  7h

NASMX_STRUC SESSION_HEADER
    NASMX_RESERVE sess_name,           uint8_t, 1
    NASMX_RESERVE num_sess,            uint8_t, 1
    NASMX_RESERVE rcv_dg_outstanding,  uint8_t, 1
    NASMX_RESERVE rcv_any_outstanding, uint8_t, 1
NASMX_ENDSTRUC

NASMX_STRUC SESSION_BUFFER
    NASMX_RESERVE lsn,               uint8_t, 1
    NASMX_RESERVE State,             uint8_t, 1
    NASMX_RESERVE local_name,        uint8_t, NCBNAMSZ
    NASMX_RESERVE remote_name,       uint8_t, NCBNAMSZ
    NASMX_RESERVE rcvs_outstanding,  uint8_t, 1
    NASMX_RESERVE sends_outstanding, uint8_t, 1
NASMX_ENDSTRUC

;//  Values for state
%define LISTEN_OUTSTANDING  1h
%define CALL_PENDING        2h
%define SESSION_ESTABLISHED 3h
%define HANGUP_PENDING      4h
%define HANGUP_COMPLETE     5h
%define SESSION_ABORTED     6h

NASMX_STRUC LANA_ENUM
    NASMX_RESERVE length,  uint8_t, 1
    NASMX_RESERVE lana,    uint8_t, (MAX_LANA+1)
NASMX_ENDSTRUC

NASMX_STRUC FIND_NAME_HEADER
    NASMX_RESERVE node_count,   uint16_t, 1
    NASMX_RESERVE Reserved,     uint8_t, 1
    NASMX_RESERVE unique_group, uint8_t, 1
NASMX_ENDSTRUC

NASMX_STRUC FIND_NAME_BUFFER
    NASMX_RESERVE length,           uint8_t, 1
    NASMX_RESERVE access_control,   uint8_t, 1
    NASMX_RESERVE frame_control,    uint8_t, 1
    NASMX_RESERVE destination_addr, uint8_t, 6
    NASMX_RESERVE source_addr,      uint8_t, 6
    NASMX_RESERVE routing_info,     uint8_t, 18
NASMX_ENDSTRUC

NASMX_STRUC ACTION_HEADER
    NASMX_RESERVE transport_id, uint32_t, 1
    NASMX_RESERVE action_code,  uint16_t, 1
    NASMX_RESERVE reserved,     uint16_t, 1
NASMX_ENDSTRUC

;// NCB Command codes
%define NCBCALL        10h
%define NCBLISTEN      11h
%define NCBHANGUP      12h
%define NCBSEND        14h
%define NCBRECV        15h
%define NCBRECVANY     16h
%define NCBCHAINSEND   17h
%define NCBDGSEND      20h
%define NCBDGRECV      21h
%define NCBDGSENDBC    22h
%define NCBDGRECVBC    23h
%define NCBADDNAME     30h
%define NCBDELNAME     31h
%define NCBRESET       32h
%define NCBASTAT       33h
%define NCBSSTAT       34h
%define NCBCANCEL      35h
%define NCBADDGRNAME   36h
%define NCBENUM        37h
%define NCBUNLINK      70h
%define NCBSENDNA      71h
%define NCBCHAINSENDNA 72h
%define NCBLANSTALERT  73h
%define NCBACTION      77h
%define NCBFINDNAME    78h
%define NCBTRACE       79h
%define ASYNCH         80h

;// NCB Return codes
%define NRC_GOODRET      0h
%define NRC_BUFLEN       1h
%define NRC_ILLCMD       3h
%define NRC_CMDTMO       5h
%define NRC_INCOMP       6h
%define NRC_BADDR        7h
%define NRC_SNUMOUT      8h
%define NRC_NORES        9h
%define NRC_SCLOSED     0Ah
%define NRC_CMDCAN      0Bh
%define NRC_DUPNAME     0Dh
%define NRC_NAMTFUL     0Eh
%define NRC_ACTSES      0Fh
%define NRC_LOCTFUL     11h
%define NRC_REMTFUL     12h
%define NRC_ILLNN       13h
%define NRC_NOCALL      14h
%define NRC_NOWILD      15h
%define NRC_INUSE       16h
%define NRC_NAMERR      17h
%define NRC_SABORT      18h
%define NRC_NAMCONF     19h
%define NRC_IFBUSY      21h
%define NRC_TOOMANY     22h
%define NRC_BRIDGE      23h
%define NRC_CANOCCR     24h
%define NRC_CANCEL      26h
%define NRC_DUPENV      30h
%define NRC_ENVNOTDEF   34h
%define NRC_OSRESNOTAV  35h
%define NRC_MAXAPPS     36h
%define NRC_NOSAPS      37h
%define NRC_NORESOURCES 38h
%define NRC_INVADDRESS  39h
%define NRC_INVDDID     3Bh
%define NRC_LOCKFAIL    3Ch
%define NRC_OPENERR     3Fh
%define NRC_SYSTEM      40h
%define NRC_PENDING    0FFh

%endif  ; __NASMX_NB30_INCLUDED__
