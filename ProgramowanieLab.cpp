
#include <iostream>

using namespace std;

int i = 0;


void Task11();
void Task12();
void Task13();

int main()
{
	setlocale(LC_ALL, "");


	Task11();
	Task12();
	Task13();

	char znak;

	cin >> znak; //wczytywanie liczby z klawiatury

	return 0;
}

void Task11()
{
	int i = 0;
	float f = 1.1;
	char c = 'c';
	printf("1.1 - Int: %d Float: %f Char: %c \n",i,f,c);
}

void Task12()
{
	printf("1.2 - Zmienna globalna i: %d \n",i);
}

void Task13()
{
	int liczba;

	printf("1.3 - Podaj liczb�: ");
	scanf_s("%d", &liczba);

	printf("Kwadrat liczby %d = %d",liczba, liczba*liczba);
}
