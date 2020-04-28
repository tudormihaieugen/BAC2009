#include <iostream>

using namespace std;

int main()
{
	int a, b, k = 0, i, c, n;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	for (i = a; i <= b; i++)
	{
		n = i;
		c = 0;
		while (n > 0)
		{
			if (n % 2 == 1)
				c++;
			n = n / 10;
		}
		if (c > 0)
			k++;
	}
	cout << "k = " << k;
}