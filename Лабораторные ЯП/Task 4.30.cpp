/* Author: Девятов Анатолий
Group: СББ-901
Task# 4.30 
Description: Найти количество квадратов со стороной k, которые пересекаются диагональю прямоугольника со сторонами m,n
*/  
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <time.h>
#include <iostream>

using namespace std;

int gcd (int a, int b) {
	return b ? gcd (b, a % b) : a;
}

int main(){
    int k, m, n, t;
    z=1;
    cin >> n;
    cin >> m;
    cin >> k;
    t = (n + m) / k - gcd(n / k ,m / k);
    cout << t;
    
}
