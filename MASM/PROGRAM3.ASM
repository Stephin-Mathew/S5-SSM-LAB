assume cs:code
code segment
start:
mov ah,00h
mov si,3000h
mov al,[si]
inc si
mov bl,[si]
add al,bl
inc si
mov [si],al
jc l1
inc si
mov [si],ah
int 3
l1:
inc si
inc ah
mov [si],ah
int 3
code ends
end start
