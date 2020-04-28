#include <iostream>

using namespace std;

int main()
{
	int a, b = 0, p = 1, c;
	cout << "a = "; cin >> a;
	while (a > 0)
	{
		c = a % 10;
		if (c % 2 != 0)
		{
			b = b + p * c;
			p = p * 10;
		}
		a = a / 10;
	}
	cout << "b = " << b;
}