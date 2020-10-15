#include <iostream>

using namespace std;

int main() 
{
	int m, n, a[11][11], i, j;
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++) 
		{
			if (i < j)
				a[i][j] = i;
			else
				a[i][j] = j;
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
