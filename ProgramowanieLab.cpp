
#include <iostream>
#include <stdio.h>
#include <cstdio>

using namespace std;

int i = 0;


void Task11();
void Task12();
void Task13();
void Task14();
void Task15();
void Task16();


void Task21();
void Task22();
void Task23();
void Task24();
void Task25();
void Task26();
void Task27();
void Task28();
void Task29();
void Task31();
void NewLine();

void Task32();
void NewLines(int);

void Task33();
int WriteBiggerNumber(int x, int y);

void Task34();
int Multiply(int x, int y);


int main()
{
	setlocale(LC_ALL, "");


	//Task11();
	//Task12();
	//Task13();
	//Task14();
	//Task15();
	//Task16();

	//Task21();
	//Task22();

	//Task23();
	//Task24();

	//Task25();
	//Task26();
	//Task27();
	//Task28();
	//Task29();
	//Task31();
	//Task32();
	//Task33();
	Task34();

	char znak;
	scanf_s(" %c", &znak);
	return 0;
}

void Task11()
{
	int i = 0;
	float f = 1.1;
	char c = 'c';
	printf("1.1 - Int: %d Float: %f Char: %c \n", i, f, c);
}

///
void Task12()
{
	printf("1.2 - Zmienna globalna i: %d \n", i);
}

///
void Task13()
{
	int liczba;

	printf("1.3 - Podaj liczbê: ");
	scanf_s("%d", &liczba);

	printf("Kwadrat liczby %d = %d", liczba, liczba*liczba);
}

void Task14()
{
	int liczba;

	printf("1.4 - Podaj liczbê: ");
	scanf_s("%d", &liczba);
	if (liczba < 0)
	{
		printf("Liczba jest mniejsza 0. ");
	}
	else if (liczba == 0)
	{
		printf("Liczba jest równa 0. ");
	}
	else
	{
		printf("Liczba jest wiêksza 0. ");
	}



}

void Task15()
{
	int tablica[3];
	printf("1.5 - Podaj 3 liczby.");
	int tabIndex = 0;

	scanf_s("%d", &tablica[tabIndex]);
	tabIndex++;
	scanf_s("%d", &tablica[tabIndex]);
	tabIndex++;
	scanf_s("%d", &tablica[tabIndex]);



	for (int i = 0; i <= tabIndex; i++)
		for (int j = 0; j<tabIndex; j++)
			if (tablica[j]>tablica[j + 1])
				swap(tablica[j], tablica[j + 1]);

	printf("Liczba max: %d", tablica[tabIndex]);
}

void Task16()
{

	printf("1.6 - Podaj znak dzia³ania\n");


	char operand;


	

	scanf( " %c", &operand);
	printf("Znak: %c\n", operand);


	printf("Podaj 2 liczby.\n");
	float firstNumber;
	scanf_s(" %f", &firstNumber);

	float secondNumber;
	scanf_s(" %f", &secondNumber);
	
	

	switch (operand)
	{
	case '+': 
		
		printf_s("Dodawanie: %d + %d = %d\n", static_cast<int>(firstNumber), static_cast<int>(secondNumber), static_cast<int>(firstNumber + secondNumber));

		break;
	case '-': 
		
		printf_s("Odejmowanie: %d - %d = %d\n", static_cast<int>(firstNumber), static_cast<int>(secondNumber), static_cast<int>(firstNumber - secondNumber));

		break;
	case '*': 
		
		printf_s("Mno¿enie: %d * %d = %d\n", static_cast<int>(firstNumber), static_cast<int>(secondNumber), static_cast<int>(firstNumber * secondNumber));

		break;
	case '/': 
		
		
		printf_s("Dzielenie: %d / %d = %f\n", static_cast<int>(firstNumber), static_cast<int>(secondNumber), firstNumber / secondNumber);

		break;

	default:
		
		printf("Poda³eœ nieodpowiedni operator dzia³ania. Spróbuj jeszcze raz\n");
		break;
	}
}


void Task21()
{
	printf("2.1\n");
	bool repeatResult = true;
	int Usernumber;
	while (repeatResult)
	{
		printf("Podaj liczbê:");
		scanf_s("%d", &Usernumber);
		if (Usernumber == 0.0)
		{
			repeatResult = false;
		}
		else
		{
			printf("Liczba: %d \n", Usernumber);
		}
	}
	

}


