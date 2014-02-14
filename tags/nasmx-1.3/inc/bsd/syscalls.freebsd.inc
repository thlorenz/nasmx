;*****************************
;***** The NASMX Project *****
;*****************************

%ifndef __NASMX_SYSCALL_INC__
%define __NASMX_SYSCALL_INC__

%define SYS_syscall          0
%define SYS_exit             1
%define SYS_fork             2
%define SYS_read             3
%define SYS_write            4
%define SYS_open             5
%define SYS_close            6
%define SYS_wait4            7
%define SYS_creat            8
%define SYS_link             9
%define SYS_unlink           10
%define SYS_execv            11
%define SYS_chdir            12
%define SYS_fchdir           13
%define SYS_mknod            14
%define SYS_chmod            15
%define SYS_chown            16
%define SYS_break            17
%define SYS_freebsd4_getfsstat 18
                           ; 19 is old lseek
%define SYS_getpid           20
%define SYS_mount            21
%define SYS_unmount          22
%define SYS_setuid           23
%define SYS_getuid           24
%define SYS_geteuid          25
%define SYS_ptrace           26
%define SYS_recvmsg          27
%define SYS_sendmsg          28
%define SYS_recvfrom         29
%define SYS_accept           30
%define SYS_getpeername      31
%define SYS_getsockname      32
%define SYS_access           33
%define SYS_chflags          34
%define SYS_fchflags         35
%define SYS_sync             36
%define SYS_kill             37
                           ; 38 is old stat
%define SYS_getppid          39
                           ; 40 is old lstat
%define SYS_dup              41
%define SYS_pipe             42
%define SYS_getegid          43
%define SYS_profil           44
%define SYS_ktrace           45
                           ; 46 is old sigaction
%define SYS_getgid           47
                           ; 48 is old sigprocmask
%define SYS_getlogin         49
%define SYS_setlogin         50
%define SYS_acct             51
                           ; 52 is old sigpending
%define SYS_sigaltstack      53
%define SYS_ioctl            54
%define SYS_reboot           55
%define SYS_revoke           56
%define SYS_symlink          57
%define SYS_readlink         58
%define SYS_execve           59
%define SYS_umask            60
%define SYS_chroot           61
                           ; 62 is old fstat
%define SYS_getkerninfo      63
%define SYS_getpagesize      64
%define SYS_msync            65
%define SYS_vfork            66
%define SYS_vread            67
%define SYS_vwrite           68
%define SYS_sbrk             69
%define SYS_sstk             70
                           ; 71 is old mmap
%define SYS_vadvise          72
%define SYS_munmap           73
%define SYS_mprotect         74
%define SYS_madvise          75
%define SYS_vhangup          76
%define SYS_vlimit           77
%define SYS_mincore          78
%define SYS_getgroups        79
%define SYS_setgroups        80
%define SYS_getpgrp          81
%define SYS_setpgid          82
%define SYS_setitimer        83
%define SYS_wait             84
%define SYS_swapon           85
%define SYS_getitimer        86
%define SYS_gethostname      87
%define SYS_sethostname      88
%define SYS_getdtablesize    89
%define SYS_dup2             90
%define SYS_fcntl            92
%define SYS_select           93
%define SYS_fsync            95
%define SYS_setpriority      96
%define SYS_socket           97
%define SYS_connect          98
                           ; 99 is old accept
%define SYS_getpriority      100
%define SYS_send             101
%define SYS_recv             102
                           ; 103 is old sigreturn
%define SYS_bind             104
%define SYS_setsockopt       105
%define SYS_listen           106
%define SYS_vtimes           107
%define SYS_sigvec           108
%define SYS_sigblock         109
%define SYS_sigsetmask       110
                           ; 111 is old sigsuspend
%define SYS_sigstack         112
                           ; 113 is old recvmsg
                           ; 114 is old sendmsg
%define SYS_vtrace           115
%define SYS_gettimeofday     116
%define SYS_getrusage        117
%define SYS_getsockopt       118
%define SYS_readv            120
%define SYS_writev           121
%define SYS_settimeofday     122
%define SYS_fchown           123
%define SYS_fchmod           124
                           ; 125 is old recvfrom
