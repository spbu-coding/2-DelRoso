args_solve:                             # @args_solve
push    RBP
mov     RBP, RSP
sub     RSP, 144
mov     DWORD PTR[RBP - 8], EDI
mov     QWORD PTR[RBP - 16], RSI
mov     QWORD PTR[RBP - 24], RDX
mov     QWORD PTR[RBP - 32], RCX
cmp     DWORD PTR[RBP - 8], 1
jg.LBB0_2
mov     WORD PTR[RBP - 2], -1
jmp.LBB0_63
.LBB0_2:
cmp     DWORD PTR[RBP - 8], 3
jle.LBB0_4
mov     WORD PTR[RBP - 2], -2
jmp.LBB0_63
.LBB0_4 :
    cmp     DWORD PTR[RBP - 8], 2
    jle.LBB0_8
    mov     ESI, 61
    mov     RAX, QWORD PTR[RBP - 16]
    mov     RDI, QWORD PTR[RAX + 8]
    call    strchr
    cmp     RAX, 0
    jne.LBB0_8
    mov     ESI, 61
    mov     RAX, QWORD PTR[RBP - 16]
    mov     RDI, QWORD PTR[RAX + 16]
    call    strchr
    cmp     RAX, 0
    jne.LBB0_8
    mov     WORD PTR[RBP - 2], -4
    jmp.LBB0_63
    .LBB0_8:
mov     ESI, 61
mov     RAX, QWORD PTR[RBP - 16]
mov     RDI, QWORD PTR[RAX + 8]
call    strchr
cmp     RAX, 0
je.LBB0_32
mov     RAX, QWORD PTR[RBP - 16]
mov     RDI, QWORD PTR[RAX + 8]
call    strlen
mov     ESI, 61
mov     RDI, QWORD PTR[RBP - 16]
mov     RDI, QWORD PTR[RDI + 8]
mov     QWORD PTR[RBP - 96], RAX # 8 - byte Spill
call    strchr
mov     RDI, RAX
call    strlen
mov     RDI, QWORD PTR[RBP - 96] # 8 - byte Reload
sub     RDI, RAX
add     RDI, 1
mov     QWORD PTR[RBP - 56], RDI
mov     RAX, QWORD PTR[RBP - 56]
mov     RDI, QWORD PTR[RBP - 16]
mov     RDI, QWORD PTR[RDI + 8]
mov     QWORD PTR[RBP - 104], RAX # 8 - byte Spill
call    strlen
mov     RDI, QWORD PTR[RBP - 104] # 8 - byte Reload
cmp     RDI, RAX
jae.LBB0_26
mov     RAX, QWORD PTR[RBP - 56]
shl     RAX, 0
mov     RDI, RAX
call    malloc
mov     QWORD PTR[RBP - 40], RAX
mov     RDI, QWORD PTR[RBP - 40]
mov     RAX, QWORD PTR[RBP - 16]
mov     RSI, QWORD PTR[RAX + 8]
mov     RDX, QWORD PTR[RBP - 56]
call    strncpy
mov     RDX, QWORD PTR[RBP - 56]
mov     RSI, QWORD PTR[RBP - 40]
mov     BYTE PTR[RSI + RDX], 0
mov     QWORD PTR[RBP - 72], 0
mov     RDX, QWORD PTR[RBP - 16]
mov     RDI, QWORD PTR[RDX + 8]
mov     QWORD PTR[RBP - 112], RAX # 8 - byte Spill
call    strlen
shl     RAX, 0
sub     RAX, QWORD PTR[RBP - 56]
mov     RDI, RAX
call    malloc
mov     ESI, 61
mov     QWORD PTR[RBP - 64], RAX
mov     RAX, QWORD PTR[RBP - 16]
mov     RDI, QWORD PTR[RAX + 8]
call    strchr
add     RAX, 1
mov     QWORD PTR[RBP - 64], RAX
mov     RAX, QWORD PTR[RBP - 64]
movsx   ESI, BYTE PTR[RAX]
cmp     ESI, 49
jl.LBB0_12
mov     RAX, QWORD PTR[RBP - 64]
movsx   ECX, BYTE PTR[RAX]
cmp     ECX, 57
jle.LBB0_13
.LBB0_12:
mov     RAX, QWORD PTR[RBP - 64]
movsx   ECX, BYTE PTR[RAX]
cmp     ECX, 45
jne.LBB0_14
.LBB0_13 :
    lea     RSI, QWORD PTR[RBP - 64]
    mov     EDX, 10
    mov     RDI, QWORD PTR[RBP - 64]
    call    strtoll
    mov     QWORD PTR[RBP - 72], RAX
    .LBB0_14:
lea     RSI, QWORD PTR[.L.str]
mov     RDI, QWORD PTR[RBP - 40]
call    strcmp
cmp     EAX, 0
jne.LBB0_19
mov     RDI, QWORD PTR[RBP - 64]
call    strlen
cmp     RAX, 0
jne.LBB0_17
mov     RAX, QWORD PTR[RBP - 72]
mov     RCX, QWORD PTR[RBP - 24]
mov     QWORD PTR[RCX], RAX
jmp.LBB0_18
.LBB0_17:
mov     RAX, QWORD PTR[RBP - 24]
mov     QWORD PTR[RAX], 0
.LBB0_18 :
    jmp.LBB0_25
    .LBB0_19 :
    lea     RSI, QWORD PTR[.L.str1]
    mov     RDI, QWORD PTR[RBP - 40]
    call    strcmp
    cmp     EAX, 0
    jne.LBB0_24
    mov     RDI, QWORD PTR[RBP - 64]
    call    strlen
    cmp     RAX, 0
    jne.LBB0_22
    mov     RAX, QWORD PTR[RBP - 72]
    mov     RCX, QWORD PTR[RBP - 32]
    mov     QWORD PTR[RCX], RAX
    jmp.LBB0_23
    .LBB0_22:
mov     RAX, QWORD PTR[RBP - 32]
mov     QWORD PTR[RAX], 0
.LBB0_23 :
    .LBB0_24 :
    .LBB0_25 :
    jmp.LBB0_31
    .LBB0_26 :
    lea     RSI, QWORD PTR[.L.str]
    mov     RAX, QWORD PTR[RBP - 16]
    mov     RDI, QWORD PTR[RAX + 8]
    call    strcmp
    cmp     EAX, 0
    jne.LBB0_28
    mov     RAX, QWORD PTR[RBP - 24]
    mov     QWORD PTR[RAX], 0
    .LBB0_28:
lea     RSI, QWORD PTR[.L.str2]
mov     RAX, QWORD PTR[RBP - 16]
mov     RDI, QWORD PTR[RAX + 8]
call    strcmp
cmp     EAX, 0
jne.LBB0_30
mov     RAX, QWORD PTR[RBP - 32]
mov     QWORD PTR[RAX], 0
.LBB0_30:
.LBB0_31 :
    .LBB0_32 :
    cmp     DWORD PTR[RBP - 8], 3
    jl.LBB0_34
    mov     ESI, 61
    mov     RAX, QWORD PTR[RBP - 16]
    mov     RDI, QWORD PTR[RAX + 16]
    call    strchr
    cmp     RAX, 0
    jne.LBB0_35
    .LBB0_34:
mov     WORD PTR[RBP - 2], 0
jmp.LBB0_63
.LBB0_35 :
    mov     RAX, QWORD PTR[RBP - 16]
    mov     RDI, QWORD PTR[RAX + 16]
    call    strlen
    mov     ESI, 61
    mov     RDI, QWORD PTR[RBP - 16]
    mov     RDI, QWORD PTR[RDI + 16]
    mov     QWORD PTR[RBP - 120], RAX # 8 - byte Spill
    call    strchr
    mov     RDI, RAX
    call    strlen
    mov     RDI, QWORD PTR[RBP - 120] # 8 - byte Reload
    sub     RDI, RAX
    add     RDI, 1
    mov     QWORD PTR[RBP - 56], RDI
    mov     RAX, QWORD PTR[RBP - 56]
    mov     RDI, QWORD PTR[RBP - 16]
    mov     RDI, QWORD PTR[RDI + 16]
    mov     QWORD PTR[RBP - 128], RAX # 8 - byte Spill
    call    strlen
    mov     RDI, QWORD PTR[RBP - 128] # 8 - byte Reload
    cmp     RDI, RAX
    jae.LBB0_52
    mov     RAX, QWORD PTR[RBP - 56]
    shl     RAX, 0
    mov     RDI, RAX
    call    malloc
    mov     QWORD PTR[RBP - 48], RAX
    mov     RDI, QWORD PTR[RBP - 48]
    mov     RAX, QWORD PTR[RBP - 16]
    mov     RSI, QWORD PTR[RAX + 16]
    mov     RDX, QWORD PTR[RBP - 56]
    call    strncpy
    mov     RDX, QWORD PTR[RBP - 56]
    mov     RSI, QWORD PTR[RBP - 48]
    mov     BYTE PTR[RSI + RDX], 0
    mov     RDX, QWORD PTR[RBP - 16]
    mov     RDI, QWORD PTR[RDX + 16]
    mov     QWORD PTR[RBP - 136], RAX # 8 - byte Spill
    call    strlen
    mov     RDX, QWORD PTR[RBP - 56]
    sub     RAX, RDX
    shl     RAX, 0
    mov     RDI, RAX
    call    malloc
    mov     ESI, 61
    mov     QWORD PTR[RBP - 80], RAX
    mov     RAX, QWORD PTR[RBP - 16]
    mov     RDI, QWORD PTR[RAX + 16]
    call    strchr
    add     RAX, 1
    mov     QWORD PTR[RBP - 80], RAX
    mov     RAX, QWORD PTR[RBP - 80]
    movsx   ESI, BYTE PTR[RAX]
    cmp     ESI, 49
    jl.LBB0_38
    mov     RAX, QWORD PTR[RBP - 80]
    movsx   ECX, BYTE PTR[RAX]
    cmp     ECX, 57
    jle.LBB0_39
    .LBB0_38:
mov     RAX, QWORD PTR[RBP - 80]
movsx   ECX, BYTE PTR[RAX]
cmp     ECX, 45
jne.LBB0_40
.LBB0_39 :
    lea     RSI, QWORD PTR[RBP - 80]
    mov     EDX, 10
    mov     RDI, QWORD PTR[RBP - 80]
    call    strtoll
    mov     QWORD PTR[RBP - 88], RAX
    .LBB0_40:
lea     RSI, QWORD PTR[.L.str]
mov     RDI, QWORD PTR[RBP - 48]
call    strcmp
cmp     EAX, 0
jne.LBB0_45
mov     RDI, QWORD PTR[RBP - 80]
call    strlen
cmp     RAX, 0
jne.LBB0_43
mov     RAX, QWORD PTR[RBP - 88]
mov     RCX, QWORD PTR[RBP - 24]
mov     QWORD PTR[RCX], RAX
jmp.LBB0_44
.LBB0_43:
mov     RAX, QWORD PTR[RBP - 24]
mov     QWORD PTR[RAX], 0
.LBB0_44 :
    jmp.LBB0_51
    .LBB0_45 :
    lea     RSI, QWORD PTR[.L.str2]
    mov     RDI, QWORD PTR[RBP - 48]
    call    strcmp
    cmp     EAX, 0
    jne.LBB0_50
    mov     RDI, QWORD PTR[RBP - 80]
    call    strlen
    cmp     RAX, 0
    jne.LBB0_48
    mov     RAX, QWORD PTR[RBP - 88]
    mov     RCX, QWORD PTR[RBP - 32]
    mov     QWORD PTR[RCX], RAX
    jmp.LBB0_49
    .LBB0_48:
mov     RAX, QWORD PTR[RBP - 32]
mov     QWORD PTR[RAX], 0
.LBB0_49 :
    .LBB0_50 :
    .LBB0_51 :
    jmp.LBB0_57
    .LBB0_52 :
    lea     RSI, QWORD PTR[.L.str]
    mov     RAX, QWORD PTR[RBP - 16]
    mov     RDI, QWORD PTR[RAX + 16]
    call    strcmp
    cmp     EAX, 0
    jne.LBB0_54
    mov     RAX, QWORD PTR[RBP - 24]
    mov     QWORD PTR[RAX], 0
    .LBB0_54:
lea     RSI, QWORD PTR[.L.str2]
mov     RAX, QWORD PTR[RBP - 16]
mov     RDI, QWORD PTR[RAX + 16]
call    strcmp
cmp     EAX, 0
jne.LBB0_56
mov     RAX, QWORD PTR[RBP - 32]
mov     QWORD PTR[RAX], 0
.LBB0_56:
.LBB0_57 :
    movabs  RAX, -9223372036854775808
    mov     RCX, QWORD PTR[RBP - 24]
    cmp     QWORD PTR[RCX], RAX
    jne.LBB0_60
    movabs  RAX, 9223372036854775807
    mov     RCX, QWORD PTR[RBP - 32]
    cmp     QWORD PTR[RCX], RAX
    jne.LBB0_60
    mov     WORD PTR[RBP - 2], -4
    jmp.LBB0_63
    .LBB0_60:
mov     RDI, QWORD PTR[RBP - 40]
mov     RSI, QWORD PTR[RBP - 48]
call    strcmp
cmp     EAX, 0
jne.LBB0_62
mov     WORD PTR[RBP - 2], -3
jmp.LBB0_63
.LBB0_62:
mov     WORD PTR[RBP - 2], 0
.LBB0_63 :
    movsx   EAX, WORD PTR[RBP - 2]
    add     RSP, 144
    pop     RBP
    ret

    main : # @main
    push    RBP
    mov     RBP, RSP
    sub     RSP, 128
    lea     RDX, QWORD PTR[RBP - 24]
    lea     RCX, QWORD PTR[RBP - 32]
    movabs  RAX, 9223372036854775807
    movabs  R8, -9223372036854775808
    mov     DWORD PTR[RBP - 4], 0
    mov     DWORD PTR[RBP - 8], EDI
    mov     QWORD PTR[RBP - 16], RSI
    mov     QWORD PTR[RBP - 24], R8
    mov     QWORD PTR[RBP - 32], RAX
    mov     EDI, DWORD PTR[RBP - 8]
    mov     RSI, QWORD PTR[RBP - 16]
    call    args_solve
    movsx   EDI, AX
    mov     DWORD PTR[RBP - 36], EDI
    cmp     DWORD PTR[RBP - 36], 0
    je.LBB1_2
    mov     EAX, DWORD PTR[RBP - 36]
    mov     DWORD PTR[RBP - 4], EAX
    jmp.LBB1_27
    .LBB1_2:
