#include <iostream>

using namespace std;

int main() 
{
	int n, a[24][24], i, j;
	cout << "n = "; cin >> n;

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = 2 * i * n + 2 * j;

	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
