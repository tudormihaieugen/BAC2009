#include <iostream>

using namespace std;

int main()
{
	int n, k = 9, c, i, x;
	cout << "n = "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << "x = "; cin >> x;
		c = x / 10 % 10;
		if (c < k)
			k = c;
	}
	cout << "k = " << k;
}