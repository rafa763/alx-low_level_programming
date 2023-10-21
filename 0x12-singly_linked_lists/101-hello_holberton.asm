section .data
    format db "Hello, Holberton",10,0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, format
    call printf
    add rsp, 8
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; exit status
    syscall
