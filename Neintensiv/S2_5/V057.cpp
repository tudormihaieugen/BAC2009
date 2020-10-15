#include <iostream>

using namespace std;

int main()
{
	int n, a, b, i, j, m[25][25];
	cout << "n = "; cin >> n;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			if (i == a || j == b)
				m[i][j] = 0;
			else if (i < a && j < b)
				m[i][j] = 1;
			else if (i < a)
				m[i][j] = 2;
			else if (j < b)
				m[i][j] = 3;
			else
				m[i][j] = 4;
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
}
