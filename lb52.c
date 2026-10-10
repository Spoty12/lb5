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
	
	int A = (int)a;
	int B = (int)b;
	int C = (int)c;

	int ab = ((A % 2 == 0) != (B % 2 == 0));
	int abc = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

	printf("Условие  a выполнено: %d\n", ab);
	printf("Условие  b выполнено: %d\n", abc);
}
