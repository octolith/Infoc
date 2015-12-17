#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	printf("");
	int i;
	int product = 1;
	for (i = 1; i < 10; i++) {
		product *= i+1;
	}
	printf("%d", product);
	_getch();
	return 0;
}