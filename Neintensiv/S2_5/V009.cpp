#include <iostream>

using namespace std;

int main() 
{

	int n, A[23][23], i, j;
	cout << "n = "; cin >> n;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << "A[" << i << "][" << j << "] = ";
			cin >> A[i][j];
		}
	}
	for (i = 0; i < n; i++)
		cout << A[0][i] << " ";

	for (i = 1; i < n; i++)
		cout << A[i][n - 1] << " ";

	for (i = n - 2; i >= 0; i--)
		cout << A[n - 1][i] << " ";

	for (i = n - 2; i >= 1; i--)
		cout << A[i][0] << " ";
}
