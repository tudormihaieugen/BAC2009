#include <iostream>

using namespace std;

int main()
{
	int i, x, s, j;
	for (i = 1; i <= 3; i++)
	{
		cout << "x = "; cin >> x;
		s = 0;
		for (j = 1; j <= i; j++)
			s = s + x % 10;
		cout << s;
	}
}