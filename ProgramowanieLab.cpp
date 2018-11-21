
#include <iostream>

using namespace std;

int i = 0;


void Task11();
void Task12();
void Task13();

int main()
{



	Task11();
	Task12();

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

}
