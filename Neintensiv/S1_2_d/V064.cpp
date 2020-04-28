#include <iostream>

using namespace std;

int main()
{
	int n, k = 0, i, j;
	cout << "n = "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << i + j;
			k++;
		}
	}
	cout << "k = " << k;
}