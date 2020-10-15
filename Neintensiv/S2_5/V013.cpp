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
			if (i + j == n + 1)
				a[i][j] = 0;
			else if (i + j < n + 1)
				a[i][j] = j;
			else
				a[i][j] = n - i + 1;
		}
	}
	for (i = 1; i <= n; i++) 
	{
		for (j = 1; j <= n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
