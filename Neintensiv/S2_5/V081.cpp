#include <iostream>

using namespace std;

int main() 
{
	int k, n, m, a[11][11], i, j, s = 0;
	cout << "k = ";	cin >> k;
	cout << "n = ";	cin >> n;
	cout << "m = ";	cin >> m;

	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}

	for (j = 1; j <= m; j++) 
	{
		for (i = 1; i <= n; i++)
			if (a[i][j] == k)
				break;
		if (i <= n)
			s += j;
	}

	cout << s;
}