%define SYS_setreuid         126
%define SYS_setregid         127
%define SYS_rename           128
                           ; 129 is old truncate
                           ; 130 is old ftruncate
%define SYS_flock            131
%define SYS_mkfifo           132
%define SYS_sendto           133
%define SYS_shutdown         134
%define SYS_socketpair       135
%define SYS_mkdir            136
%define SYS_rmdir            137
%define SYS_utimes           138
                           ; 139 is obsolete 4.2 sigreturn
%define SYS_adjtime          140
                           ; 141 is old getpeername
%define SYS_gethostid        142
%define SYS_sethostid        143
                           ; 144 is old getrlimit
                           ; 145 is old setrlimit
%define SYS_                 146
%define SYS_setsid           147
%define SYS_quotactl         148
%define SYS_quota            149
                           ; 150 is old getsockname
%define SYS_nlm_syscall      154
%define SYS_nfssvc           155
                           ; 156 is old getdirentries
%define SYS_freebsd4_statfs  157
%define SYS_freebsd4_fstatfs 158
%define SYS_lgetfh           160
%define SYS_getfh            161
%define SYS_freebsd4_getdomainname 162
%define SYS_freebsd4_setdomainname 163
%define SYS_freebsd4_uname   164
%define SYS_sysarch          165
%define SYS_rtprio           166
%define SYS_semsys           169
%define SYS_msgsys           170
%define SYS_shmsys           171
%define SYS_freebsd6_pread   173
%define SYS_freebsd6_pwrite  174
%define SYS_setfib           175
%define SYS_ntp_adjtime      176
%define SYS_setgid           181
%define SYS_setegid          182
%define SYS_seteuid          183
%define SYS_stat             188
%define SYS_fstat            189
%define SYS_lstat            190
%define SYS_pathconf         191
%define SYS_fpathconf        192
%define SYS_getrlimit        194
%define SYS_setrlimit        195
%define SYS_getdirentries    196
%define SYS_freebsd6_mmap    197
%define SYS___syscall        198
%define SYS_freebsd6_lseek   199
%define SYS_freebsd6_truncate 200
%define SYS_freebsd6_ftruncate 201
%define SYS___sysctl         202
%define SYS_mlock            203
%define SYS_munlock          204
%define SYS_undelete         205
%define SYS_futimes          206
%define SYS_getpgid          207
%define SYS_poll             209
%define SYS_freebsd7___semctl 220
%define SYS_semget           221
%define SYS_semop            222
%define SYS_freebsd7_msgctl  224
%define SYS_msgget           225
%define SYS_msgsnd           226
%define SYS_msgrcv           227
%define SYS_shmat            228
%define SYS_freebsd7_shmctl  229
%define SYS_shmdt            230
%define SYS_shmget           231
%define SYS_clock_gettime    232
%define SYS_clock_settime    233
%define SYS_clock_getres     234
%define SYS_ktimer_create    235
%define SYS_ktimer_delete    236
%define SYS_ktimer_settime   237
%define SYS_ktimer_gettime   238
%define SYS_ktimer_getoverrun 239
%define SYS_nanosleep        240
%define SYS_ntp_gettime      248
%define SYS_minherit         250
%define SYS_rfork            251
%define SYS_openbsd_poll     252
%define SYS_issetugid        253
%define SYS_lchown           254
%define SYS_aio_read         255
%define SYS_aio_write        256
%define SYS_lio_listio       257
%define SYS_getdents         272
%define SYS_lchmod           274
%define SYS_netbsd_lchown    275
%define SYS_lutimes          276
%define SYS_netbsd_msync     277
%define SYS_nstat            278
%define SYS_nfstat           279
%define SYS_nlstat           280
%define SYS_preadv           289
%define SYS_pwritev          290
%define SYS_freebsd4_fhstatfs 297
%define SYS_fhopen           298
%define SYS_fhstat           299
%define SYS_modnext          300
%define SYS_modstat          301
%define SYS_modfnext         302
%define SYS_modfind          303
%define SYS_kldload          304
%define SYS_kldunload        305
%define SYS_kldfind          306
%define SYS_kldnext          307
%define SYS_kldstat          308
%define SYS_kldfirstmod      309
%define SYS_getsid           310
%define SYS_setresuid        311
%define SYS_setresgid        312
%define SYS_signanosleep     313
%define SYS_aio_return       314
%define SYS_aio_suspend      315
%define SYS_aio_cancel       316
%define SYS_aio_error        317
%define SYS_oaio_read        318
%define SYS_oaio_write       319
%define SYS_olio_listio      320
%define SYS_yield            321
%define SYS_thr_sleep        322
%define SYS_thr_wakeup       323
%define SYS_mlockall         324
%define SYS_munlockall       325
%define SYS___getcwd         326
%define SYS_sched_setparam   327
%define SYS_sched_getparam   328
%define SYS_sched_setscheduler 329
%define SYS_sched_getscheduler 330
%define SYS_sched_yield      331
%define SYS_sched_get_priority_max 332
%define SYS_sched_get_priority_min 333
%define SYS_sched_rr_get_interval 334
%define SYS_utrace           335
%define SYS_freebsd4_sendfile 336
%define SYS_kldsym           337
%define SYS_jail             338
%define SYS_nnpfs_syscall    339
%define SYS_sigprocmask      340
%define SYS_sigsuspend       341
%define SYS_freebsd4_sigaction 342
%define SYS_sigpending       343
%define SYS_freebsd4_sigreturn 344
%define SYS_sigtimedwait     345
%define SYS_sigwaitinfo      346
%define SYS___acl_get_file   347
%define SYS___acl_set_file   348
%define SYS___acl_get_fd     349
%define SYS___acl_set_fd     350
%define SYS___acl_delete_file 351
%define SYS___acl_delete_fd  352
%define SYS___acl_aclcheck_file 353
%define SYS___acl_aclcheck_fd 354
%define SYS_extattrctl       355
%define SYS_extattr_set_file 356
%define SYS_extattr_get_file 357
%define SYS_extattr_delete_file 358
%define SYS_aio_waitcomplete 359
%define SYS_getresuid        360
%define SYS_getresgid        361
%define SYS_kqueue           362
%define SYS_kevent           363
%define SYS_extattr_set_fd   371
%define SYS_extattr_get_fd   372
%define SYS_extattr_delete_fd 373
%define SYS___setugid        374
%define SYS_eaccess          376
%define SYS_afs3_syscall     377
%define SYS_nmount           378
%define SYS___mac_get_proc   384
%define SYS___mac_set_proc   385
%define SYS___mac_get_fd     386
%define SYS___mac_get_file   387
%define SYS___mac_set_fd     388
%define SYS___mac_set_file   389
%define SYS_kenv             390
%define SYS_lchflags         391
%define SYS_uuidgen          392
%define SYS_sendfile         393
%define SYS_mac_syscall      394
%define SYS_getfsstat        395
%define SYS_statfs           396
%define SYS_fstatfs          397
%define SYS_fhstatfs         398
%define SYS_ksem_close       400
%define SYS_ksem_post        401
%define SYS_ksem_wait        402
%define SYS_ksem_trywait     403
%define SYS_ksem_init        404
%define SYS_ksem_open        405
%define SYS_ksem_unlink      406
%define SYS_ksem_getvalue    407
%define SYS_ksem_destroy     408
%define SYS___mac_get_pid    409
%define SYS___mac_get_link   410
%define SYS___mac_set_link   411
%define SYS_extattr_set_link 412
%define SYS_extattr_get_link 413
%define SYS_extattr_delete_link 414
%define SYS___mac_execve     415
%define SYS_sigaction        416
%define SYS_sigreturn        417
%define SYS_getcontext       421
%define SYS_setcontext       422
%define SYS_swapcontext      423
%define SYS_swapoff          424
%define SYS___acl_get_link   425
%define SYS___acl_set_link   426
%define SYS___acl_delete_link 427
%define SYS___acl_aclcheck_link 428
%define SYS_sigwait          429
%define SYS_thr_create       430
%define SYS_thr_exit         431
%define SYS_thr_self         432
%define SYS_thr_kill         433
%define SYS__umtx_lock       434
%define SYS__umtx_unlock     435
%define SYS_jail_attach      436
%define SYS_extattr_list_fd  437
%define SYS_extattr_list_file 438
%define SYS_extattr_list_link 439
%define SYS_ksem_timedwait   441
%define SYS_thr_suspend      442
%define SYS_thr_wake         443
%define SYS_kldunloadf       444
%define SYS_audit            445
%define SYS_auditon          446
%define SYS_getauid          447
%define SYS_setauid          448
%define SYS_getaudit         449
%define SYS_setaudit         450
%define SYS_getaudit_addr    451
%define SYS_setaudit_addr    452
%define SYS_auditctl         453
%define SYS__umtx_op         454
%define SYS_thr_new          455
%define SYS_sigqueue         456
%define SYS_kmq_open         457
%define SYS_kmq_setattr      458
%define SYS_kmq_timedreceive 459
%define SYS_kmq_timedsend    460
%define SYS_kmq_notify       461
%define SYS_kmq_unlink       462
%define SYS_abort2           463
%define SYS_thr_set_name     464
%define SYS_aio_fsync        465
%define SYS_rtprio_thread    466
%define SYS_sctp_peeloff     471
%define SYS_sctp_generic_sendmsg 472
%define SYS_sctp_generic_sendmsg_iov 473
%define SYS_sctp_generic_recvmsg 474
%define SYS_pread            475
%define SYS_pwrite           476
%define SYS_mmap             477
%define SYS_lseek            478
%define SYS_truncate         479
%define SYS_ftruncate        480
%define SYS_thr_kill2        481
%define SYS_shm_open         482
%define SYS_shm_unlink       483
%define SYS_cpuset           484
%define SYS_cpuset_setid     485
%define SYS_cpuset_getid     486
%define SYS_cpuset_getaffinity 487
%define SYS_cpuset_setaffinity 488
%define SYS_faccessat        489
%define SYS_fchmodat         490
%define SYS_fchownat         491
%define SYS_fexecve          492
%define SYS_fstatat          493
%define SYS_futimesat        494
%define SYS_linkat           495
%define SYS_mkdirat          496
%define SYS_mkfifoat         497
%define SYS_mknodat          498
%define SYS_openat           499
%define SYS_readlinkat       500
%define SYS_renameat         501
%define SYS_symlinkat        502
%define SYS_unlinkat         503
%define SYS_posix_openpt     504
%define SYS_gssd_syscall     505
%define SYS_jail_get         506
%define SYS_jail_set         507
%define SYS_jail_remove      508
%define SYS_closefrom        509
%define SYS___semctl         510
%define SYS_msgctl           511
%define SYS_shmctl           512
%define SYS_lpathconf        513
%define SYS_cap_new          514
%define SYS_cap_getrights    515
%define SYS_cap_enter        516
%define SYS_cap_getmode      517
%define SYS_pdfork           518
%define SYS_pdkill           519
%define SYS_pdgetpid         520
%define SYS_pselect          522
%define SYS_getloginclass    523
%define SYS_setloginclass    524
%define SYS_rctl_get_racct   525
%define SYS_rctl_get_rules   526
%define SYS_rctl_get_limits  527
%define SYS_rctl_add_rule    528
%define SYS_rctl_remove_rule 529
%define SYS_posix_fallocate  530
%define SYS_posix_fadvise    531

