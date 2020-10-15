#include <iostream>

using namespace std;

int main() 
{
	int n, i, j, a[30][30];
	int ultimaCifraP = 1, exista = 0;
	cout << "n ="; cin >> n;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
	for (j = 0; j < n; j++) 
	{
		int ok = 0;
		for (i = 0; i < n && ok == 0; i++)
			if (a[n - 1 - j][j] > a[i][j])
				ok = 1;

		if (ok == 0) 
		{
			ultimaCifraP = (ultimaCifraP * a[n - 1 - j][j]) % 10;
			exista = 1;
		}
	}

	if (exista == 0)
		cout << "NU EXISTA";
	else
		cout << ultimaCifraP;
}
