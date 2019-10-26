SECTION .DATA
	hello:     db 'Hello, Holberton',10
	helloLen:  equ $-hello

SECTION .TEXT
	GLOBAL _start

_start:
	mov rax,4
	mov rbx,1
	mov rcx,hello
	mov rdx,helloLen
	int 80h

	mov rax,1
	mov rbx,0
	int 80h