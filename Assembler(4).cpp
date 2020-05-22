#include <stdio.h>
#include <locale.h>
#include <cstdlib>

int main()
{
	std::string s;
	std::string buff;
    int z;
	_asm {
        push ebx   
        push ecx
        push ebx   
        lea eax, s  
        push eax
        call scanf 
        add esp, 8  
        pop ecx    
        pop ebx
        mov ax, data
        mov ds, ax
        mov es, ax

        push ebx
        push ecx
        push ebx
        lea eax, z
        push eax
        call scanf
        add esp, 8
        pop ecx
        pop ebx
        mov ax, data
        mov ds, ax
        mov es, ax

        lea di, buff
        mov cx, z
        L1:
            push    cx
            lea si, s
            mov cx, len
            rep movsb
            pop cx
            loop L1

            mov ax, 0900h
            lea dx, buff
            int 21h

            mov ax, 0100h
            int 21h

        push esi
        push ecx
        push [esi]
        lea eax,buff
        push eax
        call printf
        add esp,8
        pop ecx
        pop esi
        add esi,4
	}
}
