#include <iostream>

using namespace std;

int main()
{
	int n, a, m, b;
	cout << "n = "; cin >> n;
	a = n % 10;
	m = a;
	while (n > 9)
	{
		n = n / 10;
		b = n % 10;
		if (a > b)
		{
			m = m * 10 + b;
			a = b;
		}
	}
	cout << "m = " << m;
}