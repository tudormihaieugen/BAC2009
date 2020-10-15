#include <iostream>

using namespace std;

int main() 
{
	int n, i, j, a[20][20];;
	cout << "n = "; cin >> n;

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = i + j + 1;

	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
