#include <iostream>

using namespace std;

int main()
{
	int a, b, c = 0, p = 0;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	while (a + b > 0)
	{
		if (a % 10 == b % 10 && a % 2 == 0)
			c = c * 10 + b % 10;
		else
			p = p * 10 + a % 10;
		a = a / 10;
		b = b / 10;
	}
	cout << "c = " << c << endl;
	cout << "p = " << p;
}