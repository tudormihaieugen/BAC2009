#include <iostream>

using namespace std;

int main() 
{
	int n, i, j, a[23][23];
	cout << "n = "; cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			if (i < j)
				a[i][j] = 1;
			else if (i > j)
				a[i][j] = 3;
			else
				a[i][j] = 2;
	}
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
