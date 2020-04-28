#include <iostream>

using namespace std;

int main()
{
	int s = 0, v, a, b;
	cout << "v = "; cin >> v;
	while (v != 0)
	{
		a = v % 10;
		b = v / 10 % 10;
		s = s + a * 10 + b;
		cout << "v = "; cin >> v;
	}
	cout << "s = " << s;
}