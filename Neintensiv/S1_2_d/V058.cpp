#include <iostream>

using namespace std;

int main()
{
	int n, q = 1;
	cout << "n = "; cin >> n;
	while (n > 0)
	{
		if (n % 5 == 0)
			q = q * 10;
		else
			q = q * 10 + 1;
		n = n / 5;
	}
	cout << "q = " << q;
}