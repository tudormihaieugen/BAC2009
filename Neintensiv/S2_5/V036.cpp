#include <iostream>

using namespace std;

int main()
{
	int n, m, a[30][30], i, j;
	cout << "n ="; cin >> n;
	cout << "m ="; cin >> m;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
	for (j = m; j > 0; j--)
	{
		int minim = a[0][j];
		for (i = 1; i < n; i++)
			if (a[i][j] < minim)
				minim = a[i][j];
		cout << minim << " ";
	}
}
