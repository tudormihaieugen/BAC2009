#include <iostream>

using namespace std;

int main()
{
	int n, m = 0, v, u, c;
	cout << "n = "; cin >> n;
	v = n;
	u = n % 10;
	do
	{
		c = n % 10;
		v = v * 10 + c;
		if (c == u)
			m++;
		n = n / 10;
	} while (n != 0);
	cout << "v = " << v << endl;
	cout << "m = " << m;
}