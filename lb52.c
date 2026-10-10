#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define c 0.4

int main1()  
{
	system("chcp 65001");
	float x;
	puts("Введите значение x: \n");
	scanf("%f" , &x);
	double e = exp(2 * x);
	double a = log10(x);
	double b = a * a + pow(c * x, 1. / 2);
	double res1 = pow(9.7, b);
	double y = e + res1;
	printf("x = %.f\ny = % 6.2f", x, y);
}