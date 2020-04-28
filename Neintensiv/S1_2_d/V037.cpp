#include <iostream>

using namespace std;

int main()
{
	int n, k, nr = 0, p = 1, c;
	cout << "n = "; cin >> n;
	cout << "k = "; cin >> k;
	while (n != 0)
	{
		c = n % 10;
		nr = nr + c * p;
		p = p * 10;
		if (c == k)
		{
			nr = nr + c * p;
			p = p * 10;
		}
		n = n / 10;
	}
	n = nr;
	cout << "n = " << n;
}