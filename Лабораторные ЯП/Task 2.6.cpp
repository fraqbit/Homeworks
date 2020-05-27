/* Author: Девятов Анатолий
Group: СББ-901
Task# 2.6
Description: Найти НОД чисел a,b через алгоритм Евклида(рекурсия)
*/
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            printf("nod = %d", i);
            break;
        }
    }
    return 0;
}