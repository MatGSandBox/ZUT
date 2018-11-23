
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
	scanf_s(" %d",&number);


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


//2.6.Zapoznaæ siê z pêtl¹ for.Pêtla s³u¿y do wykonania danego fragmentu kodu ZNAN¥ Z GÓRY okreœlon¹ iloœæ razy.Uwaga - ka¿d¹ pêtlê
//for mo¿na zast¹piæ pêtl¹ while i wzajemnie.Zwyczajowo obowiazuje zasada, ¿e jeœli iloœæ iteracji jest znana - u¿ywamy for, a jeœli nie jest
//znana(zale¿y od u¿ytkownika lub jakiegoœ stanu zewnêtrznego) - u¿ywamy pêtli while.Pêtla for sk³ada siê z : ZMIENNEJ ITERACYJNEJ,
//czyli stanu pocz¹tkowego pêtli, np. int i = 0. Nastêpnie WARUNKU ZAKOÑCZENIA PÊTLI, np.i<10. Nastêpnie OPERACJI WYKONYWANEJ
//PO KA¯DEJ ITERACJI - zazwyczaj jest to zwiêkszenie iteratora o 1, czyli i = i + 1, b¹dŸ w skrócie i++.Napisaæ pêtlê for, która wyœwietli cyfry
//od 0 do 9.
void Task26()
{
	printf("2.6 - For\n");
	for (int i =0; i < 10; i++)
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


	for (int i = number-1; i >0; i--)
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
	for (int i = number; i <=100; i +=3)
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
