section .data
    A dd 1, 2, 3, 4, 5
    B dd 10, 20, 30, 40, 50
    n equ 5

section .bss
    C resd n

section .text
    global _start
    extern E_prnt          ; <-- БЕЗ подчёркивания

_start:
    ; ===== Сложение массивов =====
    mov ecx, 0
sum_loop:
    cmp ecx, n
    jge print_A
    
    mov eax, [A + ecx*4]
    add eax, [B + ecx*4]
    mov [C + ecx*4], eax
    
    inc ecx
    jmp sum_loop

print_A:
    push dword A
    mov eax, n
    push eax
    call E_prnt           ; <-- БЕЗ подчёркивания
    add esp, 8

print_B:
    push dword B
    mov eax, n
    push eax
    call E_prnt           ; <-- БЕЗ подчёркивания
    add esp, 8

print_C:
    push dword C
    mov eax, n
    push eax
    call E_prnt           ; <-- БЕЗ подчёркивания
    add esp, 8

exit:
    mov eax, 1
    xor ebx, ebx
    int 0x80
