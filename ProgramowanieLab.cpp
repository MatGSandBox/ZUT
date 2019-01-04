
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

#pragma region Grudzieñ


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

#pragma endregion END Grudzieñ

// Grudzieñ


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


	//Grudzieñ
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

//1.1. Zadeklarowaæ zmienne typu int, float, char. Przypisaæ do nich wartoœæ, wyœwietliæ je na ekran.
void Task11()
{
	int i = 0;
	float f = 1.1;
	char c = 'c';
	printf("1.1 - Int: %d Float: %f Char: %c \n", i, f, c);
}

///1.2. Wyœwietliæ zmienn¹ typu int na ekran. Nale¿y u¿yæ metody printf i konstrukcji %d
void Task12()
{
	printf("1.2 - Zmienna globalna i: %d \n", i);
}

///1.3. Pobraæ od u¿ytkownika liczbê x. Wyœwietliæ kwadrat liczby x.
void Task13()
{
	int liczba;

	printf("1.3 - Podaj liczbê: ");
	scanf_s("%d", &liczba);

	printf("Kwadrat liczby %d = %d", liczba, liczba*liczba);
}

//1.4. Zapoznaæ siê z instrukcjami warunkowymi (if, else if, else oraz switch). Pobraæ od u¿ywkownika liczbê i wyœwietliæ informacjê, czy jest
//ona: mniejsza, wiêksza, czy równa 0.
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

//1.5.Pobraæ ud u¿ytkownika 3 liczby(x1, x2, x3).Wyœwietliæ informacjê, która z tych liczb jest najwiêksza.
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

