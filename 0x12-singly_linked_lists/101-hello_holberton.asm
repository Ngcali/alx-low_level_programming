section .data
    hello db 'Hello, Holberton', 0
    format db 'Hello, Holberton', 10, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    sub rsp, 8        ; Allocate space for local variables

    mov rdi, format   ; Load the format string into rdi
    xor eax, eax      ; Clear eax register

    call printf       ; Call the printf function

    add rsp, 8        ; Deallocate space for local variables

    mov eax, 0        ; Return 0 from main
    leave
    ret
