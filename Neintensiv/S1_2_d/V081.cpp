#include <iostream>

using namespace std;

int main()
{
	int a, n, i;
	cout << "a = "; cin >> a;
	cout << "n = "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			a = a - i;
		else
			a = a + i;
	}
	cout << "a = " << a;
}