#include <iostream>

using namespace std;

int main()
{
	int n, i, j, p;
	cout << "n = "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		p = 1;
		for (j = i; j >= 2; j--)
			p = p * j;
		cout << p / (i * 2) << " ";
	}
}