
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


	/*Task11();
	Task12();
	Task13();
	Task14();
	Task15();
	Task16();

	Task21();
	Task22();

	Task23();
	Task24();

	Task25();
	Task26();
	Task27();
	Task28();
	Task29();
	Task31();
	Task32();
	Task33();
	Task34();*/

	char znak;
	scanf_s(" %c", &znak);
	return 0;
}

//1.1. Zadeklarowa� zmienne typu int, float, char. Przypisa� do nich warto��, wy�wietli� je na ekran.
void Task11()
{
	int i = 0;
	float f = 1.1;
	char c = 'c';
	printf("1.1 - Int: %d Float: %f Char: %c \n", i, f, c);
}

///1.2. Wy�wietli� zmienn� typu int na ekran. Nale�y u�y� metody printf i konstrukcji %d
void Task12()
{
	printf("1.2 - Zmienna globalna i: %d \n", i);
}

///1.3. Pobra� od u�ytkownika liczb� x. Wy�wietli� kwadrat liczby x.
void Task13()
{
	int liczba;

	printf("1.3 - Podaj liczb�: ");
	scanf_s("%d", &liczba);

	printf("Kwadrat liczby %d = %d", liczba, liczba*liczba);
}

//1.4. Zapozna� si� z instrukcjami warunkowymi (if, else if, else oraz switch). Pobra� od u�ywkownika liczb� i wy�wietli� informacj�, czy jest
//ona: mniejsza, wi�ksza, czy r�wna 0.
void Task14()
{
	int liczba;

	printf("1.4 - Podaj liczb�: ");
	scanf_s("%d", &liczba);
	if (liczba < 0)
	{
		printf("Liczba jest mniejsza 0. ");
	}
	else if (liczba == 0)
	{
		printf("Liczba jest r�wna 0. ");
	}
	else
	{
		printf("Liczba jest wi�ksza 0. ");
	}



}

//1.5.Pobra� ud u�ytkownika 3 liczby(x1, x2, x3).Wy�wietli� informacj�, kt�ra z tych liczb jest najwi�ksza.
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

//1.6.Napisa� prosty kalkulator.Nale�y pobra� od u�ytkownika 2 liczby oraz operator (jeden z czterech : mno�enie, dzielenie, dodawanie,
//	odejmowanie).Wymagane jest utworzenie prostego menu u�ytkownika.Uwaga - nale�y pami�ta� o u�amkach(1 / 3 powinno da� 0.33, a nie
//	0)
void Task16()
{

	printf("1.6 - Podaj znak dzia�ania\n");


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
		
		printf_s("Mno�enie: %d * %d = %d\n", static_cast<int>(firstNumber), static_cast<int>(secondNumber), static_cast<int>(firstNumber * secondNumber));

		break;
	case '/': 
		
		
		printf_s("Dzielenie: %d / %d = %f\n", static_cast<int>(firstNumber), static_cast<int>(secondNumber), firstNumber / secondNumber);

		break;

	default:
		
		printf("Poda�e� nieodpowiedni operator dzia�ania. Spr�buj jeszcze raz\n");
		break;
	}
}

