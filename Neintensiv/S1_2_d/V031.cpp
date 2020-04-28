#include <iostream>

using namespace std;

int main()
{
	int a, k = 0, b;
	cout << "a = "; cin >> a;
	b = (a + 1) * (a + 2) / 2;
	while (b >= a)
	{
		b = b - a;
		k++;
	}
	cout << "b = " << b << endl;
	cout << "k = " << k;
}