#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	if (x < y)
	{
		x = x - y;
		y = x + y;
		x = y - x;
	}
	while (x >= y)
	{
		cout << 'A';
		x = x - y;
		cout << 'B';
	}
}