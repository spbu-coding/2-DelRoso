.LC0:
.string "--from=<>"
.LC1 :
    .string "--to<>"
    .LC2 :
    .string "--to=<>"
    args_solve :
    push    rbp
    mov     rbp, rsp
    push    rbx
    sub     rsp, 104
    mov     DWORD PTR[rbp - 84], edi
    mov     QWORD PTR[rbp - 96], rsi
    mov     QWORD PTR[rbp - 104], rdx
    mov     QWORD PTR[rbp - 112], rcx
    cmp     DWORD PTR[rbp - 84], 0
    jle.L2
    mov     eax, -1
    jmp.L3
    .L2:
cmp     DWORD PTR[rbp - 84], 1
jg.L4
mov     eax, -1
jmp.L3
.L4 :
    cmp     DWORD PTR[rbp - 84], 3
    jle.L5
    mov     eax, -2
    jmp.L3
    .L5 :
    cmp     DWORD PTR[rbp - 84], 2
    jle.L6
    mov     rax, QWORD PTR[rbp - 96]
    add     rax, 8
    mov     rax, QWORD PTR[rax]
    mov     esi, 61
    mov     rdi, rax
    call    strchr
    test    rax, rax
    jne.L6
    mov     rax, QWORD PTR[rbp - 96]
    add     rax, 16
    mov     rax, QWORD PTR[rax]
    mov     esi, 61
    mov     rdi, rax
    call    strchr
    test    rax, rax
    jne.L6
    mov     eax, -4
    jmp.L3
    .L6:
mov     rax, QWORD PTR[rbp - 96]
add     rax, 8
mov     rax, QWORD PTR[rax]
mov     esi, 61
mov     rdi, rax
call    strchr
test    rax, rax
je.L7
mov     rax, QWORD PTR[rbp - 96]
add     rax, 8
mov     rax, QWORD PTR[rax]
mov     rdi, rax
call    strlen
mov     rbx, rax
mov     rax, QWORD PTR[rbp - 96]
add     rax, 8
mov     rax, QWORD PTR[rax]
mov     esi, 61
mov     rdi, rax
call    strchr
mov     rdi, rax
call    strlen
mov     rdx, rax
mov     rax, rbx
sub     rax, rdx
add     rax, 1
mov     QWORD PTR[rbp - 40], rax
mov     rax, QWORD PTR[rbp - 96]
add     rax, 8
mov     rax, QWORD PTR[rax]
mov     rdi, rax
call    strlen
cmp     QWORD PTR[rbp - 40], rax
jnb.L8
mov     rax, QWORD PTR[rbp - 40]
mov     rdi, rax
call    malloc
mov     QWORD PTR[rbp - 48], rax
mov     rax, QWORD PTR[rbp - 96]
add     rax, 8
mov     rcx, QWORD PTR[rax]
mov     rdx, QWORD PTR[rbp - 40]
mov     rax, QWORD PTR[rbp - 48]
mov     rsi, rcx
mov     rdi, rax
call    strncpy
mov     rdx, QWORD PTR[rbp - 48]
mov     rax, QWORD PTR[rbp - 40]
add     rax, rdx
mov     BYTE PTR[rax], 0
mov     QWORD PTR[rbp - 24], 0
mov     rax, QWORD PTR[rbp - 96]
add     rax, 8
mov     rax, QWORD PTR[rax]
mov     rdi, rax
call    strlen
sub     rax, QWORD PTR[rbp - 40]
mov     rdi, rax
call    malloc
mov     QWORD PTR[rbp - 64], rax
mov     rax, QWORD PTR[rbp - 96]
add     rax, 8
mov     rax, QWORD PTR[rax]
mov     esi, 61
mov     rdi, rax
call    strchr
add     rax, 1
mov     QWORD PTR[rbp - 64], rax
mov     rax, QWORD PTR[rbp - 64]
movzx   eax, BYTE PTR[rax]
cmp     al, 48
jle.L9
mov     rax, QWORD PTR[rbp - 64]
movzx   eax, BYTE PTR[rax]
cmp     al, 57
jle.L10
.L9:
mov     rax, QWORD PTR[rbp - 64]
movzx   eax, BYTE PTR[rax]
cmp     al, 45
jne.L11
.L10 :
    mov     rax, QWORD PTR[rbp - 64]
    lea     rcx, [rbp - 64]
    mov     edx, 10
    mov     rsi, rcx
    mov     rdi, rax
    call    strtoll
    mov     QWORD PTR[rbp - 24], rax
    .L11:
mov     rax, QWORD PTR[rbp - 48]
mov     esi, OFFSET FLAT : .LC0
mov     rdi, rax
call    strcmp
test    eax, eax
jne.L12
mov     rax, QWORD PTR[rbp - 64]
movzx   eax, BYTE PTR[rax]
test    al, al
jne.L13
mov     rax, QWORD PTR[rbp - 104]
mov     rdx, QWORD PTR[rbp - 24]
mov     QWORD PTR[rax], rdx
jmp.L7
.L13:
mov     rax, QWORD PTR[rbp - 104]
mov     QWORD PTR[rax], 0
jmp.L7
.L12 :
    mov     rax, QWORD PTR[rbp - 48]
    mov     esi, OFFSET FLAT : .LC1
    mov     rdi, rax
    call    strcmp
    test    eax, eax
    jne.L7
    mov     rax, QWORD PTR[rbp - 64]
    movzx   eax, BYTE PTR[rax]
    test    al, al
    jne.L15
    mov     rax, QWORD PTR[rbp - 112]
    mov     rdx, QWORD PTR[rbp - 24]
    mov     QWORD PTR[rax], rdx
    jmp.L7
    .L15:
mov     rax, QWORD PTR[rbp - 112]
mov     QWORD PTR[rax], 0
jmp.L7
.L8 :
    mov     rax, QWORD PTR[rbp - 96]
    add     rax, 8
    mov     rax, QWORD PTR[rax]
    mov     esi, OFFSET FLAT : .LC0
    mov     rdi, rax
    call    strcmp
    test    eax, eax
    jne.L16
    mov     rax, QWORD PTR[rbp - 104]
    mov     QWORD PTR[rax], 0
    .L16:
mov     rax, QWORD PTR[rbp - 96]
add     rax, 8
mov     rax, QWORD PTR[rax]
mov     esi, OFFSET FLAT : .LC2
mov     rdi, rax
call    strcmp
test    eax, eax
jne.L7
mov     rax, QWORD PTR[rbp - 112]
mov     QWORD PTR[rax], 0
.L7:
cmp     DWORD PTR[rbp - 84], 2
jle.L17
mov     rax, QWORD PTR[rbp - 96]
add     rax, 16
mov     rax, QWORD PTR[rax]
mov     esi, 61
mov     rdi, rax
call    strchr
test    rax, rax
jne.L18
.L17:
mov     eax, 0
jmp.L3
.L18 :
    mov     rax, QWORD PTR[rbp - 96]
    add     rax, 16
    mov     rax, QWORD PTR[rax]
    mov     rdi, rax
    call    strlen
    mov     rbx, rax
    mov     rax, QWORD PTR[rbp - 96]
    add     rax, 16
    mov     rax, QWORD PTR[rax]
    mov     esi, 61
    mov     rdi, rax
    call    strchr
    mov     rdi, rax
    call    strlen
    mov     rdx, rax
    mov     rax, rbx
    sub     rax, rdx
    add     rax, 1
    mov     QWORD PTR[rbp - 40], rax
    mov     rax, QWORD PTR[rbp - 96]
    add     rax, 16
    mov     rax, QWORD PTR[rax]
    mov     rdi, rax
    call    strlen
    cmp     QWORD PTR[rbp - 40], rax
    jnb.L19
    mov     rax, QWORD PTR[rbp - 40]
    mov     rdi, rax
    call    malloc
    mov     QWORD PTR[rbp - 56], rax
    mov     rax, QWORD PTR[rbp - 96]
    add     rax, 16
    mov     rcx, QWORD PTR[rax]
    mov     rdx, QWORD PTR[rbp - 40]
    mov     rax, QWORD PTR[rbp - 56]
    mov     rsi, rcx
    mov     rdi, rax
    call    strncpy
    mov     rdx, QWORD PTR[rbp - 56]
    mov     rax, QWORD PTR[rbp - 40]
    add     rax, rdx
    mov     BYTE PTR[rax], 0
    mov     rax, QWORD PTR[rbp - 96]
    add     rax, 16
    mov     rax, QWORD PTR[rax]
    mov     rdi, rax
    call    strlen
    sub     rax, QWORD PTR[rbp - 40]
    mov     rdi, rax
    call    malloc
    mov     QWORD PTR[rbp - 72], rax
    mov     rax, QWORD PTR[rbp - 96]
    add     rax, 16
    mov     rax, QWORD PTR[rax]
    mov     esi, 61
    mov     rdi, rax
    call    strchr
    add     rax, 1
    mov     QWORD PTR[rbp - 72], rax
    mov     rax, QWORD PTR[rbp - 72]
    movzx   eax, BYTE PTR[rax]
    cmp     al, 48
    jle.L20
    mov     rax, QWORD PTR[rbp - 72]
    movzx   eax, BYTE PTR[rax]
    cmp     al, 57
    jle.L21
    .L20:
mov     rax, QWORD PTR[rbp - 72]
movzx   eax, BYTE PTR[rax]
cmp     al, 45
jne.L22
.L21 :
    mov     rax, QWORD PTR[rbp - 72]
    lea     rcx, [rbp - 72]
    mov     edx, 10
    mov     rsi, rcx
    mov     rdi, rax
    call    strtoll
    mov     QWORD PTR[rbp - 32], rax
    .L22:
mov     rax, QWORD PTR[rbp - 56]
mov     esi, OFFSET FLAT : .LC0
mov     rdi, rax
call    strcmp
test    eax, eax
jne.L23
mov     rax, QWORD PTR[rbp - 72]
movzx   eax, BYTE PTR[rax]
test    al, al
jne.L24
mov     rax, QWORD PTR[rbp - 104]
mov     rdx, QWORD PTR[rbp - 32]
mov     QWORD PTR[rax], rdx
jmp.L27
.L24:
mov     rax, QWORD PTR[rbp - 104]
mov     QWORD PTR[rax], 0
jmp.L27
.L23 :
    mov     rax, QWORD PTR[rbp - 56]
    mov     esi, OFFSET FLAT : .LC2
    mov     rdi, rax
    call    strcmp
    test    eax, eax
    jne.L27
    mov     rax, QWORD PTR[rbp - 72]
    movzx   eax, BYTE PTR[rax]
    test    al, al
    jne.L26
    mov     rax, QWORD PTR[rbp - 112]
    mov     rdx, QWORD PTR[rbp - 32]
    mov     QWORD PTR[rax], rdx
    jmp.L27
    .L26:
mov     rax, QWORD PTR[rbp - 112]
mov     QWORD PTR[rax], 0
jmp.L27
.L19 :
    mov     rax, QWORD PTR[rbp - 96]
    add     rax, 16
    mov     rax, QWORD PTR[rax]
    mov     esi, OFFSET FLAT : .LC0
    mov     rdi, rax
    call    strcmp
    test    eax, eax
    jne.L28
    mov     rax, QWORD PTR[rbp - 104]
    mov     QWORD PTR[rax], 0
    .L28:
mov     rax, QWORD PTR[rbp - 96]
add     rax, 16
mov     rax, QWORD PTR[rax]
mov     esi, OFFSET FLAT : .LC2
mov     rdi, rax
call    strcmp
test    eax, eax
jne.L27
mov     rax, QWORD PTR[rbp - 112]
mov     QWORD PTR[rax], 0
.L27:
mov     rax, QWORD PTR[rbp - 104]
mov     rax, QWORD PTR[rax]
movabs  rdx, -9223372036854775808
cmp     rax, rdx
jne.L29
mov     rax, QWORD PTR[rbp - 112]
mov     rax, QWORD PTR[rax]
movabs  rdx, 9223372036854775807
cmp     rax, rdx
jne.L29
mov     eax, -4
jmp.L3
.L29:
mov     eax, 0
.L3 :
    mov     rbx, QWORD PTR[rbp - 8]
    leave
    ret
    .LC3 :
    .string "%lld%c"
    .LC4 :
    .string "%lld "
    main :
    push    rbp
    mov     rbp, rsp
    sub     rsp, 112
    mov     DWORD PTR[rbp - 100], edi
    mov     QWORD PTR[rbp - 112], rsi
    movabs  rax, -9223372036854775808
    mov     QWORD PTR[rbp - 72], rax
    movabs  rax, 9223372036854775807
    mov     QWORD PTR[rbp - 80], rax
    lea     rcx, [rbp - 80]
    lea     rdx, [rbp - 72]
    mov     rsi, QWORD PTR[rbp - 112]
    mov     eax, DWORD PTR[rbp - 100]
    mov     edi, eax
    call    args_solve
    cwde
    mov     DWORD PTR[rbp - 44], eax
    cmp     DWORD PTR[rbp - 44], 0
    je.L31
    mov     eax, DWORD PTR[rbp - 44]
    jmp.L44
    .L31:
mov     edi, 800
call    malloc
mov     QWORD PTR[rbp - 56], rax
mov     BYTE PTR[rbp - 81], 32
mov     DWORD PTR[rbp - 4], 0
jmp.L33
.L34:
mov     eax, DWORD PTR[rbp - 4]
lea     rdx, [0 + rax * 8]
mov     rax, QWORD PTR[rbp - 56]
lea     rcx, [rdx + rax]
lea     rax, [rbp - 81]
mov     rdx, rax
mov     rsi, rcx
mov     edi, OFFSET FLAT : .LC3
mov     eax, 0
call    __isoc99_scanf
add     DWORD PTR[rbp - 4], 1
.L33 :
    movzx   eax, BYTE PTR[rbp - 81]
    cmp     al, 32
    je.L34
    mov     QWORD PTR[rbp - 16], 0
    mov     QWORD PTR[rbp - 24], 0
    jmp.L35
    .L37:
mov     rax, QWORD PTR[rbp - 24]
lea     rdx, [0 + rax * 8]
mov     rax, QWORD PTR[rbp - 56]
add     rax, rdx
mov     rdx, QWORD PTR[rax]
mov     rax, QWORD PTR[rbp - 72]
cmp     rdx, rax
jle.L36
mov     rax, QWORD PTR[rbp - 24]
lea     rdx, [0 + rax * 8]
mov     rax, QWORD PTR[rbp - 56]
add     rax, rdx
mov     rdx, QWORD PTR[rax]
mov     rax, QWORD PTR[rbp - 80]
cmp     rdx, rax
jge.L36
add     QWORD PTR[rbp - 16], 1
.L36:
add     QWORD PTR[rbp - 24], 1
.L35 :
    mov     eax, DWORD PTR[rbp - 4]
    cmp     QWORD PTR[rbp - 24], rax
    jb.L37
    mov     rax, QWORD PTR[rbp - 16]
    sal     rax, 3
    mov     rdi, rax
    call    malloc
    mov     QWORD PTR[rbp - 64], rax
    mov     QWORD PTR[rbp - 16], 0
    mov     QWORD PTR[rbp - 32], 0
    jmp.L38
    .L42:
mov     rax, QWORD PTR[rbp - 32]
lea     rdx, [0 + rax * 8]
mov     rax, QWORD PTR[rbp - 56]
add     rax, rdx
mov     rdx, QWORD PTR[rax]
mov     rax, QWORD PTR[rbp - 72]
cmp     rdx, rax
jle.L39
mov     rax, QWORD PTR[rbp - 32]
lea     rdx, [0 + rax * 8]
mov     rax, QWORD PTR[rbp - 56]
add     rax, rdx
mov     rdx, QWORD PTR[rax]
mov     rax, QWORD PTR[rbp - 80]
cmp     rdx, rax
jge.L39
mov     rax, QWORD PTR[rbp - 32]
lea     rdx, [0 + rax * 8]
mov     rax, QWORD PTR[rbp - 56]
add     rax, rdx
mov     rdx, QWORD PTR[rbp - 16]
lea     rcx, [0 + rdx * 8]
mov     rdx, QWORD PTR[rbp - 64]
add     rdx, rcx
mov     rax, QWORD PTR[rax]
mov     QWORD PTR[rdx], rax
add     QWORD PTR[rbp - 16], 1
jmp.L40
.L39:
mov     rax, QWORD PTR[rbp - 32]
lea     rdx, [0 + rax * 8]
mov     rax, QWORD PTR[rbp - 56]
add     rax, rdx
mov     rdx, QWORD PTR[rax]
mov     rax, QWORD PTR[rbp - 72]
cmp     rdx, rax
jg.L41
mov     rax, QWORD PTR[rbp - 32]
lea     rdx, [0 + rax * 8]
mov     rax, QWORD PTR[rbp - 56]
add     rax, rdx
mov     rdx, QWORD PTR[rax]
mov     rax, QWORD PTR stdout[rip]
mov     esi, OFFSET FLAT : .LC4
mov     rdi, rax
mov     eax, 0
call    fprintf
.L41 :
    mov     rax, QWORD PTR[rbp - 32]
    lea     rdx, [0 + rax * 8]
    mov     rax, QWORD PTR[rbp - 56]
    add     rax, rdx
    mov     rdx, QWORD PTR[rax]
    mov     rax, QWORD PTR[rbp - 80]
    cmp     rdx, rax
    jl.L40
    mov     rax, QWORD PTR[rbp - 32]
    lea     rdx, [0 + rax * 8]
    mov     rax, QWORD PTR[rbp - 56]
    add     rax, rdx
    mov     rdx, QWORD PTR[rax]
    mov     rax, QWORD PTR stderr[rip]
    mov     esi, OFFSET FLAT : .LC4
    mov     rdi, rax
    mov     eax, 0
    call    fprintf
    .L40 :
    add     QWORD PTR[rbp - 32], 1
    .L38 :
    mov     eax, DWORD PTR[rbp - 4]
    cmp     QWORD PTR[rbp - 32], rax
    jb.L42
    mov     QWORD PTR[rbp - 40], 0
    cmp     QWORD PTR[rbp - 16], 0
    je.L43
    mov     rax, QWORD PTR[rbp - 16]
    mov     QWORD PTR[rbp - 40], rax
    .L43:
mov     rax, QWORD PTR[rbp - 56]
mov     rdi, rax
call    free
mov     rax, QWORD PTR[rbp - 64]
mov     rdi, rax
call    free
mov     rax, QWORD PTR[rbp - 40]
.L44:
leave
ret