#include <iostream>

using namespace std;

int main() 
{

	int n, a[15][15], i, j;
	cout << "n = "; cin >> n;

	for (i = 0; i < n; i++)
		a[n - 1][i] = i + 1;

	for (i = n - 2; i >= 0; i--) 
	{
		a[i][0] = a[i + 1][0] + a[i + 1][1];
		for (j = 1; j < n; j++)
		{
			if (j <= i)
				a[i][j] = a[i + 1][j - 1] + a[i + 1][j] +
				a[i + 1][j + 1];
			else
				a[i][j] = 0;
		}
	}
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
