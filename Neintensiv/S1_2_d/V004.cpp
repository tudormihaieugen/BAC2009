#include <iostream>

using namespace std;

int main()
{
	int a, b, x;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	if (a < b)
		swap(a, b);
	for (x = a; x >= b; x--)
	{
		if (x % 2 != 0)
			cout << x << ' ';
	}
}