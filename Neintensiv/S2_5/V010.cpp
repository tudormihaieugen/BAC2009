#include <iostream>

using namespace std;

int main() 
{
	int n, p, A[20][20], i, j, k = 0;;
	cout << "n = "; cin >> n;
	cout << "p = "; cin >> p;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < p; j++)
		{
			A[i][j] = k * k;
			k = k + 2;
		}
	}
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < p; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
}
