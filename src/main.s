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
	leaq	.LC0(%rip), %r13
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	xorl	%r12d, %r12d
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	movl	%edx, %ebp
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
	je	.L18
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
.L19:
	subl	$1, %ebx
	je	.L1
.L9:
	movq	%r15, %rdx
	movq	%r14, %rsi
	movq	%r13, %rdi
	xorl	%eax, %eax
	call	__isoc99_scanf@PLT
	movq	64(%rsp), %rcx
	cmpl	$1, %ebp
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
	movq	64(%rsp), %rcx
.L11:
	cmpq	32(%rsp), %rcx
	jge	.L10
	cmpb	$32, 63(%rsp)
	je	.L19
	.p2align 4,,10
	.p2align 3
.L1:
	movq	72(%rsp), %rax
	xorq	%fs:40, %rax
	jne	.L20
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
.L18:
	.cfi_restore_state
	cmpq	32(%rsp), %rcx
	jl	.L5
	cmpl	$1, %ebp
	je	.L21
.L10:
	movq	stderr(%rip), %rdi
	leaq	.LC1(%rip), %rdx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk@PLT
	jmp	.L7
.L20:
	call	__stack_chk_fail@PLT
.L21:
	cmpq	40(%rsp), %rcx
	jg	.L11
	movq	stdout(%rip), %rdi
	leaq	.LC1(%rip), %rdx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk@PLT
	movq	64(%rsp), %rcx
	jmp	.L11
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
	cmpl	$1, %esi
	jle	.L30
	movl	%esi, %ebp
	cmpl	$3, %esi
	jg	.L31
	leal	-2(%rsi), %eax
	movq	%rdi, %r12
	leaq	8(%rdi), %rbx
	xorl	%r9d, %r9d
	leaq	16(%rdi,%rax,8), %r14
	xorl	%r10d, %r10d
	xorl	%r8d, %r8d
	xorl	%r13d, %r13d
	leaq	16(%rsp), %r15
.L26:
	movq	(%rbx), %rax
	movl	$7, %ecx
	leaq	.LC2(%rip), %rdi
	movq	%rax, %rsi
	repz cmpsb
	seta	%dl
	sbbb	$0, %dl
	testb	%dl, %dl
	je	.L48
.L24:
	movl	$5, %ecx
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	repz cmpsb
	seta	%dl
	sbbb	$0, %dl
	testb	%dl, %dl
	je	.L49
.L25:
	movq	$0, 16(%rsp)
	addq	$8, %rbx
	cmpq	%r14, %rbx
	jne	.L26
	orl	%r9d, %r10d
	jne	.L36
	cmpl	$3, %ebp
	je	.L50
.L28:
	xorl	%eax, %eax
	cmpq	%r8, %r13
	je	.L51
.L22:
	movq	24(%rsp), %rbx
	xorq	%fs:40, %rbx
	jne	.L52
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
.L48:
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
	jmp	.L24
.L49:
	leaq	5(%rax), %rdi
	movl	$10, %edx
	movq	%r15, %rsi
	movl	%r10d, (%rsp)
	call	strtol@PLT
	movl	(%rsp), %r10d
	movl	$1, %r9d
	movq	%rax, %r8
	jmp	.L25
.L36:
	cmpl	$3, %ebp
	jne	.L28
	movq	16(%r12), %rsi
	movq	8(%r12), %rdi
	movl	$5, %edx
	movl	%r9d, 12(%rsp)
	movq	%r8, (%rsp)
	call	strncmp@PLT
	movq	(%rsp), %r8
	movl	12(%rsp), %r9d
	testl	%eax, %eax
	jne	.L28
.L33:
	movl	$-3, %eax
	jmp	.L22
.L51:
	subq	$1, %r13
	jne	.L35
	testl	%r9d, %r9d
	jne	.L33
.L35:
	xorl	%eax, %eax
	jmp	.L22
.L31:
	movl	$-2, %eax
	jmp	.L22
.L30:
	orl	$-1, %eax
	jmp	.L22
.L50:
	movl	$-4, %eax
	jmp	.L22
.L52:
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