%if __BITS__ == 64

; ---------------------------------
; SysCall Macro - BSD 64-bit
; ---------------------------------

; To work around a Nasm warning this macro is defined
; as taking 0-7 args since the opcode syscall is used
; on 64-bit BSD.
; Also, use caution when checking integral values that
; can benefit from sign-extension.  For example,
; 0xFFFFFFFF can be interpreted as -1 or 4294967295.
; The adventurous among you can also add checks for
; specific cpu types and inject opcodes based on speed
; vs. size considerations.

%imacro syscall 0-7.nolist
    %if %0 > 1
        %if %0 > 2
            %if %0 > 3
                %if %0 > 4
                    %if %0 > 5
                        %if %0 > 6
                            %ifnum %{7}
                                %if %{7} == 0
                                    xor r9, r9
                                %elif %{7} == -1
                                    or  r9, -1
                                %elif ((%{7} >= -2147483648) && (%{7} <= 2147483647))
                                    mov r9d, %{7}
                                %else
                                    mov r9, %{7}
                                %endif
                            %elifnidi %{7}, r9
                                mov r9, %{7}
                            %endif
                        %endif
                        %ifnum %{6}
                            %if %{6} == 0
                                xor r8, r8
                            %elif %{6} == -1
                                or  r8, -1
                            %elif ((%{6} >= -2147483648) && (%{6} <= 2147483647))
                                mov r8d, %{6}
                            %else
                                mov r8, %{6}
                            %endif
                        %elifnidni %{6}, r8
                            mov r8, %{6}
                        %endif
                    %endif
                    %ifnum %{5}
                        %if %{5} == 0
                            xor rcx, rcx
                        %elif %{5} == -1
                            or  rcx, -1
                        %elif ((%{5} >= -2147483648) && (%{5} <= 2147483647))
                            mov ecx, %{5}
                        %else
                            mov rcx, %{5}
                        %endif
                    %elifnidni %{5}, rcx
                        mov rcx, %{5}
                    %endif
                %endif
                %ifnum %{4}
                    %if %{4} == 0
                        xor rdx, rdx
                    %elif %{4} == -1
                        or  rdx, -1
                    %elif ((%{4} >= -2147483648) && (%{4} <= 2147483647))
                        mov edx, %{4}
                    %else
                        mov rdx, %{4}
                    %endif
                %elifnidni %{4}, rdx
                    mov rdx, %{4}
                %endif
            %endif
            %ifnum %{3}
                %if %{3} == 0
                    xor rsi, rsi
                %elif %{3} == -1
                    or  rsi, -1
                %elif ((%{3} >= -2147483648) && (%{3} <= 2147483647))
                    mov esi, %{3}
                %else
                    mov rsi, %{3}
                %endif
            %elifnidni %{3}, rsi
                mov rsi, %{3}
            %endif
        %endif
        %ifnum %{2}
            %if %{2} == 0
                xor rdi, rdi
            %elif %{2} == -1
                or  rdi, -1
            %elif ((%{2} >= -2147483648) && (%{2} <= 2147483647))
                mov edi, %{2}
            %else
                mov rdi, %{2}
            %endif
        %elifnidni %{2}, rdi
            mov rdi, %{2}
        %endif
    %endif
    %ifdef SYS_%[%1]
        mov eax, SYS_%[%1]
    %else
        %ifnum %{1}
            mov eax, %{1}
        %elifnidni %{1}, rax
            mov rax, %{1}
	%endif
    %endif
    syscall  ; the opcode, not the macro
