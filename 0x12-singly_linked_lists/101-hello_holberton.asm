section .data
    hello db "Hello, Holberton", 0
    len equ $-hello

section .text
    global _start

_start:
    ; Prepare arguments for printf
    mov eax, 4
    mov ebx, 1
    mov ecx, hello
    mov edx, len

    ; Call printf
    int 0x80

    ; Call exit
    mov eax, 1
    xor ebx, ebx
    int 0x80
