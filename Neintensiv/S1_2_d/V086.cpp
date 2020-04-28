#include <iostream>

using namespace std;

int main()
{
	int n, k, i;
	cout << "n = "; cin >> n;
	cout << "k = "; cin >> k;
	for (i = 1; i <= n; i++)
	{
		if (i / k == 0)
		{
			cout << i;
			k--;
		}
		else
			cout << i % k;
	}
}