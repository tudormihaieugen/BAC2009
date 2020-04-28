#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	while (x * y != 0)
	{
		if (x > y)
			x = x % y;
		else
			y = y % x;
	}
	cout << "x + y = " << x + y;
}