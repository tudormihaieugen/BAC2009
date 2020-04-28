#include <iostream>

using namespace std;

int main()
{
	int x, y, z;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	while (y > 0)
	{
		z = x % y;
		x = 2 * y;
		y = 2 * z;
	}
	cout << "x = " << x;
}