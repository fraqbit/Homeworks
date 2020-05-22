/* Author: Девятов Анатолий
Group: СББ-901
Task# 1.13
Description: Нахождение Площади круга
*/
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	printf("Calculation of the circle area and the output of the answer in square meters. \n");
	int radius;
	printf("Input an radius in centimeters: ");
	scanf("%d", &radius);
	const double PI = 3.14159265358979323846;
	float circleArea = 0.0;
	circleArea = (PI * pow(radius, 2)) / 10000.0;
	printf("Circle area in square meters is: %f", circleArea);
}