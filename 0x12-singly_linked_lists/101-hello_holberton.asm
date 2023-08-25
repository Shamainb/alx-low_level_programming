global main
extern printf

main:
push rbp
mov rdi, hello
call printf
pop rbp
ret

hello: db "Hello, Holberton",0
