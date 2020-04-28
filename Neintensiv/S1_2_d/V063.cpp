#include <iostream>

using namespace std;

int main()
{
	int n, d, b = 0, v = 0, a, x, aux, i;
	cout << "n = "; cin >> n;
	cout << "d = "; cin >> d;
	for (i = 1; i <= n; i++)
	{
		cout << "x = "; cin >> x;
		a = 0;
		aux = x;
		while (x % d == 0)
		{
			a++;
			x = x / d;
		}
		if (a > b)
		{
			b = a;
			v = aux;
		}
	}
	cout << v << " " << b;
}