#include <iostream>

using namespace std;

int main() 
{
	int n, m, a[24][24], k = 1, deplasare = 0, i, j;
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;

	for (i = 0; i < n; i++) 
	{
		if (i % 2 == 0) 
		{
			k = i * m + 1;
			deplasare = 1;
		}
		else 
		{
			k = (i + 1) * m;
			deplasare = -1;
		}
		for (j = 0; j < m; j++) 
		{
			a[i][j] = k;
			k = k + deplasare;
		}
	}
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
