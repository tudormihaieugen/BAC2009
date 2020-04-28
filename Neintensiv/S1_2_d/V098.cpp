#include <iostream>

using namespace std;

int main()
{
	int n, i;
	cout << "n = "; cin >> n;
	if (n < 0)
		n = -n;
	i = 1;
	while (i * i <= n)
	{
		i++;
	}
	cout << "i - 1 = " << i-1;
}