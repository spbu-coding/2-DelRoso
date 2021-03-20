	.file	"main.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"%lld%c"
.LC1:
	.string	"%lld "
	.text
	.p2align 4
	.globl	input
	.type	input, @function
input:
.LFB50:
	.cfi_startproc
	endbr64
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	movl	%edx, %r13d
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	xorl	%r12d, %r12d
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	leaq	.LC0(%rip), %rbp
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	movl	$100, %ebx
	subq	$88, %rsp
	.cfi_def_cfa_offset 144
	movq	%rdi, 16(%rsp)
	leaq	63(%rsp), %r15
	leaq	64(%rsp), %r14
	movq	%rsi, 24(%rsp)
	movl	%ecx, 12(%rsp)
	movq	%r8, 40(%rsp)
	movq	%r9, 32(%rsp)
	movq	%fs:40, %rax
	movq	%rax, 72(%rsp)
	xorl	%eax, %eax
	jmp	.L9
	.p2align 4,,10
	.p2align 3
.L3:
	cmpl	$1, 12(%rsp)
	je	.L22
.L5:
	movq	16(%rsp), %rdx
	movq	24(%rsp), %rsi
	movslq	%r12d, %rax
	addl	$1, %r12d
	movq	%rcx, (%rdx,%rax,8)
	movq	%rcx, (%rsi,%rax,8)
.L7:
	cmpb	$32, 63(%rsp)
	jne	.L1
.L24:
	subl	$1, %ebx
	je	.L1
.L9:
	xorl	%eax, %eax
	movq	%r15, %rdx
	movq	%r14, %rsi
	movq	%rbp, %rdi
	call	__isoc99_scanf@PLT
	testl	%eax, %eax
	jne	.L23
.L2:
	movq	64(%rsp), %rcx
	movq	%rcx, %r8
	cmpl	$1, %r13d
	jne	.L3
	cmpq	40(%rsp), %rcx
	jg	.L3
	movq	stdout(%rip), %rdi
	xorl	%eax, %eax
	movl	$1, %esi
	leaq	.LC1(%rip), %rdx
	call	__fprintf_chk@PLT
	cmpl	$1, 12(%rsp)
	jne	.L7
.L12:
	movq	64(%rsp), %r8
	cmpq	32(%rsp), %r8
	jge	.L10
	cmpb	$32, 63(%rsp)
	je	.L24
	.p2align 4,,10
	.p2align 3
.L1:
	movq	72(%rsp), %rax
	xorq	%fs:40, %rax
	jne	.L25
	addq	$88, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	movl	%r12d, %eax
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L23:
	.cfi_restore_state
	movsbl	63(%rsp), %ecx
	movq	64(%rsp), %rdx
	movq	%rbp, %rsi
	xorl	%eax, %eax
	movl	$1, %edi
	call	__printf_chk@PLT
	jmp	.L2
	.p2align 4,,10
	.p2align 3
.L22:
	cmpq	32(%rsp), %rcx
	jl	.L5
	cmpl	$1, %r13d
	je	.L26
.L10:
	movq	stderr(%rip), %rdi
	movq	%r8, %rcx
	movl	$1, %esi
	xorl	%eax, %eax
	leaq	.LC1(%rip), %rdx
	call	__fprintf_chk@PLT
	jmp	.L7
.L26:
	cmpq	40(%rsp), %rcx
	jle	.L11
	movq	%rcx, %r8
	jmp	.L10
.L25:
	call	__stack_chk_fail@PLT
.L11:
	movq	stdout(%rip), %rdi
	leaq	.LC1(%rip), %rdx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk@PLT
	jmp	.L12
	.cfi_endproc
.LFE50:
	.size	input, .-input
	.section	.rodata.str1.1
.LC2:
	.string	"--from="
.LC3:
	.string	"--to="
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB51:
	.cfi_startproc
	endbr64
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$40, %rsp
	.cfi_def_cfa_offset 96
	movq	%fs:40, %rax
	movq	%rax, 24(%rsp)
	xorl	%eax, %eax
	movq	$0, 16(%rsp)
	cmpl	$1, %edi
	jle	.L35
	movl	%edi, %ebp
	cmpl	$3, %edi
	jg	.L36
	leal	-2(%rdi), %eax
	movq	%rsi, %r12
	leaq	8(%rsi), %rbx
	xorl	%r9d, %r9d
	leaq	16(%rsi,%rax,8), %r14
	xorl	%r10d, %r10d
	xorl	%r8d, %r8d
	xorl	%r13d, %r13d
	leaq	16(%rsp), %r15
.L31:
	movq	(%rbx), %rax
	movl	$7, %ecx
	leaq	.LC2(%rip), %rdi
	movq	%rax, %rsi
	repz cmpsb
	seta	%dl
	sbbb	$0, %dl
	testb	%dl, %dl
	je	.L53
.L29:
	movl	$5, %ecx
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	repz cmpsb
	seta	%dl
	sbbb	$0, %dl
	testb	%dl, %dl
	je	.L54
.L30:
	movq	$0, 16(%rsp)
	addq	$8, %rbx
	cmpq	%r14, %rbx
	jne	.L31
	orl	%r9d, %r10d
	jne	.L41
	cmpl	$3, %ebp
	je	.L55
.L33:
	xorl	%eax, %eax
	cmpq	%r8, %r13
	je	.L56
.L27:
	movq	24(%rsp), %rbx
	xorq	%fs:40, %rbx
	jne	.L57
	addq	$40, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
.L53:
	.cfi_restore_state
	leaq	7(%rax), %rdi
	movl	$10, %edx
	movq	%r15, %rsi
	movq	%r8, (%rsp)
	movl	%r9d, 12(%rsp)
	call	strtol@PLT
	movl	12(%rsp), %r9d
	movq	(%rsp), %r8
	movl	$1, %r10d
	movq	%rax, %r13
	movq	(%rbx), %rax
	jmp	.L29
.L54:
	leaq	5(%rax), %rdi
	movl	$10, %edx
	movq	%r15, %rsi
	movl	%r10d, (%rsp)
	call	strtol@PLT
	movl	(%rsp), %r10d
	movl	$1, %r9d
	movq	%rax, %r8
	jmp	.L30
.L41:
	cmpl	$3, %ebp
	jne	.L33
	movq	16(%r12), %rsi
	movq	8(%r12), %rdi
	movl	$5, %edx
	movl	%r9d, 12(%rsp)
	movq	%r8, (%rsp)
	call	strncmp@PLT
	movq	(%rsp), %r8
	movl	12(%rsp), %r9d
	testl	%eax, %eax
	jne	.L33
.L38:
	movl	$-3, %eax
	jmp	.L27
.L56:
	subq	$1, %r13
	jne	.L40
	testl	%r9d, %r9d
	jne	.L38
.L40:
	xorl	%eax, %eax
	jmp	.L27
.L36:
	movl	$-2, %eax
	jmp	.L27
.L35:
	orl	$-1, %eax
	jmp	.L27
.L55:
	movl	$-4, %eax
	jmp	.L27
.L57:
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE51:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
