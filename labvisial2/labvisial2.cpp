// labvisial2.cpp
// Біліонок Ярослав
// Лабраторна робота № 2.
// Лінійні програми.
// Варіант 6

#include <iostream>
#include <cmath>

using namespace std;

int main()
{	double a, z1, z2; // вхідний параметр

	cout << "a = "; cin >> a;

	z1 = (cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a));
	z2 = (4 * cos(a / 2.0) * cos(5 / 2.0 * a) * cos(4 * a));
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}

