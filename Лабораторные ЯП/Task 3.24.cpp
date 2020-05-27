/* Author: Девятов Анатолий
Group: СББ-901
Task# 3.24
Description: Нахождение функции от чисел в зависимости от разрядов
*/
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <time.h>
#include <iostream>

using namespace std;


void func1(int a1,int b1,float c1,int n11,int n21){
    if (a1==b1){
        c1=sqrt(n11);
    }
    if (a1==4 && b1!=4){
        c1=n11*n21;
    }
    if (b1==4 && a1!=4){
        c1=log10(abs(n11))-log10(abs(n21));
    }
    printf("Функция от чисел n1 и n2 = %f",c1);
}

int main() {
    int arr1[8];
    int arr2[8];
    int i,a=0,b=0,c,n1=0,n2=0;
    printf("Введите значение элемента массива A\n");
    for (i=0; i<8; i++){
    
        scanf("%d",&arr1[i]);
    }
    printf("Введите значение элементов массива B\n");
    for (i=0; i<8; i++){
        scanf("%d",&arr2[i]);
    }
    for (i=0;i<4;i++){
        if (arr1[i]==arr2[i]){
            a+=1;
        }
    }
    for (i=4;i<8;i++){
        if (arr1[i]==arr2[i]){
            b+=1;
        }
    }
    for (i=0;i<8;i++){
     n1+=arr1[i]*pow(8,(7-i));
     n2+=arr2[i]*pow(8,(7-i));
    }
    func1(a,b,c,n1,n2);
}

