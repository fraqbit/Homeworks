#include <stdio.h>
#include <locale.h>
#include <cstdlib>

int main()
{
    int a, b, c, d, x, z;
    setlocale(LC_ALL, "Russian");
    printf("Данная программа вычисляет значение выражения A * X^3 + B * X^2 + C div X +(D div X) div X\n");
    printf("Введдите число A: ");
    scanf("%i", &a);
    printf("Введите число B: ");
    scanf("%i", &b);
    printf("Введите число C: ");
    scanf("%i", &c);
    printf("Введите число D: ");
    scanf("%i", &d);
    printf("Введите число X: ");
    scanf("%i", &x);
    z = (a * x ^ 3) + (b * x ^ 2) + (c / x) + ((d / x) / x);
    _asm {
        mov eax, a
        imul x
        imul x
        imul x
        mov a, eax
        mov eax, b
        imul x
        imul x
        add eax, a
        mov eax, c
        cdq
        idiv x
        add a, eax
        mov d, eax
        cdq
        idiv x
        cdq
        idiv x
        add a, eax
    };
    printf("Результат вычислений на языке Ассемблера %i\n", a);
    printf("Результат вычислений на языке C/C++: %i\n", z);
    system("pause");
    return 0;
}

