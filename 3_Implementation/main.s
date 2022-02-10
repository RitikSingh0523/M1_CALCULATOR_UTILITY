	.file	"main.c"
	.text
	.section	.rodata
	.align 8
.LC1:
	.string	"Enter a operator\n1.Sum\n2. Substract \n3.Multiplication\n4.Division\n5.Square\n6.Factorial(!)"
.LC2:
	.string	"%d"
.LC3:
	.string	"Enter Both Operand"
.LC4:
	.string	"%lf %lf"
.LC5:
	.string	"sum is =%lf"
.LC6:
	.string	"Substract is =%lf"
.LC7:
	.string	"Multiplication is =%lf"
.LC8:
	.string	"Enter Your Operand"
.LC9:
	.string	"%lf"
.LC10:
	.string	"Enter the Operand"
.LC11:
	.string	"Factorial=%lf"
	.text
	.globl	simple
	.type	simple, @function
simple:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	movsd	%xmm0, -48(%rbp)
	pxor	%xmm0, %xmm0
	movsd	%xmm0, -40(%rbp)
	pxor	%xmm0, %xmm0
	movsd	%xmm0, -32(%rbp)
	pxor	%xmm0, %xmm0
	movsd	%xmm0, -24(%rbp)
	pxor	%xmm0, %xmm0
	movsd	%xmm0, -16(%rbp)
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
	leaq	-80(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-80(%rbp), %eax
	cmpl	$6, %eax
	ja	.L14
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L4(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L4(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L4:
	.long	.L14-.L4
	.long	.L9-.L4
	.long	.L8-.L4
	.long	.L7-.L4
	.long	.L6-.L4
	.long	.L5-.L4
	.long	.L3-.L4
	.text
.L9:
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
	leaq	-64(%rbp), %rdx
	leaq	-72(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movsd	-72(%rbp), %xmm1
	movsd	-64(%rbp), %xmm0
	addsd	%xmm1, %xmm0
	movsd	%xmm0, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC5(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	jmp	.L10
.L8:
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
	leaq	-64(%rbp), %rdx
	leaq	-72(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movsd	-72(%rbp), %xmm0
	movsd	-64(%rbp), %xmm1
	subsd	%xmm1, %xmm0
	movsd	%xmm0, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC6(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	jmp	.L10
.L7:
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
	leaq	-64(%rbp), %rdx
	leaq	-72(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movsd	-72(%rbp), %xmm1
	movsd	-64(%rbp), %xmm0
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC7(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	jmp	.L10
.L6:
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
	leaq	-64(%rbp), %rdx
	leaq	-72(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movsd	-72(%rbp), %xmm0
	movsd	-64(%rbp), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC5(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	jmp	.L10
.L5:
	leaq	.LC8(%rip), %rdi
	call	puts@PLT
	leaq	-72(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC9(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movsd	-72(%rbp), %xmm1
	movsd	-72(%rbp), %xmm0
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC5(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	jmp	.L10
.L3:
	leaq	.LC10(%rip), %rdi
	call	puts@PLT
	leaq	-72(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC9(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	$0, -76(%rbp)
	jmp	.L11
.L12:
	cvtsi2sdl	-76(%rbp), %xmm0
	movsd	-56(%rbp), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -56(%rbp)
	addl	$1, -76(%rbp)
.L11:
	cvtsi2sdl	-76(%rbp), %xmm1
	movsd	-72(%rbp), %xmm0
	comisd	%xmm1, %xmm0
	ja	.L12
	movq	-56(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC11(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
.L14:
	nop
.L10:
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L13
	call	__stack_chk_fail@PLT
.L13:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	simple, .-simple
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
	movl	$0, %eax
	call	simple
	cvttsd2sil	%xmm0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
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
