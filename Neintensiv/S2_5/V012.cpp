#include <iostream>

using namespace std;

int main()
{
	int n, a[25][25], i, j;
	cout << "n = "; cin >> n;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			a[i][j] = (i * j) % 10;
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
