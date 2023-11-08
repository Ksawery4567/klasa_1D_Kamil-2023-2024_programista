#include <iostream>

using namespace std;
//Napisz program, który wczyta od u¿ytkownika jego wiek a nastêpnie wyœwietli go na konsli

void task1()
{
	short ageFromUser;
	cout << "Podaj swoj wiek: ";
	cin >> ageFromUser;
	cout << "Twoj wiek to: " << ageFromUser << endl;
}

//Stwórz program, który pobiera od u¿ytkowanika
//d³ugoœæ w metrach i przelicza j¹ na centymetry,
//milimetry i kilometry. Wyœwietl wynik.
/*
* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci boku a i b prostok¹ta, a nastêpnie obliczy i wyœwietli pole prostok¹ta.

* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy i wysokoœci trójk¹ta, a nastêpnie obliczy pole tego trójk¹ta, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie promienia ko³a i obliczy pole tego ko³a, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy a, podstawy b i wysokoœci h trapezu, a nastêpnie obliczy pole tego trapezu, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci krawêdzi szeœcianu i obliczy jego objêtoœæ, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie temperatury w stopniach Celsiusza, a nastêpnie przeliczy j¹ na stopnie Fahrenheita i wyœwietli wynik.

* Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.

* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb (a, b) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

* Napisz program, który poprosi u¿ytkownika o podanie trzech liczb (a, b, c) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

* Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych. Nastêpnie wykona operacje (+, -, *, /) i wyœwietli wyniki.

* Napisz program, który poprosi u¿ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie wspó³rzêdnych (x1, y1) i (x2, y2) dwóch punktów w uk³adzie kartezjañskim, a nastêpnie obliczy odleg³oœæ miêdzy nimi, wyœwietlaj¹c wynik.


*/
void task2()
{
	float lengthInMeterFromUser;
	cout << "Podaj dla dugosc w metrach\n";
	cin >> lengthInMeterFromUser;


	float lengthIncentiMeterFromUser = lengthInMeterFromUser * 100;
	cout << lengthInMeterFromUser << "metrow to\n" << lengthIncentiMeterFromUser << "centymetrow\n" << endl;
	float lengthInMiliMeterFromUser = lengthInMeterFromUser * 10;
	cout << lengthInMeterFromUser << "metrow to\n" << lengthInMiliMeterFromUser << "milimetrow\n" << endl;
	float LengthInKiloMeterFromUser = lengthInMeterFromUser / 1000;
	cout << lengthInMeterFromUser << "metrow to\n" << LengthInKiloMeterFromUser << "kilometrow\n" << endl;
}
  /*Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci boku a i b prostok¹ta, a nastêpnie obliczy i wyœwietli pole prostok¹ta.*/
void task3()
{
	int side_a, side_b;
	cout << "Podaj dlugosc boku a prostokata";
	cin >> side_a;
	cout << "Podaj dlugosc boku b prostokata";
	cin >> side_b;

	int side_rectangle = side_a * side_b;
	cout << "Pole prostakata o bokach a=" << side_a << "i b=" << side_b << "Wynik\n" << side_rectangle << endl;
}
void task4()
{
	int base=0.0, height=0.0;
	cout << "Podaj Podstawe:"

}
int main()
{
	setlocale(LC_CTYPE, "polish");
	//taskl();
	task2();
	task3();
	task4();
}


/*

Algorytm - skoñczony zbiór instrukcji realizuj¹cy postawione przed nim zadanie.
kolejnoœæ instrukcji w zbiorze jest okeœlona
	Sposoby zapisu:
	  * w punktach
	  * opis s³owny
	  * jêzyk programowania lub pseudokod
	  * zbiór rysunków
	  * schemat blokowy
Zmienna to obszar pamiêci, s³u¿¹cy do przechowywania danych. Te dane mo¿na modyfikowaæ.
Zmienna pozwala przechowywaæ tylko jedn¹ wartoœæ w danym momencie czasu.

Deklaracja zmiennej - moment jej utworzenia.

typ_zmiennej nazwa_zmiennej;

Typ zmiennej - mówi o wielkoœci obszarów w pamiêci i o rodzaju przechowaywaniu danych.

short       Liczby ca³kowite ze znakiem   2 bajty <-32 768; 32 767>
int/long    Liczby ca³kowite ze znakiem   4 bajty <-2 147 483 648; 2 147 483 647>
long long   Liczby ca³kowite ze znakiem   8 bajtów <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

Je¿eli przed podwy¿szymi typami dodany s³owo "unsigned" to zakres
jest od zera do podwójnego zakresu górnego plus 1.

float        liczby rzeczywiste ze znakiem  4 bajty
double       liczby rzeczywiste ze znakiem  8 bajtów
long double  liczby rzeczywiste ze znakiem  12 bajtów

Nazwa zmiennej - nazwa obszaru w pamiêci. Poprzez t¹ nazwê odwo³ujemy siê do tego obszaru.

Wymagania kompolatora wzglêdem nazwy:
* u¿ycie tylko dozwolonych znaków
- alfoabet angielski a-z A-Z
-cyfry arabskie 0-9
-podkreœlenie (pod³oga) _
* pierwszym znakiem nie mo¿e byæ cyfra
* nie mo¿e byæ s³owo kluczwe danego jêzyka programowania
* musi byæ unikalna w danej widocznoœci

Wymagania programistów:
* je¿eli nazwa sk³ada siê z wielu wyrazów to zamiast spacji:
 -u¿ywaj znaków podkreœlenia np. first_number_from_user
 -stosujemy camel case, czyli piszemy wszystko razem a s³owo (zaczynamy od drugiego)
  zaczynamy z du¿ej litery np. firstNumberFromUser
* nazwa zmiennej musi oddawaæ charakter przechowywanych danych, czyli mieæ znaczenie
* nazwy po angielsku !!!!





*/