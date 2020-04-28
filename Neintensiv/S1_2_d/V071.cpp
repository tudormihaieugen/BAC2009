#include <iostream>

using namespace std;

int main()
{
	int x, s = 0, n, i, j;
	cout << "n = "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << "x = "; cin >> x;
		while (x > 9)
		{
			x = x / 10;
		}
		for (j = 1; j <= i - 1; j++)
		{
			x = x * 10;
		}
		s = s + x;
	}
	cout << "s = " << s;
}