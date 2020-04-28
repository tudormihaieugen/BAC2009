#include <iostream>

using namespace std;

int main()
{
	int x, y, z, t = 0, u = 1;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	do
	{
		if (x % 10 > y % 10)
			z = x % 10;
		else
			z = y % 10;
		t = t + z * u;
		u = u * 10;
		x = x / 10;
		y = y / 10;
	} while (x != 0 || y != 0);
	cout << "t = " << t;
}