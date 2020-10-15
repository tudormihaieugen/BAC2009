#include <iostream>

using namespace std;

int main() 
{
	int n, a[23][23], i, j, k = 1;
	cout << "n = "; cin >> n;

	for (i = 0; i < n; i++) 
	{
		for (j = i; j < n; j++) 
		{
			a[i][j] = k;
			a[j][i] = k;
		}
		k++;
	}
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
