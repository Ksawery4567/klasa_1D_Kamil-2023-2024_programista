#include <iostream>

using namespace std;
//Napisz program, kt�ry wczyta od u�ytkownika jego wiek a nast�pnie wy�wietli go na konsli

void task1()
{
	short ageFromUser;
	cout << "Podaj swoj wiek: ";
	cin >> ageFromUser;
	cout << "Twoj wiek to: " << ageFromUser << endl;
}

//Stw�rz program, kt�ry pobiera od u�ytkowanika
//d�ugo�� w metrach i przelicza j� na centymetry,
//milimetry i kilometry. Wy�wietl wynik.
/*
* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci boku a i b prostok�ta, a nast�pnie obliczy i wy�wietli pole prostok�ta.

* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy i wysoko�ci tr�jk�ta, a nast�pnie obliczy pole tego tr�jk�ta, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie promienia ko�a i obliczy pole tego ko�a, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy a, podstawy b i wysoko�ci h trapezu, a nast�pnie obliczy pole tego trapezu, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci kraw�dzi sze�cianu i obliczy jego obj�to��, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie temperatury w stopniach Celsiusza, a nast�pnie przeliczy j� na stopnie Fahrenheita i wy�wietli wynik.

* Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.

* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb (a, b) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie trzech liczb (a, b, c) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

* Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych. Nast�pnie wykona operacje (+, -, *, /) i wy�wietli wyniki.

* Napisz program, kt�ry poprosi u�ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie wsp�rz�dnych (x1, y1) i (x2, y2) dw�ch punkt�w w uk�adzie kartezja�skim, a nast�pnie obliczy odleg�o�� mi�dzy nimi, wy�wietlaj�c wynik.


*/
void task2()
{
	float lengthInMeterFromUser;
	cout << "Podaj dla dugosc w metrach\n";
	cin >> lengthInMeterFromUser;


	float lengthIncentiMeterFromUser = lengthInMeterFromUser * 100;
	cout << lengthInMeterFromUser << "metrow to\n" << lengthIncentiMeterFromUser << "centymetrow\n";
	float lengthInMiliMeterFromUser = lengthInMeterFromUser * 10;
	cout << lengthInMeterFromUser << "metrow to\n" << lengthInMiliMeterFromUser << "milimetrow\n";
	float LengthInKiloMeterFromUser = lengthInMeterFromUser / 1000;
	cout << lengthInMeterFromUser << "metrow to\n" << LengthInKiloMeterFromUser << "kilometrow\n";
}
  /*Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci boku a i b prostok�ta, a nast�pnie obliczy i wy�wietli pole prostok�ta.*/
void task3()
{
	int side_a, side_b;
	cout << "Podaj dlugosc boku a prostokata\n";
	cin >> side_a;
	cout << "Podaj dlugosc boku b prostokata\n";
	cin >> side_b;

	int side_rectangle = side_a * side_b;
	cout << "Pole prostakata o bokach a=" << side_a << "i b=" << side_b << "Wynik\n" << side_rectangle;
}
void task4()
{
	int base_triangle, height_triangle;
	cout << "Podaj d�ugo�� podstawy:\n ";
	cin >> base_triangle;

	cout << "Podaj wysoko�� tr�jk�ta:\n ";
	cin >> height_triangle;

	int area_triangle = base_triangle * height_triangle;
	cout << "Pole tr�jk�ta o podstawie" << base_triangle << " i wysoko�ci " << height_triangle << "jest r�wne:" << area_triangle;
}
void task5()
{
	float PI_numer, circle_radius;
	PI_numer = 3.14159;

	cout << " Podaj promie� ko�a:\n ";
	cin >> circle_radius;

	float area_wheels = PI_numer * circle_radius;
	cout << " Pole ko�a o promieniu:" << circle_radius << "jest r�wne" << area_wheels;
}
void task6()
{
	short a, b, h;
	std::cout << "Podaj bok a \n";
	std::cin >> a;
	std::cout << "Podaj bok b \n";
	std::cin >> b;
	std::cout << "Podaj wysoko�� h \n";
	std::cin >> h;
	std::cout << (a * b) * h / 2;
}
void task7()
{
	short a;
	std::cout << "Podaj kraw�d� a \n";
	std::cin >> a;
	std::cout << a * a * a;
}
void task8()
{
	float c;
	std::cout << "Podaj temperaure w stopniach celcjusza\n";
	std::cin >> c;
	std::cout << c * 2 + 30;
}
void task9()
{
	float pln;

	cout << "Zmiana walyty\n";
	cin >> pln;

	float dolar = pln / 4.14;
	float euro = pln / 4.56;
	float funt = pln / 5.06;

	cout << pln << "na z�ot�wki\n" << dolar << "na dolary\n";
	cout << pln << "na z�ot�wki\n" << euro << "na euro\n";
	cout << pln << "na z�ot�wki\n" << funt << "na funty\n";
}
void task10()

{

}
int main()
{
	setlocale(LC_CTYPE, "polish");
	//taskl();
	task2();
	task3();
	task4();
	task5();
	task6();
	task7();
	task8();
	task9();
	task10();
}


/*

Algorytm - sko�czony zbi�r instrukcji realizuj�cy postawione przed nim zadanie.
kolejno�� instrukcji w zbiorze jest oke�lona
	Sposoby zapisu:
	  * w punktach
	  * opis s�owny
	  * j�zyk programowania lub pseudokod
	  * zbi�r rysunk�w
	  * schemat blokowy
Zmienna to obszar pami�ci, s�u��cy do przechowywania danych. Te dane mo�na modyfikowa�.
Zmienna pozwala przechowywa� tylko jedn� warto�� w danym momencie czasu.

Deklaracja zmiennej - moment jej utworzenia.

typ_zmiennej nazwa_zmiennej;

Typ zmiennej - m�wi o wielko�ci obszar�w w pami�ci i o rodzaju przechowaywaniu danych.

short       Liczby ca�kowite ze znakiem   2 bajty <-32 768; 32 767>
int/long    Liczby ca�kowite ze znakiem   4 bajty <-2 147 483 648; 2 147 483 647>
long long   Liczby ca�kowite ze znakiem   8 bajt�w <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

Je�eli przed podwy�szymi typami dodany s�owo "unsigned" to zakres
jest od zera do podw�jnego zakresu g�rnego plus 1.

float        liczby rzeczywiste ze znakiem  4 bajty
double       liczby rzeczywiste ze znakiem  8 bajt�w
long double  liczby rzeczywiste ze znakiem  12 bajt�w

Nazwa zmiennej - nazwa obszaru w pami�ci. Poprzez t� nazw� odwo�ujemy si� do tego obszaru.

Wymagania kompolatora wzgl�dem nazwy:
* u�ycie tylko dozwolonych znak�w
- alfoabet angielski a-z A-Z
-cyfry arabskie 0-9
-podkre�lenie (pod�oga) _
* pierwszym znakiem nie mo�e by� cyfra
* nie mo�e by� s�owo kluczwe danego j�zyka programowania
* musi by� unikalna w danej widoczno�ci

Wymagania programist�w:
* je�eli nazwa sk�ada si� z wielu wyraz�w to zamiast spacji:
 -u�ywaj znak�w podkre�lenia np. first_number_from_user
 -stosujemy camel case, czyli piszemy wszystko razem a s�owo (zaczynamy od drugiego)
  zaczynamy z du�ej litery np. firstNumberFromUser
* nazwa zmiennej musi oddawa� charakter przechowywanych danych, czyli mie� znaczenie
* nazwy po angielsku !!!!





*/