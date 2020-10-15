#include <iostream>

using namespace std;

int main()
{
	int n, m, i, j, A[11][11];
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			if (i > j)
				A[i][j] = i;
			else
				A[i][j] = j;
		}
	}

	for (i = 1; i <= n; i++) 
	{
		for (j = 1; j <= m; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
}
