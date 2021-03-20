	.file	"sort.c"
	.text
	.p2align 4
	.globl	cmp
	.type	cmp, @function
cmp:
.LFB39:
	.cfi_startproc
	endbr64
	movl	(%rdi), %eax
	subl	(%rsi), %eax
	ret
	.cfi_endproc
.LFE39:
	.size	cmp, .-cmp
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"%d"
.LC1:
	.string	"%d "
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB40:
	.cfi_startproc
	endbr64
	pushq	%r13
	.cfi_def_cfa_offset 16
	.cfi_offset 13, -16
	leaq	.LC0(%rip), %rdi
	leaq	.LC0(%rip), %r13
	pushq	%r12
	.cfi_def_cfa_offset 24
	.cfi_offset 12, -24
	pushq	%rbp
	.cfi_def_cfa_offset 32
	.cfi_offset 6, -32
	pushq	%rbx
	.cfi_def_cfa_offset 40
	.cfi_offset 3, -40
	xorl	%ebx, %ebx
	subq	$440, %rsp
	.cfi_def_cfa_offset 480
	movq	%fs:40, %rax
	movq	%rax, 424(%rsp)
	xorl	%eax, %eax
	leaq	12(%rsp), %rsi
	leaq	16(%rsp), %r12
	movq	%r12, %rbp
	call	__isoc99_scanf@PLT
	movslq	12(%rsp), %rsi
	testl	%esi, %esi
	jle	.L4
	.p2align 4,,10
	.p2align 3
.L5:
	movq	%rbp, %rsi
	movq	%r13, %rdi
	xorl	%eax, %eax
	addl	$1, %ebx
	call	__isoc99_scanf@PLT
	movslq	12(%rsp), %rsi
	addq	$4, %rbp
	cmpl	%ebx, %esi
	jg	.L5
.L4:
	leaq	cmp(%rip), %rcx
	movl	$4, %edx
	movq	%r12, %rdi
	call	qsort@PLT
	movl	12(%rsp), %eax
	testl	%eax, %eax
	jle	.L6
	xorl	%ebx, %ebx
	leaq	.LC1(%rip), %rbp
	.p2align 4,,10
	.p2align 3
.L7:
	movl	(%r12,%rbx,4), %edx
	movq	%rbp, %rsi
	movl	$1, %edi
	xorl	%eax, %eax
	addq	$1, %rbx
	call	__printf_chk@PLT
	cmpl	%ebx, 12(%rsp)
	jg	.L7
.L6:
	movq	424(%rsp), %rax
	xorq	%fs:40, %rax
	jne	.L14
	addq	$440, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 40
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 32
	popq	%rbp
	.cfi_def_cfa_offset 24
	popq	%r12
	.cfi_def_cfa_offset 16
	popq	%r13
	.cfi_def_cfa_offset 8
	ret
.L14:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE40:
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
