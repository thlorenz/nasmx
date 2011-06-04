;*****************************
;***** The NASMX Project *****
;*****************************

%ifndef __NASMX_SYSCALL_INC__
%define __NASMX_SYSCALL_INC__

; ---------------------------------
; SysCall Macro
; ---------------------------------

%if __NASMX_ABI_BITS__ == 64

%imacro syscall64 1-7
  %if %0 > 1
    %if %0 > 2
      %if %0 > 3
        %if %0 > 4
          %if %0 > 5
            %if %0 > 6
              mov r9, %{7}
            %endif
            mov r8, %{6}
          %endif
          mov r10, %{5}
        %endif
        mov rdx, %{4}
      %endif
      mov rsi, %{3}
    %endif
    mov rdi, %{2}
  %endif
  mov rax, SYS_ %+ %{1}
  syscall  ; the opcode, not the macro
%endmacro

%endif

; ---------------------------------
; SysCall Macro
; ---------------------------------

%imacro syscall 1-6
 %if %0 > 1
  %if %0 > 2
   %if %0 > 3
    %if %0 > 4
     %if %0 > 5
      mov edi, %{6}
     %endif
     mov esi, %{5}
    %endif
    mov edx, %{4}
   %endif
   mov ecx, %{3}
  %endif
  mov ebx, %{2}
 %endif
 mov eax, SYS_ %+ %{1}
 int 0x80
%endmacro

; ---------------------------------
; System Call Listing
; ---------------------------------

