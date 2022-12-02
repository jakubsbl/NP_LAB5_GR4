#include <stdio.h>
#include <Windows.h>

int main()
{
	//Zadanie 1
	int a;
	int b = 1;
	int c = 1;
	int d = 1;
	printf("podaj ile chcesz wierszy:\n");
	scanf_s("%d", &a);
	
	while (b<=a)
	{
		d = 1;
		while (d <= b)
		{
			printf("%d ", c);
			c++;
			d++;
		}
		printf("\n");
		b++;
	}

	//Zadanie 2

	int x;
	int y = 0;
	int z = 1;
	printf("\nPodaj liczbe:\n");
	scanf_s("%d", &y);
	while (z <= y)
	{
		if (z%2 != 0)
		{
			printf("%d ", z);
		}
		z++;
	}

	//Zadanie 3
	printf("\nTablica ASCII od pozycji 32 do 255:\n");
	Sleep(2660);
	for (size_t i = 32; i <= 255; i++)
	{
		printf("%c ", i);
		if (i % 16 == 0)    //pozwala na wyswietlanie po 16 znakow w linii
		{
			printf("\n");
		}
	}
	//Zadanie 4
	printf("\n\nlosowanie liczby dopoki nie wylosuje sie liczba 6.\n\n");
	Sleep(2000);
	srand(time(NULL));
	int r;
	int g = 0;
	int m = 1;
	int n = 6;
	do
	{
		/*r = rand() % 7;*/
		r= m + rand() / (RAND_MAX / (n - m + 1) + 1);
		printf("%d ", r);
		g++;
	} while (r != 6);
	if (r == 6)
	{
		printf("Wylosowalo 6 za %d razem.", g);
	}
	

	printf("Pozdrawiam cala legnice");
	printf("raz dwa trzy")

	return 1;
}