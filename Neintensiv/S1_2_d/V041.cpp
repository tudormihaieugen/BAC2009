#include <iostream>

using namespace std;

int main()
{
	int x, d = 2;
	cout << "x = "; cin >> x;
	cout << x << " ";
	while (x >= d)
	{
		while (x % d == 0)
		{
			x = x / d;
			cout << x << " ";
		}
		d++;
	}
}