#include <iostream>

using namespace std;

int main()
{
	int n, d = 0, c = 0, i, x;
	cout << "n = "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << "x = "; cin >> x;
		while (x % 2 == 0)
		{
			x = x / 2;
			d++;
		}
		while (x % 5 == 0)
		{
			x = x / 5;
			c++;
		}
	}
	if (c < d)
		cout << "c = " << c;
	else
		cout << "d = " << d;
}