#include <iostream>

using namespace std;

int main()
{
	int x, k = 0;
	cout << "x = "; cin >> x;
	while (x != 0)
	{
		k = k * 10 + x % 10;
		x = x / 10;
	}
	while (k != 0)
	{
		x = x * 10 + k % 10;
		k = k / 100;
	}
	cout << "x = " << x;
}