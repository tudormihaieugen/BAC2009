#include <iostream>

using namespace std;

int main()
{
	int a, b, i;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	a = a / 10 % 10 * 10 + a % 10;
	b = b / 10 % 10 * 10 + b % 10;
	for (i = a; i <= b; i++)
	{
		if (i / 10 == i * 10)
			cout << i % 10 << " ";
	}
}