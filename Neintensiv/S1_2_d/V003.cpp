#include <iostream>

using namespace std;

int main()
{
	int z, x, y;
	cout << "z = "; cin >> z;
	cout << "x = "; cin >> x;
	while (x > 0)
	{
		cout << "y = "; cin >> y;
		if (z < y - x)
			cout << x % 10 << endl;
		else
			cout << y % 10 << endl;
		x = y;
	}
}