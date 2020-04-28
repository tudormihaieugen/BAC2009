#include <iostream>

using namespace std;

int main()
{
	int a, k = 0, b;
	cout << "a = "; cin >> a;
	while (a != 0)
	{
		cout << "b = "; cin >> b;
		if (a % 10 == b % 10)
			k++;
		a = b;
	}
	cout << k;
}