//1.6.Napisaæ prosty kalkulator.Nale¿y pobraæ od u¿ytkownika 2 liczby oraz operator (jeden z czterech : mno¿enie, dzielenie, dodawanie,
//	odejmowanie).Wymagane jest utworzenie prostego menu u¿ytkownika.Uwaga - nale¿y pamiêtaæ o u³amkach(1 / 3 powinno daæ 0.33, a nie
//	0)
void Task16()
{

	printf("1.6 - Podaj znak dzia³ania\n");


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

//2.1.Zapoznaæ siê z pêtl¹ while.Pêtla ta s³u¿y do wielokrotnego wykonania fragmentu kodu przez NIEZNAN¥ Z GÓRY iloœæ razy.Pêtla
//wykonuje siê zawsze, jeœli warunek jest prawdziwy(ewaluowany do true).Napisaæ pêtlê, w któej u¿ytkownik podaje liczbê x.Nale¿y
//wyœwietliæ tê liczbê.Je¿eli u¿ytkownik poda 0, nale¿y zakoñczyæ program.
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

//2.2.Przerobiæ kalkulator z zadania 1.6.Teraz po ka¿dym dzia³aniu program powinien spytaæ u¿ytkownika, czy ten chce powtórzyæ
//wszystko od pocz¹tku.Jeœli tak - restartujemy kalkulator i zaczynamy od nowa.Jeœli nie - koñczymy program.
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


//2.3.Pobraæ od u¿ytkownika liczbê x.Nale¿y wyœwietliæ wszystkie kolejne potêgi liczby x.Zakoñczyæ program, kiedy liczba przekroczy 100
//000.
void Task23()
{
	printf("2.3 - Podaj liczbê\n");
	int number;
	scanf_s(" %d", &number);


	while (number < 100000.0)
	{

		printf("%d\n", number *= 2);


	}
}

//2.4.Pobraæ od u¿ytkownika liczbê x.Jeœli liczba jest niedodatnia - nale¿y zakoñczyæ program.Nastêpnie nale¿y wyœwietlaæ kolejno(w
//	nowej linii) wszystkie liczby mniejsze od x, a¿ osi¹gniête zostanie 0.
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

//2.5.Zapoznaæ siê z instrukcjami continue; i break; .Pierwsza s³u¿y do zakoñczenia iteracji i przejœcia do nastêpnej, a druga natychmiast
//koñczy pêtlê.Przerobiæ program z zadania 1.4, aby wyœwietla³ tylko parzyste liczby(u¿yæ if oraz continue).Jeœli liczba wynosi 40, nale¿y
//wyjœæ z pêtli i zakoñczyæ program.
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


//2.6.Zapoznaæ siê z pêtl¹ for.Pêtla s³u¿y do wykonania danego fragmentu kodu ZNAN¥ Z GÓRY okreœlon¹ iloœæ razy.Uwaga - ka¿d¹ pêtlê
//for mo¿na zast¹piæ pêtl¹ while i wzajemnie.Zwyczajowo obowiazuje zasada, ¿e jeœli iloœæ iteracji jest znana - u¿ywamy for, a jeœli nie jest
//znana(zale¿y od u¿ytkownika lub jakiegoœ stanu zewnêtrznego) - u¿ywamy pêtli while.Pêtla for sk³ada siê z : ZMIENNEJ ITERACYJNEJ,
//czyli stanu pocz¹tkowego pêtli, np. int i = 0. Nastêpnie WARUNKU ZAKOÑCZENIA PÊTLI, np.i<10. Nastêpnie OPERACJI WYKONYWANEJ
//PO KA¯DEJ ITERACJI - zazwyczaj jest to zwiêkszenie iteratora o 1, czyli i = i + 1, b¹dŸ w skrócie i++.Napisaæ pêtlê for, która wyœwietli cyfry
//od 0 do 9.
void Task26()
{
	printf("2.6 - For\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}
}

//2.7.Pobraæ od u¿ytkownika liczby x i y.Zak³adamy, ¿e y > x(zawsze, nie musimy tego sprawdzaæ).Za pomoc¹ pêtli for wypisaæ liczby
//miêdzy x a y(do przemyœlenia - co jest stanem pocz¹tkowym, a co warunkiem zakoñczenia pêtli ? )
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

//2.8.Pobraæ od u¿ytkownika liczbê x.Za pomoc¹ pêtli for wypisaæ wszystkie liczby mniejsze od x, ale wiêksze ni¿ 0.
void Task28()
{
	printf("2.8 - For\n");

	printf("podaj liczbê:\n");
	int number;
	scanf_s(" %d", &number);


	for (int i = number - 1; i > 0; i--)
	{
		printf("%d\n", i);
	}
}

//2.9.Pobraæ od u¿ytkownika liczbê x.Za pomoc¹ pêtli for wypisywaæ CO TRZECI¥ liczbê wiêksz¹ od x.Pêtla powinna siê zakoñczyæ, jeœli
//liczba przekroczy 100. Uwaga - proszê nie u¿ywaæ operacji continue i break, a sterowaæ tylko parametrami pêtli.
void Task29()
{
	printf("2.9 - For\n");

	printf("podaj liczbê:\n");
	int number;
	scanf_s(" %d", &number);
	for (int i = number; i <= 100; i += 3)
	{
		printf("%d\n", i);
	}
}

//3.1.Napisaæ metodê void NewLine().Powinna ona wypisaæ na ekran pojedyncz¹ pust¹ liniê.U¿yæ tej metodê w main().
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

//3.2.Napisaæ metodê void NewLines(int count).Powinna ona wypisaæ tyle nowych linii, ile zosta³o podanych W PARAMETRZE count(nale¿y
//	u¿yæ pêtli for).U¿yæ metodê w main()
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


//3.3.Napisaæ metodê void WriteBiggerNumber(int x, int y).Metoda powinna pobraæ 2 parametry i zwróciæ wiêkszy z nich.Wykorzystaæ
//funckjê w metodzie main().UWAGA - pobieranie liczb od u¿ytkownika powinno odbyæ siê w funkcji main(), a NIE w WriteBiggerNumber!Do
//funkcji nale¿y jedynie przes³aæ pobrane wczeœniej parametry.
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

//3.4.Napisaæ metodê Multiply(int x, int y).Metoda powinna ZWRÓCIÆ(s³owo kluczowe return) iloczyn dwóch parametrów.Uwaga!Metoda
//NIE POWINNA wypisywaæ wyniku - powinien on byæ wyœwietlony w funkcji main!
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


//1.1. Utworzyæ 5-cio elementow¹ tablicê typu int. Pobraæ od u¿ytkownika 5 elementów i dodaæ je do tablicy. Nastêpnie wyœwietliæ najwiêksz¹ liczbê z tablicy(algorytm do samodzielnej implementacji).
void G_Task11(int *tab, int tab_size, bool DoG_Task11)
{
	printf("Grudzieñ 1.1 - \n");



	int i = 0;
	do
	{
		printf("podaj liczbê:\n");
		scanf_s(" %d", &tab[i]);
		i++;
	} while (i < tab_size);

	if (DoG_Task11)
	{
		printTable(tab, tab_size);
		int maxValue = MaxValue(tab, tab_size);
		printf("Liczba najwiêksza: %d: \n", maxValue);
	}


}

///Metoda wyœwietla liczby od pocz¹tku
void printTable(int *tab, int tab_size)
{
	int i = 0;
	do
	{
		printf("Liczby: %d\n", tab[i]);
		i++;
	} while (i < tab_size);
}
///Metoda wyœwietla liczby z tablicy od pocz¹tku i od koñca
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

///Metoda zwraca najwiêksza liczbê
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


///1.2.Wyœwietliæ w pêtli tablice z zadania 1.1 od pocz¹tku i od koñca(dwie pêtle)
void G_Task12()
{
	printf("Grudzieñ 1.2 - \n");

	int tab[5];

	int tab_size = 5;
	G_Task11(tab, tab_size, false);
	printTable(tab, tab_size, true);
	printTable(tab, tab_size, false);

}

///1.3 Napisaæ algorytm sprawdzaj¹cy, czy tablica jest posortowana w kolejnoœci niemalej¹cej
void G_Task13()
{
	printf("Grudzieñ 1.3 - \n");

	int tab[5];

	int tab_size = 5;
	G_Task11(tab, tab_size, false);
	bool result = IsTableSortedASC(tab, tab_size);
	printf("Sprawdzenie czy tablica jest posortowania rosn¹co: %s", result ? "true" : "false");
}

///Metoda zwraca true/false, sprawdza czy tablica jest posortowania niemalej¹co
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

//2.1. Utworzyæ osobn¹ metodê bool IsSorted(int *, int) realizuj¹c¹ zadanie 1.3 (UWAGA - w jêzyku C niedostêpny jest typ bool z wartoœciami true i false, zamiast niego nale¿y u¿yæ int i wartoœci 1 i 0)
void G_Task21()
{
	printf("Grudzieñ 2.1 - \n");

	int tab[5];

	int tab_size = 5;
	G_Task11(tab, tab_size, false);
	bool result = IsTableSortedASC(tab, tab_size);
	printf("Sprawdzenie czy tablica jest posortowania rosn¹co: %s", result ? "true" : "false");
}

//2.2.Utworzyæ metodê void printBackwards(int *a, int s) s³u¿¹c¹ do wypisania tablicy OD KOÑCA
void G_Task22()
{
	printf("Grudzieñ 2.2 - \n");

	int tab[5];

	int tab_size = 5;
	G_Task11(tab, tab_size, false);
	printTable(tab, tab_size, false);
}

//2.3 Utworzyæ metodê printDots(int *a, int s) wyœwietlaj¹c¹ w nowych liniach tyle kropek, ile znajduje siê w danym elemencie tablicy.
void G_Task23()
{
	printf("Grudzieñ 2.3 - \n");
	int tab_size = 5;
	int tab[] = { 5, 8, 6, 2, 7 };
	PrintDot(tab, tab_size);

}

//2.4.Utworzyæ metodê int Sum(int *a, int s) licz¹c¹ sumê elementów tablicy.
void G_Task24()
{
	printf("Grudzieñ 2.4 - \n");
	int tab_size = 5;
	int tab[] = { 5, 8, 6, 2, 7 };
	int suma = Sum(tab, tab_size);
	printTable(tab, tab_size);
	printf("Suma: %d", suma);

}

//2.5. Zaimplementowaæ algorytm sortowania b¹belkowego (w funkcji main(), nie ma potrzeby tworzenia dodatkowej funkcji).Algorytm powinien posortowaæ dowolnie du¿¹ tablicê w kolejnoœci niemalej¹cej.
void G_Task25()
{
	printf("Grudzieñ 2.4 - \n");
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

///Metoda sortuje tablicê
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

//3.1. Napisaæ metodê int getLength(char *str) , w której W£ASNORECZNIE (nie wolno korzystaæ z metody strlen() ) przeliczony zostanie rozmiar ³añcucha(bez null - terminatora).Dla przyk³adu dla „Hello!" wynik powinien wynosiæ 6.
void G_Task31()
{
	printf("Grudzieñ 3.1 - \n");
	char tekst[] = "Jakis tam sobie tekst";
	int lenght = getLength(tekst + '\0');
	printf("D³ugoœæ tekstu: %d", lenght);


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

//3.2. Napisaæ metodê void Reverse (char *str) , która wypisze ³añcuch znaków od koñca (zakaz u¿ywania strlen, mo¿na uzyæ metodê z zadania 3.1.)
void G_Task32()
{
	printf("Grudzieñ 3.2 - \n");
	char tekst[] = "Jakis tam sobie tekst";
	Reverse(tekst);

}
//Metoda wyœwietla tekst od ty³u
void Reverse(char *text)
{
	int lenght = getLength(text + '\0');
	for (int i = lenght - 1; i >= 0; i--)
	{
		printf("%c", text[i]);
	}
}

//3.3. Napisaæ metodê bool containsDigits(char * str), która zwróci informacjê, czy w danym stringu znajduje siê jakakolwiek cyfra.Dla przyk³adu : „asdfgzxcv" -> false, „asdf5asdf" -> true
void G_Task33()
{
	printf("Grudzieñ 3.3 - \n");
	char tekst[] = "Jakis tam sobie tekst 654";
	bool isDigit = containDigit(tekst + '\0');
	printf("Tekst: %s Zawiera cyfrê: %s", tekst, isdigit ? "true" : "false");

	NewLine();

	char tekst2[] = "Jakis tam sobie tekst";
	bool isDigit2 = containDigit(tekst2 + '\0');
	printf("Tekst: %s Zawiera cyfrê: %s", tekst2, isDigit2 ? "true" : "false");
}

//3.4.Pobraæ od u¿ytkownika ³añcuch znaków(dowolna metoda).Przekazaæ go do ka¿dej z metod z 3. czêœci zadañ
void G_Task34()
{
	printf("Grudzieñ 3.4 - \n");
	char tekst[100];
	scanf(" %[^\t\n]s", &tekst);
	int length = getLength(tekst + '\0');
	printf("D³ugosc: %d", length);
	NewLine();

	printf("Revers: ");
	Reverse(tekst);


	NewLine();

	bool isDigit = containDigit(tekst);
	printf("Tekst: %s Zawiera cyfrê: %s", tekst, isDigit ? "true" : "false");

	NewLine();

}

//4.1. Pobraæ od u¿ytkownika liczbê n. Zaalokowaæ pamiêæ na n elementów int i pobraæ je od u¿ytkownika. Wykonaæ na niej metodê printBackwards z 2.2.
void G_Task41()
{
	printf("Grudzieñ 4.1 - \n");
	int tab_size;
	printf("WprowadŸ rozmiar tablicy: ");
	scanf_s("%d", &tab_size);

	int *tab;
	tab = (int*)malloc(sizeof(int)*tab_size);

	for (int i = 0; i < tab_size; i++)
	{
		printf("WprowadŸ element [%d]: ", i);
		scanf_s("%d", &tab[i]);
		NewLine();
	}

	printTable(tab, tab_size, false);
	free(tab);
}

//4.2. Pobraæ od u¿ytkownika liczbê n. Zaalokowaæ pamiêæ na n elementów int i pobraæ je od u¿ytkownika. Nastêpnie zaalokowaæ pamiêæ i utworzyæ tablicê, w której bêd¹ tylko UJEMNE wartoœci z pierwszej tablicy.Na koniec zwolniæ pamiêæ na obie tablice.
void G_Task42()
{
	printf("Grudzieñ 4.2 - \n");
	int tab_size;
	printf("WprowadŸ rozmiar tablicy: ");
	scanf_s("%d", &tab_size);

	int *tab;
	tab = (int*)malloc(sizeof(int)*tab_size);

	int count = 0;
	for (int i = 0; i < tab_size; i++)
	{
		printf("WprowadŸ element [%d]: ", i);
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

//4.3. Napisaæ metodê bool AreArraysldentical(int * al, int sl, int * a2, int s2) zwracaj¹c¹ informacjê, czy dwie tablice podane jako parametr s¹ identyczne, tj.czy maj¹ tak¹ sam¹ d³ugoœæ i czy na ka¿dym indeksie wystêpuje taki sam element.
void G_Task43()
{
	int tab1_size;
	int tab2_size;
	printf("WprowadŸ rozmiar tablicy1: ");
	scanf_s("%d", &tab1_size);
	printf("WprowadŸ rozmiar tablicy2: ");
	scanf_s("%d", &tab2_size);

	int *tab1 = CreateArray(tab1_size);
	printTable(tab1, tab1_size);
	int *tab2 = CreateArray(tab2_size);
	printTable(tab2, tab2_size);

	bool result = AreArraysIdentical(tab1, tab1_size, tab2, tab2_size);
	printf("Czy tablice s¹ identyczne? %s", result ? "true" : "false");

	free(tab1);
	free(tab2);
}

///Metoda generuje tablicê o wskazanym rozmiarze
int* CreateArray(int tab_size)
{


	int *tab;
	tab = (int*)malloc(sizeof(int)*tab_size);

	for (int i = 0; i < tab_size; i++)
	{
		printf("WprowadŸ element [%d]: ", i);
		scanf_s("%d", &tab[i]);

	}
	return tab;
}
//Metoda porównuje czy twie tablice s¹ identyczne.
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


//4.4. Napisaæ metodê char * reverseString(char*s), która ZWRÓCI (a nie wypisze!) string, który jest odwróconym stringiem przekazanym jako pierwszy parametr.Funkcja zaalokuje pamiêæ na nowy ³añcuch i go zwróci. (ca³y algorytm nale¿y zaimplementowaæ samodzielnie).Nale¿y go nastêpnie „przechwyciæ" w funkcji main, aby pamiêæ na koniec wyczyœciæ
void G_Task44()
{

	int text_size;
	printf("WprowadŸ rozmiar tekstu: ");
	scanf_s("%d", &text_size);
	char *text = (char*)malloc(text_size+1);

	/*int i = 0;
	while (text[i] != '\0')
	{
		text[i] = '\0';
		i++;
	}*/

	printf("WprowadŸ tekst: ");
	scanf(" %[^\t\n]s", text + '\0');

	char * text2 = ReverseString(text);
	printf("ReversText: %s", text2);

	free(text);
	free(text2);


}
//Metoda odwraca przes³any tekst i go zwraca
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

//Metoda zwraca informacjê czy podany tekst zawiera liczbê
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


///Metoda wyœwietla odowiedni¹ iloœæ kropek w zale¿noœci od iteracji pêtli.
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

///Metoda zwrace sumê elementów.
int Sum(int *tab, int tab_size)
{
	int suma = 0;
	for (int i = 0; i < tab_size; i++)
	{

		suma += tab[i];
	}
	return suma;
}






