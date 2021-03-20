	SECTION .data
msg:	db "Hello, Holberton", 0
format:
	db "%s", 10, 0

	extern printf
	SECTION .text
	global  main, _start

main:
	mov    rsi, msg
	mov    rdi, format
	mov    rax, 0
	call    printf
	mov    rax, 0
	ret
