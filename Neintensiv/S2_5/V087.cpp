#include <iostream>

using namespace std;

int main() 
{
	int n, a[20][20], i, j, nr = 0, s = 0;
	cout << "n = "; cin >> n;

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}

	for (i = 1; i < n; i++)
		for (j = 0; j < i; j++)
			if (a[i][j] > 0) 
			{
				s += a[i][j];
				nr++;
			}

	if (nr == 0)
		cout << "NU EXISTA";
	else
		cout << s / nr;
}
