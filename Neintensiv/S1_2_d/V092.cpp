#include <iostream>

using namespace std;

int main()
{
	int n, nr = 0, y = 0, i, x;
	cout << "n = "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		do
		{
			cout << "x = "; cin >> x;
			nr++;
		} while (x < 1 || x>10);
		y = y + x;
	}
	cout << "y / n =" << y / n << endl;
	cout << "nr = "<<nr;
}