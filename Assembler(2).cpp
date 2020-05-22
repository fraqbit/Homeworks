#include <stdio.h>
#include <locale.h>
#include <cstdlib>

int main()
{
    setlocale(LC_ALL, "Russian");
    int A[3], B[3], C[3], x, y, z = 0;
    printf("Данная ...: Summ(Ai * Bi) * X + Summ(Ci) * Y");
    for (int i = 0; i < 3; i++) {
        printf("Введдите значение элемента A[%i]:\n", i + 1);
        scanf("%i", &A[i]);
    }
    for (int i = 0; i < 3; i++) {
        printf("Введдите значение элемента B[%i]:\n", i + 1);
        scanf("%i", &B[i]);
        B[i] *= A[i];
    }
    for (int i = 0; i < 3; i++) {
        printf("Введдите значение элемента C[%i]:\n", i + 1);
        scanf("%i", &C[i]);
        z += C[i];
    }
    printf("Введдите число X:\n");
    scanf("%i", &x);
    printf("Введдите число Y:\n");
    scanf("%i", &y);
    z = (B[0] + B[1] + B[2]) * x + z * y;
    _asm {
        mov eax, 0
        mov esi, 0
        mov ecx, 3
        lea ebx, B
        cycl1 :
        mov esi, [ebx]
            cmp esi, 0
            jge m1
            m1 :
        add eax, esi
            add ebx, 4
            loop cycl1
            imul x
            mov x, eax
            mov eax, 0
            mov ecx, 9
            lea ebx, C
            cycle2 :
        add eax, [ebx]
            add ebx, 4
            loop cycle2
            imul y
            add x, eax
    }
    printf("Result on Asm: %i\n", x);
    printf("Result on C++: %i\n", z);
}