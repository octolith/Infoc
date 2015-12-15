// labor02_feladat01.cpp : Defines the entry point for the console application.
//
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

int main() {
	int x;

	printf("Kedves felhasznalo!\n");
	printf("Irj be egy szamot, es en kiirom a negyzetet! ");
	scanf("%d", &x);
	printf("%d negyzete: %d\n\n", x, x*x);
	printf("Nyomj egy gombot a folytatashoz...");
	_getch();
	return 0;
}