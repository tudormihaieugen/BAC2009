#include <iostream>

using namespace std;

int main()
{
	int n, k, p = 1, c;
	cout << "n = "; cin >> n;
	cout << "k = "; cin >> k;
	while (n > 0 && k > 0)
	{
		c = n % 10;
		if (c % 2 == 1)
			p = p * c;
		n = n / 10;
		k--;
	}
	cout << "p = " << p;
}