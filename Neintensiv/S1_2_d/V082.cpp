#include <iostream>

using namespace std;

int main()
{
	int m, n, i, x, ok, aux;
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << "x = "; cin >> x;
		aux = x;
		ok = 0;
		while (x > 0)
		{
			if (x % 10 == m)
				ok = 1;
			x = x / 10;
		}
		if (ok == 1)
		{
			cout << aux;
		}
	}
}