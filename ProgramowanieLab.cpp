
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <ctype.h>
//#include <string>
#include <stdlib.h>

using namespace std;

int i = 0;

#pragma region Listopad


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

#pragma endregion END Listopad

#pragma region Grudzie�


void G_Task11(int *tab, int tab_size, bool DoG_Task11);
void printTable(int *tab, int tab_size);
void printTable(int *tab, int tab_size, bool startFromZero);
int MaxValue(int *tab, int tab_size);
void G_Task12();
void G_Task13();
bool IsTableSortedASC(int *tab, int tab_size);

void G_Task21();
void G_Task22();
void G_Task23();
void G_Task24();
void G_Task25();
void SortTable(int *tab, int tab_size, bool DESC);


void G_Task31();
int getLength(char *text);
void G_Task32();
void Reverse(char *text);
void G_Task33();
bool containDigit(char *text);
void G_Task34();

void G_Task41();
void G_Task42();
void G_Task43();
bool AreArraysIdentical(int *tab1, int tab1_size, int*tab2, int tab2_size);
int* CreateArray(int tab_size);

void G_Task44();
char* ReverseString(char *text);

void PrintDot(int *tab, int tab_size);
int Sum(int *tab, int tab_size);

#pragma endregion END Grudzie�

// Grudzie�


