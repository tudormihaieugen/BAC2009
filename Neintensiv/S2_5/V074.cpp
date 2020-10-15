#include <iostream>

using namespace std;

int main() 
{
	int n, a[24][24], i, j;
	cout << "n = "; cin >> n;

	int f1 = 1, f2 = 1;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i == 0 && (j == 0 || j == 1))
				a[i][j] = 1;
			else 
			{
				a[i][j] = (f1 + f2) % 10;
				f2 = f1;
				f1 = a[i][j];
			}

	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
