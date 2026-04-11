	.cpu cortex-m4
	.arch armv7e-m
	.fpu softvfp
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 2
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.file	"lesson.c"
	.text
	.align	1
	.p2align 2,,3
	.global	ternary
	.syntax unified
	.thumb
	.thumb_func
	.type	ternary, %function
ternary:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	cmp	r0, r1
	it	lt
	movlt	r0, r1
	bx	lr
	.size	ternary, .-ternary
	.align	1
	.p2align 2,,3
	.global	if_else
	.syntax unified
	.thumb
	.thumb_func
	.type	if_else, %function
if_else:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	cmp	r0, r1
	it	lt
	movlt	r0, r1
	bx	lr
	.size	if_else, .-if_else
	.ident	"GCC: (Arm GNU Toolchain 15.2.Rel1 (Build arm-15.86)) 15.2.1 20251203"
