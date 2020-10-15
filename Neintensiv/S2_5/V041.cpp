#include <iostream>

using namespace std;

int main() 
{
	int n, i, j, m[24][24];
	cout << "n = "; cin >> n;

	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			m[i][j] = i + j;

	for (i = 1; i <= n; i++) 
	{
		for (j = 1; j <= n; j++)
			cout << m[i][j] << " ";
		cout << '\n';
	}
}
