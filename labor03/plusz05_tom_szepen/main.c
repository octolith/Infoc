#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	printf("");
	int elemszam = 10;
	int tomb[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int szigmonno = 1;
	int szigmoncsok = 1;
	while ((szigmonno || szigmoncsok) && i < elemszam - 1) {
		if (szigmonno && tomb[i] >= tomb[i+1]) {
			szigmonno = 0;
		}
		if (szigmoncsok && tomb[i] <= tomb[i + 1]) {
			szigmoncsok = 0;
		}
		i++;
	}
	if (szigmonno) {
		printf("szigmonno\n");
	}
	else if (szigmoncsok) {
		printf("szigmoncsok\n");
	}
	else {
		printf("egyik sem\n");
	}
	_getch();
	return 0;
}