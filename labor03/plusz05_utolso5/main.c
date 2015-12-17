#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	int beolvasott;
	int tomb[5];
	printf("Szamok:\n");
	int i = 0;
	int count = 1;
	scanf("%lf", &beolvasott);
	while (beolvasott != 0) {
		tomb[i] = beolvasott;
		i = (i + 1) % 5;
		scanf("%lf", &(tomb[i]));
		count++;
	}
	int sum = 0;
	count = count > 5 ? 5 : count;
	for (i = 0; i < count; i++) {
		sum += tomb[i];
	}
	printf("Atlag: %.2f", sum / count);
	_getch();
	return 0;
}