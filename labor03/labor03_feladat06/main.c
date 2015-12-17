#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	printf("");
	int i, j, temp;
	int elemszam = 10;
	int tomb[10] = { 0,1,54,30,63,2346,431,2318,67,4524 };

	for (i = 0; i < elemszam-1; i++) {
		temp = tomb[0];
		for (j = 0; j < elemszam - 1; j++) {
			tomb[j] = tomb[j + 1];
		}
		tomb[elemszam - 1] = temp;

		printf("%d", tomb[0]);
		for (j = 1; j < elemszam; j++) {
			printf(", %d", tomb[j]);
		}
		printf("\n");
	}
	

	_getch();
	return 0;
}