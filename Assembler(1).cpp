#include <stdio.h>
#include <locale.h>
#include <cstdlib>

int main()
{
    int a, b, c, d, x, z;
    setlocale(LC_ALL, "Russian");
    printf("������ ��������� ��������� �������� ��������� A * X^3 + B * X^2 + C div X +(D div X) div X\n");
    printf("�������� ����� A: ");
    scanf("%i", &a);
    printf("������� ����� B: ");
    scanf("%i", &b);
    printf("������� ����� C: ");
    scanf("%i", &c);
    printf("������� ����� D: ");
    scanf("%i", &d);
    printf("������� ����� X: ");
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
    printf("��������� ���������� �� ����� ���������� %i\n", a);
    printf("��������� ���������� �� ����� C/C++: %i\n", z);
    system("pause");
    return 0;
}

