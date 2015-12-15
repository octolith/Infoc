// labor02_feladat03_masodfoku.cpp : Defines the entry point for the console application.
//
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <conio.h>


int main()
{
	double a, b, c;
	printf("Masodfoku egyenlet megoldo\na: ");
	scanf("%lf", &a);
	printf("b: ");
	scanf("%lf", &b);
	printf("c: ");
	scanf("%lf", &c);
	printf("x1 = %.2f\n", (-b + sqrt(pow(b, 2) - 4 * a*c)) / (2 * a));
	printf("x2 = %.2f\n", (-b - sqrt(pow(b, 2) - 4 * a*c)) / (2 * a));
	printf("Nyomj egy gombot a folytatashoz...");
	_getch();
    return 0;
}

