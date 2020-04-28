#include <iostream>

using namespace std;

int main()
{
	int x, d = 2, y = 0, z = 0, p;
	cout << "x = "; cin >> x;
	while (x != 0)
	{
		p = 0;
		while (x % d == 0)
		{
			p = p + 1;
			x = x / d;
		}
		if (p != 0)
		{
			if (y == 0)
				y = d;
			z = d;
		}
		d++;
	}
	cout << "y = " << y;
	cout << "z = " << z;
}