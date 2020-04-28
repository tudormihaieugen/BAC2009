#include <iostream>

using namespace std;

int main()
{
	int a, x = 2, k = 0, c;
	cout << "a = "; cin >> a;
	while (a > 1)
	{
		c = 0;
		while (x % a == 0)
		{
			c = x;
			a = a / x;
		}
		if (c != 0)
			k = k + x;
		x++;
	}
	cout << k;
}