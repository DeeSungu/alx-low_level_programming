global main
extern printf

main:
mov   edi, message
xor   eax, eax
call  printf
xor   eax, eax
ret

message: db    'Hello, Holberton', 10, 0
