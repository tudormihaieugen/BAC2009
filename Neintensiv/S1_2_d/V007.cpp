#include <iostream>

using namespace std;

int main()
{
	int n, nr = 0, a, m;
	cout << "n = "; cin >> n;
	for (a = 9; a >= 0; a--)
	{
		m = n;
		while (m != 0 && m % 10 != a)
			m = m / 10;
		if (m != 0)
			nr = nr * 10 + m % 10;
	}
	cout << "nr = " << nr;
}