#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define M_PI 3.14159265358979323846

int main() 
{

	system("chcp 65001");
	float gr;
	puts("Программа вычисления синуса");
	puts("Введите градус");
	scanf("%f", &gr);
	printf("Результат синус %1.f  град = %6f", gr, sin(gr * M_PI / 180));
}