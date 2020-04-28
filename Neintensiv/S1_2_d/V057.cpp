#include <iostream>

using namespace std;

int main()
{
	int n, q = 1, i = 1;
	cout << "n = "; cin >> n;
	while (i < n / i)
	{
		if (n % i == 0)
			q = q + i;
		i = i + 3;
	}
	cout << "q = " << q;
}