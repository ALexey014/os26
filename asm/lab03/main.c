extern second

section .text
    global _start

_start:
    push 5        ; 
    call second   ; 
    add esp, 4    ;

    ; системный вызов exit
    mov eax, 1    ; 
    xor ebx, ebx  ; 
    int 0x80      ; 
