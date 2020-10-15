#include <iostream>

using namespace std;

int main() 
{
	int m, n, a[24][24], i, j;
	int minim = a[0][0], linie = 0, coloana = 0;
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] < minim) 
			{
				minim = a[i][j];
				linie = i;
				coloana = j;
			}

	for (i = 0; i < m; i++)
		for (j = coloana; j < n - 1; j++)
			a[i][j] = a[i][j + 1];
	n--;

	for (j = 0; j < n; j++)
		for (i = linie; i < m - 1; i++)
			a[i][j] = a[i + 1][j];
	m--;

	for (i = 0; i < m; i++) 
	{
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
