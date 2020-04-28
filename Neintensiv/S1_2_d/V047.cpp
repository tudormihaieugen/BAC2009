#include <iostream>

using namespace std;

int main()
{
	int n, max = 0;
	cout << "n = "; cin >> n;
	do
	{
		n = n / 10;
		if (max < n % 10)
			max = n % 10;
	} while (n != 0);
	cout << "max = " << max;
}