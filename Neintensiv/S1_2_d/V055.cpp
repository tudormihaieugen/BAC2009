#include <iostream>

using namespace std;

int main()
{
	int n, a, k = 0, i, b;
	cout << "n = "; cin >> n;
	cout << "a = "; cin >> a;
	for (i = 2; i <= n; i++)
	{
		cout << "b = "; cin >> b;
		if (a % 10 == b % 10)
			k++;
		else
			k--;
		a = b;
	}
	cout << "k = " << k;
}