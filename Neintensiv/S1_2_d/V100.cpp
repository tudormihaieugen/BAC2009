#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "a = "; cin >> a;
	do
	{
		b = 0;
		while (a != 0)
		{
			b = b + a % 10;
			a = a / 10;
		}
		a = b;
	} while (a >= 0);
	cout << "b = " << b;
}