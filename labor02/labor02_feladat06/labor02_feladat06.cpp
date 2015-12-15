// labor02_feladat06.cpp : Defines the entry point for the console application.
//

#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <conio.h>


int main()
{
	printf("Mekkora? ");
	int i, j, x;
	scanf("%d", &x);

	printf("+");
	for (i = 0; i < x; i++) {
		printf("-");
	}
	printf("+\n");

	for (i = 0; i < x; i++) {
		printf("|");
		for (j = 0; j < x; j++) {
			printf(".");
		}
		printf("|\n");
	}

	printf("+");
	for (i = 0; i < x; i++) {
		printf("-");
	}
	printf("+\n");

	printf("Nyomj egy gombot a folytatashoz...");
	_getch();
	return 0;
}

