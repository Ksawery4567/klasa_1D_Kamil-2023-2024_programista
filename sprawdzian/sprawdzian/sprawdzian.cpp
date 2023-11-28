#include <iostream>
using namespace std;

void task1()
{
	float PI_number = 3.14, Circle_radius;
    PI_number = 3.14;

	cout << "Podaj promien kola:";
	cin >> Circle_radius;

	float area_wheels = PI_number * Circle_radius;
	cout << "Pole ko³a o promieniu:" << Circle_radius << "jest rowne" << area_wheels << endl;
}
int main()
{
	 task1(); 
	return 0;
}
