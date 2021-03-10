	.global _Z4testv
_Z4testv:	
	mov r0, #5
	mov r1, #35
loop:
	add r0, r0, #3
	cmp r0, r1
	blt loop
	mov r0, r1
	bx lr
