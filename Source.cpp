// Lab_03_4.cpp
// ��������� ����
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 15
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������
	cout << "Enter x :";
	cin >> x;
	cout << "Enter y :";
	cin >> y;
	cout << "Enter R :";
	cin >> R;
	// ������������ � ����� ����
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