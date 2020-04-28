#include <iostream>

using namespace std;

int main()
{
	int n, m = 0, p = 1, c;
	cout << "n = "; cin >> n;
	while (n > 0)
	{
		c = n % 10;
		if (c > 0)
			c--;
		m = m + c * p;
		p = p * 10;
		n = n / 10;
	}
	cout << "m = " << m;
}