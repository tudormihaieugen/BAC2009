#include <iostream>

using namespace std;

int main()
{
	int z, x, y;
	cout << "z = "; cin >> z;
	cout << "x = "; cin >> x;
	z = abs(z);
	x = abs(x);
	do
	{
		y = x;
		x = (x + z / x) / 2;
	} while (x != y);
	cout << "x = " << x;
}