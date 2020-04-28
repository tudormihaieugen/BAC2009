#include <iostream>

using namespace std;

int main()
{
	int n, c = 0, i;
	cout << "n = "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		c = (c + 1) % 10;
		cout << c << " ";
	}
}