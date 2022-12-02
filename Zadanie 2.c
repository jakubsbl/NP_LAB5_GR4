
#include <stdio.h>
#include <Windows.h>

int Zadanie2()
{
	int a;
	int b = 0;
	int c;
	printf("Podaj liczbê:\n");
	scanf_s("%d", &b);
	a = b % 1;
	printf("%d", a);

	return 0;
}