//2.1.Zapozna� si� z p�tl� while.P�tla ta s�u�y do wielokrotnego wykonania fragmentu kodu przez NIEZNAN� Z G�RY ilo�� razy.P�tla
//wykonuje si� zawsze, je�li warunek jest prawdziwy(ewaluowany do true).Napisa� p�tl�, w kt�ej u�ytkownik podaje liczb� x.Nale�y
//wy�wietli� t� liczb�.Je�eli u�ytkownik poda 0, nale�y zako�czy� program.
void Task21()
{
	printf("2.1\n");
	bool repeatResult = true;
	int Usernumber;
	while (repeatResult)
	{
		printf("Podaj liczb�:");
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

//2.2.Przerobi� kalkulator z zadania 1.6.Teraz po ka�dym dzia�aniu program powinien spyta� u�ytkownika, czy ten chce powt�rzy�
//wszystko od pocz�tku.Je�li tak - restartujemy kalkulator i zaczynamy od nowa.Je�li nie - ko�czymy program.
void Task22()
{

	printf("2.2 - Podaj znak dzia�ania\n");

	Task16();

	printf("Czy chcesz powt�rzy� liczenie? y/n\n");


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


//2.3.Pobra� od u�ytkownika liczb� x.Nale�y wy�wietli� wszystkie kolejne pot�gi liczby x.Zako�czy� program, kiedy liczba przekroczy 100
//000.
void Task23()
{
	printf("2.3 - Podaj liczb�\n");
	int number;
	scanf_s(" %d",&number);


	while (number < 100000.0)
	{
		
		printf("%d\n", number *= 2);
	
		
	}
}

//2.4.Pobra� od u�ytkownika liczb� x.Je�li liczba jest niedodatnia - nale�y zako�czy� program.Nast�pnie nale�y wy�wietla� kolejno(w
//	nowej linii) wszystkie liczby mniejsze od x, a� osi�gni�te zostanie 0.
void Task24()
{
	printf("2.4 - Podaj liczb�\n");
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

//2.5.Zapozna� si� z instrukcjami continue; i break; .Pierwsza s�u�y do zako�czenia iteracji i przej�cia do nast�pnej, a druga natychmiast
//ko�czy p�tl�.Przerobi� program z zadania 1.4, aby wy�wietla� tylko parzyste liczby(u�y� if oraz continue).Je�li liczba wynosi 40, nale�y
//wyj�� z p�tli i zako�czy� program.
void Task25()
{
	printf("2.5 - Podaj liczb�\n");
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


//2.6.Zapozna� si� z p�tl� for.P�tla s�u�y do wykonania danego fragmentu kodu ZNAN� Z G�RY okre�lon� ilo�� razy.Uwaga - ka�d� p�tl�
//for mo�na zast�pi� p�tl� while i wzajemnie.Zwyczajowo obowiazuje zasada, �e je�li ilo�� iteracji jest znana - u�ywamy for, a je�li nie jest
//znana(zale�y od u�ytkownika lub jakiego� stanu zewn�trznego) - u�ywamy p�tli while.P�tla for sk�ada si� z : ZMIENNEJ ITERACYJNEJ,
//czyli stanu pocz�tkowego p�tli, np. int i = 0. Nast�pnie WARUNKU ZAKO�CZENIA P�TLI, np.i<10. Nast�pnie OPERACJI WYKONYWANEJ
//PO KA�DEJ ITERACJI - zazwyczaj jest to zwi�kszenie iteratora o 1, czyli i = i + 1, b�d� w skr�cie i++.Napisa� p�tl� for, kt�ra wy�wietli cyfry
//od 0 do 9.
void Task26()
{
	printf("2.6 - For\n");
	for (int i =0; i < 10; i++)
	{
		printf("%d\n", i);
	}
}

//2.7.Pobra� od u�ytkownika liczby x i y.Zak�adamy, �e y > x(zawsze, nie musimy tego sprawdza�).Za pomoc� p�tli for wypisa� liczby
//mi�dzy x a y(do przemy�lenia - co jest stanem pocz�tkowym, a co warunkiem zako�czenia p�tli ? )
void Task27()
{
	printf("2.7 - For\n");

	printf("podaj liczb�:\n");
	int number;
	scanf_s(" %d", &number);

	printf("podaj liczb�:\n");
	int number2;
	scanf_s(" %d", &number2);

	for (int i = number; i <= number2; i++)
	{
		printf("%d\n", i);
	}
}

//2.8.Pobra� od u�ytkownika liczb� x.Za pomoc� p�tli for wypisa� wszystkie liczby mniejsze od x, ale wi�ksze ni� 0.
void Task28()
{
	printf("2.8 - For\n");

	printf("podaj liczb�:\n");
	int number;
	scanf_s(" %d", &number);


	for (int i = number-1; i >0; i--)
	{
		printf("%d\n", i);
	}
}

//2.9.Pobra� od u�ytkownika liczb� x.Za pomoc� p�tli for wypisywa� CO TRZECI� liczb� wi�ksz� od x.P�tla powinna si� zako�czy�, je�li
//liczba przekroczy 100. Uwaga - prosz� nie u�ywa� operacji continue i break, a sterowa� tylko parametrami p�tli.
void Task29()
{
	printf("2.9 - For\n");

	printf("podaj liczb�:\n");
	int number;
	scanf_s(" %d", &number);
	for (int i = number; i <=100; i +=3)
	{
		printf("%d\n", i);
	}
}

//3.1.Napisa� metod� void NewLine().Powinna ona wypisa� na ekran pojedyncz� pust� lini�.U�y� tej metod� w main().
void Task31()
{
	printf("3.1 - \n");
	NewLine();
}
void NewLine()
{
	// specjalnie wywo�uj� NewLine() z metody Task30() aby zachowa� ciag�o�c zadania;
	printf("\n");
}

//3.2.Napisa� metod� void NewLines(int count).Powinna ona wypisa� tyle nowych linii, ile zosta�o podanych W PARAMETRZE count(nale�y
//	u�y� p�tli for).U�y� metod� w main()
void Task32()
{
	printf("3.2 - \n");
	NewLines(10);
}
void NewLines(int count)
{
	// specjalnie wywo�uj� NewLines() z metody Task31() aby zachowa� ciag�o�c zadania;
	for (int i = 0; i <= count; i++)
	{
		printf("\n");
	}
	
}


//3.3.Napisa� metod� void WriteBiggerNumber(int x, int y).Metoda powinna pobra� 2 parametry i zwr�ci� wi�kszy z nich.Wykorzysta�
//funckj� w metodzie main().UWAGA - pobieranie liczb od u�ytkownika powinno odby� si� w funkcji main(), a NIE w WriteBiggerNumber!Do
//funkcji nale�y jedynie przes�a� pobrane wcze�niej parametry.
void Task33()
{
	printf("3.3 - \n");

	printf("podaj liczb�:\n");
	int number;
	scanf_s(" %d", &number);

	printf("podaj liczb�:\n");
	int number2;
	scanf_s(" %d", &number2);

	printf("Wy�sza liczba to: %d", WriteBiggerNumber(number, number2));
}
int WriteBiggerNumber(int x, int y)
{
	return (x > y) ? x : y;
}

//3.4.Napisa� metod� Multiply(int x, int y).Metoda powinna ZWR�CI�(s�owo kluczowe return) iloczyn dw�ch parametr�w.Uwaga!Metoda
//NIE POWINNA wypisywa� wyniku - powinien on by� wy�wietlony w funkcji main!
void Task34()
{
	printf("3.4 - \n");

	printf("podaj liczb�:\n");
	int number;
	scanf_s(" %d", &number);

	printf("podaj liczb�:\n");
	int number2;
	scanf_s(" %d", &number2);

	printf("Wynik mno�enia to: %d", Multiply(number, number2));
}
int Multiply(int x, int y)
{
	return x*y;
}
