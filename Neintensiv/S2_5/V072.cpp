#include <iostream>

using namespace std;

int main() 
{
	int n, a[24][24], i, j, k = 1;
	cout << "n = "; cin >> n;

	for (i = 0; i < n; i++)
		for (j = 0; j <= i; j++) 
		{
			a[i - j][j] = k;
			a[n - 1 - j][n - 1 - i + j] = k;
			k++;
		}

	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