movabs  RDI, 800
call    malloc
mov     QWORD PTR[RBP - 48], RAX
mov     BYTE PTR[RBP - 49], 32
mov     QWORD PTR[RBP - 64], 0
.LBB1_3:                                #  = > This Inner Loop Header : Depth = 1
movsx   EAX, BYTE PTR[RBP - 49]
cmp     EAX, 32
jne.LBB1_5
lea     RDI, QWORD PTR[.L.str3]
lea     RDX, QWORD PTR[RBP - 49]
mov     RAX, QWORD PTR[RBP - 64]
mov     RCX, QWORD PTR[RBP - 48]
shl     RAX, 3
add     RAX, RCX
mov     RSI, RAX
mov     AL, 0
call    __isoc99_scanf
mov     RCX, QWORD PTR[RBP - 64]
add     RCX, 1
mov     QWORD PTR[RBP - 64], RCX
mov     DWORD PTR[RBP - 108], EAX # 4 - byte Spill
jmp.LBB1_3
.LBB1_5:
mov     QWORD PTR[RBP - 72], 0
mov     QWORD PTR[RBP - 80], 0
.LBB1_6 : #  = > This Inner Loop Header : Depth = 1
mov     RAX, QWORD PTR[RBP - 80]
cmp     RAX, QWORD PTR[RBP - 64]
jae.LBB1_12
mov     RAX, QWORD PTR[RBP - 80]
mov     RCX, QWORD PTR[RBP - 48]
mov     RAX, QWORD PTR[RCX + 8 * RAX]
cmp     RAX, QWORD PTR[RBP - 24]
jle.LBB1_10
mov     RAX, QWORD PTR[RBP - 80]
mov     RCX, QWORD PTR[RBP - 48]
mov     RAX, QWORD PTR[RCX + 8 * RAX]
cmp     RAX, QWORD PTR[RBP - 32]
jge.LBB1_10
mov     RAX, QWORD PTR[RBP - 72]
add     RAX, 1
mov     QWORD PTR[RBP - 72], RAX
.LBB1_10:                               #   in Loop : Header = BB1_6 Depth = 1
mov     RAX, QWORD PTR[RBP - 80]
add     RAX, 1
mov     QWORD PTR[RBP - 80], RAX
jmp.LBB1_6
.LBB1_12 :
    mov     RAX, QWORD PTR[RBP - 72]
    shl     RAX, 3
    mov     RDI, RAX
    call    malloc
    mov     QWORD PTR[RBP - 88], RAX
    mov     QWORD PTR[RBP - 72], 0
    mov     QWORD PTR[RBP - 96], 0
    .LBB1_13:                               #  = > This Inner Loop Header : Depth = 1
    mov     RAX, QWORD PTR[RBP - 96]
    cmp     RAX, QWORD PTR[RBP - 64]
    jae.LBB1_24
    mov     RAX, QWORD PTR[RBP - 96]
    mov     RCX, QWORD PTR[RBP - 48]
    mov     RAX, QWORD PTR[RCX + 8 * RAX]
    cmp     RAX, QWORD PTR[RBP - 24]
    jle.LBB1_17
    mov     RAX, QWORD PTR[RBP - 96]
    mov     RCX, QWORD PTR[RBP - 48]
    mov     RAX, QWORD PTR[RCX + 8 * RAX]
    cmp     RAX, QWORD PTR[RBP - 32]
    jge.LBB1_17
    mov     RAX, QWORD PTR[RBP - 96]
    mov     RCX, QWORD PTR[RBP - 48]
    mov     RAX, QWORD PTR[RCX + 8 * RAX]
    mov     RCX, QWORD PTR[RBP - 72]
    mov     RDX, QWORD PTR[RBP - 88]
    mov     QWORD PTR[RDX + 8 * RCX], RAX
    mov     RAX, QWORD PTR[RBP - 72]
    add     RAX, 1
    mov     QWORD PTR[RBP - 72], RAX
    jmp.LBB1_22
    .LBB1_17:                               #   in Loop : Header = BB1_13 Depth = 1
    mov     RAX, QWORD PTR[RBP - 96]
    mov     RCX, QWORD PTR[RBP - 48]
    mov     RAX, QWORD PTR[RCX + 8 * RAX]
    cmp     RAX, QWORD PTR[RBP - 24]
    jg.LBB1_19
    lea     RSI, QWORD PTR[.L.str4]
    mov     RDI, QWORD PTR[stdout]
    mov     RAX, QWORD PTR[RBP - 96]
    mov     RCX, QWORD PTR[RBP - 48]
    mov     RDX, QWORD PTR[RCX + 8 * RAX]
    mov     AL, 0
    call    fprintf
    mov     DWORD PTR[RBP - 112], EAX # 4 - byte Spill
    .LBB1_19:                               #   in Loop : Header = BB1_13 Depth = 1
    mov     RAX, QWORD PTR[RBP - 96]
    mov     RCX, QWORD PTR[RBP - 48]
    mov     RAX, QWORD PTR[RCX + 8 * RAX]
    cmp     RAX, QWORD PTR[RBP - 32]
    jl.LBB1_21
    lea     RSI, QWORD PTR[.L.str4]
    mov     RDI, QWORD PTR[stderr]
    mov     RAX, QWORD PTR[RBP - 96]
    mov     RCX, QWORD PTR[RBP - 48]
    mov     RDX, QWORD PTR[RCX + 8 * RAX]
    mov     AL, 0
    call    fprintf
    mov     DWORD PTR[RBP - 116], EAX # 4 - byte Spill
    .LBB1_21:                               #   in Loop : Header = BB1_13 Depth = 1
    .LBB1_22 : #   in Loop : Header = BB1_13 Depth = 1
    mov     RAX, QWORD PTR[RBP - 96]
    add     RAX, 1
    mov     QWORD PTR[RBP - 96], RAX
    jmp.LBB1_13
    .LBB1_24 :
    mov     QWORD PTR[RBP - 104], 0
    cmp     QWORD PTR[RBP - 72], 0
    jbe.LBB1_26
    mov     RDI, QWORD PTR[RBP - 88]
    mov     RSI, QWORD PTR[RBP - 72]
    call    choose_form
    mov     QWORD PTR[RBP - 104], RAX
    .LBB1_26:
mov     RAX, QWORD PTR[RBP - 48]
mov     RDI, RAX
call    free
mov     RAX, QWORD PTR[RBP - 88]
mov     RDI, RAX
call    free
mov     RAX, QWORD PTR[RBP - 104]
mov     ECX, EAX
mov     DWORD PTR[RBP - 4], ECX
.LBB1_27:
mov     EAX, DWORD PTR[RBP - 4]
add     RSP, 128
pop     RBP
ret

.L.str:
.asciz   "--from=<>"

.L.str1 :
    .asciz   "--to<>"

    .L.str2 :
    .asciz   "--to=<>"

    .L.str3 :
    .asciz   "%lld%c"

    .L.str4 :
    .asciz   "%lld "