SYS_restart_syscall    equ 0           ;old setup() system call
SYS_exit               equ 1
SYS_fork               equ 2
SYS_read               equ 3
SYS_write              equ 4
SYS_open               equ 5
SYS_close              equ 6
SYS_waitpid            equ 7
SYS_creat              equ 8
SYS_link               equ 9
SYS_unlink             equ 10
SYS_execve             equ 11
SYS_chdir              equ 12
SYS_time               equ 13
SYS_mknod              equ 14
SYS_chmod              equ 15
SYS_lchown16           equ 16
SYS_break              equ 17          ;old break syscall holder
SYS_stat               equ 18
SYS_lseek              equ 19
SYS_getpid             equ 20
SYS_mount              equ 21
SYS_oldumount          equ 22
SYS_setuid16           equ 23
SYS_getuid16           equ 24
SYS_stime              equ 25
SYS_ptrace             equ 26
SYS_alarm              equ 27
SYS_fstat              equ 28
SYS_pause              equ 29
SYS_utime              equ 30
SYS_stty               equ 31          ;old stty syscall holder
SYS_gtty               equ 32          ;old gtty syscall holder
SYS_access             equ 33
SYS_nice               equ 34
SYS_ftime              equ 35          ;old ftime syscall holder
SYS_sync               equ 36
SYS_kill               equ 37
SYS_rename             equ 38
SYS_mkdir              equ 39
SYS_rmdir              equ 40
SYS_dup                equ 41
SYS_pipe               equ 42
SYS_times              equ 43
SYS_prof               equ 44          ;old prof syscall holder
SYS_brk                equ 45
SYS_setgid16           equ 46
SYS_getgid16           equ 47
SYS_signal             equ 48
SYS_geteuid16          equ 49
SYS_getegid16          equ 50
SYS_acct               equ 51
SYS_umount             equ 52          ;recycled never used phys()
SYS_lock               equ 53          ;old lock syscall holder
SYS_ioctl              equ 54
SYS_fcntl              equ 55
SYS_mpx                equ 56          ;old mpx syscall holder
SYS_setpgid            equ 57
SYS_ulimit             equ 58          ;old ulimit syscall holder
SYS_olduname           equ 59
SYS_umask              equ 60
SYS_chroot             equ 61
SYS_ustat              equ 62
SYS_dup2               equ 63
SYS_getppid            equ 64
SYS_getpgrp            equ 65
SYS_setsid             equ 66
SYS_sigaction          equ 67
SYS_sgetmask           equ 68
SYS_ssetmask           equ 69
SYS_setreuid16         equ 70
SYS_setregid16         equ 71
SYS_sigsuspend         equ 72
SYS_sigpending         equ 73
SYS_sethostname        equ 74
SYS_setrlimit          equ 75
SYS_old_getrlimit      equ 76
SYS_getrusage          equ 77
SYS_gettimeofday       equ 78
SYS_settimeofday       equ 79
SYS_getgroups16        equ 80
SYS_setgroups16        equ 81
SYS_old_select         equ 82
SYS_symlink            equ 83
SYS_lstat              equ 84
SYS_readlink           equ 85
SYS_uselib             equ 86
SYS_swapon             equ 87
SYS_reboot             equ 88
SYS_old_readdir        equ 89
SYS_readdir            equ 89
SYS_old_mmap           equ 90
SYS_mmap               equ 90
SYS_munmap             equ 91
SYS_truncate           equ 92
SYS_ftruncate          equ 93
SYS_fchmod             equ 94
SYS_fchown16           equ 95
SYS_getpriority        equ 96
SYS_setpriority        equ 97
SYS_profil             equ 98          ;old profil syscall holder
SYS_statfs             equ 99
SYS_fstatfs            equ 100
SYS_ioperm             equ 101
SYS_socketcall         equ 102
SYS_syslog             equ 103
SYS_setitimer          equ 104
SYS_getitimer          equ 105
SYS_newstat            equ 106
SYS_newlstat           equ 107
SYS_newfstat           equ 108
SYS_uname              equ 109
SYS_iopl               equ 110
SYS_vhangup            equ 111
SYS_idle               equ 112         ;old idle syscall
SYS_vm86old            equ 113
SYS_wait4              equ 114
SYS_swapoff            equ 115
SYS_sysinfo            equ 116
SYS_ipc                equ 117
SYS_fsync              equ 118
SYS_sigreturn          equ 119
SYS_clone              equ 120
SYS_setdomainname      equ 121
SYS_newuname           equ 122
SYS_modify_ldt         equ 123
SYS_adjtimex           equ 124
SYS_mprotect           equ 125
SYS_sigprocmask        equ 126
SYS_create_module      equ 127         ;old create_module syscall
SYS_init_module        equ 128
SYS_delete_module      equ 129
SYS_get_kernel_syms    equ 130         ;old get_kernel_syms
SYS_quotactl           equ 131
SYS_getpgid            equ 132
SYS_fchdir             equ 133
SYS_bdflush            equ 134
SYS_sysfs              equ 135
SYS_personality        equ 136
SYS_afs_syscall        equ 137         ;reserved for andrew file system syscall
SYS_setfsuid16         equ 138
SYS_setfsgid16         equ 139
SYS_llseek             equ 140
SYS_getdents           equ 141
SYS_select             equ 142
SYS_flock              equ 143
SYS_msync              equ 144
SYS_readv              equ 145
SYS_writev             equ 146
SYS_getsid             equ 147
SYS_fdatasync          equ 148
SYS_sysctl             equ 149
SYS_mlock              equ 150
SYS_munlock            equ 151
SYS_mlockall           equ 152
SYS_munlockall         equ 153
SYS_sched_setparam     equ 154
SYS_sched_getparam     equ 155
SYS_sched_setscheduler equ 156
SYS_sched_getscheduler equ 157
SYS_sched_yield        equ 158
SYS_sched_get_priority_max    equ 159
SYS_sched_get_priority_min    equ 160
SYS_sched_rr_get_interval     equ 161
SYS_nanosleep          equ 162
SYS_mremap             equ 163
SYS_setresuid16        equ 164
SYS_getresuid16        equ 165
SYS_vm86               equ 166
SYS_query_module       equ 167         ;old SYS_query_module
SYS_poll               equ 168
SYS_nfsservctl         equ 169
SYS_setresgid16        equ 170
SYS_getresgid16        equ 171
SYS_prctl              equ 172
SYS_rt_sigreturn       equ 173
SYS_rt_sigaction       equ 174
SYS_rt_sigprocmask     equ 175
SYS_rt_sigpending      equ 176
SYS_rt_sigtimedwait    equ 177
SYS_rt_sigqueueinfo    equ 178
SYS_rt_sigsuspend      equ 179
SYS_pread64            equ 180
SYS_pwrite64           equ 181
SYS_chown16            equ 182
SYS_getcwd             equ 183
SYS_capget             equ 184
SYS_capset             equ 185
SYS_sigalstack         equ 186
SYS_sendfile           equ 187
SYS_getpmsg            equ 188         ;reserved for streams1
SYS_putpmsg            equ 189         ;reserved for streams2
SYS_vfork              equ 190
SYS_getrlimit          equ 191
SYS_mmap_pgoff         equ 192
SYS_truncate64         equ 193
SYS_ftruncate64        equ 194
SYS_stat64             equ 195
SYS_lstat64            equ 196
SYS_fstat64            equ 197
SYS_lchown             equ 198
SYS_getuid             equ 199
SYS_getgid             equ 200
SYS_geteuid            equ 201
SYS_getegid            equ 202
SYS_setreuid           equ 203
SYS_setregid           equ 204
SYS_getgroups          equ 205
SYS_setgroups          equ 206
SYS_fchown             equ 207
SYS_setresuid          equ 208
SYS_getresuid          equ 209
SYS_setresgid          equ 210
SYS_getresgid          equ 211
SYS_chown              equ 212
SYS_setuid             equ 213
SYS_setgid             equ 214
SYS_setfsuid           equ 215
SYS_setfsgid           equ 216
SYS_pivot_root         equ 217
SYS_mincore            equ 218
SYS_madvise            equ 219
SYS_getdents64         equ 220
SYS_fcntl64            equ 221
;SYS_ni_syscall        equ 222         ;reserved for TUX
;SYS_ni_syscall        equ 223
SYS_gettid             equ 224
SYS_readahead          equ 225
SYS_setxattr           equ 226
SYS_lsetxattr          equ 227
SYS_fsetxattr          equ 228
SYS_getxattr           equ 229
SYS_lgetxattr          equ 230
SYS_fgetxattr          equ 231
SYS_listxattr          equ 232
SYS_llistxattr         equ 233
SYS_flistxattr         equ 234
SYS_removexattr        equ 235
SYS_lremovexattr       equ 236
SYS_fremovexattr       equ 237
SYS_tkill              equ 238
SYS_sendfile64         equ 239
SYS_futex              equ 240
SYS_sched_set_affinity equ 241
SYS_sched_get_affinity equ 242
SYS_set_thread_area    equ 243
SYS_get_thread_area    equ 244
SYS_io_setup           equ 245
SYS_io_destroy         equ 246
SYS_io_getevents       equ 247
SYS_io_submit          equ 248
SYS_io_cancel          equ 249
SYS_fadvise64          equ 250
;SYS_ni_syscall        equ 251
SYS_exit_group         equ 252
SYS_lookup_dcookie     equ 253
SYS_epoll_create       equ 254
SYS_epoll_ctl          equ 255
SYS_epoll_wait         equ 256
SYS_remap_file_pages   equ 257
SYS_set_tid_address    equ 258
SYS_timer_create       equ 259
SYS_timer_settime      equ 260
SYS_timer_gettime      equ 261
SYS_timer_getoverrun   equ 262
SYS_timer_delete       equ 263
SYS_clock_settime      equ 264
SYS_clock_gettime      equ 265
SYS_clock_getres       equ 266
SYS_clock_nanosleep    equ 267
SYS_statfs64           equ 268
SYS_fstatfs64          equ 269
SYS_tgkill             equ 270
SYS_utimes             equ 271
SYS_fadvise64_64       equ 272
SYS_vserver            equ 273
SYS_mbind              equ 274
SYS_get_mempolicy      equ 275
SYS_set_mempolicy      equ 276
SYS_mq_open            equ 277
SYS_mq_unlink          equ 278
SYS_mq_timedsend       equ 279
SYS_mq_timedreceive    equ 280
SYS_mq_notify          equ 281
SYS_mq_getsetattr      equ 282
SYS_kexec_load         equ 283
SYS_waitid             equ 284
;SYS_ni_syscall        equ 285         ;available
SYS_add_key            equ 286
SYS_request_key        equ 287
SYS_keyctl             equ 288
SYS_ioprio_set         equ 289
SYS_ioprio_get         equ 290
SYS_inotify_init       equ 291
SYS_inotify_add_watch  equ 292
SYS_inotify_rm_watch   equ 293
SYS_migrate_pages      equ 294
SYS_openat             equ 295
SYS_mkdirat            equ 296
SYS_mknodat            equ 297
SYS_fchownat           equ 298
SYS_futimesat          equ 299
SYS_fstatat64          equ 300
SYS_unlinkat           equ 301
SYS_renameat           equ 302
SYS_linkat             equ 303
SYS_symlinkat          equ 304
SYS_readlinkat         equ 305
SYS_fchmodat           equ 306
SYS_faccessat          equ 307
SYS_pselect6           equ 308
SYS_ppoll              equ 309
SYS_unshare            equ 310
SYS_set_robust_list    equ 311
SYS_get_robust_list    equ 312
SYS_splice             equ 313
SYS_sync_file_range    equ 314
SYS_tee                equ 315
SYS_vmsplice           equ 316
SYS_move_pages         equ 317
SYS_getcpu             equ 318
SYS_epoll_pwait        equ 319
SYS_utimensat          equ 320
SYS_signalfd           equ 321
SYS_timerfd_create     equ 322
SYS_eventfd            equ 323
SYS_fallocate          equ 324
SYS_timerfd_settime    equ 325
SYS_timerfd_gettime    equ 326
SYS_signalfd4          equ 327
SYS_eventfd2           equ 328
SYS_epoll_create1      equ 329
SYS_dup3               equ 330
SYS_pipe2              equ 331
SYS_inotify_init1      equ 332
SYS_preadv             equ 333
SYS_pwritev            equ 334
SYS_rt_tgsigqueueinfo  equ 335
SYS_perf_event_open    equ 336
SYS_recvmmsg           equ 337
SYS_fanotify_event     equ 338
SYS_fanotify_mark      equ 339
SYS_prlimit64          equ 340

%endif ; __NASMX_SYSCALL_INC__
