#include <iostream>

using namespace std;

int main()
{
	int x, y, n;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	if (x < y)
		swap(x, y);
	n = 0;
	while (x >= y)
	{
		x = x - y;
		n++;
	}
	cout << "n = " << n << endl;
	cout << "x = " << x;
}