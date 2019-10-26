SECTION .TEXT
	GLOBAL main

main:
	mov rax,1
	mov rbx,1
	mov rcx,hello
	mov rdx,helloLen
	syscall

	mov rax,60
	mov rbx,0
	syscall

SECTION .DATA
	hello:     db 'Hello, Holberton',10
	helloLen:  equ $-hello