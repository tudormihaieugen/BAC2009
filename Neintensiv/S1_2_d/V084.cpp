#include <iostream>

using namespace std;

int main()
{
	int n, ok = 0, c, ok1;
	cout << "n = "; cin >> n;
	while (n > 0)
	{
		c = n % 10;
		if (c > 5 && c % 2 == 0)
			ok1 = 1;
		else
			ok1 = 0;
		if (ok1 == 1)
		{
			cout << c << " ";
			ok = 1;
		}
		n = n / 10;
	}
	if (ok == 0)
		cout << "nu";
}