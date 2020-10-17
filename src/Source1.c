args_solve:                             # @args_solve
push    rbp
mov     rbp, rsp
sub     rsp, 160
mov     dword ptr[rbp - 8], edi
mov     qword ptr[rbp - 16], rsi
mov     qword ptr[rbp - 24], rdx
mov     qword ptr[rbp - 32], rcx
cmp     dword ptr[rbp - 8], 1
jg.LBB0_2
mov     word ptr[rbp - 2], -1
jmp.LBB0_63
.LBB0_2:
cmp     dword ptr[rbp - 8], 3
jle.LBB0_4
mov     word ptr[rbp - 2], -2
jmp.LBB0_63
.LBB0_4 :
    cmp     dword ptr[rbp - 8], 2
    jle.LBB0_8
    mov     esi, 61
    mov     rax, qword ptr[rbp - 16]
    mov     rdi, qword ptr[rax + 8]
    call    strchr
    cmp     rax, 0
    jne.LBB0_8
    mov     esi, 61
    mov     rax, qword ptr[rbp - 16]
    mov     rdi, qword ptr[rax + 16]
    call    strchr
    cmp     rax, 0
    jne.LBB0_8
    mov     word ptr[rbp - 2], -4
    jmp.LBB0_63
    .LBB0_8:
mov     esi, 61
mov     rax, qword ptr[rbp - 16]
mov     rdi, qword ptr[rax + 8]
call    strchr
cmp     rax, 0
je.LBB0_32
mov     esi, 61
mov     rax, qword ptr[rbp - 16]
mov     rdi, qword ptr[rax + 8]
mov     dword ptr[rbp - 92], esi # 4 - byte Spill
call    strlen
mov     rdi, qword ptr[rbp - 16]
mov     rdi, qword ptr[rdi + 8]
mov     esi, dword ptr[rbp - 92] # 4 - byte Reload
mov     qword ptr[rbp - 104], rax # 8 - byte Spill
call    strchr
mov     rdi, rax
call    strlen
mov     rdi, qword ptr[rbp - 104] # 8 - byte Reload
sub     rdi, rax
add     rdi, 1
mov     qword ptr[rbp - 56], rdi
mov     rax, qword ptr[rbp - 56]
mov     rdi, qword ptr[rbp - 16]
mov     rdi, qword ptr[rdi + 8]
mov     qword ptr[rbp - 112], rax # 8 - byte Spill
call    strlen
mov     rdi, qword ptr[rbp - 112] # 8 - byte Reload
cmp     rdi, rax
jae.LBB0_26
mov     rax, qword ptr[rbp - 56]
shl     rax, 0
mov     rdi, rax
call    malloc
mov     qword ptr[rbp - 40], rax
mov     rdi, qword ptr[rbp - 40]
mov     rax, qword ptr[rbp - 16]
mov     rsi, qword ptr[rax + 8]
mov     rdx, qword ptr[rbp - 56]
call    strncpy
mov     rdx, qword ptr[rbp - 56]
mov     rsi, qword ptr[rbp - 40]
mov     byte ptr[rsi + rdx], 0
mov     qword ptr[rbp - 72], 0
mov     rdx, qword ptr[rbp - 16]
mov     rdi, qword ptr[rdx + 8]
mov     qword ptr[rbp - 120], rax # 8 - byte Spill
call    strlen
shl     rax, 0
sub     rax, qword ptr[rbp - 56]
mov     rdi, rax
call    malloc
mov     esi, 61
mov     qword ptr[rbp - 64], rax
mov     rax, qword ptr[rbp - 16]
mov     rdi, qword ptr[rax + 8]
call    strchr
add     rax, 1
mov     qword ptr[rbp - 64], rax
mov     rax, qword ptr[rbp - 64]
movsx   esi, byte ptr[rax]
cmp     esi, 49
jl.LBB0_12
mov     rax, qword ptr[rbp - 64]
movsx   ecx, byte ptr[rax]
cmp     ecx, 57
jle.LBB0_13
.LBB0_12:
mov     rax, qword ptr[rbp - 64]
movsx   ecx, byte ptr[rax]
cmp     ecx, 45
jne.LBB0_14
.LBB0_13 :
    lea     rsi, qword ptr[rbp - 64]
    mov     edx, 10
    mov     rdi, qword ptr[rbp - 64]
    call    strtoll
    mov     qword ptr[rbp - 72], rax
    .LBB0_14:
mov     rdi, qword ptr[rbp - 40]
mov     eax, .L.str
mov     esi, eax
call    strcmp
cmp     eax, 0
jne.LBB0_19
mov     rdi, qword ptr[rbp - 64]
call    strlen
cmp     rax, 0
jne.LBB0_17
mov     rax, qword ptr[rbp - 72]
mov     rcx, qword ptr[rbp - 24]
mov     qword ptr[rcx], rax
jmp.LBB0_18
.LBB0_17:
mov     rax, qword ptr[rbp - 24]
mov     qword ptr[rax], 0
.LBB0_18 :
    jmp.LBB0_25
    .LBB0_19 :
    mov     rdi, qword ptr[rbp - 40]
    mov     eax, .L.str1
    mov     esi, eax
    call    strcmp
    cmp     eax, 0
    jne.LBB0_24
    mov     rdi, qword ptr[rbp - 64]
    call    strlen
    cmp     rax, 0
    jne.LBB0_22
    mov     rax, qword ptr[rbp - 72]
    mov     rcx, qword ptr[rbp - 32]
    mov     qword ptr[rcx], rax
    jmp.LBB0_23
    .LBB0_22:
mov     rax, qword ptr[rbp - 32]
mov     qword ptr[rax], 0
.LBB0_23 :
    jmp.LBB0_24
    .LBB0_24 :
    jmp.LBB0_25
    .LBB0_25 :
    jmp.LBB0_31
    .LBB0_26 :
    mov     rax, qword ptr[rbp - 16]
    mov     rdi, qword ptr[rax + 8]
    mov     ecx, .L.str
    mov     esi, ecx
    call    strcmp
    cmp     eax, 0
    jne.LBB0_28
    mov     rax, qword ptr[rbp - 24]
    mov     qword ptr[rax], 0
    .LBB0_28:
mov     rax, qword ptr[rbp - 16]
mov     rdi, qword ptr[rax + 8]
mov     ecx, .L.str2
mov     esi, ecx
call    strcmp
cmp     eax, 0
jne.LBB0_30
mov     rax, qword ptr[rbp - 32]
mov     qword ptr[rax], 0
.LBB0_30:
jmp.LBB0_31
.LBB0_31 :
    jmp.LBB0_32
    .LBB0_32 :
    cmp     dword ptr[rbp - 8], 3
    jl.LBB0_34
    mov     esi, 61
    mov     rax, qword ptr[rbp - 16]
    mov     rdi, qword ptr[rax + 16]
    call    strchr
    cmp     rax, 0
    jne.LBB0_35
    .LBB0_34:
mov     word ptr[rbp - 2], 0
jmp.LBB0_63
.LBB0_35 :
    mov     esi, 61
    mov     rax, qword ptr[rbp - 16]
    mov     rdi, qword ptr[rax + 16]
    mov     dword ptr[rbp - 124], esi # 4 - byte Spill
    call    strlen
    mov     rdi, qword ptr[rbp - 16]
    mov     rdi, qword ptr[rdi + 16]
    mov     esi, dword ptr[rbp - 124] # 4 - byte Reload
    mov     qword ptr[rbp - 136], rax # 8 - byte Spill
    call    strchr
    mov     rdi, rax
    call    strlen
    mov     rdi, qword ptr[rbp - 136] # 8 - byte Reload
    sub     rdi, rax
    add     rdi, 1
    mov     qword ptr[rbp - 56], rdi
    mov     rax, qword ptr[rbp - 56]
    mov     rdi, qword ptr[rbp - 16]
    mov     rdi, qword ptr[rdi + 16]
    mov     qword ptr[rbp - 144], rax # 8 - byte Spill
    call    strlen
    mov     rdi, qword ptr[rbp - 144] # 8 - byte Reload
    cmp     rdi, rax
    jae.LBB0_52
    mov     rax, qword ptr[rbp - 56]
    shl     rax, 0
    mov     rdi, rax
    call    malloc
    mov     qword ptr[rbp - 48], rax
    mov     rdi, qword ptr[rbp - 48]
    mov     rax, qword ptr[rbp - 16]
    mov     rsi, qword ptr[rax + 16]
    mov     rdx, qword ptr[rbp - 56]
    call    strncpy
    mov     rdx, qword ptr[rbp - 56]
    mov     rsi, qword ptr[rbp - 48]
    mov     byte ptr[rsi + rdx], 0
    mov     rdx, qword ptr[rbp - 16]
    mov     rdi, qword ptr[rdx + 16]
    mov     qword ptr[rbp - 152], rax # 8 - byte Spill
    call    strlen
    sub     rax, qword ptr[rbp - 56]
    shl     rax, 0
    mov     rdi, rax
    call    malloc
    mov     esi, 61
    mov     qword ptr[rbp - 80], rax
    mov     rax, qword ptr[rbp - 16]
    mov     rdi, qword ptr[rax + 16]
    call    strchr
    add     rax, 1
    mov     qword ptr[rbp - 80], rax
    mov     rax, qword ptr[rbp - 80]
    movsx   esi, byte ptr[rax]
    cmp     esi, 49
    jl.LBB0_38
    mov     rax, qword ptr[rbp - 80]
    movsx   ecx, byte ptr[rax]
    cmp     ecx, 57
    jle.LBB0_39
    .LBB0_38:
