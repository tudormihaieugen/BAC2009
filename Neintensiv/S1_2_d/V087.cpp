#include <iostream>

using namespace std;

int main()
{
	int a, b, c, x;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	while (a != b || a != c)
	{
		x = a;
		if (x > b)
			x = b;
		if (x > c)
			x = c;
		if (x != a)
			a = a - x;
		if (x != b)
			b = b - x;
		if (x != c)
			c = c - x;
	}
	cout << "a = " << a;
}