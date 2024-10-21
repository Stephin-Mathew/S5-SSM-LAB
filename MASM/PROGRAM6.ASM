assume cs:code
code segment
start:
mov ax,00h
mov si,3000h
mov ax,[si]
inc si
inc si
mov bx,[si]
add ax,bx
inc si
inc si
mov [si],ax
jc l1
inc si
inc si
mov [si],ax
int 3
l1:
inc si
inc si
inc ax
mov [si],ax
int 3
code ends
end start
