#include <iostream>

using namespace std;

int main()
{
	int x, n = 0, c, y;
	cout << "x = "; cin >> x;
	while (x != 0)
	{
		y = x;
		c = 0;
		while (y > 0)
		{
			if (y % 10 > c)
				c = y % 10;
			y = y / 10;
		}
		n = n * 10 + c;
		cout << "x = "; cin >> x;
	}
	cout << n;
}