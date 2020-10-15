#include <iostream>

using namespace std;

int main()
{
	int n, m[9][9], k = 2, i, j;
	cout << "n = "; cin >> n;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			m[i][j] = k;
			k = k + 2;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
}
