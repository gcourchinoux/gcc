	.file	"test1.c"
	.text
	.p2align	1
	.global	main
	.type	main, @function
main:
	sub	GPR1, 4
	disp	GPR2, 1
	dispab	-1(GPR0), GPR2
	xor	GPR2, GPR2
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 10.3.0"
