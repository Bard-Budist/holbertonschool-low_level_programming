section .data
	str: db 'Hello, Holberton', 10,0

section .text
	global main

main:
	mov rax, 1
	mov rbx, 1
	mov rcx, str
	mov rdx, 17
	syscall

	mov rax, 60
	mov rdx, 0
	syscall

