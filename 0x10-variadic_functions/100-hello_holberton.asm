section .text
	global _main

_main:
	mov rax, 1
	mov rbx, 1
	mov rcx, hello
	mov rdx, 17
	syscall

	mov rax, 60
	mov rdx, 0


section .data
	hello:     db 'Hello, Holberton', 10, 0