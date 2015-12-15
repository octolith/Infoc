// labor02_feladat03_ciklus.cpp : Defines the entry point for the console application.
//
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	printf("hatarok\na: ");
	int mettol, meddig, temp;
	scanf("%d", &mettol);
	printf("b: ");
	scanf("%d", &temp);

	if (mettol > temp) {
		meddig = mettol;
		mettol = temp;
	}

	else {
		meddig = temp;
	}

	temp = mettol;

	while (temp <= meddig) {
		printf("%d\n", temp);
		temp++;
	}
	printf("Nyomj egy gombot a folytatashoz...");
	_getch();
	return 0;
}

