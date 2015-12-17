#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	int x, i;
	printf("Egesz szam? ");
	scanf("%d", &x);
	int sum = 0;
	for (i = 1; i <= x / 2; i++) {
		sum += (x%i == 0) ? i : 0;
	}
	sum += x;
	printf("%d\n", sum);

	if (sum - x == x) {
		printf("Tokeletes szam!\n");
	}
	_getch();
	return 0;
}