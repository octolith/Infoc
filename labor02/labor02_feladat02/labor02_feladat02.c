// labor02_feladat02.cpp : Defines the entry point for the console application.
//
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <conio.h>


int main()
{
	double x1, x2, y1, y2;
	printf("Az elso pont koordinatai\nx: ");
	scanf("%lf", &x1);
	printf("y: ");
	scanf("%lf", &y1);
	printf("A masodik pont koordinatai\nx: ");
	scanf("%lf", &x2);
	printf("y: ");
	scanf("%lf", &y2);
	printf("Tavolsaguk: %.2f\n", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
	printf("Nyomj egy gombot a folytatashoz...");
	_getch();
    return 0;
}

