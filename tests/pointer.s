	.file	"pointer.c"
	.text
	.p2align	1
	.global	main
	.type	main, @function
main:
	sub	GPR1, 12
	disp	GPR2, 1280
	disp	[GPR0-4], GPR2
	disp	GPR2, [GPR0-4]
	disp	GPR3, 1
	dispa	GPR2, GPR3
	disp	GPR2, 1280
	disp	[GPR0-8], GPR2
	disp	GPR2, [GPR0-8]
	disp	GPR3, 2
	dispa	GPR2,GPR3
	disp	GPR2, 16384
	disp	[GPR0-12], GPR2
	disp	GPR2, [GPR0-12]
	disp	GPR3, 4
	dispa	GPR2, GPR3
	xor	GPR2, GPR2
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 10.3.0"
