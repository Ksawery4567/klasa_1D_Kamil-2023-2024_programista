
#include <iostream>
/*
Piorytety operator�w:

* /
+ -
> < >= <= == !=
&&
||
=
 
Operatory por�wnania:
> wi�kszo�ci
< mniejszo�ci
>= wi�ksze b�d� r�wne
<= mniejsze b�d� r�wne
==r�wne
!= r�ne

Operatory logiczne:
|| or/lub
&& and/i
! not/nie

A B   A || B   A && B  A!
f f     f        f     t
f t     f        f 
t f     f        f     f 
t t     t        t           


*/

//Napisz program, kt�ry pobierze liczb� od u�ytkownika i wy�wietli czy ona jest dodatnia czy nie. 
void task1()
{
	int number;
	std::cout << "Podaj liczb�\n";
	std::cin >> number;
	//wersja pierwsza
	if (number > 0)
	{
		std::cout << "Liczba jest dodatnia\n";
	}

	if (number <= 0)
	{
		std::cout << "Liczba jest ujemna\n";
	}
	//wersja druga
	if (number > 0)
	{
		std::cout << "Liczba jest dodatnia\n";
	}
	else
	{
		std::cout << "Liczba jest ujemna\n";
	}
}
//Napisz program kt�ry wczyta liczbe i sprawdzi czy jest ona z zakresu <1;10)
void task2()
{
	int number;
	std::cout << "Podaj liczb�\n";
	std::cin >> number;

	if (number >= 1)
	{
		if (number < 10)
		{
			std::cout << "Liczba jest w zakresie\n";
		}
		else
		{
			std::cout << "Liczba nie jest w zakresie\n";
		}
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}
}
void task3()
{
	int firstNumber;
	std::cout << "Podaj liczbe \n";
	std::cin >> firstNumber;

	std::cout << "Najwi�ksza warto�� to" << firstNumber << "\n";
}
void task4() 
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbe \n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe \n";
	std::cin >> secondNumber;

	if(secondNumber > firstNumber)
		std::cout << "Najwi�ksza warto�� to" << secondNumber << "\n";
	else
		std::cout << "Najwi�ksza warto�� to" << firstNumber << "\n";
}
void task5()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> thirdNumber;

	if(thirdNumber > firstNumber && thirdNumber > secondNumber)
		std::cout << "Najwi�ksza warto�� to" << thirdNumber << "\n";
	else
	{
		if(secondNumber > firstNumber)
			std::cout << "Najwi�ksza warto�� to" << secondNumber << "\n";
		else
			std::cout << "Najwi�ksza warto�� to" << firstNumber << "\n";  
	}
}
void task6()
{
	int firstNumber, secondNumber, thirdNumber, fourthNumber;
	std::cout << "Podaj liczb�\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczb�\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczb�\n";
	std::cin >> thirdNumber;
	std::cout << "Podaj liczb�\n";
	std::cin >> fourthNumber;

	if (fourthNumber > firstNumber && fourthNumber > secondNumber && fourthNumber > thirdNumber)
		std::cout << "Najwi�ksza warto�� to" << fourthNumber << "\n";
	else
	{
		if (thirdNumber > firstNumber && thirdNumber > secondNumber)
			std::cout << "Najwi�ksza warto�� to" << thirdNumber << "\n";
		else
		{
			if (secondNumber > firstNumber)
				std::cout << "Najwi�ksza liczba to" << secondNumber << "\n";
			else
				std::cout << "Najwi�ksza warto�� to" << firstNumber << "\n";

		}
	}
}
int main()  
{
	task1();
	task2();
	task3();
	task4();
	task5();
	task6();

}
