#include <iostream>

using namespace std;
//Napisz program, kt�ry wczyta od u�ytkownika jego wiek a nast�pnie wy�wietli go na konsli
int main()
{
    short ageFromUser;
    std::cout << "Podaj swoj wiek.";
    std::cin >> ageFromUser;


    std::cout << "Masz" << ageFromUser << "lat.";
//Stw�rz program, kt�ry pobiera od u�ytkowanika
//d�ugo�� w metrach i przelicza j� na centymetry,
//milimetry i kilometry. Wy�wietl wynik.
void task2()
{
    float lenghtInMeterFromUser;
    std::cout << "Podaj d�ugo�� w metrach";
    std::cin >> lenghtInMeterFromUser;
    float lenghtInMeterFromUser;
    lenghtInMeterFromUser = lenghtInMeterFromUser /100
}

int maim()
{
    //taskl();
     task2();
}

/*

Algorytm - zbi�r instrukcji realizuj�cy postawione przed nim zadanie.
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