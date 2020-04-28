#include <iostream>

using namespace std;

int main()
{
	int x, s = 0, f = 2, p;
	cout << "x = "; cin >> x;
	while (x > 1)
	{
		p = 0;
		while (x % f == 0)
		{
			x = x / f;
			p++;
		}
		s = s + p;
		f++;
	}
	cout << "s = " << s;
}