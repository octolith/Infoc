#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	printf("");
	int i;
	int tomb[] = { 99,1,54,30,63,2346,431,2318,67,0 };
	int minindex = tomb[0];
	for (i = 1; i < 10; i++) {
		if (tomb[minindex] > tomb[i]) {
			minindex = i;
		}
	}
	printf("%d\n", tomb[minindex]);

	_getch();
	return 0;
}