int main()
{
	setlocale(LC_ALL, "");

	//Listopad
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


	//Grudzie�
	//int tab[5];
	//G_Task11(tab,5,true);
	//G_Task12();
	//G_Task13();
	//G_Task21();
	//G_Task22();
	//G_Task23();
	//G_Task24();
	//G_Task25();
	//G_Task31();
	//G_Task32();
	//G_Task33();
	//G_Task34();
	//G_Task41();
	//G_Task42();
	//G_Task43();
	G_Task44();


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




	scanf(" %c", &operand);
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
	scanf_s(" %d", &number);


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
		while (number <= 40.0)
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
	for (int i = 0; i < 10; i++)
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


	for (int i = number - 1; i > 0; i--)
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
	for (int i = number; i <= 100; i += 3)
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


//1.1. Utworzy� 5-cio elementow� tablic� typu int. Pobra� od u�ytkownika 5 element�w i doda� je do tablicy. Nast�pnie wy�wietli� najwi�ksz� liczb� z tablicy(algorytm do samodzielnej implementacji).
void G_Task11(int *tab, int tab_size, bool DoG_Task11)
{
	printf("Grudzie� 1.1 - \n");



	int i = 0;
	do
	{
		printf("podaj liczb�:\n");
		scanf_s(" %d", &tab[i]);
		i++;
	} while (i < tab_size);

	if (DoG_Task11)
	{
		printTable(tab, tab_size);
		int maxValue = MaxValue(tab, tab_size);
		printf("Liczba najwi�ksza: %d: \n", maxValue);
	}


}

///Metoda wy�wietla liczby od pocz�tku
void printTable(int *tab, int tab_size)
{
	int i = 0;
	do
	{
		printf("Liczby: %d\n", tab[i]);
		i++;
	} while (i < tab_size);
}
///Metoda wy�wietla liczby z tablicy od pocz�tku i od ko�ca
void printTable(int *tab, int tab_size, bool startFromZero)
{
	int i = 0;
	do
	{
		if (startFromZero)
		{
			printf("Liczby: %d\n", tab[i]);
		}
		else

		{
			printf("Liczby: %d\n", tab[tab_size - i - 1]);
		}

		i++;
	} while (i < tab_size);

}

///Metoda zwraca najwi�ksza liczb�
int MaxValue(int *tab, int tab_size)
{
	int maxValue = 0;
	for (int i = 0; i < tab_size; i++)
	{
		if (tab[i] > maxValue)
		{
			maxValue = tab[i];
		}
	}
	return maxValue;

}


///1.2.Wy�wietli� w p�tli tablice z zadania 1.1 od pocz�tku i od ko�ca(dwie p�tle)
void G_Task12()
{
	printf("Grudzie� 1.2 - \n");

	int tab[5];

	int tab_size = 5;
	G_Task11(tab, tab_size, false);
	printTable(tab, tab_size, true);
	printTable(tab, tab_size, false);

}

///1.3 Napisa� algorytm sprawdzaj�cy, czy tablica jest posortowana w kolejno�ci niemalej�cej
void G_Task13()
{
	printf("Grudzie� 1.3 - \n");

	int tab[5];

	int tab_size = 5;
	G_Task11(tab, tab_size, false);
	bool result = IsTableSortedASC(tab, tab_size);
	printf("Sprawdzenie czy tablica jest posortowania rosn�co: %s", result ? "true" : "false");
}

///Metoda zwraca true/false, sprawdza czy tablica jest posortowania niemalej�co
bool IsTableSortedASC(int *tab, int tab_size)
{
	int value = 0;
	bool IsSortedCorrect = true;
	for (int i = 0; i < tab_size; i++)
	{
		if (value <= tab[i])
		{
			value = tab[i];
			IsSortedCorrect = true;
		}
		else
		{
			return false;
		}

	}
	return IsSortedCorrect;
}

//2.1. Utworzy� osobn� metod� bool IsSorted(int *, int) realizuj�c� zadanie 1.3 (UWAGA - w j�zyku C niedost�pny jest typ bool z warto�ciami true i false, zamiast niego nale�y u�y� int i warto�ci 1 i 0)
void G_Task21()
{
	printf("Grudzie� 2.1 - \n");

	int tab[5];

	int tab_size = 5;
	G_Task11(tab, tab_size, false);
	bool result = IsTableSortedASC(tab, tab_size);
	printf("Sprawdzenie czy tablica jest posortowania rosn�co: %s", result ? "true" : "false");
}

//2.2.Utworzy� metod� void printBackwards(int *a, int s) s�u��c� do wypisania tablicy OD KO�CA
void G_Task22()
{
	printf("Grudzie� 2.2 - \n");

	int tab[5];

	int tab_size = 5;
	G_Task11(tab, tab_size, false);
	printTable(tab, tab_size, false);
}

//2.3 Utworzy� metod� printDots(int *a, int s) wy�wietlaj�c� w nowych liniach tyle kropek, ile znajduje si� w danym elemencie tablicy.
void G_Task23()
{
	printf("Grudzie� 2.3 - \n");
	int tab_size = 5;
	int tab[] = { 5, 8, 6, 2, 7 };
	PrintDot(tab, tab_size);

}

//2.4.Utworzy� metod� int Sum(int *a, int s) licz�c� sum� element�w tablicy.
void G_Task24()
{
	printf("Grudzie� 2.4 - \n");
	int tab_size = 5;
	int tab[] = { 5, 8, 6, 2, 7 };
	int suma = Sum(tab, tab_size);
	printTable(tab, tab_size);
	printf("Suma: %d", suma);

}

//2.5. Zaimplementowa� algorytm sortowania b�belkowego (w funkcji main(), nie ma potrzeby tworzenia dodatkowej funkcji).Algorytm powinien posortowa� dowolnie du�� tablic� w kolejno�ci niemalej�cej.
void G_Task25()
{
	printf("Grudzie� 2.4 - \n");
	int tab_size = 5;
	int tab[] = { 5, 8, 6, 2, 7 };

	printf("Oryginal \n");
	printTable(tab, 5);


	printf("DESC \n");
	SortTable(tab, tab_size, true);
	printTable(tab, 5);

	printf("ASC \n");
	SortTable(tab, tab_size, false);
	printTable(tab, 5);
}

///Metoda sortuje tablic�
void SortTable(int *tab, int tab_size, bool sortDESC)
{
	if (sortDESC)
	{
		for (int i = 0; i < tab_size - 1; i++)
		{
			for (int j = 0; j < tab_size - 1; j++)
			{
				if (tab[j] < tab[j + 1])
				{
					swap(tab[j], tab[j + 1]);
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < tab_size - 1; i++)
		{
			for (int j = 0; j < tab_size - 1; j++)
			{
				if (tab[j] > tab[j + 1])
				{
					swap(tab[j], tab[j + 1]);
				}
			}
		}
	}

}

//3.1. Napisa� metod� int getLength(char *str) , w kt�rej W�ASNORECZNIE (nie wolno korzysta� z metody strlen() ) przeliczony zostanie rozmiar �a�cucha(bez null - terminatora).Dla przyk�adu dla �Hello!" wynik powinien wynosi� 6.
void G_Task31()
{
	printf("Grudzie� 3.1 - \n");
	char tekst[] = "Jakis tam sobie tekst";
	int lenght = getLength(tekst + '\0');
	printf("D�ugo�� tekstu: %d", lenght);


}

int getLength(char *text)
{
	int count = 0;
	while (text[count] != '\0')
	{
		count++;
	}

	return count;
}

//3.2. Napisa� metod� void Reverse (char *str) , kt�ra wypisze �a�cuch znak�w od ko�ca (zakaz u�ywania strlen, mo�na uzy� metod� z zadania 3.1.)
void G_Task32()
{
	printf("Grudzie� 3.2 - \n");
	char tekst[] = "Jakis tam sobie tekst";
	Reverse(tekst);

}
//Metoda wy�wietla tekst od ty�u
void Reverse(char *text)
{
	int lenght = getLength(text + '\0');
	for (int i = lenght - 1; i >= 0; i--)
	{
		printf("%c", text[i]);
	}
}

//3.3. Napisa� metod� bool containsDigits(char * str), kt�ra zwr�ci informacj�, czy w danym stringu znajduje si� jakakolwiek cyfra.Dla przyk�adu : �asdfgzxcv" -> false, �asdf5asdf" -> true
void G_Task33()
{
	printf("Grudzie� 3.3 - \n");
	char tekst[] = "Jakis tam sobie tekst 654";
	bool isDigit = containDigit(tekst + '\0');
	printf("Tekst: %s Zawiera cyfr�: %s", tekst, isdigit ? "true" : "false");

	NewLine();

	char tekst2[] = "Jakis tam sobie tekst";
	bool isDigit2 = containDigit(tekst2 + '\0');
	printf("Tekst: %s Zawiera cyfr�: %s", tekst2, isDigit2 ? "true" : "false");
}

//3.4.Pobra� od u�ytkownika �a�cuch znak�w(dowolna metoda).Przekaza� go do ka�dej z metod z 3. cz�ci zada�
void G_Task34()
{
	printf("Grudzie� 3.4 - \n");
	char tekst[100];
	scanf(" %[^\t\n]s", &tekst);
	int length = getLength(tekst + '\0');
	printf("D�ugosc: %d", length);
	NewLine();

	printf("Revers: ");
	Reverse(tekst);


	NewLine();

	bool isDigit = containDigit(tekst);
	printf("Tekst: %s Zawiera cyfr�: %s", tekst, isDigit ? "true" : "false");

	NewLine();

}

//4.1. Pobra� od u�ytkownika liczb� n. Zaalokowa� pami�� na n element�w int i pobra� je od u�ytkownika. Wykona� na niej metod� printBackwards z 2.2.
void G_Task41()
{
	printf("Grudzie� 4.1 - \n");
	int tab_size;
	printf("Wprowad� rozmiar tablicy: ");
	scanf_s("%d", &tab_size);

	int *tab;
	tab = (int*)malloc(sizeof(int)*tab_size);

	for (int i = 0; i < tab_size; i++)
	{
		printf("Wprowad� element [%d]: ", i);
		scanf_s("%d", &tab[i]);
		NewLine();
	}

	printTable(tab, tab_size, false);
	free(tab);
}

//4.2. Pobra� od u�ytkownika liczb� n. Zaalokowa� pami�� na n element�w int i pobra� je od u�ytkownika. Nast�pnie zaalokowa� pami�� i utworzy� tablic�, w kt�rej b�d� tylko UJEMNE warto�ci z pierwszej tablicy.Na koniec zwolni� pami�� na obie tablice.
void G_Task42()
{
	printf("Grudzie� 4.2 - \n");
	int tab_size;
	printf("Wprowad� rozmiar tablicy: ");
	scanf_s("%d", &tab_size);

	int *tab;
	tab = (int*)malloc(sizeof(int)*tab_size);

	int count = 0;
	for (int i = 0; i < tab_size; i++)
	{
		printf("Wprowad� element [%d]: ", i);
		scanf_s("%d", &tab[i]);
		if (tab[i] < 0)
		{
			count++;
		}
	}

	int *tab2;
	int tab2Id = 0;
	tab2 = (int*)malloc(sizeof(int)*count);

	for (int i = 0; i < tab_size; i++)
	{

		if (tab[i] < 0)
		{
			tab2[tab2Id] = tab[i];
			tab2Id++;
		}
	}

	printTable(tab2, count);

	free(tab);
	free(tab2);
}

//4.3. Napisa� metod� bool AreArraysldentical(int * al, int sl, int * a2, int s2) zwracaj�c� informacj�, czy dwie tablice podane jako parametr s� identyczne, tj.czy maj� tak� sam� d�ugo�� i czy na ka�dym indeksie wyst�puje taki sam element.
void G_Task43()
{
	int tab1_size;
	int tab2_size;
	printf("Wprowad� rozmiar tablicy1: ");
	scanf_s("%d", &tab1_size);
	printf("Wprowad� rozmiar tablicy2: ");
	scanf_s("%d", &tab2_size);

	int *tab1 = CreateArray(tab1_size);
	printTable(tab1, tab1_size);
	int *tab2 = CreateArray(tab2_size);
	printTable(tab2, tab2_size);

	bool result = AreArraysIdentical(tab1, tab1_size, tab2, tab2_size);
	printf("Czy tablice s� identyczne? %s", result ? "true" : "false");

	free(tab1);
	free(tab2);
}

///Metoda generuje tablic� o wskazanym rozmiarze
int* CreateArray(int tab_size)
{


	int *tab;
	tab = (int*)malloc(sizeof(int)*tab_size);

	for (int i = 0; i < tab_size; i++)
	{
		printf("Wprowad� element [%d]: ", i);
		scanf_s("%d", &tab[i]);

	}
	return tab;
}
//Metoda por�wnuje czy twie tablice s� identyczne.
bool AreArraysIdentical(int *tab1, int tab1_size, int*tab2, int tab2_size)
{
	if (tab1_size == tab2_size)
	{
		for (int i = 0; i < tab1_size; i++)
		{
			if (tab1[i] != tab2[i])
			{
				return false;
			}
		}
		return true;

	}
	else
	{
		return false;
	}

}


//4.4. Napisa� metod� char * reverseString(char*s), kt�ra ZWR�CI (a nie wypisze!) string, kt�ry jest odwr�conym stringiem przekazanym jako pierwszy parametr.Funkcja zaalokuje pami�� na nowy �a�cuch i go zwr�ci. (ca�y algorytm nale�y zaimplementowa� samodzielnie).Nale�y go nast�pnie �przechwyci�" w funkcji main, aby pami�� na koniec wyczy�ci�
void G_Task44()
{

	int text_size;
	printf("Wprowad� rozmiar tekstu: ");
	scanf_s("%d", &text_size);
	char *text = (char*)malloc(text_size+1);

	/*int i = 0;
	while (text[i] != '\0')
	{
		text[i] = '\0';
		i++;
	}*/

	printf("Wprowad� tekst: ");
	scanf(" %[^\t\n]s", text + '\0');

	char * text2 = ReverseString(text);
	printf("ReversText: %s", text2);

	free(text);
	free(text2);


}
//Metoda odwraca przes�any tekst i go zwraca
char* ReverseString(char *text)
{
	int text_size = getLength(text);
	char * text2 = (char*)malloc(text_size+1);

	int i = 0;
	while (text2[i] != '\0')
	{
		text2[i] = '\0';
		i++;
	}

	for (int i = 0; i < text_size; i++)
	{

		if (text[i] != '\0')
		{
			text2[text_size - 1 - i] = text[i];
		}

	}
	text2[text_size + 1] = '\0';

	return text2;
}

//Metoda zwraca informacj� czy podany tekst zawiera liczb�
bool containDigit(char *text)
{
	int length = getLength(text);
	for (int i = 0; i < length; i++)
	{
		if (text[i] != '\0')
		{
			if (isdigit(text[i]))
			{
				return true;
			}
		}


	}
	return false;
}


///Metoda wy�wietla odowiedni� ilo�� kropek w zale�no�ci od iteracji p�tli.
void PrintDot(int *tab, int tab_size)
{
	for (int i = 0; i < tab_size; i++)
	{

		for (int j = 0; j < i; j++)
		{
			printf(".");
		}
		printf("\n");

	}
}

///Metoda zwrace sum� element�w.
int Sum(int *tab, int tab_size)
{
	int suma = 0;
	for (int i = 0; i < tab_size; i++)
	{

		suma += tab[i];
	}
	return suma;
}






