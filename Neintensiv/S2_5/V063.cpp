#include <iostream>

using namespace std;

int main()
{
	int n, m, a[24][24], i, j, k = 1;
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;

	for (j = 0; j < m; j++)
		for (i = 0; i < n; i++)
			a[i][j] = k++;

	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
