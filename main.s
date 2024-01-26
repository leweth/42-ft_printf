	.file	"main.c"
	.text
	.type	count, @function
count:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	i.0(%rip), %eax
	addl	$1, %eax
	movl	%eax, i.0(%rip)
	movl	i.0(%rip), %eax
	cmpl	$5, %eax
	jne	.L2
	movl	i.0(%rip), %eax
	jmp	.L3
.L2:
	movl	$0, %eax
	call	count
.L3:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	count, .-count
	.section	.rodata
.LC0:
	.string	"%x"
.LC1:
	.string	"\n"
.LC2:
	.string	"%X"
	.align 8
.LC3:
	.string	"\n%d-------------%d-------------d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$-129, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	ft_printf@PLT
	movl	%eax, -8(%rbp)
	movl	$1, %edx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rsi
	movl	$1, %edi
	call	write@PLT
	movl	$-129, %esi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.local	i.0
	.comm	i.0,4,4
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
