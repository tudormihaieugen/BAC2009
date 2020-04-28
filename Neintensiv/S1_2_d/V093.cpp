#include <iostream>

using namespace std;

int main()
{
	int n, m, s = 0;
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	while (n < m)
	{
		s = s + n;
		n = n + 3;
	}
	if (n == m)
		cout << "s + n = ";
	else
		cout << "0";
}