mov     rax, qword ptr[rbp - 80]
movsx   ecx, byte ptr[rax]
cmp     ecx, 45
jne.LBB0_40
.LBB0_39 :
    lea     rsi, qword ptr[rbp - 80]
    mov     edx, 10
    mov     rdi, qword ptr[rbp - 80]
    call    strtoll
    mov     qword ptr[rbp - 88], rax
    .LBB0_40:
mov     rdi, qword ptr[rbp - 48]
mov     eax, .L.str
mov     esi, eax
call    strcmp
cmp     eax, 0
jne.LBB0_45
mov     rdi, qword ptr[rbp - 80]
call    strlen
cmp     rax, 0
jne.LBB0_43
mov     rax, qword ptr[rbp - 88]
mov     rcx, qword ptr[rbp - 24]
mov     qword ptr[rcx], rax
jmp.LBB0_44
.LBB0_43:
mov     rax, qword ptr[rbp - 24]
mov     qword ptr[rax], 0
.LBB0_44 :
    jmp.LBB0_51
    .LBB0_45 :
    mov     rdi, qword ptr[rbp - 48]
    mov     eax, .L.str2
    mov     esi, eax
    call    strcmp
    cmp     eax, 0
    jne.LBB0_50
    mov     rdi, qword ptr[rbp - 80]
    call    strlen
    cmp     rax, 0
    jne.LBB0_48
    mov     rax, qword ptr[rbp - 88]
    mov     rcx, qword ptr[rbp - 32]
    mov     qword ptr[rcx], rax
    jmp.LBB0_49
    .LBB0_48:
mov     rax, qword ptr[rbp - 32]
mov     qword ptr[rax], 0
.LBB0_49 :
    jmp.LBB0_50
    .LBB0_50 :
    jmp.LBB0_51
    .LBB0_51 :
    jmp.LBB0_57
    .LBB0_52 :
    mov     rax, qword ptr[rbp - 16]
    mov     rdi, qword ptr[rax + 16]
    mov     ecx, .L.str
    mov     esi, ecx
    call    strcmp
    cmp     eax, 0
    jne.LBB0_54
    mov     rax, qword ptr[rbp - 24]
    mov     qword ptr[rax], 0
    .LBB0_54:
mov     rax, qword ptr[rbp - 16]
mov     rdi, qword ptr[rax + 16]
mov     ecx, .L.str2
mov     esi, ecx
call    strcmp
cmp     eax, 0
jne.LBB0_56
mov     rax, qword ptr[rbp - 32]
mov     qword ptr[rax], 0
.LBB0_56:
jmp.LBB0_57
.LBB0_57 :
    movabs  rax, -9223372036854775808
    mov     rcx, qword ptr[rbp - 24]
    cmp     qword ptr[rcx], rax
    jne.LBB0_60
    movabs  rax, 9223372036854775807
    mov     rcx, qword ptr[rbp - 32]
    cmp     qword ptr[rcx], rax
    jne.LBB0_60
    mov     word ptr[rbp - 2], -4
    jmp.LBB0_63
    .LBB0_60:
mov     rdi, qword ptr[rbp - 40]
mov     rsi, qword ptr[rbp - 48]
call    strcmp
cmp     eax, 0
jne.LBB0_62
mov     word ptr[rbp - 2], -3
jmp.LBB0_63
.LBB0_62:
mov     word ptr[rbp - 2], 0
.LBB0_63 :
    movsx   eax, word ptr[rbp - 2]
    add     rsp, 160
    pop     rbp
    ret

    main : # @main
    push    rbp
    mov     rbp, rsp
    sub     rsp, 112
    lea     rdx, qword ptr[rbp - 24]
    lea     rcx, qword ptr[rbp - 32]
    movabs  rax, 9223372036854775807
    movabs  r8, -9223372036854775808
    mov     dword ptr[rbp - 4], 0
    mov     dword ptr[rbp - 8], edi
    mov     qword ptr[rbp - 16], rsi
    mov     qword ptr[rbp - 24], r8
    mov     qword ptr[rbp - 32], rax
    mov     edi, dword ptr[rbp - 8]
    mov     rsi, qword ptr[rbp - 16]
    call    args_solve
    movsx   edi, ax
    mov     dword ptr[rbp - 36], edi
    cmp     dword ptr[rbp - 36], 0
    je.LBB1_2
    mov     eax, dword ptr[rbp - 36]
    mov     dword ptr[rbp - 4], eax
    jmp.LBB1_27
    .LBB1_2:
movabs  rdi, 800
call    malloc
mov     qword ptr[rbp - 48], rax
mov     byte ptr[rbp - 49], 32
mov     dword ptr[rbp - 56], 0
.LBB1_3:                                #  = > This Inner Loop Header : Depth = 1
movsx   eax, byte ptr[rbp - 49]
cmp     eax, 32
jne.LBB1_5
movabs  rdi, .L.str3
lea     rdx, qword ptr[rbp - 49]
mov     eax, dword ptr[rbp - 56]
mov     ecx, eax
mov     rsi, qword ptr[rbp - 48]
shl     rcx, 3
add     rsi, rcx
mov     al, 0
call    __isoc99_scanf
mov     r8d, dword ptr[rbp - 56]
add     r8d, 1
mov     dword ptr[rbp - 56], r8d
mov     dword ptr[rbp - 100], eax # 4 - byte Spill
jmp.LBB1_3
.LBB1_5:
mov     qword ptr[rbp - 64], 0
mov     qword ptr[rbp - 72], 0
.LBB1_6 : #  = > This Inner Loop Header : Depth = 1
mov     rax, qword ptr[rbp - 72]
mov     ecx, dword ptr[rbp - 56]
mov     edx, ecx
cmp     rax, rdx
jae.LBB1_12
mov     rax, qword ptr[rbp - 72]
mov     rcx, qword ptr[rbp - 48]
mov     rax, qword ptr[rcx + 8 * rax]
cmp     rax, qword ptr[rbp - 24]
jle.LBB1_10
mov     rax, qword ptr[rbp - 72]
mov     rcx, qword ptr[rbp - 48]
mov     rax, qword ptr[rcx + 8 * rax]
cmp     rax, qword ptr[rbp - 32]
jge.LBB1_10
mov     rax, qword ptr[rbp - 64]
add     rax, 1
mov     qword ptr[rbp - 64], rax
.LBB1_10:                               #   in Loop : Header = BB1_6 Depth = 1
jmp.LBB1_11
.LBB1_11 : #   in Loop : Header = BB1_6 Depth = 1
mov     rax, qword ptr[rbp - 72]
add     rax, 1
mov     qword ptr[rbp - 72], rax
jmp.LBB1_6
.LBB1_12 :
    mov     rax, qword ptr[rbp - 64]
    shl     rax, 3
    mov     rdi, rax
    call    malloc
    mov     qword ptr[rbp - 80], rax
    mov     qword ptr[rbp - 64], 0
    mov     qword ptr[rbp - 88], 0
    .LBB1_13:                               #  = > This Inner Loop Header : Depth = 1
    mov     rax, qword ptr[rbp - 88]
    mov     ecx, dword ptr[rbp - 56]
    mov     edx, ecx
    cmp     rax, rdx
    jae.LBB1_24
    mov     rax, qword ptr[rbp - 88]
    mov     rcx, qword ptr[rbp - 48]
    mov     rax, qword ptr[rcx + 8 * rax]
    cmp     rax, qword ptr[rbp - 24]
    jle.LBB1_17
    mov     rax, qword ptr[rbp - 88]
    mov     rcx, qword ptr[rbp - 48]
    mov     rax, qword ptr[rcx + 8 * rax]
    cmp     rax, qword ptr[rbp - 32]
    jge.LBB1_17
    mov     rax, qword ptr[rbp - 88]
    mov     rcx, qword ptr[rbp - 48]
    mov     rax, qword ptr[rcx + 8 * rax]
    mov     rcx, qword ptr[rbp - 64]
    mov     rdx, qword ptr[rbp - 80]
    mov     qword ptr[rdx + 8 * rcx], rax
    mov     rax, qword ptr[rbp - 64]
    add     rax, 1
    mov     qword ptr[rbp - 64], rax
    jmp.LBB1_22
    .LBB1_17:                               #   in Loop : Header = BB1_13 Depth = 1
    mov     rax, qword ptr[rbp - 88]
    mov     rcx, qword ptr[rbp - 48]
    mov     rax, qword ptr[rcx + 8 * rax]
    cmp     rax, qword ptr[rbp - 24]
    jg.LBB1_19
    movabs  rsi, .L.str4
    mov     rdi, qword ptr[stdout]
    mov     rax, qword ptr[rbp - 88]
    mov     rcx, qword ptr[rbp - 48]
    mov     rdx, qword ptr[rcx + 8 * rax]
    mov     al, 0
    call    fprintf
    mov     dword ptr[rbp - 104], eax # 4 - byte Spill
    .LBB1_19:                               #   in Loop : Header = BB1_13 Depth = 1
    mov     rax, qword ptr[rbp - 88]
    mov     rcx, qword ptr[rbp - 48]
    mov     rax, qword ptr[rcx + 8 * rax]
    cmp     rax, qword ptr[rbp - 32]
    jl.LBB1_21
    movabs  rsi, .L.str4
    mov     rdi, qword ptr[stderr]
    mov     rax, qword ptr[rbp - 88]
    mov     rcx, qword ptr[rbp - 48]
    mov     rdx, qword ptr[rcx + 8 * rax]
    mov     al, 0
    call    fprintf
    mov     dword ptr[rbp - 108], eax # 4 - byte Spill
    .LBB1_21:                               #   in Loop : Header = BB1_13 Depth = 1
    jmp.LBB1_22
    .LBB1_22 : #   in Loop : Header = BB1_13 Depth = 1
    jmp.LBB1_23
    .LBB1_23 : #   in Loop : Header = BB1_13 Depth = 1
    mov     rax, qword ptr[rbp - 88]
    add     rax, 1
    mov     qword ptr[rbp - 88], rax
    jmp.LBB1_13
    .LBB1_24 :
    mov     qword ptr[rbp - 96], 0
    cmp     qword ptr[rbp - 64], 0
    jbe.LBB1_26
    mov     rdi, qword ptr[rbp - 80]
    mov     rax, qword ptr[rbp - 64]
    mov     ecx, eax
    mov     esi, ecx
    call    choose_form
    mov     qword ptr[rbp - 96], rax
    .LBB1_26:
mov     rax, qword ptr[rbp - 48]
mov     rdi, rax
call    free
mov     rax, qword ptr[rbp - 80]
mov     rdi, rax
call    free
mov     rax, qword ptr[rbp - 96]
mov     ecx, eax
mov     dword ptr[rbp - 4], ecx
.LBB1_27:
mov     eax, dword ptr[rbp - 4]
add     rsp, 112
pop     rbp
ret

.L.str:
.asciz  "--from=<>"

.L.str1 :
    .asciz  "--to<>"

    .L.str2 :
    .asciz  "--to=<>"

    .L.str3 :
    .asciz  "%lld%c"

    .L.str4 :
    .asciz  "%lld "