	.file	"if.c"
	.text
	.p2align	1
	.global	test
	.type	test, @function
test:
	sub	GPR1, 4
	disp	GPR2, 16
	dispab_write	[GPR0-1], GPR2
	nop
	ret
	.size	test, .-test
	.global	__lshrsi3
	.p2align	1
	.global	main
	.type	main, @function
main:
	sub	GPR1, 28
	disp	GPR2, 16384
	dispab_write	[GPR0-4], GPR2
	dispab_read	GPR2, [GPR0-4]
	dispal_read	GPR2, GPR2
	disp	GPR3, 24
	shfl	GPR2, GPR3
	disp	GPR3, 24
	jsra	__lshrsi3
	disp	GPR3, 4
	cmp	GPR2, GPR3
	bne	.L3
	jsra	test
.L3:
	xor	GPR2, GPR2
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 10.3.0"
