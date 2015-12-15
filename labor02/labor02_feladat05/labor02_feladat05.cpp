// labor02_feladat05.cpp : Defines the entry point for the console application.
//

#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <conio.h>


int main()
{
	printf("Milyen hosszu? ");
	int x;
	scanf("%d", &x);
	printf("+");
	int i;
	for (i = 0; i < x; i++) {
		printf("-");
	}
	printf("+\n");
	printf("Nyomj egy gombot a folytatashoz...");
	_getch();
	return 0;
}

