#include <iostream>

using namespace std;

int main()
{
	int n, x, a[10][10], i, j;
	cout << "n = "; cin >> n;
	cout << "x = "; cin >> x;
	int primaCifra, cifraMijloc, ultimaCifra;

	primaCifra = x / 100;
	cifraMijloc = (x / 10) % 10;
	ultimaCifra = x % 10;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			if (i == j)
				a[i][j] = primaCifra;
			else if (i + j == n - 1)
				a[i][j] = ultimaCifra;
			else
				a[i][j] = cifraMijloc;
	}
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