%endmacro

%else
; ---------------------------------
; SysCall Macro - BSD 32-bit
; ---------------------------------

%imacro syscall 1-7.nolist
    %if %0 > 1
        ; if using pre-built callstack
        ; warn if not large enough
        %assign %%__ofst 0
        %ifdef __NX_PROLOGUE_CALLSTACK_ADJUST__
            %assign %%__ofst ( ( %0 - 1 ) * 4 )
            %if %%__ofst > __NX_PROLOGUE_CALLSTACK_ADJUST__ - 4
                %warning 'params exceed callstack size'
            %endif
        %endif
        %rep %0-1
            %rotate -1
            ; if using pre-built callstack
            %ifdef __NX_PROLOGUE_CALLSTACK_ADJUST__
                mov [esp + %%__ofst], %{1}
                %assign %%__ofst %%__ofst - 4
            %else
                push %{1}
            %endif
        %endrep
        %rotate -1
    %endif
    %ifdef SYS_%[%1]
        mov eax, SYS_%[%1]
    %else
        %ifnum %{1}
            mov eax, %{1}
        %elifnidni %{1}, eax
            mov eax, %{1}
        %endif
    %endif
    %if %0 > 1
        ; if callstack not pre-built
        ; then adjust the stack.
        %ifndef __NX_PROLOGUE_CALLSTACK_ADJUST__
            push eax
        %else
            mov [esp], eax
        %endif
    %endif
    int 0x80
    %if %0 > 1
        ; if callstack not pre-built
        ; then restore the stack
        %ifndef __NX_PROLOGUE_CALLSTACK_ADJUST__
            add esp, %0 * 4
        %endif
    %endif
%endmacro

%endif

%endif  ; __NASMX_SYSCALL_INC__

