#include <iostream>

using namespace std;

int main()
{
	int x, nr = 0, i, n;
	cout << "x = "; cin >> x;
	for (i = 1; i <= x; i++)
	{
		cout << "n = "; cin >> n;
		if (n % x == 0)
			nr++;
	}
	cout << "nr = " << nr;
}