void Task22()
{

	printf("2.2 - Podaj znak dzia³ania\n");

	Task16();

	printf("Czy chcesz powtórzyæ liczenie? y/n\n");


	char c;


	scanf(" %c", &c);
		

	switch (c)
	{
	case 'y': 

		system("CLS");
		Task22();
		break;
	case 'n': 
		break;
	default:
		printf("nie");
		break;
	}
	

}

void Task23()
{
	printf("2.3 - Podaj liczbê\n");
	int number;
	scanf_s(" %d",&number);


	while (number < 100000.0)
	{
		
		printf("%d\n", number *= 2);
	
		
	}
}

void Task24()
{
	printf("2.4 - Podaj liczbê\n");
	int number;
	scanf_s(" %d", &number);

	if (number < 0)
	{
		return;
	}

	while (number > 0)
	{
		printf("%d\n", number--);
		

		
	}
}

void Task25()
{
	printf("2.5 - Podaj liczbê\n");
	int number;
	scanf_s(" %d", &number);

	if (number == 40.0)
	{
		return;
	}
	else
	{
		while (number<=40.0)
		{
			if (number == 40.0)
			{
				printf("%d\n", number);
				break;
			}
			else
			{
				if (number % 2 > 0.0)
				{
					number++;
					continue;
					
				}
				else
				{
					printf("%d\n", number++);
				}
				
			}
			
		}
/*
		for (number; number <= 40;number++)
		{
			if (number == 40.0)
			{
				printf("%d\n", number);
				return;
			}
			else
			{
				if (number % 2 > 0.0)
				{
					continue;
				}
				else
				{
					printf("%d\n",number);
				}
			}
		}*/
	}
}

void Task26()
{
	printf("2.6 - For\n");
	for (int i =0; i < 10; i++)
	{
		printf("%d\n", i);
	}
}

void Task27()
{
	printf("2.7 - For\n");

	printf("podaj liczbê:\n");
	int number;
	scanf_s(" %d", &number);

	printf("podaj liczbê:\n");
	int number2;
	scanf_s(" %d", &number2);

	for (int i = number; i <= number2; i++)
	{
		printf("%d\n", i);
	}
}

void Task28()
{
	printf("2.8 - For\n");

	printf("podaj liczbê:\n");
	int number;
	scanf_s(" %d", &number);


	for (int i = number-1; i >0; i--)
	{
		printf("%d\n", i);
	}
}

void Task29()
{
	printf("2.9 - For\n");

	printf("podaj liczbê:\n");
	int number;
	scanf_s(" %d", &number);
	for (int i = number; i <=100; i +=3)
	{
		printf("%d\n", i);
	}
}

void Task31()
{
	printf("3.1 - \n");
	NewLine();
}
void NewLine()
{
	// specjalnie wywo³ujê NewLine() z metody Task30() aby zachowaæ ciag³oœc zadania;
	printf("\n");
}

void Task32()
{
	printf("3.2 - \n");
	NewLines(10);
}
void NewLines(int count)
{
	// specjalnie wywo³ujê NewLines() z metody Task31() aby zachowaæ ciag³oœc zadania;
	for (int i = 0; i <= count; i++)
	{
		printf("\n");
	}
	
}

void Task33()
{
	printf("3.3 - \n");

	printf("podaj liczbê:\n");
	int number;
	scanf_s(" %d", &number);

	printf("podaj liczbê:\n");
	int number2;
	scanf_s(" %d", &number2);

	printf("Wy¿sza liczba to: %d", WriteBiggerNumber(number, number2));
}

int WriteBiggerNumber(int x, int y)
{
	return (x > y) ? x : y;
}


void Task34()
{
	printf("3.4 - \n");

	printf("podaj liczbê:\n");
	int number;
	scanf_s(" %d", &number);

	printf("podaj liczbê:\n");
	int number2;
	scanf_s(" %d", &number2);

	printf("Wynik mno¿enia to: %d", Multiply(number, number2));
}

int Multiply(int x, int y)
{
	return x*y;
}
