#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "n = "; cin >> n;
	do
	{
		n = n + n % 10;
		n = n / 10;
	} while (n >= 10);
	cout << "n = " << n;
}