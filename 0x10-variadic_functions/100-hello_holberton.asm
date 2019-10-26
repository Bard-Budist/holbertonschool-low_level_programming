SECTION .TEXT
	GLOBAL _main

_main:
	mov rax,1
	mov rbx,1
	mov rcx,hello
	mov rdx,helloLen
	syscall

_print:
	push rax
	mov rdx, 0


SECTION .DATA
	hello:     db 'Hello, Holberton',10,0
	helloLen:  equ $-hello