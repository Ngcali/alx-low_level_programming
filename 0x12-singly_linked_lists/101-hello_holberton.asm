section .data
    format db 'Hello, Holberton', 0

section .text
    extern printf

    global _start

_start:
    ; Prepare arguments for printf function call
    mov rdi, format
    xor rax, rax

    ; Call printf
    call printf

    ; Exit the program
    mov eax, 60  ; Syscall number for exit
    xor edi, edi ; Exit status (0)
    syscall
