// Lab_03_4.cpp
// Мельничук Ілля
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 15
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	cout << "Enter x :";
	cin >> x;
	cout << "Enter y :";
	cin >> y;
	cout << "Enter R :";
	cin >> R;
	// розгалуження в повній формі
	if ((y <= R && y >= 0 && x <= 0 && -x <= R) || (y>= -R && y <= 0 && x >= 0 && x <=R))
	{
		cout << "Square contains that dot" ;
	}
	else
	{
		cout << "Square doesnt contain that dot";
	}
	return 0;
}