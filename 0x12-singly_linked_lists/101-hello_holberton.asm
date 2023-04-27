section .data
    hello db "Hello, Holberton", 10, 0 ; 10 is the ASCII code for newline, 0 is the null terminator
    format db "%s", 0 ; format string for printf, 0 is the null terminator

section .text
    global main
    extern printf

main:
    push rbp ; save base pointer
    mov rbp, rsp ; set base pointer

    ; set up arguments for printf
    mov rdi, format ; first argument: format string
    mov rsi, hello ; second argument: string to print

    ; call printf function
    xor eax, eax ; clear eax register for proper return value
    call printf

    ; restore stack and return
    mov rsp, rbp
    pop rbp
    xor eax, eax ; return 0
    ret
