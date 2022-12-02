#include <stdio.h>

int main()
{
	//zadanie 1
	int ix;
	printf("podaj dowolna liczbe calkowita:\n");
	scanf_s("%d", &ix);
	float fx = (float)ix;
	char c = (char)ix;
	printf("Podana liczba z dokladnoscia do 1 miejsca po przecinku to: %.1f\nPodana liczba z dokladnoscia do 3 miejsc po przecinku to: %.3f\nPodana liczba w formacie napisowym to: %c", fx, fx, c);

	////zadanie 2
	int y;
	printf("\n\nfajnie napisales :D koksem jestes.\nTeraz podaj wybrany kod ASCII:\n");
	scanf_s("%d", &y);
	char ch = (char)y;
	printf("Otrzymany znak to %c\nNiezla robota, teraz zrobmy cos bardziej skomplikowanego.\nObliczmy twoje BMI.\nPodaj swoja wage w kg z dokladnoscia do 1 miejsca po przecinku:\n", ch);

	//zadanie 3
	float fWaga;
	float fWzrost;
	scanf_s("%f", &fWaga);
	printf("Teraz podaj swoj wzrost w metrach z rowniez dokladnoscia do 2 miejsc po przecinku:\n");
	scanf_s("%f", &fWzrost);
	float fBMI = fWaga / (fWzrost * fWzrost);
	printf("\ntwoje BMI wynosi: %1f", fBMI);
	if (fBMI >= 18.5 && fBMI <= 24.9)
	{
		printf("\ntwoj wskaznik BMI jest prawidlowy");
	}
	else if (fBMI < 18.5)
	{
		printf("\ntwoj wskaznik BMI jest ponizej normy");
	}
	else
	{
		printf("\ntwoj wskaznik BMI jest powyzej normy");
	}

	//zadanie 4
	printf("\nSuper!!! To na koniec w ramach ciekawostki przeliczmy twoj wiek na sekundy. Ciekawe ile sekund chodzisz po tym swiecie.\nPodaj swoj wiek:\n");
	int iWiek;
	scanf_s("%d", &iWiek);
	int iSekundy = iWiek * 3.156 * 10000000;
	printf("\nZyjesz juz okolo %d sekund, patrzac na to z tej strony to jestes calkiem stary :D. To by by³o na tyle. Czesc!!! :D", iSekundy);



	return 0;
}