#include <iostream>

using namespace std;

int main()
{
	int x, z = 0, p = 1, c;
	cout << "x = "; cin >> x;
	do
	{
		c = x % 10;
		if (c % 2 != 0)
		{
			z = z + c * p;
			p = p * 10;
		}
		x = x / 10;
	} while (x != 0);
	cout << "z = " << z;
}