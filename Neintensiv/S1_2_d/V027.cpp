#include <iostream>

using namespace std;

int main()
{
	int a, b, c = 0, d = 0, p = 1;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	while (a + b + c > 0)
	{
		c = a % 10 + b % 10 + c;
		d = d + (c % 10 * p);
		p = p * 10;
		a = a / 10;
		b = b / 10;
		c = c / 10;
	}
	cout << d;
}