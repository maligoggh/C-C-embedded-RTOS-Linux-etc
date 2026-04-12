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
	.file	"switch_test.c"
	.text
	.align	1
	.p2align 2,,3
	.global	switch_version
	.syntax unified
	.thumb
	.thumb_func
	.type	switch_version, %function
switch_version:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	cmp	r0, #14
	ittte	ls
	addls	r0, r0, #1
	addls	r0, r0, r0, lsl #2
	lslls	r0, r0, #1
	movhi	r0, #0
	bx	lr
	.size	switch_version, .-switch_version
	.align	1
	.p2align 2,,3
	.global	ifelse_version
	.syntax unified
	.thumb
	.thumb_func
	.type	ifelse_version, %function
ifelse_version:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	cmp	r0, #14
	ittte	ls
	addls	r0, r0, #1
	addls	r0, r0, r0, lsl #2
	lslls	r0, r0, #1
	movhi	r0, #0
	bx	lr
	.size	ifelse_version, .-ifelse_version
	.ident	"GCC: (Arm GNU Toolchain 15.2.Rel1 (Build arm-15.86)) 15.2.1 20251203"
